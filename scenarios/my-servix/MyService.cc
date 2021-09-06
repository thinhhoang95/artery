#include "MyService.h"
#include "artery/traci/VehicleController.h"
#include <vanetza/btp/data_request.hpp>
#include <vanetza/dcc/profile.hpp>
#include <vanetza/geonet/interface.hpp>
#include <libsumo/TraCIDefs.h> // for libsumo::TraCIPosition
#include "artery/application/CaObject.h"

using namespace omnetpp;
using namespace vanetza;

Define_Module(MyService);

static const simsignal_t camRxSignal = cComponent::registerSignal("CamReceived");

// This stupid service explains how to use the TraCI API to get some data
// send some stupid data into the ITS-G5 stack
// and perform some functions upon a CAM or any message is received
// also, create a signal so that other services can hook into as well

void MyService::initialize()
{
    ItsG5Service::initialize();
    mVehicleController = &getFacilities().get_const<traci::VehicleController>();
    subscribe(camRxSignal);
}

void MyService::trigger()
{
    Enter_Method("MyService trigger");
    // Try to get some information of the vehicle from the TraCI API
    const std::string id = mVehicleController->getVehicleId();
    auto& vehicle_api = mVehicleController->getTraCI()->vehicle; //is a reference

    // Get TraCI vehicle states
    libsumo::TraCIPosition vehiclePosition = vehicle_api.getPosition(id);
    // refer to the TraCIAPI header file for further methods of the functions

    EV << "Position is " << vehiclePosition.getString();

}

void MyService::receiveSignal(omnetpp::cComponent* source, omnetpp::simsignal_t sig, omnetpp::cObject* obj, omnetpp::cObject*)
{
    if (sig == camRxSignal)
    {
        EV << "A CAM Signal was received";
    }
}
