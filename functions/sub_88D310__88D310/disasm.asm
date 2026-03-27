0x88D310: mov     edx, [esp+arg_4]
0x88D314: mov     eax, ecx
0x88D316: mov     ecx, [esp+arg_0]
0x88D31A: mov     word ptr [eax+6], 1
0x88D320: mov     dword ptr [eax], offset off_A96248
0x88D326: mov     [eax+8], ecx
0x88D329: mov     [eax+0Ch], edx
0x88D32C: cmp     word ptr [ecx+4], 0
0x88D331: jz      short locret_88D337
0x88D333: inc     word ptr [ecx+6]
0x88D337: retn    8
