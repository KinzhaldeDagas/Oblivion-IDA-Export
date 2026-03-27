0x783370: cmp     byte ptr ds:0B4295Bh, 0
0x783377: push    esi
0x783378: mov     esi, [ecx+14h]
0x78337B: jnz     short loc_783382
0x78337D: call    sub_783C70
0x783382: and     esi, 0FFh
0x783388: xor     eax, eax
0x78338A: cmp     dword ptr ds:0B428D8h[esi*4], 6
0x783392: pop     esi
0x783393: setz    al
0x783396: retn
