.include "audio/m_play_def.s"

.align 2

.section .rodata
.global track_624

track_624_0:
	.byte KEYSH, 0
	.byte TEMPO, 75
	.byte VOICE, 52
	.byte VOL, 69
	.byte PAN, c_v
	.byte N12
	.byte Fn2, En1
	.byte W44
	.byte VOICE, 53
	.byte N05
	.byte Cn2, Gs4
	.byte W05
	.byte VOICE, 51
	.byte N16
	.byte Fn2, Cn8
	.byte W16

	.byte FINE

.align 2

track_624:
	.byte 1
	.byte 0
	.byte 162
	.byte 0
	.word voice_group3
	.word track_624_0

.align 2
