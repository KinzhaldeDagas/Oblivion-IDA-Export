0x7300B0: mov     eax, [esp+arg_0]
0x7300B4: cmp     eax, [ecx+0Ch]
0x7300B7: jnb     short loc_7300C2
0x7300B9: mov     ecx, [ecx+10h]
0x7300BC: fld     dword ptr [ecx+eax*4]
0x7300BF: retn    4
0x7300C2: fldz
0x7300C4: retn    4
