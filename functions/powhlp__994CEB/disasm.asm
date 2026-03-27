0x994CEB: push    ebp
0x994CEC: mov     ebp, esp
0x994CEE: fldz
0x994CF0: push    esi
0x994CF1: fcom    [ebp+arg_0]
0x994CF4: xor     edx, edx
0x994CF6: xor     esi, esi
0x994CF8: fnstsw  ax
0x994CFA: fld     [ebp+arg_0]
0x994CFD: test    ah, 41h
0x994D00: jnz     short loc_994D04
0x994D02: fchs
0x994D04: mov     eax, 7FF00000h
0x994D09: cmp     dword ptr [ebp+arg_8+4], eax
0x994D0C: mov     ecx, 0FFF00000h
0x994D11: jnz     short loc_994D50
0x994D13: cmp     dword ptr [ebp+arg_8], edx
0x994D16: jnz     short loc_994D97
0x994D18: fld1
0x994D1A: fcom    st(1)
0x994D1C: fnstsw  ax
0x994D1E: test    ah, 5
0x994D21: jp      short loc_994D34
0x994D23: fstp    st(2)
0x994D25: fstp    st(1)
0x994D27: fstp    st
0x994D29: fld     dbl_B31B40
0x994D2F: jmp     loc_994E15
0x994D34: fcom    st(1)
0x994D36: fnstsw  ax
0x994D38: fstp    st(1)
0x994D3A: test    ah, 41h
0x994D3D: mov     eax, [ebp+arg_10]
0x994D40: jnz     short loc_994D49
0x994D42: fstp    st
0x994D44: jmp     loc_994E18
0x994D49: fstp    st(1)
0x994D4B: jmp     loc_994E18
0x994D50: cmp     dword ptr [ebp+arg_8+4], ecx
0x994D53: jnz     short loc_994D97
0x994D55: cmp     dword ptr [ebp+arg_8], edx
0x994D58: jnz     short loc_994D97
0x994D5A: fld1
0x994D5C: fcom    st(1)
0x994D5E: fnstsw  ax
0x994D60: test    ah, 5
0x994D63: jp      short loc_994D6E
0x994D65: fstp    st
0x994D67: fstp    st
0x994D69: jmp     loc_994E15
0x994D6E: fstp    st(2)
0x994D70: fcompp
0x994D72: fnstsw  ax
0x994D74: test    ah, 5
0x994D77: mov     eax, [ebp+arg_10]
0x994D7A: jp      short loc_994D87
0x994D7C: fld     dbl_B31B40
0x994D82: jmp     loc_994E18
0x994D87: fld     dbl_B31B48
0x994D8D: xor     esi, esi
0x994D8F: fstp    qword ptr [eax]
0x994D91: inc     esi
0x994D92: jmp     loc_994E24
0x994D97: cmp     dword ptr [ebp+arg_0+4], eax
0x994D9A: fstp    st
0x994D9C: jnz     short loc_994DC4
0x994D9E: cmp     dword ptr [ebp+arg_0], edx
0x994DA1: jnz     short loc_994E22
0x994DA3: fcom    [ebp+arg_8]
0x994DA6: fnstsw  ax
0x994DA8: test    ah, 5
0x994DAB: jnp     loc_994D27
0x994DB1: fcom    [ebp+arg_8]
0x994DB4: fnstsw  ax
0x994DB6: test    ah, 41h
0x994DB9: mov     eax, [ebp+arg_10]
0x994DBC: jz      short loc_994E18
0x994DBE: fstp    st
0x994DC0: fld1
0x994DC2: jmp     short loc_994E18
0x994DC4: cmp     dword ptr [ebp+arg_0+4], ecx
0x994DC7: fstp    st
0x994DC9: jnz     short loc_994E24
0x994DCB: cmp     dword ptr [ebp+arg_0], edx
0x994DCE: jnz     short loc_994E24
0x994DD0: fld     [ebp+arg_8]
0x994DD3: push    ecx
0x994DD4: push    ecx
0x994DD5: fstp    [esp+0Ch+var_C]; double
0x994DD8: call    __d_inttype
0x994DDD: fldz
0x994DDF: pop     ecx
0x994DE0: fcom    [ebp+arg_8]
0x994DE3: pop     ecx
0x994DE4: mov     ecx, eax
0x994DE6: fnstsw  ax
0x994DE8: test    ah, 5
0x994DEB: jp      short loc_994DFE
0x994DED: cmp     ecx, 1
0x994DF0: fstp    st
0x994DF2: fld     dbl_B31B40
0x994DF8: jnz     short loc_994E15
0x994DFA: fchs
0x994DFC: jmp     short loc_994E15
0x994DFE: fcom    [ebp+arg_8]
0x994E01: fnstsw  ax
0x994E03: test    ah, 41h
0x994E06: jnz     short loc_994E1C
0x994E08: cmp     ecx, 1
0x994E0B: jnz     short loc_994E15
0x994E0D: fstp    st
0x994E0F: fld     dbl_B31B60
0x994E15: mov     eax, [ebp+arg_10]
0x994E18: fstp    qword ptr [eax]
0x994E1A: jmp     short loc_994E24
0x994E1C: fstp    st
0x994E1E: fld1
0x994E20: jmp     short loc_994E15
0x994E22: fstp    st
0x994E24: mov     eax, esi
0x994E26: pop     esi
0x994E27: pop     ebp
0x994E28: retn
