#pragma once

#include <MIDI_Outputs/Abstract/MIDIButton.hpp>
#include <MIDI_Senders/DigitalCCSender.hpp>

class CCButton : public MIDIButton<DigitalCCSender> {
  public:
    CCButton(pin_t pin, uint8_t controller, uint8_t channel)
        : MIDIButton<DigitalCCSender>(pin, controller, channel) {}
};