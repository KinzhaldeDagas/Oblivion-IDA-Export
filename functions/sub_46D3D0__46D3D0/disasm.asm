0x46D3D0: mov     eax, [esp+arg_0]
0x46D3D4: cmp     eax, 42444F4Dh
0x46D3D9: jz      short loc_46D3EC
0x46D3DB: cmp     eax, 4C444F4Dh
0x46D3E0: jz      short loc_46D3EC
0x46D3E2: cmp     eax, 54444F4Dh
0x46D3E7: jz      short loc_46D3EC
0x46D3E9: xor     al, al
0x46D3EB: retn
0x46D3EC: mov     al, 1
0x46D3EE: retn
