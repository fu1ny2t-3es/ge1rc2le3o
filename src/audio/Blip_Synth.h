
// Blip_Synth and Blip_Wave are waveform transition synthesizers for adding
// waveforms to a Blip_Buffer.

// Blip_Buffer 0.3.4. Copyright (C) 2003-2005 Shay Green. GNU LGPL license.

#ifndef BLIP_SYNTH_H
#define BLIP_SYNTH_H

#ifndef BLIP_BUFFER_H
	#include "Blip_Buffer.h"
#endif

#ifdef __cplusplus
	extern "C" {
#endif

Blip_Synth *new_Blip_Synth( void );
void delete_Blip_Synth( Blip_Synth ** synth );
void blip_synth_set_output( Blip_Synth * synth, Blip_Buffer * b );
void blip_synth_set_volume( Blip_Synth * synth, double v );
void blip_synth_set_treble_eq( Blip_Synth * synth, double treble );
void blip_synth_update( Blip_Synth * synth, blip_time_t t, int amp );

#ifdef __cplusplus
	}
#endif

#endif

