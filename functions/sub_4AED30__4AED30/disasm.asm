0x4AED30: fldz
0x4AED32: fld     [esp+arg_0]
0x4AED36: fcom    st(1)
0x4AED38: fnstsw  ax
0x4AED3A: fstp    st(1)
0x4AED3C: test    ah, 1
0x4AED3F: jnz     short loc_4AED54
0x4AED41: fld1
0x4AED43: fcomp   st(1)
0x4AED45: fnstsw  ax
0x4AED47: test    ah, 1
0x4AED4A: jnz     short loc_4AED54
0x4AED4C: fstp    dword ptr [ecx+4Ch]
0x4AED4F: mov     al, 1
0x4AED51: retn    4
0x4AED54: fstp    st
0x4AED56: xor     al, al
0x4AED58: retn    4
