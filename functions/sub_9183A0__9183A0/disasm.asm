0x9183A0: mov     dl, [esp+arg_4]
0x9183A4: mov     eax, ecx
0x9183A6: mov     ecx, [esp+arg_0]
0x9183AA: mov     word ptr [eax+6], 1
0x9183B0: mov     dword ptr [eax], offset off_A9D1B8
0x9183B6: mov     [eax+8], ecx
0x9183B9: mov     [eax+0Ch], dl
0x9183BC: cmp     word ptr [ecx+4], 0
0x9183C1: jz      short locret_9183C7
0x9183C3: inc     word ptr [ecx+6]
0x9183C7: retn    8
