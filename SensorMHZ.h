#ifndef _SENSORMHZ_h
#define _SENSORMHZ_h

#include "Timing.h"

#define MHZ_TX_PIN 6
#define MHZ_RX_PIN 7
#define MHZ_WARMUP_TIME 180


class SensorMHZ
{
 protected:
	 bool isSetup = false;
	 bool warmedUp = false;

	 Timing sendTimer;
	 Timing warmupTimer;

	 long sensorStartedAt;
	 void sendData();

 public:
	 void setup( uint16_t measureFreq );
	 void handle();
};

#endif
