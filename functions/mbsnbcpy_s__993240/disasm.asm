0x993240: push    0; MaxCount
0x993242: push    [esp+4+MaxCount]; Src
0x993246: push    [esp+8+Src]; Src
0x99324A: push    [esp+0Ch+SizeInBytes]; SizeInBytes
0x99324E: push    [esp+10h+Dst]; Dst
0x993252: call    __mbsnbcpy_s_l
0x993257: add     esp, 14h
0x99325A: retn
