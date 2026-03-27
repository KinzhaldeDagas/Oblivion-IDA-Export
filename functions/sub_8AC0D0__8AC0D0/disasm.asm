0x8AC0D0: fld     [esp+arg_0]
0x8AC0D4: fcomp   [esp+arg_4]
0x8AC0D8: fnstsw  ax
0x8AC0DA: test    ah, 41h
0x8AC0DD: jnz     short loc_8AC0E4
0x8AC0DF: fld     [esp+arg_0]
0x8AC0E3: retn
0x8AC0E4: fld     [esp+arg_4]
0x8AC0E8: retn
