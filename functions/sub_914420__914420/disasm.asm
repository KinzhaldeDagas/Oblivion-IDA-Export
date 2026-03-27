0x914420: mov     eax, ecx
0x914422: mov     ecx, [esp+arg_0]
0x914426: mov     word ptr [eax+6], 1
0x91442C: mov     dword ptr [eax+8], 0
0x914433: mov     dword ptr [eax], offset off_A9B120
0x914439: mov     [eax+0Ch], ecx
0x91443C: cmp     word ptr [ecx+4], 0
0x914441: jz      short loc_914447
0x914443: inc     word ptr [ecx+6]
0x914447: mov     ecx, [esp+arg_4]
0x91444B: mov     dword ptr [eax], offset off_A9CE84
0x914451: mov     [eax+10h], ecx
0x914454: cmp     word ptr [ecx+4], 0
0x914459: jz      short locret_91445F
0x91445B: inc     word ptr [ecx+6]
0x91445F: retn    8
