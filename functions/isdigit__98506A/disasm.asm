0x98506A: cmp     dword ptr ds:0BA9E10h, 0
0x985071: jnz     short loc_985085
0x985073: mov     eax, [esp+C]
0x985077: mov     ecx, ds:0B31988h
0x98507D: movzx   eax, byte ptr [ecx+eax*2]
0x985081: and     eax, 4
0x985084: retn
0x985085: push    0; Locale
0x985087: push    [esp+4+C]; C
0x98508B: call    __isdigit_l
0x985090: pop     ecx
0x985091: pop     ecx
0x985092: retn
