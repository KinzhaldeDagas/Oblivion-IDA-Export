0x9A32B0: cmp     byte_B4295B, 0
0x9A32B7: push    esi
0x9A32B8: mov     esi, [ecx+14h]
0x9A32BB: jnz     short loc_9A32C2
0x9A32BD: call    sub_783C70
0x9A32C2: and     esi, 0FFh
0x9A32C8: xor     eax, eax
0x9A32CA: cmp     dword_B428D8[esi*4], 0Bh
0x9A32D2: pop     esi
0x9A32D3: setz    al
0x9A32D6: retn
