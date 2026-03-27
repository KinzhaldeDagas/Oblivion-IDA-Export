0x54E9B0: push    ecx
0x54E9B1: fldz
0x54E9B3: fld     dword ptr ds:0B39AC0h
0x54E9B9: fcom    st(1)
0x54E9BB: fnstsw  ax
0x54E9BD: test    ah, 41h
0x54E9C0: jnz     short loc_54E9CC
0x54E9C2: fstp    st(1)
0x54E9C4: fstp    [esp+4+var_4]
0x54E9C7: fld     [esp+4+var_4]
0x54E9CA: pop     ecx
0x54E9CB: retn
0x54E9CC: fstp    st
0x54E9CE: fstp    [esp+4+var_4]
0x54E9D1: fld     [esp+4+var_4]
0x54E9D4: pop     ecx
0x54E9D5: retn
