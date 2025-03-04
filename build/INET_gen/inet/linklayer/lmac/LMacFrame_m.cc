//
// Generated file, do not edit! Created by nedtool 5.6 from /home/veins/artery/extern/inet/src/inet/linklayer/lmac/LMacFrame.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wshadow"
#  pragma clang diagnostic ignored "-Wconversion"
#  pragma clang diagnostic ignored "-Wunused-parameter"
#  pragma clang diagnostic ignored "-Wc++98-compat"
#  pragma clang diagnostic ignored "-Wunreachable-code-break"
#  pragma clang diagnostic ignored "-Wold-style-cast"
#elif defined(__GNUC__)
#  pragma GCC diagnostic ignored "-Wshadow"
#  pragma GCC diagnostic ignored "-Wconversion"
#  pragma GCC diagnostic ignored "-Wunused-parameter"
#  pragma GCC diagnostic ignored "-Wold-style-cast"
#  pragma GCC diagnostic ignored "-Wsuggest-attribute=noreturn"
#  pragma GCC diagnostic ignored "-Wfloat-conversion"
#endif

#include <iostream>
#include <sstream>
#include "LMacFrame_m.h"

namespace omnetpp {

// Template pack/unpack rules. They are declared *after* a1l type-specific pack functions for multiple reasons.
// They are in the omnetpp namespace, to allow them to be found by argument-dependent lookup via the cCommBuffer argument

// Packing/unpacking an std::vector
template<typename T, typename A>
void doParsimPacking(omnetpp::cCommBuffer *buffer, const std::vector<T,A>& v)
{
    int n = v.size();
    doParsimPacking(buffer, n);
    for (int i = 0; i < n; i++)
        doParsimPacking(buffer, v[i]);
}

template<typename T, typename A>
void doParsimUnpacking(omnetpp::cCommBuffer *buffer, std::vector<T,A>& v)
{
    int n;
    doParsimUnpacking(buffer, n);
    v.resize(n);
    for (int i = 0; i < n; i++)
        doParsimUnpacking(buffer, v[i]);
}

// Packing/unpacking an std::list
template<typename T, typename A>
void doParsimPacking(omnetpp::cCommBuffer *buffer, const std::list<T,A>& l)
{
    doParsimPacking(buffer, (int)l.size());
    for (typename std::list<T,A>::const_iterator it = l.begin(); it != l.end(); ++it)
        doParsimPacking(buffer, (T&)*it);
}

template<typename T, typename A>
void doParsimUnpacking(omnetpp::cCommBuffer *buffer, std::list<T,A>& l)
{
    int n;
    doParsimUnpacking(buffer, n);
    for (int i=0; i<n; i++) {
        l.push_back(T());
        doParsimUnpacking(buffer, l.back());
    }
}

// Packing/unpacking an std::set
template<typename T, typename Tr, typename A>
void doParsimPacking(omnetpp::cCommBuffer *buffer, const std::set<T,Tr,A>& s)
{
    doParsimPacking(buffer, (int)s.size());
    for (typename std::set<T,Tr,A>::const_iterator it = s.begin(); it != s.end(); ++it)
        doParsimPacking(buffer, *it);
}

template<typename T, typename Tr, typename A>
void doParsimUnpacking(omnetpp::cCommBuffer *buffer, std::set<T,Tr,A>& s)
{
    int n;
    doParsimUnpacking(buffer, n);
    for (int i=0; i<n; i++) {
        T x;
        doParsimUnpacking(buffer, x);
        s.insert(x);
    }
}

// Packing/unpacking an std::map
template<typename K, typename V, typename Tr, typename A>
void doParsimPacking(omnetpp::cCommBuffer *buffer, const std::map<K,V,Tr,A>& m)
{
    doParsimPacking(buffer, (int)m.size());
    for (typename std::map<K,V,Tr,A>::const_iterator it = m.begin(); it != m.end(); ++it) {
        doParsimPacking(buffer, it->first);
        doParsimPacking(buffer, it->second);
    }
}

template<typename K, typename V, typename Tr, typename A>
void doParsimUnpacking(omnetpp::cCommBuffer *buffer, std::map<K,V,Tr,A>& m)
{
    int n;
    doParsimUnpacking(buffer, n);
    for (int i=0; i<n; i++) {
        K k; V v;
        doParsimUnpacking(buffer, k);
        doParsimUnpacking(buffer, v);
        m[k] = v;
    }
}

// Default pack/unpack function for arrays
template<typename T>
void doParsimArrayPacking(omnetpp::cCommBuffer *b, const T *t, int n)
{
    for (int i = 0; i < n; i++)
        doParsimPacking(b, t[i]);
}

template<typename T>
void doParsimArrayUnpacking(omnetpp::cCommBuffer *b, T *t, int n)
{
    for (int i = 0; i < n; i++)
        doParsimUnpacking(b, t[i]);
}

// Default rule to prevent compiler from choosing base class' doParsimPacking() function
template<typename T>
void doParsimPacking(omnetpp::cCommBuffer *, const T& t)
{
    throw omnetpp::cRuntimeError("Parsim error: No doParsimPacking() function for type %s", omnetpp::opp_typename(typeid(t)));
}

template<typename T>
void doParsimUnpacking(omnetpp::cCommBuffer *, T& t)
{
    throw omnetpp::cRuntimeError("Parsim error: No doParsimUnpacking() function for type %s", omnetpp::opp_typename(typeid(t)));
}

}  // namespace omnetpp

namespace inet {

// forward
template<typename T, typename A>
std::ostream& operator<<(std::ostream& out, const std::vector<T,A>& vec);

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
inline std::ostream& operator<<(std::ostream& out,const T&) {return out;}

// operator<< for std::vector<T>
template<typename T, typename A>
inline std::ostream& operator<<(std::ostream& out, const std::vector<T,A>& vec)
{
    out.put('{');
    for(typename std::vector<T,A>::const_iterator it = vec.begin(); it != vec.end(); ++it)
    {
        if (it != vec.begin()) {
            out.put(','); out.put(' ');
        }
        out << *it;
    }
    out.put('}');
    
    char buf[32];
    sprintf(buf, " (size=%u)", (unsigned int)vec.size());
    out.write(buf, strlen(buf));
    return out;
}

Register_Class(LMacFrame)

LMacFrame::LMacFrame(const char *name, short kind) : ::inet::MACFrameBase(name,kind)
{
    this->mySlot = 0;
    occupiedSlots_arraysize = 0;
    this->occupiedSlots = 0;
}

LMacFrame::LMacFrame(const LMacFrame& other) : ::inet::MACFrameBase(other)
{
    occupiedSlots_arraysize = 0;
    this->occupiedSlots = 0;
    copy(other);
}

LMacFrame::~LMacFrame()
{
    delete [] this->occupiedSlots;
}

LMacFrame& LMacFrame::operator=(const LMacFrame& other)
{
    if (this==&other) return *this;
    ::inet::MACFrameBase::operator=(other);
    copy(other);
    return *this;
}

void LMacFrame::copy(const LMacFrame& other)
{
    this->mySlot = other.mySlot;
    delete [] this->occupiedSlots;
    this->occupiedSlots = (other.occupiedSlots_arraysize==0) ? nullptr : new MACAddress[other.occupiedSlots_arraysize];
    occupiedSlots_arraysize = other.occupiedSlots_arraysize;
    for (unsigned int i=0; i<occupiedSlots_arraysize; i++)
        this->occupiedSlots[i] = other.occupiedSlots[i];
}

void LMacFrame::parsimPack(omnetpp::cCommBuffer *b) const
{
    ::inet::MACFrameBase::parsimPack(b);
    doParsimPacking(b,this->mySlot);
    b->pack(occupiedSlots_arraysize);
    doParsimArrayPacking(b,this->occupiedSlots,occupiedSlots_arraysize);
}

void LMacFrame::parsimUnpack(omnetpp::cCommBuffer *b)
{
    ::inet::MACFrameBase::parsimUnpack(b);
    doParsimUnpacking(b,this->mySlot);
    delete [] this->occupiedSlots;
    b->unpack(occupiedSlots_arraysize);
    if (occupiedSlots_arraysize==0) {
        this->occupiedSlots = 0;
    } else {
        this->occupiedSlots = new MACAddress[occupiedSlots_arraysize];
        doParsimArrayUnpacking(b,this->occupiedSlots,occupiedSlots_arraysize);
    }
}

int LMacFrame::getMySlot() const
{
    return this->mySlot;
}

void LMacFrame::setMySlot(int mySlot)
{
    this->mySlot = mySlot;
}

void LMacFrame::setOccupiedSlotsArraySize(unsigned int size)
{
    MACAddress *occupiedSlots2 = (size==0) ? nullptr : new MACAddress[size];
    unsigned int sz = occupiedSlots_arraysize < size ? occupiedSlots_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        occupiedSlots2[i] = this->occupiedSlots[i];
    occupiedSlots_arraysize = size;
    delete [] this->occupiedSlots;
    this->occupiedSlots = occupiedSlots2;
}

unsigned int LMacFrame::getOccupiedSlotsArraySize() const
{
    return occupiedSlots_arraysize;
}

MACAddress& LMacFrame::getOccupiedSlots(unsigned int k)
{
    if (k>=occupiedSlots_arraysize) throw omnetpp::cRuntimeError("Array of size %d indexed by %d", occupiedSlots_arraysize, k);
    return this->occupiedSlots[k];
}

void LMacFrame::setOccupiedSlots(unsigned int k, const MACAddress& occupiedSlots)
{
    if (k>=occupiedSlots_arraysize) throw omnetpp::cRuntimeError("Array of size %d indexed by %d", occupiedSlots_arraysize, k);
    this->occupiedSlots[k] = occupiedSlots;
}

class LMacFrameDescriptor : public omnetpp::cClassDescriptor
{
  private:
    mutable const char **propertynames;
  public:
    LMacFrameDescriptor();
    virtual ~LMacFrameDescriptor();

    virtual bool doesSupport(omnetpp::cObject *obj) const override;
    virtual const char **getPropertyNames() const override;
    virtual const char *getProperty(const char *propertyname) const override;
    virtual int getFieldCount() const override;
    virtual const char *getFieldName(int field) const override;
    virtual int findField(const char *fieldName) const override;
    virtual unsigned int getFieldTypeFlags(int field) const override;
    virtual const char *getFieldTypeString(int field) const override;
    virtual const char **getFieldPropertyNames(int field) const override;
    virtual const char *getFieldProperty(int field, const char *propertyname) const override;
    virtual int getFieldArraySize(void *object, int field) const override;

    virtual const char *getFieldDynamicTypeString(void *object, int field, int i) const override;
    virtual std::string getFieldValueAsString(void *object, int field, int i) const override;
    virtual bool setFieldValueAsString(void *object, int field, int i, const char *value) const override;

    virtual const char *getFieldStructName(int field) const override;
    virtual void *getFieldStructValuePointer(void *object, int field, int i) const override;
};

Register_ClassDescriptor(LMacFrameDescriptor)

LMacFrameDescriptor::LMacFrameDescriptor() : omnetpp::cClassDescriptor("inet::LMacFrame", "inet::MACFrameBase")
{
    propertynames = nullptr;
}

LMacFrameDescriptor::~LMacFrameDescriptor()
{
    delete[] propertynames;
}

bool LMacFrameDescriptor::doesSupport(omnetpp::cObject *obj) const
{
    return dynamic_cast<LMacFrame *>(obj)!=nullptr;
}

const char **LMacFrameDescriptor::getPropertyNames() const
{
    if (!propertynames) {
        static const char *names[] = {  nullptr };
        omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
        const char **basenames = basedesc ? basedesc->getPropertyNames() : nullptr;
        propertynames = mergeLists(basenames, names);
    }
    return propertynames;
}

const char *LMacFrameDescriptor::getProperty(const char *propertyname) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : nullptr;
}

int LMacFrameDescriptor::getFieldCount() const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount() : 2;
}

unsigned int LMacFrameDescriptor::getFieldTypeFlags(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeFlags(field);
        field -= basedesc->getFieldCount();
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *LMacFrameDescriptor::getFieldName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldName(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldNames[] = {
        "mySlot",
        "occupiedSlots",
    };
    return (field>=0 && field<2) ? fieldNames[field] : nullptr;
}

int LMacFrameDescriptor::findField(const char *fieldName) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount() : 0;
    if (fieldName[0]=='m' && strcmp(fieldName, "mySlot")==0) return base+0;
    if (fieldName[0]=='o' && strcmp(fieldName, "occupiedSlots")==0) return base+1;
    return basedesc ? basedesc->findField(fieldName) : -1;
}

const char *LMacFrameDescriptor::getFieldTypeString(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeString(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "MACAddress",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : nullptr;
}

const char **LMacFrameDescriptor::getFieldPropertyNames(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldPropertyNames(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

const char *LMacFrameDescriptor::getFieldProperty(int field, const char *propertyname) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldProperty(field, propertyname);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

int LMacFrameDescriptor::getFieldArraySize(void *object, int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldArraySize(object, field);
        field -= basedesc->getFieldCount();
    }
    LMacFrame *pp = (LMacFrame *)object; (void)pp;
    switch (field) {
        case 1: return pp->getOccupiedSlotsArraySize();
        default: return 0;
    }
}

const char *LMacFrameDescriptor::getFieldDynamicTypeString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldDynamicTypeString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    LMacFrame *pp = (LMacFrame *)object; (void)pp;
    switch (field) {
        default: return nullptr;
    }
}

std::string LMacFrameDescriptor::getFieldValueAsString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldValueAsString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    LMacFrame *pp = (LMacFrame *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getMySlot());
        case 1: {std::stringstream out; out << pp->getOccupiedSlots(i); return out.str();}
        default: return "";
    }
}

bool LMacFrameDescriptor::setFieldValueAsString(void *object, int field, int i, const char *value) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->setFieldValueAsString(object,field,i,value);
        field -= basedesc->getFieldCount();
    }
    LMacFrame *pp = (LMacFrame *)object; (void)pp;
    switch (field) {
        case 0: pp->setMySlot(string2long(value)); return true;
        default: return false;
    }
}

const char *LMacFrameDescriptor::getFieldStructName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructName(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        case 1: return omnetpp::opp_typename(typeid(MACAddress));
        default: return nullptr;
    };
}

void *LMacFrameDescriptor::getFieldStructValuePointer(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructValuePointer(object, field, i);
        field -= basedesc->getFieldCount();
    }
    LMacFrame *pp = (LMacFrame *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getOccupiedSlots(i)); break;
        default: return nullptr;
    }
}

} // namespace inet

