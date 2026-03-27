0x72F9F0: sub     esp, 8
0x72F9F3: push    esi
0x72F9F4: mov     esi, [esp+0Ch+arg_4]
0x72F9F8: fld     dword ptr [esi+8]
0x72F9FB: fld     dword ptr [esi+4]
0x72F9FE: fld     dword ptr [esi+0Ch]
0x72FA01: fld     st(1)
0x72FA03: fmulp   st(2), st
0x72FA05: fld     st(2)
0x72FA07: fmulp   st(3), st
0x72FA09: fxch    st(1)
0x72FA0B: faddp   st(2), st
0x72FA0D: fmul    st, st
0x72FA0F: faddp   st(1), st
0x72FA11: fstp    [esp+0Ch+arg_4]
0x72FA15: fld     [esp+0Ch+arg_4]
0x72FA19: call    __CIsqrt
0x72FA1E: fstp    [esp+0Ch+arg_4]
0x72FA22: fld     [esp+0Ch+arg_4]
0x72FA26: fstp    [esp+0Ch+var_8]
0x72FA2A: fld     [esp+0Ch+var_8]
0x72FA2E: fsincos
0x72FA30: fstp    [esp+0Ch+var_4]
0x72FA34: fstp    [esp+0Ch+arg_4]
0x72FA38: fld     [esp+0Ch+arg_4]
0x72FA3C: fld     st
0x72FA3E: fabs
0x72FA40: fstp    [esp+0Ch+arg_4]
0x72FA44: fld     [esp+0Ch+arg_4]
0x72FA48: fld     dword ptr ds:0A7EAB0h
0x72FA4E: fcompp
0x72FA50: fnstsw  ax
0x72FA52: test    ah, 41h
0x72FA55: jnz     short loc_72FA5D
0x72FA57: fstp    st
0x72FA59: fld1
0x72FA5B: jmp     short loc_72FA61
0x72FA5D: fdiv    [esp+0Ch+var_8]
0x72FA61: fstp    [esp+0Ch+arg_4]
0x72FA65: sub     esp, 10h
0x72FA68: fld     dword ptr [esi+0Ch]
0x72FA6B: fld     [esp+1Ch+arg_4]
0x72FA6F: fld     st
0x72FA71: fmulp   st(2), st
0x72FA73: fxch    st(1)
0x72FA75: fstp    [esp+1Ch+arg_4]
0x72FA79: fld     [esp+1Ch+arg_4]
0x72FA7D: fstp    [esp+1Ch+var_10]; float
0x72FA81: fld     st
0x72FA83: fmul    dword ptr [esi+8]
0x72FA86: fstp    [esp+1Ch+arg_4]
0x72FA8A: fld     [esp+1Ch+arg_4]
0x72FA8E: fstp    [esp+1Ch+var_14]; float
0x72FA92: fmul    dword ptr [esi+4]
0x72FA95: mov     esi, [esp+1Ch+arg_0]
0x72FA99: mov     ecx, esi
0x72FA9B: fstp    [esp+1Ch+arg_4]
0x72FA9F: fld     [esp+1Ch+arg_4]
0x72FAA3: fstp    [esp+1Ch+var_18]; float
0x72FAA7: fld     [esp+1Ch+var_4]
0x72FAAB: fstp    [esp+1Ch+var_1C]; float
0x72FAAE: call    sub_714C40
0x72FAB3: mov     eax, esi
0x72FAB5: pop     esi
0x72FAB6: add     esp, 8
0x72FAB9: retn
