0x9479F0: mov     dl, [esp+arg_4]
0x9479F4: mov     eax, ecx
0x9479F6: mov     ecx, [esp+arg_0]
0x9479FA: mov     word ptr [eax+6], 1
0x947A00: mov     dword ptr [eax], offset off_A98328
0x947A06: mov     [eax+8], ecx
0x947A09: mov     [eax+0Ch], dl
0x947A0C: cmp     word ptr [ecx+4], 0
0x947A11: jz      short locret_947A17
0x947A13: inc     word ptr [ecx+6]
0x947A17: retn    8
