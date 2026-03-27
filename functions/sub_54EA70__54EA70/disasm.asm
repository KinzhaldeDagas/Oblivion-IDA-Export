0x54EA70: mov     eax, [esp+arg_0]
0x54EA74: cmp     eax, [ecx+10h]
0x54EA77: jnb     short loc_54EA8A
0x54EA79: mov     ecx, [ecx+0Ch]
0x54EA7C: fld     dword ptr [ecx+eax*4]
0x54EA7F: fstp    [esp+arg_0]
0x54EA83: fld     [esp+arg_0]
0x54EA87: retn    4
0x54EA8A: fldz
0x54EA8C: fstp    [esp+arg_0]
0x54EA90: fld     [esp+arg_0]
0x54EA94: retn    4
