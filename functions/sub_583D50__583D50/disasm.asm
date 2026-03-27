0x583D50: push    ecx
0x583D51: mov     eax, ds:0B3A6E0h
0x583D56: mov     ecx, [eax+130h]
0x583D5C: mov     ecx, [ecx+10h]
0x583D5F: test    ecx, ecx
0x583D61: jz      short loc_583D72
0x583D63: mov     eax, [esp+4+arg_0]
0x583D67: cmp     eax, [ecx]
0x583D69: jz      short loc_583D76
0x583D6B: mov     ecx, [ecx+10h]
0x583D6E: test    ecx, ecx
0x583D70: jnz     short loc_583D67
0x583D72: fld1
0x583D74: pop     ecx
0x583D75: retn
0x583D76: fldz
0x583D78: fcomp   dword ptr [ecx+8]
0x583D7B: fnstsw  ax
0x583D7D: test    ah, 5
0x583D80: jp      short loc_583DC3
0x583D82: fld     dword ptr [ecx+4]
0x583D85: fdiv    dword ptr [ecx+8]
0x583D88: fld1
0x583D8A: fcom    st(1)
0x583D8C: fnstsw  ax
0x583D8E: test    ah, 5
0x583D91: jnp     short loc_583DB0
0x583D93: fld     st(1)
0x583D95: fldz
0x583D97: fcom    st(1)
0x583D99: fnstsw  ax
0x583D9B: fstp    st(1)
0x583D9D: test    ah, 41h
0x583DA0: jnz     short loc_583DAE
0x583DA2: fstp    st(2)
0x583DA4: fstp    st
0x583DA6: fstp    [esp+4+var_4]
0x583DA9: fld     [esp+4+var_4]
0x583DAC: pop     ecx
0x583DAD: retn
0x583DAE: fstp    st
0x583DB0: fcom    st(1)
0x583DB2: fnstsw  ax
0x583DB4: test    ah, 5
0x583DB7: jp      short loc_583DA4
0x583DB9: fstp    st(1)
0x583DBB: fstp    [esp+4+var_4]
0x583DBE: fld     [esp+4+var_4]
0x583DC1: pop     ecx
0x583DC2: retn
0x583DC3: fld     dword ptr ds:0A30634h
0x583DC9: pop     ecx
0x583DCA: retn
