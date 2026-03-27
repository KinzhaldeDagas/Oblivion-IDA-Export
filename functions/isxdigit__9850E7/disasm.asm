0x9850E7: cmp     dword ptr ds:0BA9E10h, 0
0x9850EE: jnz     short loc_985104
0x9850F0: mov     eax, [esp+C]
0x9850F4: mov     ecx, ds:0B31988h
0x9850FA: movzx   eax, byte ptr [ecx+eax*2]
0x9850FE: and     eax, 80h
0x985103: retn
0x985104: push    0; Locale
0x985106: push    [esp+4+C]; C
0x98510A: call    __isxdigit_l
0x98510F: pop     ecx
0x985110: pop     ecx
0x985111: retn
