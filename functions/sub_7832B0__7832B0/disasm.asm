0x7832B0: cmp     byte ptr ds:0B4295Bh, 0
0x7832B7: push    esi
0x7832B8: mov     esi, [ecx+14h]
0x7832BB: jnz     short loc_7832C2
0x7832BD: call    sub_783C70
0x7832C2: and     esi, 0FFh
0x7832C8: xor     eax, eax
0x7832CA: cmp     dword ptr ds:0B428D8h[esi*4], 1
0x7832D2: pop     esi
0x7832D3: setz    al
0x7832D6: retn
