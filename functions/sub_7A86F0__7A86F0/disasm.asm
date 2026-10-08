0x7A86F0: mov     eax, [esp+first]; OBLIVION AUTHORITY (2026-08-30): Assigns one 8-byte SLodEntry value across an initialized destination range; compiler-folded trivial pair helper.
0x7A86F4: mov     edx, [esp+last]
0x7A86F8: cmp     eax, edx
0x7A86FA: jz      short locret_7A8713
0x7A86FC: mov     ecx, [esp+value]
0x7A8700: push    esi
0x7A8701: mov     esi, [ecx]
0x7A8703: mov     [eax], esi
0x7A8705: mov     esi, [ecx+4]
0x7A8708: mov     [eax+4], esi
0x7A870B: add     eax, 8
0x7A870E: cmp     eax, edx
0x7A8710: jnz     short loc_7A8701
0x7A8712: pop     esi
0x7A8713: retn
