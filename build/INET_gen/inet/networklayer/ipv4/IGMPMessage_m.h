//
// Generated file, do not edit! Created by nedtool 5.6 from /home/veins/artery/extern/inet/src/inet/networklayer/ipv4/IGMPMessage.msg.
//

#ifndef __INET_IGMPMESSAGE_M_H
#define __INET_IGMPMESSAGE_M_H

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
#include <vector>
// }}


namespace inet {

// cplusplus {{
typedef std::vector<IPv4Address> IPv4AddressVector;
// }}

/**
 * Enum generated from <tt>/home/veins/artery/extern/inet/src/inet/networklayer/ipv4/IGMPMessage.msg:35</tt> by nedtool.
 * <pre>
 * enum IGMPType
 * {
 *     IGMP_MEMBERSHIP_QUERY = 0x11;
 *     IGMPV1_MEMBERSHIP_REPORT = 0x12;
 *     IGMPV2_MEMBERSHIP_REPORT = 0x16;
 *     IGMPV2_LEAVE_GROUP = 0x17;
 *     IGMPV3_MEMBERSHIP_REPORT = 0x22;
 * }
 * </pre>
 */
enum IGMPType {
    IGMP_MEMBERSHIP_QUERY = 0x11,
    IGMPV1_MEMBERSHIP_REPORT = 0x12,
    IGMPV2_MEMBERSHIP_REPORT = 0x16,
    IGMPV2_LEAVE_GROUP = 0x17,
    IGMPV3_MEMBERSHIP_REPORT = 0x22
};

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/networklayer/ipv4/IGMPMessage.msg:44</tt> by nedtool.
 * <pre>
 * packet IGMPMessage
 * {
 *     int type \@enum(IGMPType);
 * }
 * </pre>
 */
class IGMPMessage : public ::omnetpp::cPacket
{
  protected:
    int type;

  private:
    void copy(const IGMPMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IGMPMessage&);

  public:
    IGMPMessage(const char *name=nullptr, short kind=0);
    IGMPMessage(const IGMPMessage& other);
    virtual ~IGMPMessage();
    IGMPMessage& operator=(const IGMPMessage& other);
    virtual IGMPMessage *dup() const override {return new IGMPMessage(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getType() const;
    virtual void setType(int type);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const IGMPMessage& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, IGMPMessage& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/networklayer/ipv4/IGMPMessage.msg:49</tt> by nedtool.
 * <pre>
 * packet IGMPQuery extends IGMPMessage
 * {
 *     IPv4Address groupAddress;
 * }
 * </pre>
 */
class IGMPQuery : public ::inet::IGMPMessage
{
  protected:
    IPv4Address groupAddress;

  private:
    void copy(const IGMPQuery& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IGMPQuery&);

  public:
    IGMPQuery(const char *name=nullptr, short kind=0);
    IGMPQuery(const IGMPQuery& other);
    virtual ~IGMPQuery();
    IGMPQuery& operator=(const IGMPQuery& other);
    virtual IGMPQuery *dup() const override {return new IGMPQuery(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual IPv4Address& getGroupAddress();
    virtual const IPv4Address& getGroupAddress() const {return const_cast<IGMPQuery*>(this)->getGroupAddress();}
    virtual void setGroupAddress(const IPv4Address& groupAddress);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const IGMPQuery& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, IGMPQuery& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/networklayer/ipv4/IGMPMessage.msg:54</tt> by nedtool.
 * <pre>
 * packet IGMPv1Query extends IGMPQuery
 * {
 *     type = IGMP_MEMBERSHIP_QUERY;
 * }
 * </pre>
 */
class IGMPv1Query : public ::inet::IGMPQuery
{
  protected:

  private:
    void copy(const IGMPv1Query& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IGMPv1Query&);

  public:
    IGMPv1Query(const char *name=nullptr, short kind=0);
    IGMPv1Query(const IGMPv1Query& other);
    virtual ~IGMPv1Query();
    IGMPv1Query& operator=(const IGMPv1Query& other);
    virtual IGMPv1Query *dup() const override {return new IGMPv1Query(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const IGMPv1Query& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, IGMPv1Query& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/networklayer/ipv4/IGMPMessage.msg:59</tt> by nedtool.
 * <pre>
 * packet IGMPv1Report extends IGMPMessage
 * {
 *     type = IGMPV1_MEMBERSHIP_REPORT;
 *     IPv4Address groupAddress;
 * }
 * </pre>
 */
class IGMPv1Report : public ::inet::IGMPMessage
{
  protected:
    IPv4Address groupAddress;

  private:
    void copy(const IGMPv1Report& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IGMPv1Report&);

  public:
    IGMPv1Report(const char *name=nullptr, short kind=0);
    IGMPv1Report(const IGMPv1Report& other);
    virtual ~IGMPv1Report();
    IGMPv1Report& operator=(const IGMPv1Report& other);
    virtual IGMPv1Report *dup() const override {return new IGMPv1Report(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual IPv4Address& getGroupAddress();
    virtual const IPv4Address& getGroupAddress() const {return const_cast<IGMPv1Report*>(this)->getGroupAddress();}
    virtual void setGroupAddress(const IPv4Address& groupAddress);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const IGMPv1Report& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, IGMPv1Report& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/networklayer/ipv4/IGMPMessage.msg:65</tt> by nedtool.
 * <pre>
 * packet IGMPv2Query extends IGMPQuery
 * {
 *     type = IGMP_MEMBERSHIP_QUERY;
 *     unsigned char maxRespTime;
 * }
 * </pre>
 */
class IGMPv2Query : public ::inet::IGMPQuery
{
  protected:
    unsigned char maxRespTime;

  private:
    void copy(const IGMPv2Query& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IGMPv2Query&);

  public:
    IGMPv2Query(const char *name=nullptr, short kind=0);
    IGMPv2Query(const IGMPv2Query& other);
    virtual ~IGMPv2Query();
    IGMPv2Query& operator=(const IGMPv2Query& other);
    virtual IGMPv2Query *dup() const override {return new IGMPv2Query(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual unsigned char getMaxRespTime() const;
    virtual void setMaxRespTime(unsigned char maxRespTime);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const IGMPv2Query& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, IGMPv2Query& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/networklayer/ipv4/IGMPMessage.msg:71</tt> by nedtool.
 * <pre>
 * packet IGMPv2Report extends IGMPMessage
 * {
 *     type = IGMPV2_MEMBERSHIP_REPORT;
 *     IPv4Address groupAddress;
 * }
 * </pre>
 */
class IGMPv2Report : public ::inet::IGMPMessage
{
  protected:
    IPv4Address groupAddress;

  private:
    void copy(const IGMPv2Report& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IGMPv2Report&);

  public:
    IGMPv2Report(const char *name=nullptr, short kind=0);
    IGMPv2Report(const IGMPv2Report& other);
    virtual ~IGMPv2Report();
    IGMPv2Report& operator=(const IGMPv2Report& other);
    virtual IGMPv2Report *dup() const override {return new IGMPv2Report(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual IPv4Address& getGroupAddress();
    virtual const IPv4Address& getGroupAddress() const {return const_cast<IGMPv2Report*>(this)->getGroupAddress();}
    virtual void setGroupAddress(const IPv4Address& groupAddress);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const IGMPv2Report& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, IGMPv2Report& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/networklayer/ipv4/IGMPMessage.msg:77</tt> by nedtool.
 * <pre>
 * packet IGMPv2Leave extends IGMPMessage
 * {
 *     type = IGMPV2_LEAVE_GROUP;
 *     IPv4Address groupAddress;
 * }
 * </pre>
 */
class IGMPv2Leave : public ::inet::IGMPMessage
{
  protected:
    IPv4Address groupAddress;

  private:
    void copy(const IGMPv2Leave& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IGMPv2Leave&);

  public:
    IGMPv2Leave(const char *name=nullptr, short kind=0);
    IGMPv2Leave(const IGMPv2Leave& other);
    virtual ~IGMPv2Leave();
    IGMPv2Leave& operator=(const IGMPv2Leave& other);
    virtual IGMPv2Leave *dup() const override {return new IGMPv2Leave(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual IPv4Address& getGroupAddress();
    virtual const IPv4Address& getGroupAddress() const {return const_cast<IGMPv2Leave*>(this)->getGroupAddress();}
    virtual void setGroupAddress(const IPv4Address& groupAddress);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const IGMPv2Leave& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, IGMPv2Leave& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/networklayer/ipv4/IGMPMessage.msg:90</tt> by nedtool.
 * <pre>
 * //
 * // IGMPv3Query extends IGMPv2Query, because
 * // IGMPv2 routers must accept IGMPv3Query packets.
 * //
 * // Note: in IGMPv3Query the maxResponseTime field is
 * // renamed to maxResponseCode and it is interpreted
 * // differently than in IGMPv2.
 * packet IGMPv3Query extends IGMPv2Query
 * {
 *     \@customize(true);
 *     bool suppressRouterProc;
 *     unsigned char robustnessVariable;
 *     unsigned char queryIntervalCode;
 *     IPv4AddressVector sourceList;
 *     abstract unsigned char maxRespCode;
 * }
 * </pre>
 *
 * IGMPv3Query_Base is only useful if it gets subclassed, and IGMPv3Query is derived from it.
 * The minimum code to be written for IGMPv3Query is the following:
 *
 * <pre>
 * class IGMPv3Query : public IGMPv3Query_Base
 * {
 *   private:
 *     void copy(const IGMPv3Query& other) { ... }

 *   public:
 *     IGMPv3Query(const char *name=nullptr, short kind=0) : IGMPv3Query_Base(name,kind) {}
 *     IGMPv3Query(const IGMPv3Query& other) : IGMPv3Query_Base(other) {copy(other);}
 *     IGMPv3Query& operator=(const IGMPv3Query& other) {if (this==&other) return *this; IGMPv3Query_Base::operator=(other); copy(other); return *this;}
 *     virtual IGMPv3Query *dup() const override {return new IGMPv3Query(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from IGMPv3Query_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(IGMPv3Query)
 * </pre>
 */
class IGMPv3Query_Base : public ::inet::IGMPv2Query
{
  protected:
    bool suppressRouterProc;
    unsigned char robustnessVariable;
    unsigned char queryIntervalCode;
    IPv4AddressVector sourceList;

  private:
    void copy(const IGMPv3Query_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IGMPv3Query_Base&);
    // make constructors protected to avoid instantiation
    IGMPv3Query_Base(const char *name=nullptr, short kind=0);
    IGMPv3Query_Base(const IGMPv3Query_Base& other);
    // make assignment operator protected to force the user override it
    IGMPv3Query_Base& operator=(const IGMPv3Query_Base& other);

  public:
    virtual ~IGMPv3Query_Base();
    virtual IGMPv3Query_Base *dup() const override {throw omnetpp::cRuntimeError("You forgot to manually add a dup() function to class IGMPv3Query");}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual bool getSuppressRouterProc() const;
    virtual void setSuppressRouterProc(bool suppressRouterProc);
    virtual unsigned char getRobustnessVariable() const;
    virtual void setRobustnessVariable(unsigned char robustnessVariable);
    virtual unsigned char getQueryIntervalCode() const;
    virtual void setQueryIntervalCode(unsigned char queryIntervalCode);
    virtual IPv4AddressVector& getSourceList();
    virtual const IPv4AddressVector& getSourceList() const {return const_cast<IGMPv3Query_Base*>(this)->getSourceList();}
    virtual void setSourceList(const IPv4AddressVector& sourceList);
    virtual unsigned char getMaxRespCode() const = 0;
    virtual void setMaxRespCode(unsigned char maxRespCode) = 0;
};

/**
 * Enum generated from <tt>/home/veins/artery/extern/inet/src/inet/networklayer/ipv4/IGMPMessage.msg:100</tt> by nedtool.
 * <pre>
 * enum GroupRecordType
 * {
 *     MODE_IS_INCLUDE = 1;
 *     MODE_IS_EXCLUDE = 2;
 *     CHANGE_TO_INCLUDE_MODE = 3;
 *     CHANGE_TO_EXCLUDE_MODE = 4;
 *     ALLOW_NEW_SOURCES = 5;
 *     BLOCK_OLD_SOURCE = 6;
 * }
 * </pre>
 */
enum GroupRecordType {
    MODE_IS_INCLUDE = 1,
    MODE_IS_EXCLUDE = 2,
    CHANGE_TO_INCLUDE_MODE = 3,
    CHANGE_TO_EXCLUDE_MODE = 4,
    ALLOW_NEW_SOURCES = 5,
    BLOCK_OLD_SOURCE = 6
};

/**
 * Struct generated from /home/veins/artery/extern/inet/src/inet/networklayer/ipv4/IGMPMessage.msg:110 by nedtool.
 */
struct GroupRecord
{
    GroupRecord();
    int recordType;
    IPv4Address groupAddress;
    IPv4AddressVector sourceList;
};

// helpers for local use
void __doPacking(omnetpp::cCommBuffer *b, const GroupRecord& a);
void __doUnpacking(omnetpp::cCommBuffer *b, GroupRecord& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const GroupRecord& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, GroupRecord& obj) { __doUnpacking(b, obj); }

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/networklayer/ipv4/IGMPMessage.msg:117</tt> by nedtool.
 * <pre>
 * packet IGMPv3Report extends IGMPMessage
 * {
 *     type = IGMPV3_MEMBERSHIP_REPORT;
 *     GroupRecord groupRecord[];
 * }
 * </pre>
 */
class IGMPv3Report : public ::inet::IGMPMessage
{
  protected:
    GroupRecord *groupRecord; // array ptr
    unsigned int groupRecord_arraysize;

  private:
    void copy(const IGMPv3Report& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const IGMPv3Report&);

  public:
    IGMPv3Report(const char *name=nullptr, short kind=0);
    IGMPv3Report(const IGMPv3Report& other);
    virtual ~IGMPv3Report();
    IGMPv3Report& operator=(const IGMPv3Report& other);
    virtual IGMPv3Report *dup() const override {return new IGMPv3Report(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual void setGroupRecordArraySize(unsigned int size);
    virtual unsigned int getGroupRecordArraySize() const;
    virtual GroupRecord& getGroupRecord(unsigned int k);
    virtual const GroupRecord& getGroupRecord(unsigned int k) const {return const_cast<IGMPv3Report*>(this)->getGroupRecord(k);}
    virtual void setGroupRecord(unsigned int k, const GroupRecord& groupRecord);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const IGMPv3Report& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, IGMPv3Report& obj) {obj.parsimUnpack(b);}

} // namespace inet

#endif // ifndef __INET_IGMPMESSAGE_M_H

