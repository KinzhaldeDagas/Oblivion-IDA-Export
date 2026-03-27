0x71FD00: mov     ax, [ecx+40h]
0x71FD04: mov     edx, [esp+arg_0]
0x71FD08: mov     [edx], ax
0x71FD0B: mov     eax, [esp+arg_4]
0x71FD0F: mov     dword ptr [eax], 0
0x71FD15: mov     edx, [ecx+48h]
0x71FD18: mov     eax, [esp+arg_8]
0x71FD1C: mov     [eax], edx
0x71FD1E: movzx   eax, word ptr [ecx+40h]
0x71FD22: mov     edx, [esp+arg_C]
0x71FD26: lea     ecx, [eax+eax*2]
0x71FD29: mov     [edx], ecx
0x71FD2B: retn    10h
