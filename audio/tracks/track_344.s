.include "audio/m_play_def.s"

.align 2

.section .rodata
.global track_344

track_344_0:
	.byte KEYSH, 0
	.byte TEMPO, 75
	.byte VOICE, 17
	.byte MOD, 45
	.byte VOL, 44
	.byte PAN, c_v
	.byte LFOS, 127
	.byte N08
	.byte Fn3, Gs4
	.byte W08
	.byte N10
	.byte W10
	.byte N06
	.byte W06
	.byte N08
	.byte Fn3, Gs2
	.byte W08

	.byte FINE

.align 2

track_344:
	.byte 1
	.byte 0
	.byte 163
	.byte 0
	.word voice_group3
	.word track_344_0

.align 2
