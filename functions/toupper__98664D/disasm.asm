0x98664D: cmp     dword ptr ds:0BA9E10h, 0
0x986654: jnz     short loc_986666
0x986656: mov     eax, [esp+C]
0x98665A: lea     ecx, [eax-61h]
0x98665D: cmp     ecx, 19h
0x986660: ja      short locret_986673
0x986662: add     eax, 0FFFFFFE0h
0x986665: retn
0x986666: push    0; Locale
0x986668: push    [esp+4+C]; C
0x98666C: call    __toupper_l
0x986671: pop     ecx
0x986672: pop     ecx
0x986673: retn
