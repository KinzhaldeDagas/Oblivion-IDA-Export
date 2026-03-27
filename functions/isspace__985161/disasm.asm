0x985161: cmp     dword ptr ds:0BA9E10h, 0
0x985168: jnz     short loc_98517C
0x98516A: mov     eax, [esp+C]
0x98516E: mov     ecx, ds:0B31988h
0x985174: movzx   eax, byte ptr [ecx+eax*2]
0x985178: and     eax, 8
0x98517B: retn
0x98517C: push    0; Locale
0x98517E: push    [esp+4+C]; C
0x985182: call    __isspace_l
0x985187: pop     ecx
0x985188: pop     ecx
0x985189: retn
