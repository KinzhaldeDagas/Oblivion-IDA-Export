0x984F00: cmp     dword ptr ds:0BA9E10h, 0
0x984F07: jnz     short loc_984F1D
0x984F09: mov     eax, [esp+C]
0x984F0D: mov     ecx, ds:0B31988h
0x984F13: movzx   eax, word ptr [ecx+eax*2]
0x984F17: and     eax, 103h
0x984F1C: retn
0x984F1D: push    0; Locale
0x984F1F: push    [esp+4+C]; C
0x984F23: call    __isalpha_l
0x984F28: pop     ecx
0x984F29: pop     ecx
0x984F2A: retn
