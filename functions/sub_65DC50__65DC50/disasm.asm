0x65DC50: sub     esp, 0Ch
0x65DC53: push    esi
0x65DC54: push    edi
0x65DC55: mov     edi, [esp+14h+arg_0]
0x65DC59: test    edi, edi
0x65DC5B: mov     esi, ecx
0x65DC5D: jz      loc_65DD15
0x65DC63: mov     eax, [edi]
0x65DC65: mov     edx, [eax+154h]
0x65DC6B: mov     ecx, edi
0x65DC6D: call    edx
0x65DC6F: test    eax, eax
0x65DC71: jz      loc_65DD15
0x65DC77: mov     eax, [esi]
0x65DC79: mov     edx, [eax+174h]
0x65DC7F: mov     ecx, esi
0x65DC81: call    edx
0x65DC83: mov     esi, eax
0x65DC85: mov     eax, [edi]
0x65DC87: mov     edx, [eax+174h]
0x65DC8D: mov     ecx, edi
0x65DC8F: call    edx
0x65DC91: fld     dword ptr [eax]
0x65DC93: fsub    dword ptr [esi]
0x65DC95: fstp    [esp+14h+var_C]
0x65DC99: fld     dword ptr [eax+4]
0x65DC9C: fsub    dword ptr [esi+4]
0x65DC9F: fstp    [esp+14h+var_8]
0x65DCA3: fld     dword ptr [eax+8]
0x65DCA6: fsub    dword ptr [esi+8]
0x65DCA9: fstp    [esp+14h+var_4]
0x65DCAD: fld     [esp+14h+var_8]
0x65DCB1: fld     [esp+14h+var_C]
0x65DCB5: fld     [esp+14h+var_4]
0x65DCB9: fld     st(1)
0x65DCBB: fmulp   st(2), st
0x65DCBD: fld     st(2)
0x65DCBF: fmulp   st(3), st
0x65DCC1: fxch    st(1)
0x65DCC3: faddp   st(2), st
0x65DCC5: fmul    st, st
0x65DCC7: faddp   st(1), st
0x65DCC9: fstp    [esp+14h+arg_0]
0x65DCCD: fld     [esp+14h+arg_0]
0x65DCD1: call    __CIsqrt
0x65DCD6: fstp    [esp+14h+arg_0]
0x65DCDA: fld     [esp+14h+arg_0]
0x65DCDE: push    ecx
0x65DCDF: fstp    [esp+18h+var_18]; float
0x65DCE2: call    sub_548A10
0x65DCE7: fstp    [esp+18h+arg_0]
0x65DCEB: add     esp, 4
0x65DCEE: fldz
0x65DCF0: fld     [esp+14h+arg_0]
0x65DCF4: fcom    st(1)
0x65DCF6: fnstsw  ax
0x65DCF8: fstp    st(1)
0x65DCFA: test    ah, 41h
0x65DCFD: jnz     short loc_65DD13
0x65DCFF: push    ecx
0x65DD00: fstp    [esp+18h+var_18]; float
0x65DD03: call    sub_7EB080
0x65DD08: add     esp, 4
0x65DD0B: pop     edi
0x65DD0C: pop     esi
0x65DD0D: add     esp, 0Ch
0x65DD10: retn    4
0x65DD13: fstp    st
0x65DD15: pop     edi
0x65DD16: pop     esi
0x65DD17: add     esp, 0Ch
0x65DD1A: retn    4
