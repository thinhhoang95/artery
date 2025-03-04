//
// Generated file, do not edit! Created by nedtool 5.6 from /home/veins/artery/extern/inet/src/inet/transportlayer/rtp/RTPSenderStatusMessage.msg.
//

#ifndef __INET__RTP_RTPSENDERSTATUSMESSAGE_M_H
#define __INET__RTP_RTPSENDERSTATUSMESSAGE_M_H

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
// }}


namespace inet {
namespace rtp {

/**
 * Enum generated from <tt>/home/veins/artery/extern/inet/src/inet/transportlayer/rtp/RTPSenderStatusMessage.msg:35</tt> by nedtool.
 * <pre>
 * //
 * // Messages of type ~RTPSenderStatusMessage are used to send information
 * // from an rtp sender module to the application. Within this class a status
 * // string is defined in which the information is stored. This can be "PLAYING",
 * // "STOPPED" or "FINISHED".
 * // If a message must provide more information than just a string, a new class
 * // defining this parameter can derived.
 * //
 * enum RTPSenderStatus
 * {
 *     RTP_SENDER_STATUS_PLAYING = 1;
 *     RTP_SENDER_STATUS_FINISHED = 2;
 *     RTP_SENDER_STATUS_STOPPED = 3;
 *     RTP_SENDER_STATUS_PAUSED = 4;
 * }
 * </pre>
 */
enum RTPSenderStatus {
    RTP_SENDER_STATUS_PLAYING = 1,
    RTP_SENDER_STATUS_FINISHED = 2,
    RTP_SENDER_STATUS_STOPPED = 3,
    RTP_SENDER_STATUS_PAUSED = 4
};

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/transportlayer/rtp/RTPSenderStatusMessage.msg:43</tt> by nedtool.
 * <pre>
 * packet RTPSenderStatusMessage
 * {
 *     short status \@enum(RTPSenderStatus);
 *     uint32 timeStamp;
 * }
 * </pre>
 */
class RTPSenderStatusMessage : public ::omnetpp::cPacket
{
  protected:
    short status;
    uint32_t timeStamp;

  private:
    void copy(const RTPSenderStatusMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RTPSenderStatusMessage&);

  public:
    RTPSenderStatusMessage(const char *name=nullptr, short kind=0);
    RTPSenderStatusMessage(const RTPSenderStatusMessage& other);
    virtual ~RTPSenderStatusMessage();
    RTPSenderStatusMessage& operator=(const RTPSenderStatusMessage& other);
    virtual RTPSenderStatusMessage *dup() const override {return new RTPSenderStatusMessage(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual short getStatus() const;
    virtual void setStatus(short status);
    virtual uint32_t getTimeStamp() const;
    virtual void setTimeStamp(uint32_t timeStamp);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const RTPSenderStatusMessage& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, RTPSenderStatusMessage& obj) {obj.parsimUnpack(b);}

} // namespace rtp
} // namespace inet

#endif // ifndef __INET__RTP_RTPSENDERSTATUSMESSAGE_M_H

