0x4AED00: fldz
0x4AED02: fld     [esp+arg_0]
0x4AED06: fcom    st(1)
0x4AED08: fnstsw  ax
0x4AED0A: fstp    st(1)
0x4AED0C: test    ah, 1
0x4AED0F: jnz     short loc_4AED28
0x4AED11: fld     dword ptr ds:0A427E0h
0x4AED17: fcomp   st(1)
0x4AED19: fnstsw  ax
0x4AED1B: test    ah, 1
0x4AED1E: jnz     short loc_4AED28
0x4AED20: fstp    dword ptr [ecx+48h]
0x4AED23: mov     al, 1
0x4AED25: retn    4
0x4AED28: fstp    st
0x4AED2A: xor     al, al
0x4AED2C: retn    4
