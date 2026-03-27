0x982820: push    [esp+ArgList]; ArgList
0x982824: push    0; _locale_t
0x982826: push    [esp+8+Format]; Format
0x98282A: push    [esp+0Ch+DstBuf]; DstBuf
0x98282E: call    __vsprintf_l
0x982833: add     esp, 10h
0x982836: retn
