//
// Generated file, do not edit! Created by nedtool 5.6 from /home/veins/artery/extern/inet/src/inet/linklayer/csma/CSMAFrame.msg.
//

#ifndef __INET_CSMAFRAME_M_H
#define __INET_CSMAFRAME_M_H

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
    #include "inet/linklayer/base/MACFrameBase_m.h"
// }}


namespace inet {

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/linklayer/csma/CSMAFrame.msg:36</tt> by nedtool.
 * <pre>
 * //
 * // A CSMA mac packet format definition
 * //
 * // \@author Daniel Willkomm
 * //
 * packet CSMAFrame extends MACFrameBase
 * {
 *     long sequenceId; // Sequence Number to detect duplicate messages
 * }
 * </pre>
 */
class CSMAFrame : public ::inet::MACFrameBase
{
  protected:
    long sequenceId;

  private:
    void copy(const CSMAFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const CSMAFrame&);

  public:
    CSMAFrame(const char *name=nullptr, short kind=0);
    CSMAFrame(const CSMAFrame& other);
    virtual ~CSMAFrame();
    CSMAFrame& operator=(const CSMAFrame& other);
    virtual CSMAFrame *dup() const override {return new CSMAFrame(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual long getSequenceId() const;
    virtual void setSequenceId(long sequenceId);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const CSMAFrame& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, CSMAFrame& obj) {obj.parsimUnpack(b);}

} // namespace inet

#endif // ifndef __INET_CSMAFRAME_M_H

