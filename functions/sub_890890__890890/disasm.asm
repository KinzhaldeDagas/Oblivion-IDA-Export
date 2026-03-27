0x890890: fld     [esp+arg_0]
0x890894: fld     st
0x890896: fabs
0x890898: fstp    [esp+arg_0]
0x89089C: fld     [esp+arg_0]
0x8908A0: fld     dword ptr [ecx+304h]
0x8908A6: fabs
0x8908A8: fstp    [esp+arg_0]
0x8908AC: fld     [esp+arg_0]
0x8908B0: fcompp
0x8908B2: fnstsw  ax
0x8908B4: test    ah, 5
0x8908B7: jp      short loc_8908CC
0x8908B9: fstp    dword ptr [ecx+304h]
0x8908BF: fld     [esp+arg_4]
0x8908C3: fstp    dword ptr [ecx+308h]
0x8908C9: retn    8
0x8908CC: fstp    st
0x8908CE: retn    8
