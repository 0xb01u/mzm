.include "audio/m_play_def.s"

.align 2

.section .rodata
.global track_227

track_227_0:
	.byte KEYSH, 0
	.byte TEMPO, 75
	.byte VOICE, 33
	.byte VOL, 44
	.byte PAN, c_v
	.byte BENDR, 8
	.byte BEND, c_v+55
	.byte N16
	.byte Cn3, Gs4
	.byte W16

	.byte FINE

.align 2

track_227:
	.byte 1
	.byte 0
	.byte 196
	.byte 0
	.word voice_group2
	.word track_227_0

.align 2
