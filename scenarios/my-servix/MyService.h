#ifndef MY_SERVICE_H
#define MY_SERVICE_H

#include "artery/application/ItsG5Service.h";
#include "artery/traci/VehicleController.h";

class MyService : public artery::ItsG5Service
{
public:
    void trigger() override;

protected:
    void initialize() override;

private:
    const traci::VehicleController* mVehicleController = nullptr;

void receiveSignal(omnetpp::cComponent* source, omnetpp::simsignal_t sig, omnetpp::cObject* obj, omnetpp::cObject*) override;
};

#endif
