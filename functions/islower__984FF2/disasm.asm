0x984FF2: cmp     dword ptr ds:0BA9E10h, 0
0x984FF9: jnz     short loc_98500D
0x984FFB: mov     eax, [esp+C]
0x984FFF: mov     ecx, ds:0B31988h
0x985005: movzx   eax, byte ptr [ecx+eax*2]
0x985009: and     eax, 2
0x98500C: retn
0x98500D: push    0; Locale
0x98500F: push    [esp+4+C]; C
0x985013: call    __islower_l
0x985018: pop     ecx
0x985019: pop     ecx
0x98501A: retn
