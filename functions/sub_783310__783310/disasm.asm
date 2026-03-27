0x783310: cmp     byte ptr ds:0B4295Bh, 0
0x783317: push    esi
0x783318: mov     esi, [ecx+14h]
0x78331B: jnz     short loc_783322
0x78331D: call    sub_783C70
0x783322: and     esi, 0FFh
0x783328: xor     eax, eax
0x78332A: cmp     dword ptr ds:0B428D8h[esi*4], 4
0x783332: pop     esi
0x783333: setz    al
0x783336: retn
