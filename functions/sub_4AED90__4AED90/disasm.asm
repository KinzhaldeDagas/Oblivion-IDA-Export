0x4AED90: fldz
0x4AED92: fld     [esp+arg_0]
0x4AED96: fcom    st(1)
0x4AED98: fnstsw  ax
0x4AED9A: fstp    st(1)
0x4AED9C: test    ah, 41h
0x4AED9F: jnz     short loc_4AEDB6
0x4AEDA1: fcom    qword ptr ds:0A309F0h
0x4AEDA7: fnstsw  ax
0x4AEDA9: test    ah, 41h
0x4AEDAC: jp      short loc_4AEDB6
0x4AEDAE: fstp    dword ptr [ecx+54h]
0x4AEDB1: mov     al, 1
0x4AEDB3: retn    4
0x4AEDB6: fstp    st
0x4AEDB8: xor     al, al
0x4AEDBA: retn    4
