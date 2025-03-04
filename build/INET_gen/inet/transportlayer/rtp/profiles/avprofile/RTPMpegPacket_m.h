//
// Generated file, do not edit! Created by nedtool 5.6 from /home/veins/artery/extern/inet/src/inet/transportlayer/rtp/profiles/avprofile/RTPMpegPacket.msg.
//

#ifndef __INET__RTP_RTPMPEGPACKET_M_H
#define __INET__RTP_RTPMPEGPACKET_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0506
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif


namespace inet {
namespace rtp {

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/transportlayer/rtp/profiles/avprofile/RTPMpegPacket.msg:36</tt> by nedtool.
 * <pre>
 * packet RTPMpegPacket
 * {
 *     int headerLength = 4;
 *     int payloadLength; // size of the mpeg data
 *     int pictureType;   // picture type of the frame the data in this packet belongs to.
 * 
 *     // currenrtly unused fields:
 *     //int mzb;
 *     //int two;
 *     //int temporalReference;
 *     //int activeN;
 *     //int newPictureHeader;
 *     //int sequenceHeaderPresent;
 *     //int beginningOfSlice;
 *     //int endOfSlice;
 *     //int fbv;
 *     //int bfc;
 *     //int ffv;
 *     //int ffc;
 * }
 * </pre>
 */
class RTPMpegPacket : public ::omnetpp::cPacket
{
  protected:
    int headerLength;
    int payloadLength;
    int pictureType;

  private:
    void copy(const RTPMpegPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const RTPMpegPacket&);

  public:
    RTPMpegPacket(const char *name=nullptr, short kind=0);
    RTPMpegPacket(const RTPMpegPacket& other);
    virtual ~RTPMpegPacket();
    RTPMpegPacket& operator=(const RTPMpegPacket& other);
    virtual RTPMpegPacket *dup() const override {return new RTPMpegPacket(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getHeaderLength() const;
    virtual void setHeaderLength(int headerLength);
    virtual int getPayloadLength() const;
    virtual void setPayloadLength(int payloadLength);
    virtual int getPictureType() const;
    virtual void setPictureType(int pictureType);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const RTPMpegPacket& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, RTPMpegPacket& obj) {obj.parsimUnpack(b);}

} // namespace rtp
} // namespace inet

#endif // ifndef __INET__RTP_RTPMPEGPACKET_M_H

