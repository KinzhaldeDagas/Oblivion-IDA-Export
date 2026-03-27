0x54E980: push    ecx
0x54E981: fldz
0x54E983: fld     dword ptr ds:0B39AB8h
0x54E989: fcom    st(1)
0x54E98B: fnstsw  ax
0x54E98D: test    ah, 41h
0x54E990: jnz     short loc_54E99C
0x54E992: fstp    st(1)
0x54E994: fstp    [esp+4+var_4]
0x54E997: fld     [esp+4+var_4]
0x54E99A: pop     ecx
0x54E99B: retn
0x54E99C: fstp    st
0x54E99E: fstp    [esp+4+var_4]
0x54E9A1: fld     [esp+4+var_4]
0x54E9A4: pop     ecx
0x54E9A5: retn
