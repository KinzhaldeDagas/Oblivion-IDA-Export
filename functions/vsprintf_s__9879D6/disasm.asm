0x9879D6: push    [esp+ArgList]; Locale
0x9879DA: push    0; Format
0x9879DC: push    [esp+8+Format]; Format
0x9879E0: push    [esp+0Ch+SizeInBytes]; DstSize
0x9879E4: push    [esp+10h+DstBuf]; DstBuf
0x9879E8: call    __vsprintf_s_l
0x9879ED: add     esp, 14h
0x9879F0: retn
