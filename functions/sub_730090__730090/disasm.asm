0x730090: mov     eax, [esp+arg_0]
0x730094: cmp     eax, [ecx+0Ch]
0x730097: jnb     short loc_7300A8
0x730099: mov     ecx, [ecx+10h]
0x73009C: fld     [esp+arg_4]
0x7300A0: fstp    dword ptr [ecx+eax*4]
0x7300A3: mov     al, 1
0x7300A5: retn    8
0x7300A8: xor     al, al
0x7300AA: retn    8
