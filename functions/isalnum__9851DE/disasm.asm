0x9851DE: cmp     dword ptr ds:0BA9E10h, 0
0x9851E5: jnz     short loc_9851FB
0x9851E7: mov     eax, [esp+C]
0x9851EB: mov     ecx, ds:0B31988h
0x9851F1: movzx   eax, word ptr [ecx+eax*2]
0x9851F5: and     eax, 107h
0x9851FA: retn
0x9851FB: push    0; Locale
0x9851FD: push    [esp+4+C]; C
0x985201: call    __isalnum_l
0x985206: pop     ecx
0x985207: pop     ecx
0x985208: retn
