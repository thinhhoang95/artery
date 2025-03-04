//
// Generated file, do not edit! Created by nedtool 5.6 from /home/veins/artery/extern/inet/src/inet/routing/bgpv4/BGPMessage/BGPASPathSegment.msg.
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
#include "BGPASPathSegment_m.h"

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
namespace bgp {

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

Register_Class(BGPASPathSegment)

BGPASPathSegment::BGPASPathSegment() : ::omnetpp::cObject()
{
    this->type = 0;
    this->length = 0;
    asValue_arraysize = 0;
    this->asValue = 0;
}

BGPASPathSegment::BGPASPathSegment(const BGPASPathSegment& other) : ::omnetpp::cObject(other)
{
    asValue_arraysize = 0;
    this->asValue = 0;
    copy(other);
}

BGPASPathSegment::~BGPASPathSegment()
{
    delete [] this->asValue;
}

BGPASPathSegment& BGPASPathSegment::operator=(const BGPASPathSegment& other)
{
    if (this==&other) return *this;
    ::omnetpp::cObject::operator=(other);
    copy(other);
    return *this;
}

void BGPASPathSegment::copy(const BGPASPathSegment& other)
{
    this->type = other.type;
    this->length = other.length;
    delete [] this->asValue;
    this->asValue = (other.asValue_arraysize==0) ? nullptr : new unsigned short[other.asValue_arraysize];
    asValue_arraysize = other.asValue_arraysize;
    for (unsigned int i=0; i<asValue_arraysize; i++)
        this->asValue[i] = other.asValue[i];
}

void BGPASPathSegment::parsimPack(omnetpp::cCommBuffer *b) const
{
    doParsimPacking(b,this->type);
    doParsimPacking(b,this->length);
    b->pack(asValue_arraysize);
    doParsimArrayPacking(b,this->asValue,asValue_arraysize);
}

void BGPASPathSegment::parsimUnpack(omnetpp::cCommBuffer *b)
{
    doParsimUnpacking(b,this->type);
    doParsimUnpacking(b,this->length);
    delete [] this->asValue;
    b->unpack(asValue_arraysize);
    if (asValue_arraysize==0) {
        this->asValue = 0;
    } else {
        this->asValue = new unsigned short[asValue_arraysize];
        doParsimArrayUnpacking(b,this->asValue,asValue_arraysize);
    }
}

unsigned char BGPASPathSegment::getType() const
{
    return this->type;
}

void BGPASPathSegment::setType(unsigned char type)
{
    this->type = type;
}

unsigned char BGPASPathSegment::getLength() const
{
    return this->length;
}

void BGPASPathSegment::setLength(unsigned char length)
{
    this->length = length;
}

void BGPASPathSegment::setAsValueArraySize(unsigned int size)
{
    unsigned short *asValue2 = (size==0) ? nullptr : new unsigned short[size];
    unsigned int sz = asValue_arraysize < size ? asValue_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        asValue2[i] = this->asValue[i];
    for (unsigned int i=sz; i<size; i++)
        asValue2[i] = 0;
    asValue_arraysize = size;
    delete [] this->asValue;
    this->asValue = asValue2;
}

unsigned int BGPASPathSegment::getAsValueArraySize() const
{
    return asValue_arraysize;
}

unsigned short BGPASPathSegment::getAsValue(unsigned int k) const
{
    if (k>=asValue_arraysize) throw omnetpp::cRuntimeError("Array of size %d indexed by %d", asValue_arraysize, k);
    return this->asValue[k];
}

void BGPASPathSegment::setAsValue(unsigned int k, unsigned short asValue)
{
    if (k>=asValue_arraysize) throw omnetpp::cRuntimeError("Array of size %d indexed by %d", asValue_arraysize, k);
    this->asValue[k] = asValue;
}

class BGPASPathSegmentDescriptor : public omnetpp::cClassDescriptor
{
  private:
    mutable const char **propertynames;
  public:
    BGPASPathSegmentDescriptor();
    virtual ~BGPASPathSegmentDescriptor();

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

Register_ClassDescriptor(BGPASPathSegmentDescriptor)

BGPASPathSegmentDescriptor::BGPASPathSegmentDescriptor() : omnetpp::cClassDescriptor("inet::bgp::BGPASPathSegment", "omnetpp::cObject")
{
    propertynames = nullptr;
}

BGPASPathSegmentDescriptor::~BGPASPathSegmentDescriptor()
{
    delete[] propertynames;
}

bool BGPASPathSegmentDescriptor::doesSupport(omnetpp::cObject *obj) const
{
    return dynamic_cast<BGPASPathSegment *>(obj)!=nullptr;
}

const char **BGPASPathSegmentDescriptor::getPropertyNames() const
{
    if (!propertynames) {
        static const char *names[] = {  nullptr };
        omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
        const char **basenames = basedesc ? basedesc->getPropertyNames() : nullptr;
        propertynames = mergeLists(basenames, names);
    }
    return propertynames;
}

const char *BGPASPathSegmentDescriptor::getProperty(const char *propertyname) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : nullptr;
}

int BGPASPathSegmentDescriptor::getFieldCount() const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount() : 3;
}

unsigned int BGPASPathSegmentDescriptor::getFieldTypeFlags(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeFlags(field);
        field -= basedesc->getFieldCount();
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *BGPASPathSegmentDescriptor::getFieldName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldName(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldNames[] = {
        "type",
        "length",
        "asValue",
    };
    return (field>=0 && field<3) ? fieldNames[field] : nullptr;
}

int BGPASPathSegmentDescriptor::findField(const char *fieldName) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount() : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    if (fieldName[0]=='l' && strcmp(fieldName, "length")==0) return base+1;
    if (fieldName[0]=='a' && strcmp(fieldName, "asValue")==0) return base+2;
    return basedesc ? basedesc->findField(fieldName) : -1;
}

const char *BGPASPathSegmentDescriptor::getFieldTypeString(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeString(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldTypeStrings[] = {
        "unsigned char",
        "unsigned char",
        "unsigned short",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : nullptr;
}

const char **BGPASPathSegmentDescriptor::getFieldPropertyNames(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldPropertyNames(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        case 0: {
            static const char *names[] = { "enum",  nullptr };
            return names;
        }
        default: return nullptr;
    }
}

const char *BGPASPathSegmentDescriptor::getFieldProperty(int field, const char *propertyname) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldProperty(field, propertyname);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "inet::bgp::BGPPathSegmentType";
            return nullptr;
        default: return nullptr;
    }
}

int BGPASPathSegmentDescriptor::getFieldArraySize(void *object, int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldArraySize(object, field);
        field -= basedesc->getFieldCount();
    }
    BGPASPathSegment *pp = (BGPASPathSegment *)object; (void)pp;
    switch (field) {
        case 2: return pp->getAsValueArraySize();
        default: return 0;
    }
}

const char *BGPASPathSegmentDescriptor::getFieldDynamicTypeString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldDynamicTypeString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    BGPASPathSegment *pp = (BGPASPathSegment *)object; (void)pp;
    switch (field) {
        default: return nullptr;
    }
}

std::string BGPASPathSegmentDescriptor::getFieldValueAsString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldValueAsString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    BGPASPathSegment *pp = (BGPASPathSegment *)object; (void)pp;
    switch (field) {
        case 0: return enum2string(pp->getType(), "inet::bgp::BGPPathSegmentType");
        case 1: return ulong2string(pp->getLength());
        case 2: return ulong2string(pp->getAsValue(i));
        default: return "";
    }
}

bool BGPASPathSegmentDescriptor::setFieldValueAsString(void *object, int field, int i, const char *value) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->setFieldValueAsString(object,field,i,value);
        field -= basedesc->getFieldCount();
    }
    BGPASPathSegment *pp = (BGPASPathSegment *)object; (void)pp;
    switch (field) {
        case 0: pp->setType((inet::bgp::BGPPathSegmentType)string2enum(value, "inet::bgp::BGPPathSegmentType")); return true;
        case 1: pp->setLength(string2ulong(value)); return true;
        case 2: pp->setAsValue(i,string2ulong(value)); return true;
        default: return false;
    }
}

const char *BGPASPathSegmentDescriptor::getFieldStructName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructName(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    };
}

void *BGPASPathSegmentDescriptor::getFieldStructValuePointer(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructValuePointer(object, field, i);
        field -= basedesc->getFieldCount();
    }
    BGPASPathSegment *pp = (BGPASPathSegment *)object; (void)pp;
    switch (field) {
        default: return nullptr;
    }
}

} // namespace bgp
} // namespace inet

