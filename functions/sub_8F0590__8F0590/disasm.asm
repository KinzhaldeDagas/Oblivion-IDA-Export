0x8F0590: mov     eax, ecx
0x8F0592: mov     ecx, [esp+arg_0]
0x8F0596: mov     word ptr [eax+6], 1
0x8F059C: mov     dword ptr [eax+8], 0
0x8F05A3: mov     dword ptr [eax], offset off_A9B120
0x8F05A9: mov     [eax+0Ch], ecx
0x8F05AC: cmp     word ptr [ecx+4], 0
0x8F05B1: jz      short loc_8F05B7
0x8F05B3: inc     word ptr [ecx+6]
0x8F05B7: mov     cl, [esp+arg_4]
0x8F05BB: mov     dword ptr [eax], offset off_A9B148
0x8F05C1: mov     [eax+10h], cl
0x8F05C4: retn    8
