//
// Generated file, do not edit! Created by nedtool 5.6 from /home/veins/artery/extern/inet/src/inet/networklayer/probabilistic/ProbabilisticBroadcastDatagram.msg.
//

#ifndef __INET_PROBABILISTICBROADCASTDATAGRAM_M_H
#define __INET_PROBABILISTICBROADCASTDATAGRAM_M_H

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
   #include "inet/networklayer/base/NetworkDatagramBase_m.h"
// }}


namespace inet {

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/networklayer/probabilistic/ProbabilisticBroadcastDatagram.msg:28</tt> by nedtool.
 * <pre>
 * packet ProbabilisticBroadcastDatagram extends NetworkDatagramBase
 * {
 *     \@customize(true);
 * 
 *     long id;    // Unique message ID ~ f(node address, unique number in node scope).
 *     int nbHops;
 *     int transportProtocol = -1;
 *     simtime_t appTtl;   // Message time-to-live set by application.
 *     L3Address initialSrcAddr;
 *     L3Address finalDestAddr;
 * }
 * </pre>
 *
 * ProbabilisticBroadcastDatagram_Base is only useful if it gets subclassed, and ProbabilisticBroadcastDatagram is derived from it.
 * The minimum code to be written for ProbabilisticBroadcastDatagram is the following:
 *
 * <pre>
 * class ProbabilisticBroadcastDatagram : public ProbabilisticBroadcastDatagram_Base
 * {
 *   private:
 *     void copy(const ProbabilisticBroadcastDatagram& other) { ... }

 *   public:
 *     ProbabilisticBroadcastDatagram(const char *name=nullptr, short kind=0) : ProbabilisticBroadcastDatagram_Base(name,kind) {}
 *     ProbabilisticBroadcastDatagram(const ProbabilisticBroadcastDatagram& other) : ProbabilisticBroadcastDatagram_Base(other) {copy(other);}
 *     ProbabilisticBroadcastDatagram& operator=(const ProbabilisticBroadcastDatagram& other) {if (this==&other) return *this; ProbabilisticBroadcastDatagram_Base::operator=(other); copy(other); return *this;}
 *     virtual ProbabilisticBroadcastDatagram *dup() const override {return new ProbabilisticBroadcastDatagram(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from ProbabilisticBroadcastDatagram_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(ProbabilisticBroadcastDatagram)
 * </pre>
 */
class ProbabilisticBroadcastDatagram_Base : public ::inet::NetworkDatagramBase
{
  protected:
    long id;
    int nbHops;
    int transportProtocol;
    ::omnetpp::simtime_t appTtl;
    L3Address initialSrcAddr;
    L3Address finalDestAddr;

  private:
    void copy(const ProbabilisticBroadcastDatagram_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ProbabilisticBroadcastDatagram_Base&);
    // make constructors protected to avoid instantiation
    ProbabilisticBroadcastDatagram_Base(const char *name=nullptr, short kind=0);
    ProbabilisticBroadcastDatagram_Base(const ProbabilisticBroadcastDatagram_Base& other);
    // make assignment operator protected to force the user override it
    ProbabilisticBroadcastDatagram_Base& operator=(const ProbabilisticBroadcastDatagram_Base& other);

  public:
    virtual ~ProbabilisticBroadcastDatagram_Base();
    virtual ProbabilisticBroadcastDatagram_Base *dup() const override {throw omnetpp::cRuntimeError("You forgot to manually add a dup() function to class ProbabilisticBroadcastDatagram");}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual long getId() const;
    virtual void setId(long id);
    virtual int getNbHops() const;
    virtual void setNbHops(int nbHops);
    virtual int getTransportProtocol() const;
    virtual void setTransportProtocol(int transportProtocol);
    virtual ::omnetpp::simtime_t getAppTtl() const;
    virtual void setAppTtl(::omnetpp::simtime_t appTtl);
    virtual L3Address& getInitialSrcAddr();
    virtual const L3Address& getInitialSrcAddr() const {return const_cast<ProbabilisticBroadcastDatagram_Base*>(this)->getInitialSrcAddr();}
    virtual void setInitialSrcAddr(const L3Address& initialSrcAddr);
    virtual L3Address& getFinalDestAddr();
    virtual const L3Address& getFinalDestAddr() const {return const_cast<ProbabilisticBroadcastDatagram_Base*>(this)->getFinalDestAddr();}
    virtual void setFinalDestAddr(const L3Address& finalDestAddr);
};

} // namespace inet

#endif // ifndef __INET_PROBABILISTICBROADCASTDATAGRAM_M_H

