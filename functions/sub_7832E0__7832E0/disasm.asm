0x7832E0: cmp     byte ptr ds:0B4295Bh, 0
0x7832E7: push    esi
0x7832E8: mov     esi, [ecx+14h]
0x7832EB: jnz     short loc_7832F2
0x7832ED: call    sub_783C70
0x7832F2: and     esi, 0FFh
0x7832F8: xor     eax, eax
0x7832FA: cmp     dword ptr ds:0B428D8h[esi*4], 3
0x783302: pop     esi
0x783303: setz    al
0x783306: retn
