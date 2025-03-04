//
// Generated file, do not edit! Created by nedtool 5.6 from /home/veins/artery/extern/inet/src/inet/transportlayer/rtp/RTPInnerPacket.msg.
//

#ifndef __INET__RTP_RTPINNERPACKET_M_H
#define __INET__RTP_RTPINNERPACKET_M_H

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
#include "inet/common/INETDefs.h"
#include "inet/networklayer/contract/ipv4/IPv4Address.h"
#include "inet/transportlayer/rtp/RTPPacket.h"
#include "inet/transportlayer/rtp/RTPSenderControlMessage_m.h"
#include "inet/transportlayer/rtp/RTPSenderStatusMessage_m.h"
// }}


namespace inet {
namespace rtp {

/**
 * Enum generated from <tt>/home/veins/artery/extern/inet/src/inet/transportlayer/rtp/RTPInnerPacket.msg:37</tt> by nedtool.
 * <pre>
 * //
 * // This enumeration is a list of all possibly types of
 * // an ~RTPInnerPacket.
 * //
 * enum RTP_INP_TYPE
 * {
 *     RTP_INP_UNDEF = 0;
 *     RTP_INP_INITIALIZE_PROFILE = 1;
 *     RTP_INP_PROFILE_INITIALIZED = 2;
 *     RTP_INP_INITIALIZE_RTCP = 3;
 *     RTP_INP_RTCP_INITIALIZED = 4;
 *     RTP_INP_CREATE_SENDER_MODULE = 5;
 *     RTP_INP_SENDER_MODULE_CREATED = 6;
 *     RTP_INP_DELETE_SENDER_MODULE = 7;
 *     RTP_INP_SENDER_MODULE_DELETED = 8;
 *     RTP_INP_INITIALIZE_SENDER_MODULE = 9;
 *     RTP_INP_SENDER_MODULE_INITIALIZED = 10;
 *     RTP_INP_SENDER_MODULE_CONTROL = 11;
 *     RTP_INP_SENDER_MODULE_STATUS = 12;
 *     RTP_INP_LEAVE_SESSION = 13;
 *     RTP_INP_SESSION_LEFT = 14;
 *     RTP_INP_DATA_OUT = 15;
 *     RTP_INP_DATA_IN = 16;
 * }
 * </pre>
 */
enum RTP_INP_TYPE {
    RTP_INP_UNDEF = 0,
    RTP_INP_INITIALIZE_PROFILE = 1,
    RTP_INP_PROFILE_INITIALIZED = 2,
    RTP_INP_INITIALIZE_RTCP = 3,
    RTP_INP_RTCP_INITIALIZED = 4,
    RTP_INP_CREATE_SENDER_MODULE = 5,
    RTP_INP_SENDER_MODULE_CREATED = 6,
    RTP_INP_DELETE_SENDER_MODULE = 7,
    RTP_INP_SENDER_MODULE_DELETED = 8,
    RTP_INP_INITIALIZE_SENDER_MODULE = 9,
    RTP_INP_SENDER_MODULE_INITIALIZED = 10,
    RTP_INP_SENDER_MODULE_CONTROL = 11,
    RTP_INP_SENDER_MODULE_STATUS = 12,
    RTP_INP_LEAVE_SESSION = 13,
    RTP_INP_SESSION_LEFT = 14,
    RTP_INP_DATA_OUT = 15,
    RTP_INP_DATA_IN = 16
};

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/transportlayer/rtp/RTPInnerPacket.msg:61</tt> by nedtool.
 * <pre>
 * //
 * // This class is used for communication between submodules of the RTP layer module.
 * //
 * packet RTPInnerPacket
 * {
 *     \@customize(true);  // see the generated C++ header for more info
 * 
 *     // The type of this ~RTPInnerPacket.
 *     short type \@enum(RTP_INP_TYPE) = RTP_INP_UNDEF;
 * 
 *     // The CNAME
 *     string commonName;
 * 
 *     // The MTU
 *     int mtu;
 * 
 *     // The Bandwidth
 *     int bandwidth;
 * 
 *     // The RTCP percentage
 *     int rtcpPercentage;
 * 
 *     // The IPv4 address
 *     IPv4Address address = IPv4Address::UNSPECIFIED_ADDRESS;
 * 
 *     // The port number
 *     int port = PORT_UNDEF;
 * 
 *     // The SSRC identifier
 *     uint32 ssrc;
 * 
 *     // The payload type
 *     int payloadType;
 * 
 *     // The file name
 *     string fileName;
 * 
 *     // The clock rate
 *     int clockRate;
 * 
 *     // The RTP time stamp base
 *     int timeStampBase;
 * 
 *     // The RTP sequence number base
 *     int sequenceNumberBase;
 * }
 * </pre>
 *
 * RTPInnerPacket_Base is only useful if it gets subclassed, and RTPInnerPacket is derived from it.
 * The minimum code to be written for RTPInnerPacket is the following:
 *
 * <pre>
 * class RTPInnerPacket : public RTPInnerPacket_Base
 * {
 *   private:
 *     void copy(const RTPInnerPacket& other) { ... }

 *   public:
 *     RTPInnerPacket(const char *name=nullptr, short kind=0) : RTPInnerPacket_Base(name,kind) {}
 *     RTPInnerPacket(const RTPInnerPacket& other) : RTPInnerPacket_Base(other) {copy(other);}
 *     RTPInnerPacket& operator=(const RTPInnerPacket& other) {if (this==&other) return *this; RTPInnerPacket_Base::operator=(other); copy(other); return *this;}
 *     virtual RTPInnerPacket *dup() const override {return new RTPInnerPacket(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from RTPInnerPacket_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(RTPInnerPacket)
 * </pre>
 */
class RTPInnerPacket_Base : public ::omnetpp::cPacket
{
  protected:
    short type;
    ::omnetpp::opp_string commonName;
    int mtu;
    int bandwidth;
    int rtcpPercentage;
    IPv4Address address;
    int port;
    uint32_t ssrc;
    int payloadType;
    ::omnetpp::opp_string fileName;
    int clockRate;
    int timeStampBase;
    int sequenceNumberBase;

  private:
    void copy(const RTPInnerPacket_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RTPInnerPacket_Base&);
    // make constructors protected to avoid instantiation
    RTPInnerPacket_Base(const char *name=nullptr, short kind=0);
    RTPInnerPacket_Base(const RTPInnerPacket_Base& other);
    // make assignment operator protected to force the user override it
    RTPInnerPacket_Base& operator=(const RTPInnerPacket_Base& other);

  public:
    virtual ~RTPInnerPacket_Base();
    virtual RTPInnerPacket_Base *dup() const override {throw omnetpp::cRuntimeError("You forgot to manually add a dup() function to class RTPInnerPacket");}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual short getType() const;
    virtual void setType(short type);
    virtual const char * getCommonName() const;
    virtual void setCommonName(const char * commonName);
    virtual int getMtu() const;
    virtual void setMtu(int mtu);
    virtual int getBandwidth() const;
    virtual void setBandwidth(int bandwidth);
    virtual int getRtcpPercentage() const;
    virtual void setRtcpPercentage(int rtcpPercentage);
    virtual IPv4Address& getAddress();
    virtual const IPv4Address& getAddress() const {return const_cast<RTPInnerPacket_Base*>(this)->getAddress();}
    virtual void setAddress(const IPv4Address& address);
    virtual int getPort() const;
    virtual void setPort(int port);
    virtual uint32_t getSsrc() const;
    virtual void setSsrc(uint32_t ssrc);
    virtual int getPayloadType() const;
    virtual void setPayloadType(int payloadType);
    virtual const char * getFileName() const;
    virtual void setFileName(const char * fileName);
    virtual int getClockRate() const;
    virtual void setClockRate(int clockRate);
    virtual int getTimeStampBase() const;
    virtual void setTimeStampBase(int timeStampBase);
    virtual int getSequenceNumberBase() const;
    virtual void setSequenceNumberBase(int sequenceNumberBase);
};

} // namespace rtp
} // namespace inet

#endif // ifndef __INET__RTP_RTPINNERPACKET_M_H

