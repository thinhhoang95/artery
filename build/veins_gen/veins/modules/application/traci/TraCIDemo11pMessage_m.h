//
// Generated file, do not edit! Created by nedtool 5.6 from /home/veins/artery/extern/veins/src/veins/modules/application/traci/TraCIDemo11pMessage.msg.
//

#ifndef __VEINS_TRACIDEMO11PMESSAGE_M_H
#define __VEINS_TRACIDEMO11PMESSAGE_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0506
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// cplusplus {{
#include "veins/base/utils/Coord.h"
#include "veins/modules/messages/BaseFrame1609_4_m.h"
#include "veins/base/utils/SimpleAddress.h"
// }}


namespace veins {

/**
 * Class generated from <tt>/home/veins/artery/extern/veins/src/veins/modules/application/traci/TraCIDemo11pMessage.msg:35</tt> by nedtool.
 * <pre>
 * packet TraCIDemo11pMessage extends BaseFrame1609_4
 * {
 *     string demoData;
 *     LAddress::L2Type senderAddress = -1;
 *     int serial = 0;
 * }
 * </pre>
 */
class TraCIDemo11pMessage : public ::veins::BaseFrame1609_4
{
  protected:
    ::omnetpp::opp_string demoData;
    LAddress::L2Type senderAddress;
    int serial;

  private:
    void copy(const TraCIDemo11pMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TraCIDemo11pMessage&);

  public:
    TraCIDemo11pMessage(const char *name=nullptr, short kind=0);
    TraCIDemo11pMessage(const TraCIDemo11pMessage& other);
    virtual ~TraCIDemo11pMessage();
    TraCIDemo11pMessage& operator=(const TraCIDemo11pMessage& other);
    virtual TraCIDemo11pMessage *dup() const override {return new TraCIDemo11pMessage(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual const char * getDemoData() const;
    virtual void setDemoData(const char * demoData);
    virtual LAddress::L2Type& getSenderAddress();
    virtual const LAddress::L2Type& getSenderAddress() const {return const_cast<TraCIDemo11pMessage*>(this)->getSenderAddress();}
    virtual void setSenderAddress(const LAddress::L2Type& senderAddress);
    virtual int getSerial() const;
    virtual void setSerial(int serial);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TraCIDemo11pMessage& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TraCIDemo11pMessage& obj) {obj.parsimUnpack(b);}

} // namespace veins

#endif // ifndef __VEINS_TRACIDEMO11PMESSAGE_M_H

