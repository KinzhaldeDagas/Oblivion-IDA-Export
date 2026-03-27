0x78E6A0: push    ecx
0x78E6A1: push    esi
0x78E6A2: mov     esi, ecx
0x78E6A4: call    sub_78E600
0x78E6A9: fstp    [esp+8+var_4]
0x78E6AD: fldz
0x78E6AF: fld     [esp+8+var_4]
0x78E6B3: fucom   st(1)
0x78E6B5: fnstsw  ax
0x78E6B7: fstp    st(1)
0x78E6B9: test    ah, 44h
0x78E6BC: jnp     short loc_78E6D6
0x78E6BE: xor     eax, eax
0x78E6C0: cmp     [esi+14h], eax
0x78E6C3: jle     short loc_78E6D6
0x78E6C5: fld     dword ptr [esi+eax*4]
0x78E6C8: add     eax, 1
0x78E6CB: fdiv    st, st(1)
0x78E6CD: fstp    dword ptr [esi+eax*4-4]
0x78E6D1: cmp     eax, [esi+14h]
0x78E6D4: jl      short loc_78E6C5
0x78E6D6: fstp    st
0x78E6D8: pop     esi
0x78E6D9: pop     ecx
0x78E6DA: retn
