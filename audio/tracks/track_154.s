.include "audio/m_play_def.s"

.align 2

.section .rodata
.global track_154

track_154_0:
	.byte KEYSH, 0
	.byte TEMPO, 75
	.byte VOICE, 46
	.byte VOL, 40
	.byte PAN, c_v
	.byte N03
	.byte Gn3, En6
	.byte W03

	.byte FINE

.align 2

track_154:
	.byte 1
	.byte 0
	.byte 164
	.byte 0
	.word voice_group1
	.word track_154_0

.align 2
