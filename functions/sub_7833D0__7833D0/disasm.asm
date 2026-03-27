0x7833D0: cmp     byte ptr ds:0B4295Bh, 0
0x7833D7: push    esi
0x7833D8: mov     esi, [ecx+14h]
0x7833DB: jnz     short loc_7833E2
0x7833DD: call    sub_783C70
0x7833E2: and     esi, 0FFh
0x7833E8: xor     eax, eax
0x7833EA: cmp     dword ptr ds:0B428D8h[esi*4], 0Ah
0x7833F2: pop     esi
0x7833F3: setz    al
0x7833F6: retn
