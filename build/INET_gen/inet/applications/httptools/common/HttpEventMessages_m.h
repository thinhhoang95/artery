//
// Generated file, do not edit! Created by nedtool 5.6 from /home/veins/artery/extern/inet/src/inet/applications/httptools/common/HttpEventMessages.msg.
//

#ifndef __INET__HTTPTOOLS_HTTPEVENTMESSAGES_M_H
#define __INET__HTTPTOOLS_HTTPEVENTMESSAGES_M_H

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
namespace httptools {

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/applications/httptools/common/HttpEventMessages.msg:31</tt> by nedtool.
 * <pre>
 * //
 * // Server status update event
 * //
 * // Used by the controller to trigger popularity modifications for web sites.
 * //
 * // NEW: The definition has been migrated to OMNeT++ 4.0 and the latest INET version.
 * //
 * // \@author  Kristjan V. Jonsson
 * //
 * packet HttpServerStatusUpdateMsg
 * {
 *     \@omitGetVerb(true);
 *     \@fieldNameSuffix("_var");
 *     string www;             // Name of the WWW site.
 *     simtime_t setTime;      // The event set time.
 *     int eventKind;          // The event kind, e.g. ss_special.
 *     double pvalue;          // The initial elevated probability.
 *     double pamortize;       // The amortization factor -- i.e. how much the pvalue is decreased on each hit.
 * }
 * </pre>
 */
class HttpServerStatusUpdateMsg : public ::omnetpp::cPacket
{
  protected:
    ::omnetpp::opp_string www_var;
    ::omnetpp::simtime_t setTime_var;
    int eventKind_var;
    double pvalue_var;
    double pamortize_var;

  private:
    void copy(const HttpServerStatusUpdateMsg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const HttpServerStatusUpdateMsg&);

  public:
    HttpServerStatusUpdateMsg(const char *name=nullptr, short kind=0);
    HttpServerStatusUpdateMsg(const HttpServerStatusUpdateMsg& other);
    virtual ~HttpServerStatusUpdateMsg();
    HttpServerStatusUpdateMsg& operator=(const HttpServerStatusUpdateMsg& other);
    virtual HttpServerStatusUpdateMsg *dup() const override {return new HttpServerStatusUpdateMsg(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual const char * www() const;
    virtual void setWww(const char * www);
    virtual ::omnetpp::simtime_t setTime() const;
    virtual void setSetTime(::omnetpp::simtime_t setTime);
    virtual int eventKind() const;
    virtual void setEventKind(int eventKind);
    virtual double pvalue() const;
    virtual void setPvalue(double pvalue);
    virtual double pamortize() const;
    virtual void setPamortize(double pamortize);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const HttpServerStatusUpdateMsg& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, HttpServerStatusUpdateMsg& obj) {obj.parsimUnpack(b);}

} // namespace httptools
} // namespace inet

#endif // ifndef __INET__HTTPTOOLS_HTTPEVENTMESSAGES_M_H

