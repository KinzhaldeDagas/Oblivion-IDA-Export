0x782E10: cmp     byte ptr ds:0B4295Bh, 0
0x782E17: push    esi
0x782E18: mov     esi, [ecx+14h]
0x782E1B: jnz     short loc_782E22
0x782E1D: call    sub_783C70
0x782E22: and     esi, 0FFh
0x782E28: xor     eax, eax
0x782E2A: cmp     dword ptr ds:0B428D8h[esi*4], 9
0x782E32: pop     esi
0x782E33: setz    al
0x782E36: retn
