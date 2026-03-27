0x9A5610: mov     ecx, [esp+arg_0]
0x9A5614: mov     edx, [esp+arg_4]
0x9A5618: mov     eax, [esp+arg_8]
0x9A561C: add     ecx, 0FFFFFFFFh; switch 22 cases
0x9A561F: cmp     ecx, 15h
0x9A5622: mov     dword ptr [edx], 1
0x9A5628: mov     dword ptr [eax], 4
0x9A562E: ja      short def_9A5637
0x9A5630: movzx   ecx, ds:byte_9A5688[ecx]
0x9A5637: jmp     ds:jpt_9A5637[ecx*4]; switch jump
0x9A563E: mov     dword ptr [eax], 1; jumptable 009A5637 cases 1,22
0x9A5644: mov     eax, 4
0x9A5649: retn
0x9A564A: mov     eax, 7; jumptable 009A5637 cases 2-11,14,15,18-21
0x9A564F: retn
0x9A5650: mov     dword ptr [edx], 4; jumptable 009A5637 cases 12,13
0x9A5656: mov     dword ptr [eax], 10h
0x9A565C: mov     eax, 9
0x9A5661: retn
0x9A5662: mov     dword ptr [edx], 3; jumptable 009A5637 cases 16,17
0x9A5668: mov     dword ptr [eax], 0Ch
0x9A566E: mov     eax, 8
0x9A5673: retn
