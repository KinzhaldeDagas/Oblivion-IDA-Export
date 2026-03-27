0x7C2A40: push    ebx
0x7C2A41: push    esi
0x7C2A42: mov     esi, ecx
0x7C2A44: xor     ebx, ebx
0x7C2A46: cmp     [esi+4], ebx
0x7C2A49: jbe     short loc_7C2A9D
0x7C2A4B: push    edi
0x7C2A4C: lea     esp, [esp+0]
0x7C2A50: mov     eax, [esi+8]
0x7C2A53: cmp     dword ptr [eax+ebx*4], 0
0x7C2A57: jz      short loc_7C2A8A
0x7C2A59: lea     esp, [esp+0]
0x7C2A60: mov     ecx, [esi+8]
0x7C2A63: mov     edi, [ecx+ebx*4]
0x7C2A66: mov     edx, [edi]
0x7C2A68: lea     eax, [ecx+ebx*4]
0x7C2A6B: mov     [eax], edx
0x7C2A6D: mov     eax, [esi]
0x7C2A6F: mov     edx, [eax+10h]
0x7C2A72: push    edi
0x7C2A73: mov     ecx, esi
0x7C2A75: call    edx
0x7C2A77: mov     eax, [esi]
0x7C2A79: mov     edx, [eax+18h]
0x7C2A7C: push    edi
0x7C2A7D: mov     ecx, esi
0x7C2A7F: call    edx
0x7C2A81: mov     eax, [esi+8]
0x7C2A84: cmp     dword ptr [eax+ebx*4], 0
0x7C2A88: jnz     short loc_7C2A60
0x7C2A8A: add     ebx, 1
0x7C2A8D: cmp     ebx, [esi+4]
0x7C2A90: jb      short loc_7C2A50
0x7C2A92: pop     edi
0x7C2A93: mov     dword ptr [esi+0Ch], 0
0x7C2A9A: pop     esi
0x7C2A9B: pop     ebx
0x7C2A9C: retn
0x7C2A9D: mov     [esi+0Ch], ebx
0x7C2AA0: pop     esi
0x7C2AA1: pop     ebx
0x7C2AA2: retn
