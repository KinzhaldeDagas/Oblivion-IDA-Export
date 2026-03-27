0x7563E0: push    100h; Size
0x7563E5: call    FormHeapAlloc
0x7563EA: add     esp, 4
0x7563ED: test    eax, eax
0x7563EF: jz      short loc_75644F
0x7563F1: mov     ecx, ds:0B258DCh
0x7563F7: fld1
0x7563F9: sub     esp, 0Ch
0x7563FC: mov     edx, esp
0x7563FE: mov     [edx], ecx
0x756400: mov     ecx, ds:0B258E0h
0x756406: mov     [edx+4], ecx
0x756409: mov     ecx, ds:0B258E4h
0x75640F: mov     [edx+8], ecx
0x756412: mov     ecx, ds:0B258D0h
0x756418: sub     esp, 0Ch
0x75641B: mov     edx, esp
0x75641D: mov     [edx], ecx
0x75641F: mov     ecx, ds:0B258D4h
0x756425: mov     [edx+4], ecx
0x756428: mov     ecx, ds:0B258D8h
0x75642E: sub     esp, 8
0x756431: mov     [edx+8], ecx
0x756434: fst     [esp+20h+var_1C]; float
0x756438: fst     [esp+20h+var_20]; float
0x75643B: push    0; int
0x75643D: push    0; int
0x75643F: push    0; char
0x756441: push    0; char
0x756443: push    ecx
0x756444: mov     ecx, eax
0x756446: fstp    [esp+34h+var_34]; float
0x756449: call    sub_7561F0
0x75644E: retn
0x75644F: xor     eax, eax
0x756451: retn
