0x984E85: cmp     dword ptr ds:0BA9E10h, 0
0x984E8C: jnz     short loc_984E9E
0x984E8E: mov     eax, [esp+C]
0x984E92: lea     ecx, [eax-41h]
0x984E95: cmp     ecx, 19h
0x984E98: ja      short locret_984EAB
0x984E9A: add     eax, 20h ; ' '
0x984E9D: retn
0x984E9E: push    0; Locale
0x984EA0: push    [esp+4+C]; C
0x984EA4: call    __tolower_l
0x984EA9: pop     ecx
0x984EAA: pop     ecx
0x984EAB: retn
