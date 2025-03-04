//
// Generated file, do not edit! Created by nedtool 5.6 from /home/veins/artery/extern/inet/src/inet/physicallayer/ieee80211/packetlevel/Ieee80211ControlInfo.msg.
//

#ifndef __INET__PHYSICALLAYER_IEEE80211CONTROLINFO_M_H
#define __INET__PHYSICALLAYER_IEEE80211CONTROLINFO_M_H

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
#include "inet/common/Units.h"
#include "inet/physicallayer/contract/packetlevel/RadioControlInfo_m.h"
#include "inet/physicallayer/ieee80211/mode/Ieee80211Band.h"
#include "inet/physicallayer/ieee80211/mode/Ieee80211Channel.h"
#include "inet/physicallayer/ieee80211/mode/Ieee80211ModeSet.h"
// }}


namespace inet {
namespace physicallayer {

// cplusplus {{
typedef const IIeee80211Mode ConstIIeee80211Mode;
typedef const Ieee80211ModeSet * Ieee80211ModeSetPtr;
typedef const IIeee80211Mode * IIeee80211ModePtr;
typedef IIeee80211Band * IIeee80211BandPtr;
typedef Ieee80211Channel * Ieee80211ChannelPtr;

typedef const IIeee80211PreambleMode* IIeee80211PreambleModePtr;
typedef const IIeee80211HeaderMode* IIeee80211HeaderModePtr;
typedef const IIeee80211DataMode* IIeee80211DataModePtr;
// }}

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/physicallayer/ieee80211/packetlevel/Ieee80211ControlInfo.msg:132</tt> by nedtool.
 * <pre>
 * //
 * // Control info attached to a configure command that is sent to the ~Radio.
 * //
 * class Ieee80211ConfigureRadioCommand extends ConfigureRadioCommand
 * {
 *     \@descriptor(false);
 *     string opMode;                         // new default operation mode or "" if not set.
 *     Ieee80211ModeSetPtr modeSet \@opaque \@tostring($ ? $->getCompleteStringRepresentation() : std::string("<nullptr>")) = nullptr; // new default mode set or nullptr if not set.
 *     IIeee80211ModePtr mode \@opaque \@tostring($ ? $->getCompleteStringRepresentation() : std::string("<nullptr>")) = nullptr;      // new default transmission mode or nullptr if not set.
 *     IIeee80211BandPtr band \@opaque \@tostring($ ? $->getCompleteStringRepresentation() : std::string("<nullptr>")) = nullptr;      // new default band or nullptr if not set.
 *     Ieee80211ChannelPtr channel \@opaque \@tostring($ ? $->getCompleteStringRepresentation() : std::string("<nullptr>")) = nullptr; // new default band and channel or nullptr if not set.
 *     int channelNumber = -1;                // new default channel number in the range [0, numChannels] or -1 if not set.
 * }
 * </pre>
 */
class Ieee80211ConfigureRadioCommand : public ::inet::physicallayer::ConfigureRadioCommand
{
  protected:
    ::omnetpp::opp_string opMode;
    Ieee80211ModeSetPtr modeSet;
    IIeee80211ModePtr mode;
    IIeee80211BandPtr band;
    Ieee80211ChannelPtr channel;
    int channelNumber;

  private:
    void copy(const Ieee80211ConfigureRadioCommand& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211ConfigureRadioCommand&);

  public:
    Ieee80211ConfigureRadioCommand();
    Ieee80211ConfigureRadioCommand(const Ieee80211ConfigureRadioCommand& other);
    virtual ~Ieee80211ConfigureRadioCommand();
    Ieee80211ConfigureRadioCommand& operator=(const Ieee80211ConfigureRadioCommand& other);
    virtual Ieee80211ConfigureRadioCommand *dup() const override {return new Ieee80211ConfigureRadioCommand(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual const char * getOpMode() const;
    virtual void setOpMode(const char * opMode);
    virtual Ieee80211ModeSetPtr& getModeSet();
    virtual const Ieee80211ModeSetPtr& getModeSet() const {return const_cast<Ieee80211ConfigureRadioCommand*>(this)->getModeSet();}
    virtual void setModeSet(const Ieee80211ModeSetPtr& modeSet);
    virtual IIeee80211ModePtr& getMode();
    virtual const IIeee80211ModePtr& getMode() const {return const_cast<Ieee80211ConfigureRadioCommand*>(this)->getMode();}
    virtual void setMode(const IIeee80211ModePtr& mode);
    virtual IIeee80211BandPtr& getBand();
    virtual const IIeee80211BandPtr& getBand() const {return const_cast<Ieee80211ConfigureRadioCommand*>(this)->getBand();}
    virtual void setBand(const IIeee80211BandPtr& band);
    virtual Ieee80211ChannelPtr& getChannel();
    virtual const Ieee80211ChannelPtr& getChannel() const {return const_cast<Ieee80211ConfigureRadioCommand*>(this)->getChannel();}
    virtual void setChannel(const Ieee80211ChannelPtr& channel);
    virtual int getChannelNumber() const;
    virtual void setChannelNumber(int channelNumber);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Ieee80211ConfigureRadioCommand& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Ieee80211ConfigureRadioCommand& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/physicallayer/ieee80211/packetlevel/Ieee80211ControlInfo.msg:146</tt> by nedtool.
 * <pre>
 * //
 * // Control info attached to a mac frame that is sent down to the ~Ieee80211Radio.
 * //
 * class Ieee80211TransmissionRequest extends TransmissionRequest
 * {
 *     \@descriptor(false);
 *     IIeee80211ModePtr mode \@opaque \@tostring($ ? $->getCompleteStringRepresentation() : std::string("<nullptr>")) = nullptr;      // override default transmission mode or nullptr if not set.
 *     int channelNumber = -1;                // override default channel or -1 if not set.
 *     Ieee80211ChannelPtr channel \@opaque \@tostring($ ? $->getCompleteStringRepresentation() : std::string("<nullptr>")) = nullptr; // override default band and channel or nullptr if not set.
 * }
 * </pre>
 */
class Ieee80211TransmissionRequest : public ::inet::physicallayer::TransmissionRequest
{
  protected:
    IIeee80211ModePtr mode;
    int channelNumber;
    Ieee80211ChannelPtr channel;

  private:
    void copy(const Ieee80211TransmissionRequest& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211TransmissionRequest&);

  public:
    Ieee80211TransmissionRequest();
    Ieee80211TransmissionRequest(const Ieee80211TransmissionRequest& other);
    virtual ~Ieee80211TransmissionRequest();
    Ieee80211TransmissionRequest& operator=(const Ieee80211TransmissionRequest& other);
    virtual Ieee80211TransmissionRequest *dup() const override {return new Ieee80211TransmissionRequest(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual IIeee80211ModePtr& getMode();
    virtual const IIeee80211ModePtr& getMode() const {return const_cast<Ieee80211TransmissionRequest*>(this)->getMode();}
    virtual void setMode(const IIeee80211ModePtr& mode);
    virtual int getChannelNumber() const;
    virtual void setChannelNumber(int channelNumber);
    virtual Ieee80211ChannelPtr& getChannel();
    virtual const Ieee80211ChannelPtr& getChannel() const {return const_cast<Ieee80211TransmissionRequest*>(this)->getChannel();}
    virtual void setChannel(const Ieee80211ChannelPtr& channel);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Ieee80211TransmissionRequest& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Ieee80211TransmissionRequest& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>/home/veins/artery/extern/inet/src/inet/physicallayer/ieee80211/packetlevel/Ieee80211ControlInfo.msg:157</tt> by nedtool.
 * <pre>
 * //
 * // Control info attached to a mac frame that is sent up from the ~Ieee80211Radio.
 * //
 * class Ieee80211ReceptionIndication extends ReceptionIndication
 * {
 *     \@descriptor(false);
 *     IIeee80211ModePtr mode = nullptr;      // specifies reception mode.
 *     Ieee80211ChannelPtr channel \@opaque \@tostring($ ? $->getCompleteStringRepresentation() : std::string("<nullptr>")) = nullptr; // specifies reception band and channel
 *     // TODO: remove already inherited fields
 *     double snr;
 *     double lossRate;
 *     double recPow;
 *     bool airtimeMetric;
 *     double testFrameDuration;
 *     double testFrameError;
 *     int testFrameSize;
 * }
 * </pre>
 */
class Ieee80211ReceptionIndication : public ::inet::physicallayer::ReceptionIndication
{
  protected:
    IIeee80211ModePtr mode;
    Ieee80211ChannelPtr channel;
    double snr;
    double lossRate;
    double recPow;
    bool airtimeMetric;
    double testFrameDuration;
    double testFrameError;
    int testFrameSize;

  private:
    void copy(const Ieee80211ReceptionIndication& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee80211ReceptionIndication&);

  public:
    Ieee80211ReceptionIndication();
    Ieee80211ReceptionIndication(const Ieee80211ReceptionIndication& other);
    virtual ~Ieee80211ReceptionIndication();
    Ieee80211ReceptionIndication& operator=(const Ieee80211ReceptionIndication& other);
    virtual Ieee80211ReceptionIndication *dup() const override {return new Ieee80211ReceptionIndication(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual IIeee80211ModePtr& getMode();
    virtual const IIeee80211ModePtr& getMode() const {return const_cast<Ieee80211ReceptionIndication*>(this)->getMode();}
    virtual void setMode(const IIeee80211ModePtr& mode);
    virtual Ieee80211ChannelPtr& getChannel();
    virtual const Ieee80211ChannelPtr& getChannel() const {return const_cast<Ieee80211ReceptionIndication*>(this)->getChannel();}
    virtual void setChannel(const Ieee80211ChannelPtr& channel);
    virtual double getSnr() const;
    virtual void setSnr(double snr);
    virtual double getLossRate() const;
    virtual void setLossRate(double lossRate);
    virtual double getRecPow() const;
    virtual void setRecPow(double recPow);
    virtual bool getAirtimeMetric() const;
    virtual void setAirtimeMetric(bool airtimeMetric);
    virtual double getTestFrameDuration() const;
    virtual void setTestFrameDuration(double testFrameDuration);
    virtual double getTestFrameError() const;
    virtual void setTestFrameError(double testFrameError);
    virtual int getTestFrameSize() const;
    virtual void setTestFrameSize(int testFrameSize);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Ieee80211ReceptionIndication& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Ieee80211ReceptionIndication& obj) {obj.parsimUnpack(b);}

} // namespace physicallayer
} // namespace inet

#endif // ifndef __INET__PHYSICALLAYER_IEEE80211CONTROLINFO_M_H

