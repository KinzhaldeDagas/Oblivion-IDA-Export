0x98936C: push    [esp+Args]; Locale
0x989370: push    0; Format
0x989372: push    [esp+8+Format]; Format
0x989376: push    [esp+0Ch+Count]; MaxCount
0x98937A: push    [esp+10h+Dest]; DstBuf
0x98937E: call    __vsnprintf_l
0x989383: add     esp, 14h
0x989386: retn
