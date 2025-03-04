//
// Generated file, do not edit! Created by nedtool 5.6 from /home/veins/artery/extern/inet/src/inet/routing/ospfv2/OSPFPacket.msg.
//

#ifndef __INET__OSPF_OSPFPACKET_M_H
#define __INET__OSPF_OSPFPACKET_M_H

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
namespace ospf {

/**
 * Enum generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/ospfv2/OSPFPacket.msg:27</tt> by nedtool.
 * <pre>
 * enum OSPFPacketType
 * {
 *     HELLO_PACKET = 1;
 *     DATABASE_DESCRIPTION_PACKET = 2;
 *     LINKSTATE_REQUEST_PACKET = 3;
 *     LINKSTATE_UPDATE_PACKET = 4;
 *     LINKSTATE_ACKNOWLEDGEMENT_PACKET = 5;
 * }
 * </pre>
 */
enum OSPFPacketType {
    HELLO_PACKET = 1,
    DATABASE_DESCRIPTION_PACKET = 2,
    LINKSTATE_REQUEST_PACKET = 3,
    LINKSTATE_UPDATE_PACKET = 4,
    LINKSTATE_ACKNOWLEDGEMENT_PACKET = 5
};

/**
 * Struct generated from /home/veins/artery/extern/inet/src/inet/routing/ospfv2/OSPFPacket.msg:37 by nedtool.
 */
struct OSPFOptions
{
    OSPFOptions();
    bool unused_1;
    bool E_ExternalRoutingCapability;
    bool MC_MulticastForwarding;
    bool NP_Type7LSA;
    bool EA_ForwardExternalLSAs;
    bool DC_DemandCircuits;
    bool unused_2;
    bool unused_3;
};

// helpers for local use
void __doPacking(omnetpp::cCommBuffer *b, const OSPFOptions& a);
void __doUnpacking(omnetpp::cCommBuffer *b, OSPFOptions& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const OSPFOptions& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, OSPFOptions& obj) { __doUnpacking(b, obj); }

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/ospfv2/OSPFPacket.msg:52</tt> by nedtool.
 * <pre>
 * //
 * // Represents an OSPF packet header
 * //
 * packet OSPFPacket
 * {
 *     char version = 2;
 *     char type \@enum(OSPFPacketType) = HELLO_PACKET;
 * 
 *     IPv4Address routerID;
 *     IPv4Address areaID;
 * 
 *     short authenticationType = 0;
 *     char authentication[8];
 * }
 * </pre>
 */
class OSPFPacket : public ::omnetpp::cPacket
{
  protected:
    char version;
    char type;
    IPv4Address routerID;
    IPv4Address areaID;
    short authenticationType;
    char authentication[8];

  private:
    void copy(const OSPFPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFPacket&);

  public:
    OSPFPacket(const char *name=nullptr, short kind=0);
    OSPFPacket(const OSPFPacket& other);
    virtual ~OSPFPacket();
    OSPFPacket& operator=(const OSPFPacket& other);
    virtual OSPFPacket *dup() const override {return new OSPFPacket(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual char getVersion() const;
    virtual void setVersion(char version);
    virtual char getType() const;
    virtual void setType(char type);
    virtual IPv4Address& getRouterID();
    virtual const IPv4Address& getRouterID() const {return const_cast<OSPFPacket*>(this)->getRouterID();}
    virtual void setRouterID(const IPv4Address& routerID);
    virtual IPv4Address& getAreaID();
    virtual const IPv4Address& getAreaID() const {return const_cast<OSPFPacket*>(this)->getAreaID();}
    virtual void setAreaID(const IPv4Address& areaID);
    virtual short getAuthenticationType() const;
    virtual void setAuthenticationType(short authenticationType);
    virtual unsigned int getAuthenticationArraySize() const;
    virtual char getAuthentication(unsigned int k) const;
    virtual void setAuthentication(unsigned int k, char authentication);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const OSPFPacket& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, OSPFPacket& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/ospfv2/OSPFPacket.msg:67</tt> by nedtool.
 * <pre>
 * //
 * // Represents an OSPF Hello packet
 * //
 * packet OSPFHelloPacket extends OSPFPacket
 * {
 *     IPv4Address networkMask;
 * 
 *     short helloInterval = 5;
 * 
 *     OSPFOptions options;
 * 
 *     char routerPriority = 0;
 *     long routerDeadInterval = 0;
 * 
 *     IPv4Address designatedRouter;
 *     IPv4Address backupDesignatedRouter;
 *     IPv4Address neighbor[];
 * }
 * </pre>
 */
class OSPFHelloPacket : public ::inet::ospf::OSPFPacket
{
  protected:
    IPv4Address networkMask;
    short helloInterval;
    OSPFOptions options;
    char routerPriority;
    long routerDeadInterval;
    IPv4Address designatedRouter;
    IPv4Address backupDesignatedRouter;
    IPv4Address *neighbor; // array ptr
    unsigned int neighbor_arraysize;

  private:
    void copy(const OSPFHelloPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFHelloPacket&);

  public:
    OSPFHelloPacket(const char *name=nullptr, short kind=0);
    OSPFHelloPacket(const OSPFHelloPacket& other);
    virtual ~OSPFHelloPacket();
    OSPFHelloPacket& operator=(const OSPFHelloPacket& other);
    virtual OSPFHelloPacket *dup() const override {return new OSPFHelloPacket(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual IPv4Address& getNetworkMask();
    virtual const IPv4Address& getNetworkMask() const {return const_cast<OSPFHelloPacket*>(this)->getNetworkMask();}
    virtual void setNetworkMask(const IPv4Address& networkMask);
    virtual short getHelloInterval() const;
    virtual void setHelloInterval(short helloInterval);
    virtual OSPFOptions& getOptions();
    virtual const OSPFOptions& getOptions() const {return const_cast<OSPFHelloPacket*>(this)->getOptions();}
    virtual void setOptions(const OSPFOptions& options);
    virtual char getRouterPriority() const;
    virtual void setRouterPriority(char routerPriority);
    virtual long getRouterDeadInterval() const;
    virtual void setRouterDeadInterval(long routerDeadInterval);
    virtual IPv4Address& getDesignatedRouter();
    virtual const IPv4Address& getDesignatedRouter() const {return const_cast<OSPFHelloPacket*>(this)->getDesignatedRouter();}
    virtual void setDesignatedRouter(const IPv4Address& designatedRouter);
    virtual IPv4Address& getBackupDesignatedRouter();
    virtual const IPv4Address& getBackupDesignatedRouter() const {return const_cast<OSPFHelloPacket*>(this)->getBackupDesignatedRouter();}
    virtual void setBackupDesignatedRouter(const IPv4Address& backupDesignatedRouter);
    virtual void setNeighborArraySize(unsigned int size);
    virtual unsigned int getNeighborArraySize() const;
    virtual IPv4Address& getNeighbor(unsigned int k);
    virtual const IPv4Address& getNeighbor(unsigned int k) const {return const_cast<OSPFHelloPacket*>(this)->getNeighbor(k);}
    virtual void setNeighbor(unsigned int k, const IPv4Address& neighbor);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const OSPFHelloPacket& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, OSPFHelloPacket& obj) {obj.parsimUnpack(b);}

/**
 * Enum generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/ospfv2/OSPFPacket.msg:84</tt> by nedtool.
 * <pre>
 * enum LSAType
 * {
 *     ROUTERLSA_TYPE = 1;
 *     NETWORKLSA_TYPE = 2;
 *     SUMMARYLSA_NETWORKS_TYPE = 3;
 *     SUMMARYLSA_ASBOUNDARYROUTERS_TYPE = 4;
 *     AS_EXTERNAL_LSA_TYPE = 5;
 * }
 * </pre>
 */
enum LSAType {
    ROUTERLSA_TYPE = 1,
    NETWORKLSA_TYPE = 2,
    SUMMARYLSA_NETWORKS_TYPE = 3,
    SUMMARYLSA_ASBOUNDARYROUTERS_TYPE = 4,
    AS_EXTERNAL_LSA_TYPE = 5
};

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/ospfv2/OSPFPacket.msg:96</tt> by nedtool.
 * <pre>
 * //
 * // Represents an OSPF LSA header
 * //
 * class OSPFLSAHeader
 * {
 *     unsigned short lsAge = 0;
 *     OSPFOptions lsOptions;
 *     char lsType \@enum(LSAType) = ROUTERLSA_TYPE;
 *     IPv4Address linkStateID;
 *     IPv4Address advertisingRouter;
 *     long lsSequenceNumber = 0;
 *     unsigned short lsaLength = 0;
 * }
 * </pre>
 */
class OSPFLSAHeader : public ::omnetpp::cObject
{
  protected:
    unsigned short lsAge;
    OSPFOptions lsOptions;
    char lsType;
    IPv4Address linkStateID;
    IPv4Address advertisingRouter;
    long lsSequenceNumber;
    unsigned short lsaLength;

  private:
    void copy(const OSPFLSAHeader& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFLSAHeader&);

  public:
    OSPFLSAHeader();
    OSPFLSAHeader(const OSPFLSAHeader& other);
    virtual ~OSPFLSAHeader();
    OSPFLSAHeader& operator=(const OSPFLSAHeader& other);
    virtual OSPFLSAHeader *dup() const override {return new OSPFLSAHeader(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual unsigned short getLsAge() const;
    virtual void setLsAge(unsigned short lsAge);
    virtual OSPFOptions& getLsOptions();
    virtual const OSPFOptions& getLsOptions() const {return const_cast<OSPFLSAHeader*>(this)->getLsOptions();}
    virtual void setLsOptions(const OSPFOptions& lsOptions);
    virtual char getLsType() const;
    virtual void setLsType(char lsType);
    virtual IPv4Address& getLinkStateID();
    virtual const IPv4Address& getLinkStateID() const {return const_cast<OSPFLSAHeader*>(this)->getLinkStateID();}
    virtual void setLinkStateID(const IPv4Address& linkStateID);
    virtual IPv4Address& getAdvertisingRouter();
    virtual const IPv4Address& getAdvertisingRouter() const {return const_cast<OSPFLSAHeader*>(this)->getAdvertisingRouter();}
    virtual void setAdvertisingRouter(const IPv4Address& advertisingRouter);
    virtual long getLsSequenceNumber() const;
    virtual void setLsSequenceNumber(long lsSequenceNumber);
    virtual unsigned short getLsaLength() const;
    virtual void setLsaLength(unsigned short lsaLength);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const OSPFLSAHeader& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, OSPFLSAHeader& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/ospfv2/OSPFPacket.msg:110</tt> by nedtool.
 * <pre>
 * //
 * // common ancestor type for all LSAs
 * //
 * class OSPFLSA
 * {
 *     OSPFLSAHeader header;
 * }
 * </pre>
 */
class OSPFLSA : public ::omnetpp::cObject
{
  protected:
    OSPFLSAHeader header;

  private:
    void copy(const OSPFLSA& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFLSA&);

  public:
    OSPFLSA();
    OSPFLSA(const OSPFLSA& other);
    virtual ~OSPFLSA();
    OSPFLSA& operator=(const OSPFLSA& other);
    virtual OSPFLSA *dup() const override {return new OSPFLSA(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual OSPFLSAHeader& getHeader();
    virtual const OSPFLSAHeader& getHeader() const {return const_cast<OSPFLSA*>(this)->getHeader();}
    virtual void setHeader(const OSPFLSAHeader& header);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const OSPFLSA& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, OSPFLSA& obj) {obj.parsimUnpack(b);}

/**
 * Enum generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/ospfv2/OSPFPacket.msg:115</tt> by nedtool.
 * <pre>
 * enum LinkType
 * {
 *     POINTTOPOINT_LINK = 1;
 *     TRANSIT_LINK = 2;
 *     STUB_LINK = 3;
 *     VIRTUAL_LINK = 4;
 * }
 * </pre>
 */
enum LinkType {
    POINTTOPOINT_LINK = 1,
    TRANSIT_LINK = 2,
    STUB_LINK = 3,
    VIRTUAL_LINK = 4
};

/**
 * Struct generated from /home/veins/artery/extern/inet/src/inet/routing/ospfv2/OSPFPacket.msg:123 by nedtool.
 */
struct TOSData
{
    TOSData();
    unsigned char tos;
    unsigned char tosMetric[3];
};

// helpers for local use
void __doPacking(omnetpp::cCommBuffer *b, const TOSData& a);
void __doUnpacking(omnetpp::cCommBuffer *b, TOSData& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TOSData& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TOSData& obj) { __doUnpacking(b, obj); }

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/ospfv2/OSPFPacket.msg:129</tt> by nedtool.
 * <pre>
 * class Link
 * {
 *     IPv4Address linkID;
 *     unsigned long linkData = 0;
 *     unsigned char type \@enum(LinkType) = POINTTOPOINT_LINK;
 *     unsigned char numberOfTOS = 0;
 *     unsigned long linkCost = 1;
 *     TOSData tosData[];
 * }
 * </pre>
 */
class Link : public ::omnetpp::cObject
{
  protected:
    IPv4Address linkID;
    unsigned long linkData;
    unsigned char type;
    unsigned char numberOfTOS;
    unsigned long linkCost;
    TOSData *tosData; // array ptr
    unsigned int tosData_arraysize;

  private:
    void copy(const Link& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Link&);

  public:
    Link();
    Link(const Link& other);
    virtual ~Link();
    Link& operator=(const Link& other);
    virtual Link *dup() const override {return new Link(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual IPv4Address& getLinkID();
    virtual const IPv4Address& getLinkID() const {return const_cast<Link*>(this)->getLinkID();}
    virtual void setLinkID(const IPv4Address& linkID);
    virtual unsigned long getLinkData() const;
    virtual void setLinkData(unsigned long linkData);
    virtual unsigned char getType() const;
    virtual void setType(unsigned char type);
    virtual unsigned char getNumberOfTOS() const;
    virtual void setNumberOfTOS(unsigned char numberOfTOS);
    virtual unsigned long getLinkCost() const;
    virtual void setLinkCost(unsigned long linkCost);
    virtual void setTosDataArraySize(unsigned int size);
    virtual unsigned int getTosDataArraySize() const;
    virtual TOSData& getTosData(unsigned int k);
    virtual const TOSData& getTosData(unsigned int k) const {return const_cast<Link*>(this)->getTosData(k);}
    virtual void setTosData(unsigned int k, const TOSData& tosData);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Link& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Link& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/ospfv2/OSPFPacket.msg:142</tt> by nedtool.
 * <pre>
 * //
 * // Represents an OSPF Router LSA
 * //
 * class OSPFRouterLSA extends OSPFLSA
 * {
 *     bool V_VirtualLinkEndpoint = false;
 *     bool E_ASBoundaryRouter = false;
 *     bool B_AreaBorderRouter = false;
 *     unsigned short numberOfLinks = 0;
 *     Link links[];
 * }
 * </pre>
 */
class OSPFRouterLSA : public ::inet::ospf::OSPFLSA
{
  protected:
    bool V_VirtualLinkEndpoint;
    bool E_ASBoundaryRouter;
    bool B_AreaBorderRouter;
    unsigned short numberOfLinks;
    Link *links; // array ptr
    unsigned int links_arraysize;

  private:
    void copy(const OSPFRouterLSA& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFRouterLSA&);

  public:
    OSPFRouterLSA();
    OSPFRouterLSA(const OSPFRouterLSA& other);
    virtual ~OSPFRouterLSA();
    OSPFRouterLSA& operator=(const OSPFRouterLSA& other);
    virtual OSPFRouterLSA *dup() const override {return new OSPFRouterLSA(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual bool getV_VirtualLinkEndpoint() const;
    virtual void setV_VirtualLinkEndpoint(bool V_VirtualLinkEndpoint);
    virtual bool getE_ASBoundaryRouter() const;
    virtual void setE_ASBoundaryRouter(bool E_ASBoundaryRouter);
    virtual bool getB_AreaBorderRouter() const;
    virtual void setB_AreaBorderRouter(bool B_AreaBorderRouter);
    virtual unsigned short getNumberOfLinks() const;
    virtual void setNumberOfLinks(unsigned short numberOfLinks);
    virtual void setLinksArraySize(unsigned int size);
    virtual unsigned int getLinksArraySize() const;
    virtual Link& getLinks(unsigned int k);
    virtual const Link& getLinks(unsigned int k) const {return const_cast<OSPFRouterLSA*>(this)->getLinks(k);}
    virtual void setLinks(unsigned int k, const Link& links);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const OSPFRouterLSA& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, OSPFRouterLSA& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/ospfv2/OSPFPacket.msg:154</tt> by nedtool.
 * <pre>
 * //
 * // Represents an OSPF Network LSA
 * //
 * class OSPFNetworkLSA extends OSPFLSA
 * {
 *     IPv4Address networkMask;
 *     IPv4Address attachedRouters[];
 * }
 * </pre>
 */
class OSPFNetworkLSA : public ::inet::ospf::OSPFLSA
{
  protected:
    IPv4Address networkMask;
    IPv4Address *attachedRouters; // array ptr
    unsigned int attachedRouters_arraysize;

  private:
    void copy(const OSPFNetworkLSA& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFNetworkLSA&);

  public:
    OSPFNetworkLSA();
    OSPFNetworkLSA(const OSPFNetworkLSA& other);
    virtual ~OSPFNetworkLSA();
    OSPFNetworkLSA& operator=(const OSPFNetworkLSA& other);
    virtual OSPFNetworkLSA *dup() const override {return new OSPFNetworkLSA(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual IPv4Address& getNetworkMask();
    virtual const IPv4Address& getNetworkMask() const {return const_cast<OSPFNetworkLSA*>(this)->getNetworkMask();}
    virtual void setNetworkMask(const IPv4Address& networkMask);
    virtual void setAttachedRoutersArraySize(unsigned int size);
    virtual unsigned int getAttachedRoutersArraySize() const;
    virtual IPv4Address& getAttachedRouters(unsigned int k);
    virtual const IPv4Address& getAttachedRouters(unsigned int k) const {return const_cast<OSPFNetworkLSA*>(this)->getAttachedRouters(k);}
    virtual void setAttachedRouters(unsigned int k, const IPv4Address& attachedRouters);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const OSPFNetworkLSA& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, OSPFNetworkLSA& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/ospfv2/OSPFPacket.msg:163</tt> by nedtool.
 * <pre>
 * //
 * // Represents an OSPF Summary LSA
 * //
 * class OSPFSummaryLSA extends OSPFLSA
 * {
 *     IPv4Address networkMask;
 *     unsigned long routeCost = 1;
 *     TOSData tosData[];
 * }
 * </pre>
 */
class OSPFSummaryLSA : public ::inet::ospf::OSPFLSA
{
  protected:
    IPv4Address networkMask;
    unsigned long routeCost;
    TOSData *tosData; // array ptr
    unsigned int tosData_arraysize;

  private:
    void copy(const OSPFSummaryLSA& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFSummaryLSA&);

  public:
    OSPFSummaryLSA();
    OSPFSummaryLSA(const OSPFSummaryLSA& other);
    virtual ~OSPFSummaryLSA();
    OSPFSummaryLSA& operator=(const OSPFSummaryLSA& other);
    virtual OSPFSummaryLSA *dup() const override {return new OSPFSummaryLSA(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual IPv4Address& getNetworkMask();
    virtual const IPv4Address& getNetworkMask() const {return const_cast<OSPFSummaryLSA*>(this)->getNetworkMask();}
    virtual void setNetworkMask(const IPv4Address& networkMask);
    virtual unsigned long getRouteCost() const;
    virtual void setRouteCost(unsigned long routeCost);
    virtual void setTosDataArraySize(unsigned int size);
    virtual unsigned int getTosDataArraySize() const;
    virtual TOSData& getTosData(unsigned int k);
    virtual const TOSData& getTosData(unsigned int k) const {return const_cast<OSPFSummaryLSA*>(this)->getTosData(k);}
    virtual void setTosData(unsigned int k, const TOSData& tosData);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const OSPFSummaryLSA& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, OSPFSummaryLSA& obj) {obj.parsimUnpack(b);}

/**
 * Struct generated from /home/veins/artery/extern/inet/src/inet/routing/ospfv2/OSPFPacket.msg:170 by nedtool.
 */
struct ExternalTOSInfo
{
    ExternalTOSInfo();
    TOSData tosData;
    bool E_ExternalMetricType;
    IPv4Address forwardingAddress;
    long externalRouteTag;
};

// helpers for local use
void __doPacking(omnetpp::cCommBuffer *b, const ExternalTOSInfo& a);
void __doUnpacking(omnetpp::cCommBuffer *b, ExternalTOSInfo& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const ExternalTOSInfo& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, ExternalTOSInfo& obj) { __doUnpacking(b, obj); }

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/ospfv2/OSPFPacket.msg:181</tt> by nedtool.
 * <pre>
 * //
 * // Represents the contents of an OSPF AS External LSA
 * //
 * class OSPFASExternalLSAContents
 * {
 *     IPv4Address networkMask;
 *     bool E_ExternalMetricType = false;
 *     unsigned long routeCost = 1;
 *     IPv4Address forwardingAddress;
 *     long externalRouteTag = 0;
 *     ExternalTOSInfo externalTOSInfo[];
 * }
 * </pre>
 */
class OSPFASExternalLSAContents : public ::omnetpp::cObject
{
  protected:
    IPv4Address networkMask;
    bool E_ExternalMetricType;
    unsigned long routeCost;
    IPv4Address forwardingAddress;
    long externalRouteTag;
    ExternalTOSInfo *externalTOSInfo; // array ptr
    unsigned int externalTOSInfo_arraysize;

  private:
    void copy(const OSPFASExternalLSAContents& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFASExternalLSAContents&);

  public:
    OSPFASExternalLSAContents();
    OSPFASExternalLSAContents(const OSPFASExternalLSAContents& other);
    virtual ~OSPFASExternalLSAContents();
    OSPFASExternalLSAContents& operator=(const OSPFASExternalLSAContents& other);
    virtual OSPFASExternalLSAContents *dup() const override {return new OSPFASExternalLSAContents(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual IPv4Address& getNetworkMask();
    virtual const IPv4Address& getNetworkMask() const {return const_cast<OSPFASExternalLSAContents*>(this)->getNetworkMask();}
    virtual void setNetworkMask(const IPv4Address& networkMask);
    virtual bool getE_ExternalMetricType() const;
    virtual void setE_ExternalMetricType(bool E_ExternalMetricType);
    virtual unsigned long getRouteCost() const;
    virtual void setRouteCost(unsigned long routeCost);
    virtual IPv4Address& getForwardingAddress();
    virtual const IPv4Address& getForwardingAddress() const {return const_cast<OSPFASExternalLSAContents*>(this)->getForwardingAddress();}
    virtual void setForwardingAddress(const IPv4Address& forwardingAddress);
    virtual long getExternalRouteTag() const;
    virtual void setExternalRouteTag(long externalRouteTag);
    virtual void setExternalTOSInfoArraySize(unsigned int size);
    virtual unsigned int getExternalTOSInfoArraySize() const;
    virtual ExternalTOSInfo& getExternalTOSInfo(unsigned int k);
    virtual const ExternalTOSInfo& getExternalTOSInfo(unsigned int k) const {return const_cast<OSPFASExternalLSAContents*>(this)->getExternalTOSInfo(k);}
    virtual void setExternalTOSInfo(unsigned int k, const ExternalTOSInfo& externalTOSInfo);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const OSPFASExternalLSAContents& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, OSPFASExternalLSAContents& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/ospfv2/OSPFPacket.msg:194</tt> by nedtool.
 * <pre>
 * //
 * // Represents an OSPF AS External LSA
 * //
 * class OSPFASExternalLSA extends OSPFLSA
 * {
 *     OSPFASExternalLSAContents contents;
 * }
 * </pre>
 */
class OSPFASExternalLSA : public ::inet::ospf::OSPFLSA
{
  protected:
    OSPFASExternalLSAContents contents;

  private:
    void copy(const OSPFASExternalLSA& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFASExternalLSA&);

  public:
    OSPFASExternalLSA();
    OSPFASExternalLSA(const OSPFASExternalLSA& other);
    virtual ~OSPFASExternalLSA();
    OSPFASExternalLSA& operator=(const OSPFASExternalLSA& other);
    virtual OSPFASExternalLSA *dup() const override {return new OSPFASExternalLSA(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual OSPFASExternalLSAContents& getContents();
    virtual const OSPFASExternalLSAContents& getContents() const {return const_cast<OSPFASExternalLSA*>(this)->getContents();}
    virtual void setContents(const OSPFASExternalLSAContents& contents);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const OSPFASExternalLSA& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, OSPFASExternalLSA& obj) {obj.parsimUnpack(b);}

/**
 * Struct generated from /home/veins/artery/extern/inet/src/inet/routing/ospfv2/OSPFPacket.msg:201 by nedtool.
 */
struct OSPFDDOptions
{
    OSPFDDOptions();
    bool unused_1;
    bool unused_2;
    bool unused_3;
    bool unused_4;
    bool unused_5;
    bool I_Init;
    bool M_More;
    bool MS_MasterSlave;
};

// helpers for local use
void __doPacking(omnetpp::cCommBuffer *b, const OSPFDDOptions& a);
void __doUnpacking(omnetpp::cCommBuffer *b, OSPFDDOptions& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const OSPFDDOptions& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, OSPFDDOptions& obj) { __doUnpacking(b, obj); }

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/ospfv2/OSPFPacket.msg:216</tt> by nedtool.
 * <pre>
 * //
 * // Represents an OSPF Database Description packet
 * //
 * packet OSPFDatabaseDescriptionPacket extends OSPFPacket
 * {
 *     unsigned short interfaceMTU;
 *     OSPFOptions options;
 *     OSPFDDOptions ddOptions;
 *     unsigned long ddSequenceNumber;
 *     OSPFLSAHeader lsaHeaders[];
 * }
 * </pre>
 */
class OSPFDatabaseDescriptionPacket : public ::inet::ospf::OSPFPacket
{
  protected:
    unsigned short interfaceMTU;
    OSPFOptions options;
    OSPFDDOptions ddOptions;
    unsigned long ddSequenceNumber;
    OSPFLSAHeader *lsaHeaders; // array ptr
    unsigned int lsaHeaders_arraysize;

  private:
    void copy(const OSPFDatabaseDescriptionPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFDatabaseDescriptionPacket&);

  public:
    OSPFDatabaseDescriptionPacket(const char *name=nullptr, short kind=0);
    OSPFDatabaseDescriptionPacket(const OSPFDatabaseDescriptionPacket& other);
    virtual ~OSPFDatabaseDescriptionPacket();
    OSPFDatabaseDescriptionPacket& operator=(const OSPFDatabaseDescriptionPacket& other);
    virtual OSPFDatabaseDescriptionPacket *dup() const override {return new OSPFDatabaseDescriptionPacket(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual unsigned short getInterfaceMTU() const;
    virtual void setInterfaceMTU(unsigned short interfaceMTU);
    virtual OSPFOptions& getOptions();
    virtual const OSPFOptions& getOptions() const {return const_cast<OSPFDatabaseDescriptionPacket*>(this)->getOptions();}
    virtual void setOptions(const OSPFOptions& options);
    virtual OSPFDDOptions& getDdOptions();
    virtual const OSPFDDOptions& getDdOptions() const {return const_cast<OSPFDatabaseDescriptionPacket*>(this)->getDdOptions();}
    virtual void setDdOptions(const OSPFDDOptions& ddOptions);
    virtual unsigned long getDdSequenceNumber() const;
    virtual void setDdSequenceNumber(unsigned long ddSequenceNumber);
    virtual void setLsaHeadersArraySize(unsigned int size);
    virtual unsigned int getLsaHeadersArraySize() const;
    virtual OSPFLSAHeader& getLsaHeaders(unsigned int k);
    virtual const OSPFLSAHeader& getLsaHeaders(unsigned int k) const {return const_cast<OSPFDatabaseDescriptionPacket*>(this)->getLsaHeaders(k);}
    virtual void setLsaHeaders(unsigned int k, const OSPFLSAHeader& lsaHeaders);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const OSPFDatabaseDescriptionPacket& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, OSPFDatabaseDescriptionPacket& obj) {obj.parsimUnpack(b);}

/**
 * Struct generated from /home/veins/artery/extern/inet/src/inet/routing/ospfv2/OSPFPacket.msg:225 by nedtool.
 */
struct LSARequest
{
    LSARequest();
    unsigned long lsType;
    IPv4Address linkStateID;
    IPv4Address advertisingRouter;
};

// helpers for local use
void __doPacking(omnetpp::cCommBuffer *b, const LSARequest& a);
void __doUnpacking(omnetpp::cCommBuffer *b, LSARequest& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const LSARequest& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, LSARequest& obj) { __doUnpacking(b, obj); }

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/ospfv2/OSPFPacket.msg:235</tt> by nedtool.
 * <pre>
 * //
 * // Represents an OSPF Link State Request packet
 * //
 * packet OSPFLinkStateRequestPacket extends OSPFPacket
 * {
 *     LSARequest requests[];
 * }
 * </pre>
 */
class OSPFLinkStateRequestPacket : public ::inet::ospf::OSPFPacket
{
  protected:
    LSARequest *requests; // array ptr
    unsigned int requests_arraysize;

  private:
    void copy(const OSPFLinkStateRequestPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFLinkStateRequestPacket&);

  public:
    OSPFLinkStateRequestPacket(const char *name=nullptr, short kind=0);
    OSPFLinkStateRequestPacket(const OSPFLinkStateRequestPacket& other);
    virtual ~OSPFLinkStateRequestPacket();
    OSPFLinkStateRequestPacket& operator=(const OSPFLinkStateRequestPacket& other);
    virtual OSPFLinkStateRequestPacket *dup() const override {return new OSPFLinkStateRequestPacket(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual void setRequestsArraySize(unsigned int size);
    virtual unsigned int getRequestsArraySize() const;
    virtual LSARequest& getRequests(unsigned int k);
    virtual const LSARequest& getRequests(unsigned int k) const {return const_cast<OSPFLinkStateRequestPacket*>(this)->getRequests(k);}
    virtual void setRequests(unsigned int k, const LSARequest& requests);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const OSPFLinkStateRequestPacket& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, OSPFLinkStateRequestPacket& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/ospfv2/OSPFPacket.msg:243</tt> by nedtool.
 * <pre>
 * //
 * // Represents an OSPF Link State Update packet
 * //
 * packet OSPFLinkStateUpdatePacket extends OSPFPacket
 * {
 *     unsigned long numberOfLSAs;
 *     OSPFRouterLSA routerLSAs[];
 *     OSPFNetworkLSA networkLSAs[];
 *     OSPFSummaryLSA summaryLSAs[];
 *     OSPFASExternalLSA asExternalLSAs[];
 * }
 * </pre>
 */
class OSPFLinkStateUpdatePacket : public ::inet::ospf::OSPFPacket
{
  protected:
    unsigned long numberOfLSAs;
    OSPFRouterLSA *routerLSAs; // array ptr
    unsigned int routerLSAs_arraysize;
    OSPFNetworkLSA *networkLSAs; // array ptr
    unsigned int networkLSAs_arraysize;
    OSPFSummaryLSA *summaryLSAs; // array ptr
    unsigned int summaryLSAs_arraysize;
    OSPFASExternalLSA *asExternalLSAs; // array ptr
    unsigned int asExternalLSAs_arraysize;

  private:
    void copy(const OSPFLinkStateUpdatePacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFLinkStateUpdatePacket&);

  public:
    OSPFLinkStateUpdatePacket(const char *name=nullptr, short kind=0);
    OSPFLinkStateUpdatePacket(const OSPFLinkStateUpdatePacket& other);
    virtual ~OSPFLinkStateUpdatePacket();
    OSPFLinkStateUpdatePacket& operator=(const OSPFLinkStateUpdatePacket& other);
    virtual OSPFLinkStateUpdatePacket *dup() const override {return new OSPFLinkStateUpdatePacket(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual unsigned long getNumberOfLSAs() const;
    virtual void setNumberOfLSAs(unsigned long numberOfLSAs);
    virtual void setRouterLSAsArraySize(unsigned int size);
    virtual unsigned int getRouterLSAsArraySize() const;
    virtual OSPFRouterLSA& getRouterLSAs(unsigned int k);
    virtual const OSPFRouterLSA& getRouterLSAs(unsigned int k) const {return const_cast<OSPFLinkStateUpdatePacket*>(this)->getRouterLSAs(k);}
    virtual void setRouterLSAs(unsigned int k, const OSPFRouterLSA& routerLSAs);
    virtual void setNetworkLSAsArraySize(unsigned int size);
    virtual unsigned int getNetworkLSAsArraySize() const;
    virtual OSPFNetworkLSA& getNetworkLSAs(unsigned int k);
    virtual const OSPFNetworkLSA& getNetworkLSAs(unsigned int k) const {return const_cast<OSPFLinkStateUpdatePacket*>(this)->getNetworkLSAs(k);}
    virtual void setNetworkLSAs(unsigned int k, const OSPFNetworkLSA& networkLSAs);
    virtual void setSummaryLSAsArraySize(unsigned int size);
    virtual unsigned int getSummaryLSAsArraySize() const;
    virtual OSPFSummaryLSA& getSummaryLSAs(unsigned int k);
    virtual const OSPFSummaryLSA& getSummaryLSAs(unsigned int k) const {return const_cast<OSPFLinkStateUpdatePacket*>(this)->getSummaryLSAs(k);}
    virtual void setSummaryLSAs(unsigned int k, const OSPFSummaryLSA& summaryLSAs);
    virtual void setAsExternalLSAsArraySize(unsigned int size);
    virtual unsigned int getAsExternalLSAsArraySize() const;
    virtual OSPFASExternalLSA& getAsExternalLSAs(unsigned int k);
    virtual const OSPFASExternalLSA& getAsExternalLSAs(unsigned int k) const {return const_cast<OSPFLinkStateUpdatePacket*>(this)->getAsExternalLSAs(k);}
    virtual void setAsExternalLSAs(unsigned int k, const OSPFASExternalLSA& asExternalLSAs);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const OSPFLinkStateUpdatePacket& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, OSPFLinkStateUpdatePacket& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/ospfv2/OSPFPacket.msg:255</tt> by nedtool.
 * <pre>
 * //
 * // Represents an OSPF Link State Acknowledgement packet
 * //
 * packet OSPFLinkStateAcknowledgementPacket extends OSPFPacket
 * {
 *     OSPFLSAHeader lsaHeaders[];
 * }
 * </pre>
 */
class OSPFLinkStateAcknowledgementPacket : public ::inet::ospf::OSPFPacket
{
  protected:
    OSPFLSAHeader *lsaHeaders; // array ptr
    unsigned int lsaHeaders_arraysize;

  private:
    void copy(const OSPFLinkStateAcknowledgementPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const OSPFLinkStateAcknowledgementPacket&);

  public:
    OSPFLinkStateAcknowledgementPacket(const char *name=nullptr, short kind=0);
    OSPFLinkStateAcknowledgementPacket(const OSPFLinkStateAcknowledgementPacket& other);
    virtual ~OSPFLinkStateAcknowledgementPacket();
    OSPFLinkStateAcknowledgementPacket& operator=(const OSPFLinkStateAcknowledgementPacket& other);
    virtual OSPFLinkStateAcknowledgementPacket *dup() const override {return new OSPFLinkStateAcknowledgementPacket(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual void setLsaHeadersArraySize(unsigned int size);
    virtual unsigned int getLsaHeadersArraySize() const;
    virtual OSPFLSAHeader& getLsaHeaders(unsigned int k);
    virtual const OSPFLSAHeader& getLsaHeaders(unsigned int k) const {return const_cast<OSPFLinkStateAcknowledgementPacket*>(this)->getLsaHeaders(k);}
    virtual void setLsaHeaders(unsigned int k, const OSPFLSAHeader& lsaHeaders);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const OSPFLinkStateAcknowledgementPacket& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, OSPFLinkStateAcknowledgementPacket& obj) {obj.parsimUnpack(b);}

} // namespace ospf
} // namespace inet

#endif // ifndef __INET__OSPF_OSPFPACKET_M_H

