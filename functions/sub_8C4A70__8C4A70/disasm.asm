0x8C4A70: mov     eax, [esp+arg_0]
0x8C4A74: mov     edx, eax
0x8C4A76: and     eax, 0FFFFFFh
0x8C4A7B: push    edi
0x8C4A7C: mov     edi, [ecx+10h]
0x8C4A7F: add     eax, 1
0x8C4A82: shr     edx, 18h
0x8C4A85: cmp     eax, [edi+8]
0x8C4A88: jb      short loc_8C4A91
0x8C4A8A: or      eax, 0FFFFFFFFh
0x8C4A8D: pop     edi
0x8C4A8E: retn    4
0x8C4A91: push    esi
0x8C4A92: xor     esi, esi
0x8C4A94: test    edx, edx
0x8C4A96: jl      short loc_8C4AAD
0x8C4A98: mov     ecx, [edi+1Ch]
0x8C4A9B: push    ebx
0x8C4A9C: add     ecx, 4
0x8C4A9F: lea     ebx, [edx+1]
0x8C4AA2: add     esi, [ecx]
0x8C4AA4: add     ecx, 0Ch
0x8C4AA7: sub     ebx, 1
0x8C4AAA: jnz     short loc_8C4AA2
0x8C4AAC: pop     ebx
0x8C4AAD: mov     edi, [edi+14h]
0x8C4AB0: lea     ecx, [eax+eax*4]
0x8C4AB3: movzx   ecx, word ptr [edi+ecx*4]
0x8C4AB7: cmp     ecx, esi
0x8C4AB9: pop     esi
0x8C4ABA: jb      short loc_8C4ABF
0x8C4ABC: add     edx, 1
0x8C4ABF: and     eax, 0FFFFFFh
0x8C4AC4: shl     edx, 18h
0x8C4AC7: or      eax, edx
0x8C4AC9: pop     edi
0x8C4ACA: retn    4
