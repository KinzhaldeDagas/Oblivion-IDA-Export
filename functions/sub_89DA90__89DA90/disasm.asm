0x89DA90: fld     dword ptr [ecx+0C0h]
0x89DA96: fld     dword ptr ds:0A2FAA8h
0x89DA9C: fld     st(1)
0x89DA9E: fucompp
0x89DAA0: fnstsw  ax
0x89DAA2: test    ah, 44h
0x89DAA5: jp      short loc_89DAB0
0x89DAA7: fstp    st
0x89DAA9: fld     dword ptr ds:0A2FAA8h
0x89DAAF: retn
0x89DAB0: fdivr   dword ptr ds:0A2F948h
0x89DAB6: retn
