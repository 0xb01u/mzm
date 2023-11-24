.include "audio/m_play_def.s"

.align 2

.section .rodata
.global track_192

track_192_0:
	.byte KEYSH, 0
	.byte TEMPO, 75
	.byte VOICE, 9
	.byte VOL, 44
	.byte PAN, c_v
	.byte BENDR, 18
	.byte BEND, c_v+63
	.byte N10
	.byte Dn2, Cn3
	.byte W01
	.byte BEND, c_v+47
	.byte W01
	.byte Cn6
	.byte W01
	.byte Gs4
	.byte W01
	.byte En3
	.byte W01
	.byte Cn2
	.byte W01
	.byte VOL, 44
	.byte BEND, c_v-31
	.byte W01
	.byte VOL, 20
	.byte BEND, c_v-47
	.byte W01
	.byte VOL, 8
	.byte BEND, c_v-63
	.byte W01
	.byte VOL, 0
	.byte W01

	.byte FINE

.align 2

track_192:
	.byte 1
	.byte 0
	.byte 190
	.byte 0
	.word voice_group11
	.word track_192_0

.align 2
