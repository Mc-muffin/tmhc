/* SCE CONFIDENTIAL
 "PlayStation 2" Programmer Tool Runtime Library Release 3.0
 */
#ifndef _STANDARD_KIT_COMMON_COMMON_H_
#define _STANDARD_KIT_COMMON_COMMON_H_
/*
 * Emotion Engine / I/O Processor Common Header
 *
 * Copyright (C) 2001, 2002, 2003 Sony Computer Entertainment Inc.
 * All Rights Reserved.
 *
 * sk/common.h
 *     Standard Kit / Sound System --- common header
 */

#include <sdrcmd.h>
#include <sk/errno.h>

#define SCESK_SOUND_SDR_COMMAND rSdUserCommandF

#define SCESK_HSYNTH_SDR_COMMAND SCESK_SOUND_SDR_COMMAND
#define SCESK_MIDI_SDR_COMMAND SCESK_SOUND_SDR_COMMAND
#define SCESK_MSIN_SDR_COMMAND SCESK_SOUND_SDR_COMMAND
#define SCESK_SESQ_SDR_COMMAND SCESK_SOUND_SDR_COMMAND
#define SCESK_SEIN_SDR_COMMAND SCESK_SOUND_SDR_COMMAND
#define SCESK_STRADPCM_SDR_COMMAND SCESK_SOUND_SDR_COMMAND

#define SCESK_ID_SOUND 0
#define SCESK_ID_HSYNTH 1
#define SCESK_ID_MIDI 2
#define SCESK_ID_MSIN 3
#define SCESK_ID_SESQ 4
#define SCESK_ID_SEIN 5
#define SCESK_ID_STRADPCM 6
#define SCESK_ID_MIN SCESK_ID_SOUND
#define SCESK_ID_MAX SCESK_ID_STRADPCM

#define _SCESK_ID_MASK 0x7f
#define _SCESK_ID_BITSHIFT 24
#define _SCESK_MOD_ENCODE(x) ((x) << _SCESK_ID_BITSHIFT)
#define _SCESK_ID_DECODE(x) ((((x) >> _SCESK_ID_BITSHIFT)) & _SCESK_ID_MASK)

#define SCESK_RPC_SOUND (SCESK_ID_SOUND << _SCESK_ID_BITSHIFT)
#define SCESK_RPC_HSYNTH (SCESK_ID_HSYNTH << _SCESK_ID_BITSHIFT)
#define SCESK_RPC_MIDI (SCESK_ID_MIDI << _SCESK_ID_BITSHIFT)
#define SCESK_RPC_MSIN (SCESK_ID_MSIN << _SCESK_ID_BITSHIFT)
#define SCESK_RPC_SESQ (SCESK_ID_SESQ << _SCESK_ID_BITSHIFT)
#define SCESK_RPC_SEIN (SCESK_ID_SEIN << _SCESK_ID_BITSHIFT)
#define SCESK_RPC_STRADPCM (SCESK_ID_STRADPCM << _SCESK_ID_BITSHIFT)
#define SCESK_PRC_MOD_MASK (_SCESK_ID_MASK << _SCESK_ID_BITSHIFT)

#define SCESK_SQ 0
#define SCESK_HD 1
#define SCESK_BD 2
#define SCESK_HDBD 3
#define SCESK_SQHDBD 4
#define SCESK_TRACK 5
#define SCESK_STRADPCM 10

#define SCESK_MIDI 0
#define SCESK_SONG 1
#define SCESK_MSIN 2
#define SCESK_SESQ 10
#define SCESK_SESEQ SCESK_SESQ
#define SCESK_SEIN 11

#define SCESK_BIND 0
#define SCESK_UNBIND 1
#define SCESK_CONTROL 2
#define SCESK_STATUS 3
#define SCESK_SEND 10

#define SCESK_AUTOASSIGNMENT 0xffffffff
#define SCESK_NOP 0xffffffff

#define SCESK_PLAY 0x0000
#define SCESK_START 0x0001
#define SCESK_STOP 0x0002
#define SCESK_PAUSE 0x0003
#define SCESK_DEPAUSE 0x0004
#define SCESK_PLAY_CONTROL 0x0007
#define SCESK_POSITION 0x0008
#define SCESK_NOTEON_NOID 0x0010
#define SCESK_NOTEON 0x0011
#define SCESK_NOTEOFF_NOID 0x0012
#define SCESK_NOTEOFF 0x0013
#define SCESK_ALLNOTEOFF 0x001e
#define SCESK_ALLSOUNDOFF 0x001f
#define SCESK_PITCHON 0x0020
#define SCESK_PITCHON_ID 0x0021

#define SCESK_VOLUME 0x0030
#define SCESK_TEMPO 0x0031
#define SCESK_TEMPO_ABSOLUTE SCESK_TEMPO
#define SCESK_TEMPO_REL 0x0032
#define SCESK_TEMPO_RELATIVE SCESK_TEMPO_REL
#define SCESK_ONESHOT 0x003f

#define SCESK_PANPOT 0x0040
#define SCESK_PITCHBEND 0x0041
#define SCESK_EXPRESSION 0x0042

#define SCESK_EXCLUDED_VOICE 0x0070
#define SCESK_RESERVED_VOICE SCESK_EXCLUDED_VOICE
#define SCESK_OUTPUT_MODE 0x0071
#define SCESK_ISLOCKED 0x0072
#define SCESK_ISLOCKING SCESK_ISLOCKED

#define SCESK_MASTER_VOLUME 0x0080
#define SCESK_MASTERVOLUME SCESK_MASTER_VOLUME
#define SCESK_MUTE 0x0081
#define SCESK_EFFECT 0x0082
#define SCESK_EFFECT_MODE 0x0083
#define SCESK_EFFECT_VOLUME 0x0084
#define SCESK_DEMUTE 0x0089
#define SCESK_DIGITAL_OUT 0x008f

#define SCESK_INITENV 0x00e0
#define SCESK_SETENV 0x00e1
#define SCESK_UNSETENV 0x00e2
#define SCESK_GETENV 0x00e3
#define SCESK_UPDATEENV 0x00e4
#define SCESK_PRELOAD 0x00e5
#define SCESK_APPEND 0x00e6
#define SCESK_UPDATE 0x00ec
#define SCESK_SYNC 0x00ed
#define SCESK_ATICK 0x00ee
#define SCESK_TERMINATE 0x00ef

#define SCESK_INIT 0x00fe
#define SCESK_QUIT 0x00ff

#define SCESK_ISPLAYING 0
#define SCESK_ISDATAEND 1
/* #define SCESK_STATUS		3 */

#define SCESK_PORT_MODE 0 /* hsynth only */
#define SCESK_WAVE_TYPE 1
#define SCESK_PORT_ATTR 2

#define SCESK_MODE_HSYNTH 0 /* hsynth only */
#define SCESK_MODE_SESYNTH 1
#define SCESK_TYPE_PROGRAM 0
#define SCESK_TYPE_TIMBRE 1

#define SCESK_COUNTER 0 /* sound only */

/* ----------------------------------------------------------------
 *	End on File
 * ---------------------------------------------------------------- */
#endif /* _STANDARD_KIT_COMMON_COMMON_H_ */
/* This file ends here, DON'T ADD STUFF AFTER THIS */
