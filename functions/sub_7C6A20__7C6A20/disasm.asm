0x7C6A20: push    ebx
0x7C6A21: push    ebp
0x7C6A22: mov     ebx, ecx
0x7C6A24: mov     eax, [ebx]
0x7C6A26: mov     edx, [eax+4]
0x7C6A29: push    esi
0x7C6A2A: push    edi
0x7C6A2B: call    edx
0x7C6A2D: mov     ebp, [esp+10h+arg_4]
0x7C6A31: mov     esi, eax
0x7C6A33: mov     edi, [esi+8]
0x7C6A36: cmp     edi, [ebp+0]
0x7C6A39: jz      short loc_7C6A6F
0x7C6A3B: test    edi, edi
0x7C6A3D: jz      short loc_7C6A5B
0x7C6A3F: lea     eax, [edi+4]
0x7C6A42: push    eax; lpAddend
0x7C6A43: call    dword ptr ds:0A2807Ch
0x7C6A49: test    eax, eax
0x7C6A4B: jnz     short loc_7C6A5B
0x7C6A4D: test    edi, edi
0x7C6A4F: jz      short loc_7C6A5B
0x7C6A51: mov     edx, [edi]
0x7C6A53: mov     eax, [edx]
0x7C6A55: push    1
0x7C6A57: mov     ecx, edi
0x7C6A59: call    eax
0x7C6A5B: mov     eax, [ebp+0]
0x7C6A5E: test    eax, eax
0x7C6A60: mov     [esi+8], eax
0x7C6A63: jz      short loc_7C6A6F
0x7C6A65: add     eax, 4
0x7C6A68: push    eax; lpAddend
0x7C6A69: call    dword ptr ds:0A28078h
0x7C6A6F: mov     eax, [esp+10h+arg_0]
0x7C6A73: mov     [esi], eax
0x7C6A75: mov     ecx, [eax+4]
0x7C6A78: mov     [esi+4], ecx
0x7C6A7B: mov     ecx, [eax+4]
0x7C6A7E: test    ecx, ecx
0x7C6A80: jz      short loc_7C6A94
0x7C6A82: mov     [ecx], esi
0x7C6A84: mov     [eax+4], esi
0x7C6A87: add     dword ptr [ebx+0Ch], 1
0x7C6A8B: pop     edi
0x7C6A8C: mov     eax, esi
0x7C6A8E: pop     esi
0x7C6A8F: pop     ebp
0x7C6A90: pop     ebx
0x7C6A91: retn    8
0x7C6A94: mov     [ebx+4], esi
0x7C6A97: mov     [eax+4], esi
0x7C6A9A: add     dword ptr [ebx+0Ch], 1
0x7C6A9E: pop     edi
0x7C6A9F: mov     eax, esi
0x7C6AA1: pop     esi
0x7C6AA2: pop     ebp
0x7C6AA3: pop     ebx
0x7C6AA4: retn    8
