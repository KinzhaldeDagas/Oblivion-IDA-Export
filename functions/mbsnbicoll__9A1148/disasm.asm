0x9A1148: push    0; Locale
0x9A114A: push    [esp+4+MaxCount]; MaxCount
0x9A114E: push    [esp+8+Str2]; Str2
0x9A1152: push    [esp+0Ch+Str1]; Str1
0x9A1156: call    __mbsnbicoll_l
0x9A115B: add     esp, 10h
0x9A115E: retn
