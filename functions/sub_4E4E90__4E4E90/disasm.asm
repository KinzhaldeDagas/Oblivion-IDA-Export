0x4E4E90: push    edi
0x4E4E91: mov     edi, [ecx+24h]
0x4E4E94: or      eax, 0FFFFFFFFh
0x4E4E97: test    edi, edi
0x4E4E99: jz      short loc_4E4ECA
0x4E4E9B: push    ebx
0x4E4E9C: mov     ebx, [esp+8+arg_0]
0x4E4EA0: test    ebx, ebx
0x4E4EA2: jz      short loc_4E4EC9
0x4E4EA4: push    esi
0x4E4EA5: movzx   esi, word ptr [ecx+30h]
0x4E4EA9: xor     edx, edx
0x4E4EAB: test    esi, esi
0x4E4EAD: jle     short loc_4E4EC8
0x4E4EAF: mov     ecx, [edi+4]
0x4E4EB2: cmp     [ecx], ebx
0x4E4EB4: jz      short loc_4E4EC6
0x4E4EB6: add     edx, 1
0x4E4EB9: add     ecx, 4
0x4E4EBC: cmp     edx, esi
0x4E4EBE: jl      short loc_4E4EB2
0x4E4EC0: pop     esi
0x4E4EC1: pop     ebx
0x4E4EC2: pop     edi
0x4E4EC3: retn    4
0x4E4EC6: mov     eax, edx
0x4E4EC8: pop     esi
0x4E4EC9: pop     ebx
0x4E4ECA: pop     edi
0x4E4ECB: retn    4
