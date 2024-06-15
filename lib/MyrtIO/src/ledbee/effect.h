#pragma once

#include <FastLED.h>
#include "led_strip.h"

struct EffectState {
  bool enabled = false;
  uint8_t currentBrightness = 0;
  uint8_t targetBrightness = 255;
  CRGB currentColor = CRGB::Black;
  CRGB targetColor = CRGB::Blue;

  size_t transitionTime = 0;
};

class LEDEffect {
 public:
  virtual bool handleFrame(EffectState *state, LEDStrip *strip) = 0;
  virtual void onColorUpdate(EffectState *state) = 0;
};
