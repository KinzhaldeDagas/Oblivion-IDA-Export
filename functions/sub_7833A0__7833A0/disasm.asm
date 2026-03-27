0x7833A0: cmp     byte ptr ds:0B4295Bh, 0
0x7833A7: push    esi
0x7833A8: mov     esi, [ecx+14h]
0x7833AB: jnz     short loc_7833B2
0x7833AD: call    sub_783C70
0x7833B2: and     esi, 0FFh
0x7833B8: xor     eax, eax
0x7833BA: cmp     dword ptr ds:0B428D8h[esi*4], 7
0x7833C2: pop     esi
0x7833C3: setz    al
0x7833C6: retn
