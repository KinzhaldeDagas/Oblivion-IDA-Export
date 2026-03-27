0x54E580: fld     [esp+arg_0]
0x54E584: fld     st
0x54E586: fld     dword ptr [ecx+8]
0x54E589: fucompp
0x54E58B: fnstsw  ax
0x54E58D: test    ah, 44h
0x54E590: jnp     short loc_54E59A
0x54E592: fstp    dword ptr [ecx+8]
0x54E595: mov     al, 1
0x54E597: retn    4
0x54E59A: fstp    st
0x54E59C: xor     al, al
0x54E59E: retn    4
