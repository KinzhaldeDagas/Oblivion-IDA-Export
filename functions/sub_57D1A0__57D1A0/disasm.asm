0x57D1A0: mov     eax, [esp+arg_0]
0x57D1A4: xor     edx, edx
0x57D1A6: cmp     [ecx+0BCh], eax
0x57D1AC: jnz     short loc_57D1B4
0x57D1AE: mov     [ecx+0BCh], edx
0x57D1B4: cmp     [ecx+0C0h], eax
0x57D1BA: jnz     short loc_57D1C2
0x57D1BC: mov     [ecx+0C0h], edx
0x57D1C2: cmp     [ecx+0C4h], eax
0x57D1C8: jnz     short loc_57D1D0
0x57D1CA: mov     [ecx+0C4h], edx
0x57D1D0: cmp     [ecx+0C8h], eax
0x57D1D6: jnz     short loc_57D1DE
0x57D1D8: mov     [ecx+0C8h], edx
0x57D1DE: cmp     [ecx+0CCh], eax
0x57D1E4: jnz     short loc_57D1EC
0x57D1E6: mov     [ecx+0CCh], edx
0x57D1EC: push    eax
0x57D1ED: call    sub_5A47E0
0x57D1F2: pop     ecx
0x57D1F3: retn    4
