0x910FC0: fld     [esp+arg_0]
0x910FC4: fabs
0x910FC6: fcomp   dword ptr ds:0A2F948h
0x910FCC: fnstsw  ax
0x910FCE: test    ah, 1
0x910FD1: jnz     short loc_910FF2
0x910FD3: fld     [esp+arg_0]
0x910FD7: fcomp   dword ptr ds:0A2FAA8h
0x910FDD: fnstsw  ax
0x910FDF: test    ah, 41h
0x910FE2: jnz     short loc_910FEB
0x910FE4: fld     dword ptr ds:0A3F3E0h
0x910FEA: retn
0x910FEB: fld     dword ptr ds:0A3721Ch
0x910FF1: retn
0x910FF2: fld     [esp+arg_0]
0x910FF6: call    __CIasin
0x910FFB: retn
