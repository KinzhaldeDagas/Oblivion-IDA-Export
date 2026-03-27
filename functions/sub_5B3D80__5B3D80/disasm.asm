0x5B3D80: mov     eax, [esp+arg_0]
0x5B3D84: add     eax, 0FFFFFFFFh; switch 21 cases
0x5B3D87: cmp     eax, 14h
0x5B3D8A: ja      short def_5B3D93; jumptable 005B3D93 default case, cases 2-10,19,20
0x5B3D8C: movzx   eax, ds:byte_5B3E2C[eax]
0x5B3D93: jmp     ds:jpt_5B3D93[eax*4]; switch jump
0x5B3D9A: mov     edx, [esp+arg_4]; jumptable 005B3D93 case 1
0x5B3D9E: mov     [ecx+28h], edx
0x5B3DA1: retn    8
0x5B3DA4: mov     eax, [esp+arg_4]; jumptable 005B3D93 case 11
0x5B3DA8: mov     [ecx+2Ch], eax
0x5B3DAB: retn    8
0x5B3DAE: mov     edx, [esp+arg_4]; jumptable 005B3D93 case 12
0x5B3DB2: mov     [ecx+30h], edx
0x5B3DB5: retn    8
0x5B3DB8: mov     eax, [esp+arg_4]; jumptable 005B3D93 case 13
0x5B3DBC: mov     [ecx+34h], eax
0x5B3DBF: retn    8
0x5B3DC2: mov     edx, [esp+arg_4]; jumptable 005B3D93 case 14
0x5B3DC6: mov     [ecx+38h], edx
0x5B3DC9: retn    8
0x5B3DCC: mov     eax, [esp+arg_4]; jumptable 005B3D93 case 15
0x5B3DD0: mov     [ecx+3Ch], eax
0x5B3DD3: retn    8
0x5B3DD6: mov     edx, [esp+arg_4]; jumptable 005B3D93 case 16
0x5B3DDA: mov     [ecx+40h], edx
0x5B3DDD: retn    8
0x5B3DE0: mov     eax, [esp+arg_4]; jumptable 005B3D93 case 17
0x5B3DE4: mov     [ecx+44h], eax
0x5B3DE7: retn    8
0x5B3DEA: mov     edx, [esp+arg_4]; jumptable 005B3D93 case 18
0x5B3DEE: mov     [ecx+48h], edx
0x5B3DF1: retn    8
0x5B3DF4: mov     eax, [esp+arg_4]; jumptable 005B3D93 case 21
0x5B3DF8: mov     [ecx+4Ch], eax
0x5B3DFB: retn    8; jumptable 005B3D93 default case, cases 2-10,19,20
