//
// Generated file, do not edit! Created by nedtool 5.6 from /home/veins/artery/extern/inet/src/inet/routing/pim/PIMPacket.msg.
//

#ifndef __INET_PIMPACKET_M_H
#define __INET_PIMPACKET_M_H

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

#define PIM_HEADER_LENGTH 4
#define ENCODED_UNICODE_ADDRESS_LENGTH 6 // IPv4 only
#define ENCODED_GROUP_ADDRESS_LENGTH   8 // IPv4 only
#define ENCODED_SOURCE_ADDRESS_LENGTH  8 // IPv4 only
// }}


namespace inet {

/**
 * Enum generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/pim/PIMPacket.msg:36</tt> by nedtool.
 * <pre>
 * enum PIMPacketType
 * {
 *     Hello = 0;
 *     Register = 1;
 *     RegisterStop = 2;
 *     JoinPrune = 3;
 *     Bootstrap = 4;
 *     Assert = 5;
 *     Graft = 6;
 *     GraftAck = 7;
 *     CandidateRPAdvertisement = 8;
 *     StateRefresh = 9;
 * }
 * </pre>
 */
enum PIMPacketType {
    Hello = 0,
    Register = 1,
    RegisterStop = 2,
    JoinPrune = 3,
    Bootstrap = 4,
    Assert = 5,
    Graft = 6,
    GraftAck = 7,
    CandidateRPAdvertisement = 8,
    StateRefresh = 9
};

/**
 * Enum generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/pim/PIMPacket.msg:50</tt> by nedtool.
 * <pre>
 * enum PIMHelloOptionType
 * {
 *     Holdtime = 1;
 *     LANPruneDelay = 2;
 *     DRPriority = 19;
 *     GenerationID = 20;
 *     StateRefreshCapable = 21;
 *     AddressList = 24;
 * }
 * </pre>
 */
enum PIMHelloOptionType {
    Holdtime = 1,
    LANPruneDelay = 2,
    DRPriority = 19,
    GenerationID = 20,
    StateRefreshCapable = 21,
    AddressList = 24
};

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/pim/PIMPacket.msg:60</tt> by nedtool.
 * <pre>
 * class HelloOption
 * {
 *     short type \@enum(PIMHelloOptionType);
 * }
 * </pre>
 */
class HelloOption : public ::omnetpp::cObject
{
  protected:
    short type;

  private:
    void copy(const HelloOption& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const HelloOption&);

  public:
    HelloOption();
    HelloOption(const HelloOption& other);
    virtual ~HelloOption();
    HelloOption& operator=(const HelloOption& other);
    virtual HelloOption *dup() const override {return new HelloOption(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual short getType() const;
    virtual void setType(short type);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const HelloOption& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, HelloOption& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/pim/PIMPacket.msg:65</tt> by nedtool.
 * <pre>
 * class HoldtimeOption extends HelloOption
 * {
 *     type = Holdtime;
 *     uint16_t holdTime;
 * }
 * </pre>
 */
class HoldtimeOption : public ::inet::HelloOption
{
  protected:
    uint16_t holdTime;

  private:
    void copy(const HoldtimeOption& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const HoldtimeOption&);

  public:
    HoldtimeOption();
    HoldtimeOption(const HoldtimeOption& other);
    virtual ~HoldtimeOption();
    HoldtimeOption& operator=(const HoldtimeOption& other);
    virtual HoldtimeOption *dup() const override {return new HoldtimeOption(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual uint16_t getHoldTime() const;
    virtual void setHoldTime(uint16_t holdTime);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const HoldtimeOption& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, HoldtimeOption& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/pim/PIMPacket.msg:71</tt> by nedtool.
 * <pre>
 * class LANPruneDelayOption extends HelloOption
 * {
 *     type = LANPruneDelay;
 *     uint16_t propagationDelay;
 *     uint16_t overrideInterval;
 * }
 * </pre>
 */
class LANPruneDelayOption : public ::inet::HelloOption
{
  protected:
    uint16_t propagationDelay;
    uint16_t overrideInterval;

  private:
    void copy(const LANPruneDelayOption& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const LANPruneDelayOption&);

  public:
    LANPruneDelayOption();
    LANPruneDelayOption(const LANPruneDelayOption& other);
    virtual ~LANPruneDelayOption();
    LANPruneDelayOption& operator=(const LANPruneDelayOption& other);
    virtual LANPruneDelayOption *dup() const override {return new LANPruneDelayOption(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual uint16_t getPropagationDelay() const;
    virtual void setPropagationDelay(uint16_t propagationDelay);
    virtual uint16_t getOverrideInterval() const;
    virtual void setOverrideInterval(uint16_t overrideInterval);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const LANPruneDelayOption& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, LANPruneDelayOption& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/pim/PIMPacket.msg:78</tt> by nedtool.
 * <pre>
 * class DRPriorityOption extends HelloOption
 * {
 *     type = DRPriority;
 *     uint32_t priority;
 * }
 * </pre>
 */
class DRPriorityOption : public ::inet::HelloOption
{
  protected:
    uint32_t priority;

  private:
    void copy(const DRPriorityOption& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const DRPriorityOption&);

  public:
    DRPriorityOption();
    DRPriorityOption(const DRPriorityOption& other);
    virtual ~DRPriorityOption();
    DRPriorityOption& operator=(const DRPriorityOption& other);
    virtual DRPriorityOption *dup() const override {return new DRPriorityOption(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual uint32_t getPriority() const;
    virtual void setPriority(uint32_t priority);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const DRPriorityOption& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, DRPriorityOption& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/pim/PIMPacket.msg:84</tt> by nedtool.
 * <pre>
 * class GenerationIDOption extends HelloOption
 * {
 *     type = GenerationID;
 *     uint32_t generationID;
 * }
 * 
 * //class AddressListOption extends HelloOption
 * //{
 * //    IPv4Address secondaryAddresses[];
 * //}
 * </pre>
 */
class GenerationIDOption : public ::inet::HelloOption
{
  protected:
    uint32_t generationID;

  private:
    void copy(const GenerationIDOption& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const GenerationIDOption&);

  public:
    GenerationIDOption();
    GenerationIDOption(const GenerationIDOption& other);
    virtual ~GenerationIDOption();
    GenerationIDOption& operator=(const GenerationIDOption& other);
    virtual GenerationIDOption *dup() const override {return new GenerationIDOption(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual uint32_t getGenerationID() const;
    virtual void setGenerationID(uint32_t generationID);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const GenerationIDOption& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, GenerationIDOption& obj) {obj.parsimUnpack(b);}

// cplusplus {{
 class HelloOption; typedef HelloOption *HelloOptionPtr; 
// }}

/**
 * Struct generated from /home/veins/artery/extern/inet/src/inet/routing/pim/PIMPacket.msg:98 by nedtool.
 */
struct EncodedAddress
{
    EncodedAddress();
    IPv4Address IPaddress;
    bool S;
    bool W;
    bool R;
};

// helpers for local use
void __doPacking(omnetpp::cCommBuffer *b, const EncodedAddress& a);
void __doUnpacking(omnetpp::cCommBuffer *b, EncodedAddress& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const EncodedAddress& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, EncodedAddress& obj) { __doUnpacking(b, obj); }

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/pim/PIMPacket.msg:108</tt> by nedtool.
 * <pre>
 * // Record for Join/Prune message
 * // in structure it is not possible to use dynamic arrays, iit is needed to use class
 * class JoinPruneGroup
 * {
 *     IPv4Address groupAddress;
 *     EncodedAddress joinedSourceAddress[];
 *     EncodedAddress prunedSourceAddress[];
 * }
 * </pre>
 */
class JoinPruneGroup : public ::omnetpp::cObject
{
  protected:
    IPv4Address groupAddress;
    EncodedAddress *joinedSourceAddress; // array ptr
    unsigned int joinedSourceAddress_arraysize;
    EncodedAddress *prunedSourceAddress; // array ptr
    unsigned int prunedSourceAddress_arraysize;

  private:
    void copy(const JoinPruneGroup& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const JoinPruneGroup&);

  public:
    JoinPruneGroup();
    JoinPruneGroup(const JoinPruneGroup& other);
    virtual ~JoinPruneGroup();
    JoinPruneGroup& operator=(const JoinPruneGroup& other);
    virtual JoinPruneGroup *dup() const override {return new JoinPruneGroup(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual IPv4Address& getGroupAddress();
    virtual const IPv4Address& getGroupAddress() const {return const_cast<JoinPruneGroup*>(this)->getGroupAddress();}
    virtual void setGroupAddress(const IPv4Address& groupAddress);
    virtual void setJoinedSourceAddressArraySize(unsigned int size);
    virtual unsigned int getJoinedSourceAddressArraySize() const;
    virtual EncodedAddress& getJoinedSourceAddress(unsigned int k);
    virtual const EncodedAddress& getJoinedSourceAddress(unsigned int k) const {return const_cast<JoinPruneGroup*>(this)->getJoinedSourceAddress(k);}
    virtual void setJoinedSourceAddress(unsigned int k, const EncodedAddress& joinedSourceAddress);
    virtual void setPrunedSourceAddressArraySize(unsigned int size);
    virtual unsigned int getPrunedSourceAddressArraySize() const;
    virtual EncodedAddress& getPrunedSourceAddress(unsigned int k);
    virtual const EncodedAddress& getPrunedSourceAddress(unsigned int k) const {return const_cast<JoinPruneGroup*>(this)->getPrunedSourceAddress(k);}
    virtual void setPrunedSourceAddress(unsigned int k, const EncodedAddress& prunedSourceAddress);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const JoinPruneGroup& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, JoinPruneGroup& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/pim/PIMPacket.msg:117</tt> by nedtool.
 * <pre>
 * ///////////////////////////////////////////////////////////////////////////////////////////////
 * // Header
 * packet PIMPacket
 * {
 *     short version = 2;
 *     short type \@enum(PIMPacketType);
 * }
 * </pre>
 */
class PIMPacket : public ::omnetpp::cPacket
{
  protected:
    short version;
    short type;

  private:
    void copy(const PIMPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const PIMPacket&);

  public:
    PIMPacket(const char *name=nullptr, short kind=0);
    PIMPacket(const PIMPacket& other);
    virtual ~PIMPacket();
    PIMPacket& operator=(const PIMPacket& other);
    virtual PIMPacket *dup() const override {return new PIMPacket(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual short getVersion() const;
    virtual void setVersion(short version);
    virtual short getType() const;
    virtual void setType(short type);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const PIMPacket& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, PIMPacket& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/pim/PIMPacket.msg:125</tt> by nedtool.
 * <pre>
 * // Hello message
 * // DM, SM
 * packet PIMHello extends PIMPacket
 * {
 *     \@customize(true);
 *     type = Hello;
 *     abstract HelloOptionPtr options[];
 * }
 * </pre>
 *
 * PIMHello_Base is only useful if it gets subclassed, and PIMHello is derived from it.
 * The minimum code to be written for PIMHello is the following:
 *
 * <pre>
 * class PIMHello : public PIMHello_Base
 * {
 *   private:
 *     void copy(const PIMHello& other) { ... }

 *   public:
 *     PIMHello(const char *name=nullptr, short kind=0) : PIMHello_Base(name,kind) {}
 *     PIMHello(const PIMHello& other) : PIMHello_Base(other) {copy(other);}
 *     PIMHello& operator=(const PIMHello& other) {if (this==&other) return *this; PIMHello_Base::operator=(other); copy(other); return *this;}
 *     virtual PIMHello *dup() const override {return new PIMHello(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from PIMHello_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(PIMHello)
 * </pre>
 */
class PIMHello_Base : public ::inet::PIMPacket
{
  protected:

  private:
    void copy(const PIMHello_Base& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const PIMHello_Base&);
    // make constructors protected to avoid instantiation
    PIMHello_Base(const char *name=nullptr, short kind=0);
    PIMHello_Base(const PIMHello_Base& other);
    // make assignment operator protected to force the user override it
    PIMHello_Base& operator=(const PIMHello_Base& other);

  public:
    virtual ~PIMHello_Base();
    virtual PIMHello_Base *dup() const override {throw omnetpp::cRuntimeError("You forgot to manually add a dup() function to class PIMHello");}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual void setOptionsArraySize(unsigned int size) = 0;
    virtual unsigned int getOptionsArraySize() const = 0;
    virtual HelloOptionPtr& getOptions(unsigned int k) = 0;
    virtual const HelloOptionPtr& getOptions(unsigned int k) const {return const_cast<PIMHello_Base*>(this)->getOptions(k);}
    virtual void setOptions(unsigned int k, const HelloOptionPtr& options) = 0;
};

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/pim/PIMPacket.msg:134</tt> by nedtool.
 * <pre>
 * // Join/Prune message
 * // DM, SM
 * packet PIMJoinPrune extends PIMPacket
 * {
 *     type = JoinPrune;
 *     IPv4Address upstreamNeighborAddress;
 *     int holdTime;
 *     //int                numGroups;
 *     JoinPruneGroup joinPruneGroups[];
 * }
 * </pre>
 */
class PIMJoinPrune : public ::inet::PIMPacket
{
  protected:
    IPv4Address upstreamNeighborAddress;
    int holdTime;
    JoinPruneGroup *joinPruneGroups; // array ptr
    unsigned int joinPruneGroups_arraysize;

  private:
    void copy(const PIMJoinPrune& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const PIMJoinPrune&);

  public:
    PIMJoinPrune(const char *name=nullptr, short kind=0);
    PIMJoinPrune(const PIMJoinPrune& other);
    virtual ~PIMJoinPrune();
    PIMJoinPrune& operator=(const PIMJoinPrune& other);
    virtual PIMJoinPrune *dup() const override {return new PIMJoinPrune(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual IPv4Address& getUpstreamNeighborAddress();
    virtual const IPv4Address& getUpstreamNeighborAddress() const {return const_cast<PIMJoinPrune*>(this)->getUpstreamNeighborAddress();}
    virtual void setUpstreamNeighborAddress(const IPv4Address& upstreamNeighborAddress);
    virtual int getHoldTime() const;
    virtual void setHoldTime(int holdTime);
    virtual void setJoinPruneGroupsArraySize(unsigned int size);
    virtual unsigned int getJoinPruneGroupsArraySize() const;
    virtual JoinPruneGroup& getJoinPruneGroups(unsigned int k);
    virtual const JoinPruneGroup& getJoinPruneGroups(unsigned int k) const {return const_cast<PIMJoinPrune*>(this)->getJoinPruneGroups(k);}
    virtual void setJoinPruneGroups(unsigned int k, const JoinPruneGroup& joinPruneGroups);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const PIMJoinPrune& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, PIMJoinPrune& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/pim/PIMPacket.msg:145</tt> by nedtool.
 * <pre>
 * // Assert message
 * // DM, SM
 * packet PIMAssert extends PIMPacket
 * {
 *     type = Assert;
 *     IPv4Address groupAddress;
 *     IPv4Address sourceAddress;
 *     bool R;
 *     int metric;
 *     int metricPreference;
 * }
 * </pre>
 */
class PIMAssert : public ::inet::PIMPacket
{
  protected:
    IPv4Address groupAddress;
    IPv4Address sourceAddress;
    bool R;
    int metric;
    int metricPreference;

  private:
    void copy(const PIMAssert& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const PIMAssert&);

  public:
    PIMAssert(const char *name=nullptr, short kind=0);
    PIMAssert(const PIMAssert& other);
    virtual ~PIMAssert();
    PIMAssert& operator=(const PIMAssert& other);
    virtual PIMAssert *dup() const override {return new PIMAssert(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual IPv4Address& getGroupAddress();
    virtual const IPv4Address& getGroupAddress() const {return const_cast<PIMAssert*>(this)->getGroupAddress();}
    virtual void setGroupAddress(const IPv4Address& groupAddress);
    virtual IPv4Address& getSourceAddress();
    virtual const IPv4Address& getSourceAddress() const {return const_cast<PIMAssert*>(this)->getSourceAddress();}
    virtual void setSourceAddress(const IPv4Address& sourceAddress);
    virtual bool getR() const;
    virtual void setR(bool R);
    virtual int getMetric() const;
    virtual void setMetric(int metric);
    virtual int getMetricPreference() const;
    virtual void setMetricPreference(int metricPreference);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const PIMAssert& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, PIMAssert& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/pim/PIMPacket.msg:157</tt> by nedtool.
 * <pre>
 * // Graft message, only message send by unicast
 * // DM
 * packet PIMGraft extends PIMJoinPrune
 * {
 *     type = Graft;
 *     holdTime = 0;
 * }
 * </pre>
 */
class PIMGraft : public ::inet::PIMJoinPrune
{
  protected:

  private:
    void copy(const PIMGraft& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const PIMGraft&);

  public:
    PIMGraft(const char *name=nullptr, short kind=0);
    PIMGraft(const PIMGraft& other);
    virtual ~PIMGraft();
    PIMGraft& operator=(const PIMGraft& other);
    virtual PIMGraft *dup() const override {return new PIMGraft(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const PIMGraft& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, PIMGraft& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/pim/PIMPacket.msg:165</tt> by nedtool.
 * <pre>
 * // GraftAck message
 * // DM
 * packet PIMGraftAck extends PIMGraft
 * {
 *     type = GraftAck;
 * }
 * </pre>
 */
class PIMGraftAck : public ::inet::PIMGraft
{
  protected:

  private:
    void copy(const PIMGraftAck& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const PIMGraftAck&);

  public:
    PIMGraftAck(const char *name=nullptr, short kind=0);
    PIMGraftAck(const PIMGraftAck& other);
    virtual ~PIMGraftAck();
    PIMGraftAck& operator=(const PIMGraftAck& other);
    virtual PIMGraftAck *dup() const override {return new PIMGraftAck(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const PIMGraftAck& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, PIMGraftAck& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/pim/PIMPacket.msg:172</tt> by nedtool.
 * <pre>
 * // State Refresh message
 * // DM
 * packet PIMStateRefresh extends PIMPacket
 * {
 *     type = StateRefresh;
 *     IPv4Address groupAddress;
 *     IPv4Address sourceAddress;
 *     IPv4Address originatorAddress;
 *     int metric;
 *     int metricPreference;
 *     short maskLen;
 *     short ttl;
 *     bool P;
 *     int interval;
 * }
 * </pre>
 */
class PIMStateRefresh : public ::inet::PIMPacket
{
  protected:
    IPv4Address groupAddress;
    IPv4Address sourceAddress;
    IPv4Address originatorAddress;
    int metric;
    int metricPreference;
    short maskLen;
    short ttl;
    bool P;
    int interval;

  private:
    void copy(const PIMStateRefresh& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const PIMStateRefresh&);

  public:
    PIMStateRefresh(const char *name=nullptr, short kind=0);
    PIMStateRefresh(const PIMStateRefresh& other);
    virtual ~PIMStateRefresh();
    PIMStateRefresh& operator=(const PIMStateRefresh& other);
    virtual PIMStateRefresh *dup() const override {return new PIMStateRefresh(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual IPv4Address& getGroupAddress();
    virtual const IPv4Address& getGroupAddress() const {return const_cast<PIMStateRefresh*>(this)->getGroupAddress();}
    virtual void setGroupAddress(const IPv4Address& groupAddress);
    virtual IPv4Address& getSourceAddress();
    virtual const IPv4Address& getSourceAddress() const {return const_cast<PIMStateRefresh*>(this)->getSourceAddress();}
    virtual void setSourceAddress(const IPv4Address& sourceAddress);
    virtual IPv4Address& getOriginatorAddress();
    virtual const IPv4Address& getOriginatorAddress() const {return const_cast<PIMStateRefresh*>(this)->getOriginatorAddress();}
    virtual void setOriginatorAddress(const IPv4Address& originatorAddress);
    virtual int getMetric() const;
    virtual void setMetric(int metric);
    virtual int getMetricPreference() const;
    virtual void setMetricPreference(int metricPreference);
    virtual short getMaskLen() const;
    virtual void setMaskLen(short maskLen);
    virtual short getTtl() const;
    virtual void setTtl(short ttl);
    virtual bool getP() const;
    virtual void setP(bool P);
    virtual int getInterval() const;
    virtual void setInterval(int interval);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const PIMStateRefresh& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, PIMStateRefresh& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/pim/PIMPacket.msg:187</tt> by nedtool.
 * <pre>
 * // Register message
 * // SM
 * packet PIMRegister extends PIMPacket
 * {
 *     type = Register;
 *     bool B;
 *     bool N;
 * }
 * </pre>
 */
class PIMRegister : public ::inet::PIMPacket
{
  protected:
    bool B;
    bool N;

  private:
    void copy(const PIMRegister& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const PIMRegister&);

  public:
    PIMRegister(const char *name=nullptr, short kind=0);
    PIMRegister(const PIMRegister& other);
    virtual ~PIMRegister();
    PIMRegister& operator=(const PIMRegister& other);
    virtual PIMRegister *dup() const override {return new PIMRegister(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual bool getB() const;
    virtual void setB(bool B);
    virtual bool getN() const;
    virtual void setN(bool N);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const PIMRegister& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, PIMRegister& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/routing/pim/PIMPacket.msg:196</tt> by nedtool.
 * <pre>
 * // Register-Stop message
 * // SM
 * packet PIMRegisterStop extends PIMPacket
 * {
 *     type = RegisterStop;
 *     IPv4Address groupAddress;
 *     IPv4Address sourceAddress;
 * }
 * </pre>
 */
class PIMRegisterStop : public ::inet::PIMPacket
{
  protected:
    IPv4Address groupAddress;
    IPv4Address sourceAddress;

  private:
    void copy(const PIMRegisterStop& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const PIMRegisterStop&);

  public:
    PIMRegisterStop(const char *name=nullptr, short kind=0);
    PIMRegisterStop(const PIMRegisterStop& other);
    virtual ~PIMRegisterStop();
    PIMRegisterStop& operator=(const PIMRegisterStop& other);
    virtual PIMRegisterStop *dup() const override {return new PIMRegisterStop(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual IPv4Address& getGroupAddress();
    virtual const IPv4Address& getGroupAddress() const {return const_cast<PIMRegisterStop*>(this)->getGroupAddress();}
    virtual void setGroupAddress(const IPv4Address& groupAddress);
    virtual IPv4Address& getSourceAddress();
    virtual const IPv4Address& getSourceAddress() const {return const_cast<PIMRegisterStop*>(this)->getSourceAddress();}
    virtual void setSourceAddress(const IPv4Address& sourceAddress);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const PIMRegisterStop& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, PIMRegisterStop& obj) {obj.parsimUnpack(b);}

} // namespace inet

#endif // ifndef __INET_PIMPACKET_M_H

