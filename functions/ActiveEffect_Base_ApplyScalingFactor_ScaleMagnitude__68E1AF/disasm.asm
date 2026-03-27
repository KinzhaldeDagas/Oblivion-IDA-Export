0x68E1AF: fmul    dword ptr [esi+18h]
0x68E1B2: push    ecx
0x68E1B3: fstp    [esp+4+arg_4]
0x68E1B7: fld     [esp+4+arg_4]
0x68E1BB: fstp    [esp+4+var_4]; float
0x68E1BE: call    FloatFloor
0x68E1C3: fstp    [esp+4+arg_4]
0x68E1C7: add     esp, 4
0x68E1CA: fld1
0x68E1CC: fld     [esp+arg_4]
0x68E1D0: fcom    st(1)
0x68E1D2: fnstsw  ax
0x68E1D4: test    ah, 5
0x68E1D7: jp      short loc_68E1EA
0x68E1D9: fstp    st
0x68E1DB: fstp    [esp+arg_4]
0x68E1DF: fld     [esp+arg_4]
0x68E1E3: fstp    dword ptr [esi+18h]
0x68E1E6: pop     esi
0x68E1E7: retn    4
0x68E1EA: fstp    st(1)
0x68E1EC: fstp    [esp+arg_4]
0x68E1F0: fld     [esp+arg_4]
0x68E1F4: fstp    dword ptr [esi+18h]
0x68E1F7: pop     esi
0x68E1F8: retn    4
