0x72FC00: sub     esp, 8
0x72FC03: push    esi
0x72FC04: mov     esi, [esp+0Ch+arg_8]
0x72FC08: fld     dword ptr [esi]
0x72FC0A: push    edi
0x72FC0B: mov     edi, [esp+10h+arg_C]
0x72FC0F: fmul    dword ptr [edi]
0x72FC11: sub     esp, 8
0x72FC14: fld     dword ptr [esi+4]
0x72FC17: fmul    dword ptr [edi+4]
0x72FC1A: faddp   st(1), st
0x72FC1C: fld     dword ptr [esi+8]
0x72FC1F: fmul    dword ptr [edi+8]
0x72FC22: faddp   st(1), st
0x72FC24: fld     dword ptr [esi+0Ch]
0x72FC27: fmul    dword ptr [edi+0Ch]
0x72FC2A: faddp   st(1), st
0x72FC2C: fstp    [esp+18h+arg_8]
0x72FC30: fld     dword ptr ds:0A3D65Ch
0x72FC36: fld     [esp+18h+arg_4]
0x72FC3A: fcom    st(1)
0x72FC3C: fnstsw  ax
0x72FC3E: fstp    st(1)
0x72FC40: test    ah, 41h
0x72FC43: fld     [esp+18h+arg_8]
0x72FC47: fstp    [esp+18h+var_14]; float
0x72FC4B: jp      short loc_72FC57
0x72FC4D: fstp    [esp+18h+var_18]; float
0x72FC50: call    sub_72FBA0
0x72FC55: jmp     short loc_72FC6F
0x72FC57: fld1
0x72FC59: fsubrp  st(1), st
0x72FC5B: fstp    [esp+18h+arg_8]
0x72FC5F: fld     [esp+18h+arg_8]
0x72FC63: fstp    [esp+18h+var_18]; float
0x72FC66: call    sub_72FBA0
0x72FC6B: fld1
0x72FC6D: fsubrp  st(1), st
0x72FC6F: fstp    [esp+18h+arg_8]
0x72FC73: add     esp, 8
0x72FC76: fld     dword ptr [esi+0Ch]
0x72FC79: sub     esp, 10h
0x72FC7C: fstp    [esp+20h+arg_C]
0x72FC80: fld     dword ptr [esi+8]
0x72FC83: fstp    [esp+20h+arg_4]
0x72FC87: fld     dword ptr [esi+4]
0x72FC8A: fstp    [esp+20h+var_8]
0x72FC8E: fld     dword ptr [esi]
0x72FC90: mov     esi, [esp+20h+arg_0]
0x72FC94: fstp    [esp+20h+var_4]
0x72FC98: mov     ecx, esi
0x72FC9A: fld     dword ptr [edi+0Ch]
0x72FC9D: fld     [esp+20h+arg_C]
0x72FCA1: fld     st
0x72FCA3: fsubp   st(2), st
0x72FCA5: fld     [esp+20h+arg_8]
0x72FCA9: fld     st
0x72FCAB: fmulp   st(3), st
0x72FCAD: fxch    st(2)
0x72FCAF: faddp   st(1), st
0x72FCB1: fstp    [esp+20h+arg_8]
0x72FCB5: fld     [esp+20h+arg_8]
0x72FCB9: fstp    [esp+20h+var_14]; float
0x72FCBD: fld     dword ptr [edi+8]
0x72FCC0: fld     [esp+20h+arg_4]
0x72FCC4: fld     st
0x72FCC6: fsubp   st(2), st
0x72FCC8: fld     st(2)
0x72FCCA: fmulp   st(2), st
0x72FCCC: faddp   st(1), st
0x72FCCE: fstp    [esp+20h+arg_8]
0x72FCD2: fld     [esp+20h+arg_8]
0x72FCD6: fstp    [esp+20h+var_18]; float
0x72FCDA: fld     dword ptr [edi+4]
0x72FCDD: fld     [esp+20h+var_8]
0x72FCE1: fld     st
0x72FCE3: fsubp   st(2), st
0x72FCE5: fld     st(2)
0x72FCE7: fmulp   st(2), st
0x72FCE9: faddp   st(1), st
0x72FCEB: fstp    [esp+20h+arg_8]
0x72FCEF: fld     [esp+20h+arg_8]
0x72FCF3: fstp    [esp+20h+var_1C]; float
0x72FCF7: fld     dword ptr [edi]
0x72FCF9: fld     [esp+20h+var_4]
0x72FCFD: fld     st
0x72FCFF: fsubp   st(2), st
0x72FD01: fxch    st(1)
0x72FD03: fmulp   st(2), st
0x72FD05: faddp   st(1), st
0x72FD07: fstp    [esp+20h+arg_8]
0x72FD0B: fld     [esp+20h+arg_8]
0x72FD0F: fstp    [esp+20h+var_20]; float
0x72FD12: call    sub_714C40
0x72FD17: mov     ecx, esi
0x72FD19: call    sub_72FAC0
0x72FD1E: pop     edi
0x72FD1F: mov     eax, esi
0x72FD21: pop     esi
0x72FD22: add     esp, 8
0x72FD25: retn
