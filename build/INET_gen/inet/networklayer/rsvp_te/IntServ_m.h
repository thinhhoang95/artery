//
// Generated file, do not edit! Created by nedtool 5.6 from /home/veins/artery/extern/inet/src/inet/networklayer/rsvp_te/IntServ.msg.
//

#ifndef __INET_INTSERV_M_H
#define __INET_INTSERV_M_H

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
#include "inet/networklayer/contract/ipv4/IPv4Address.h"
// }}


namespace inet {

// cplusplus {{
typedef std::vector<IPv4Address> IPAddressVector;
typedef std::vector<struct EroObj_t> EroVector;
typedef std::vector<struct FlowDescriptor_t> FlowDescriptorVector;
// }}

/**
 * Struct generated from /home/veins/artery/extern/inet/src/inet/networklayer/rsvp_te/IntServ.msg:44 by nedtool.
 */
struct SessionObj_t
{
    SessionObj_t();
    int Tunnel_Id;
    int Extended_Tunnel_Id;
    IPv4Address DestAddress;
    int setupPri;
    int holdingPri;
};

// helpers for local use
void __doPacking(omnetpp::cCommBuffer *b, const SessionObj_t& a);
void __doUnpacking(omnetpp::cCommBuffer *b, SessionObj_t& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const SessionObj_t& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, SessionObj_t& obj) { __doUnpacking(b, obj); }

/**
 * Struct generated from /home/veins/artery/extern/inet/src/inet/networklayer/rsvp_te/IntServ.msg:56 by nedtool.
 */
struct RsvpHopObj_t
{
    RsvpHopObj_t();
    IPv4Address Next_Hop_Address;
    IPv4Address Logical_Interface_Handle;
};

// helpers for local use
void __doPacking(omnetpp::cCommBuffer *b, const RsvpHopObj_t& a);
void __doUnpacking(omnetpp::cCommBuffer *b, RsvpHopObj_t& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const RsvpHopObj_t& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, RsvpHopObj_t& obj) { __doUnpacking(b, obj); }

/**
 * Struct generated from /home/veins/artery/extern/inet/src/inet/networklayer/rsvp_te/IntServ.msg:65 by nedtool.
 */
struct SenderTemplateObj_t
{
    SenderTemplateObj_t();
    IPv4Address SrcAddress;
    int Lsp_Id;
};

// helpers for local use
void __doPacking(omnetpp::cCommBuffer *b, const SenderTemplateObj_t& a);
void __doUnpacking(omnetpp::cCommBuffer *b, SenderTemplateObj_t& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const SenderTemplateObj_t& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, SenderTemplateObj_t& obj) { __doUnpacking(b, obj); }

/**
 * Struct generated from /home/veins/artery/extern/inet/src/inet/networklayer/rsvp_te/IntServ.msg:75 by nedtool.
 */
struct SenderTspecObj_t
{
    SenderTspecObj_t();
    double req_bandwidth;
};

// helpers for local use
void __doPacking(omnetpp::cCommBuffer *b, const SenderTspecObj_t& a);
void __doUnpacking(omnetpp::cCommBuffer *b, SenderTspecObj_t& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const SenderTspecObj_t& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, SenderTspecObj_t& obj) { __doUnpacking(b, obj); }

/**
 * Struct generated from /home/veins/artery/extern/inet/src/inet/networklayer/rsvp_te/IntServ.msg:83 by nedtool.
 */
struct FlowSpecObj_t : public ::inet::SenderTspecObj_t
{
    FlowSpecObj_t();
};

// helpers for local use
void __doPacking(omnetpp::cCommBuffer *b, const FlowSpecObj_t& a);
void __doUnpacking(omnetpp::cCommBuffer *b, FlowSpecObj_t& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const FlowSpecObj_t& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, FlowSpecObj_t& obj) { __doUnpacking(b, obj); }

/**
 * Struct generated from /home/veins/artery/extern/inet/src/inet/networklayer/rsvp_te/IntServ.msg:90 by nedtool.
 */
struct FilterSpecObj_t : public ::inet::SenderTemplateObj_t
{
    FilterSpecObj_t();
};

// helpers for local use
void __doPacking(omnetpp::cCommBuffer *b, const FilterSpecObj_t& a);
void __doUnpacking(omnetpp::cCommBuffer *b, FilterSpecObj_t& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const FilterSpecObj_t& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, FilterSpecObj_t& obj) { __doUnpacking(b, obj); }

/**
 * Struct generated from /home/veins/artery/extern/inet/src/inet/networklayer/rsvp_te/IntServ.msg:97 by nedtool.
 */
struct LabelRequestObj_t
{
    LabelRequestObj_t();
    int prot;
};

// helpers for local use
void __doPacking(omnetpp::cCommBuffer *b, const LabelRequestObj_t& a);
void __doUnpacking(omnetpp::cCommBuffer *b, LabelRequestObj_t& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const LabelRequestObj_t& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, LabelRequestObj_t& obj) { __doUnpacking(b, obj); }

/**
 * Struct generated from /home/veins/artery/extern/inet/src/inet/networklayer/rsvp_te/IntServ.msg:106 by nedtool.
 */
struct SenderDescriptor_t
{
    SenderDescriptor_t();
    SenderTemplateObj_t Sender_Template_Object;
    SenderTspecObj_t Sender_Tspec_Object;
};

// helpers for local use
void __doPacking(omnetpp::cCommBuffer *b, const SenderDescriptor_t& a);
void __doUnpacking(omnetpp::cCommBuffer *b, SenderDescriptor_t& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const SenderDescriptor_t& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, SenderDescriptor_t& obj) { __doUnpacking(b, obj); }

/**
 * Struct generated from /home/veins/artery/extern/inet/src/inet/networklayer/rsvp_te/IntServ.msg:115 by nedtool.
 */
struct EroObj_t
{
    EroObj_t();
    bool L;
    IPv4Address node;
};

// helpers for local use
void __doPacking(omnetpp::cCommBuffer *b, const EroObj_t& a);
void __doUnpacking(omnetpp::cCommBuffer *b, EroObj_t& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const EroObj_t& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, EroObj_t& obj) { __doUnpacking(b, obj); }

/**
 * Struct generated from /home/veins/artery/extern/inet/src/inet/networklayer/rsvp_te/IntServ.msg:124 by nedtool.
 */
struct FlowDescriptor_t
{
    FlowDescriptor_t();
    FlowSpecObj_t Flowspec_Object;
    FilterSpecObj_t Filter_Spec_Object;
    IPAddressVector RRO;
    int label;
};

// helpers for local use
void __doPacking(omnetpp::cCommBuffer *b, const FlowDescriptor_t& a);
void __doUnpacking(omnetpp::cCommBuffer *b, FlowDescriptor_t& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const FlowDescriptor_t& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, FlowDescriptor_t& obj) { __doUnpacking(b, obj); }

} // namespace inet

#endif // ifndef __INET_INTSERV_M_H

