0x55AC90: cmp     dword ptr [ecx+8], 0
0x55AC94: jz      short locret_55ACD1
0x55AC96: push    esi
0x55AC97: mov     esi, [esp+4+arg_0]
0x55AC9B: test    esi, esi
0x55AC9D: jz      short loc_55ACD0
0x55AC9F: mov     edx, [esp+4+arg_4]
0x55ACA3: test    edx, edx
0x55ACA5: jz      short loc_55ACD0
0x55ACA7: fldz
0x55ACA9: fld     [esp+4+arg_8]
0x55ACAD: fcom    st(1)
0x55ACAF: fnstsw  ax
0x55ACB1: fstp    st(1)
0x55ACB3: test    ah, 5
0x55ACB6: jnp     short loc_55ACCE
0x55ACB8: mov     ecx, [ecx+8]
0x55ACBB: mov     eax, [ecx]
0x55ACBD: push    ecx
0x55ACBE: fstp    [esp+8+var_8]
0x55ACC1: push    0
0x55ACC3: push    edx
0x55ACC4: mov     edx, [eax+8]
0x55ACC7: push    esi
0x55ACC8: call    edx
0x55ACCA: pop     esi
0x55ACCB: retn    0Ch
0x55ACCE: fstp    st
0x55ACD0: pop     esi
0x55ACD1: retn    0Ch
