0x8A9E50: push    ebx
0x8A9E51: push    ebp
0x8A9E52: push    esi
0x8A9E53: mov     esi, ecx
0x8A9E55: mov     ecx, [esi+4Ch]
0x8A9E58: push    edi
0x8A9E59: mov     edi, [esp+10h+arg_0]
0x8A9E5D: mov     edx, [edi+48h]
0x8A9E60: mov     eax, ecx
0x8A9E62: and     eax, 3FFFFFFFh
0x8A9E67: cmp     eax, edx
0x8A9E69: jge     short loc_8A9ED6
0x8A9E6B: test    ecx, ecx
0x8A9E6D: mov     ebx, ds:0BA9DE4h
0x8A9E73: mov     ebp, large fs:2Ch
0x8A9E7A: js      short loc_8A9E9F
0x8A9E7C: mov     ecx, [ebp+ebx*4+0]
0x8A9E80: mov     ecx, [ecx+19Ch]
0x8A9E86: test    ecx, ecx
0x8A9E88: jnz     short loc_8A9E90
0x8A9E8A: mov     ecx, ds:0BA7D9Ch
0x8A9E90: mov     edx, [esi+44h]
0x8A9E93: push    14h
0x8A9E95: shl     eax, 4
0x8A9E98: push    eax
0x8A9E99: push    edx
0x8A9E9A: call    sub_8A75D0
0x8A9E9F: mov     eax, [ebp+ebx*4+0]
0x8A9EA3: mov     eax, [eax+19Ch]
0x8A9EA9: test    eax, eax
0x8A9EAB: jnz     short loc_8A9EB2
0x8A9EAD: mov     eax, ds:0BA7D9Ch
0x8A9EB2: mov     ecx, [edi+48h]
0x8A9EB5: shl     ecx, 4
0x8A9EB8: push    14h
0x8A9EBA: push    ecx
0x8A9EBB: mov     ecx, eax
0x8A9EBD: call    sub_8A7560
0x8A9EC2: mov     edx, [esi+4Ch]
0x8A9EC5: mov     [esi+44h], eax
0x8A9EC8: mov     eax, [edi+48h]
0x8A9ECB: and     edx, 40000000h
0x8A9ED1: or      edx, eax
0x8A9ED3: mov     [esi+4Ch], edx
0x8A9ED6: mov     ecx, [edi+48h]
0x8A9ED9: test    ecx, ecx
0x8A9EDB: mov     eax, [esi+44h]
0x8A9EDE: mov     [esi+48h], ecx
0x8A9EE1: mov     edi, [edi+44h]
0x8A9EE4: jle     short loc_8A9F11
0x8A9EE6: mov     edx, edi
0x8A9EE8: sub     edx, eax
0x8A9EEA: lea     ebx, [ebx+0]
0x8A9EF0: lea     edi, [edx+eax]
0x8A9EF3: mov     ebp, [edi]
0x8A9EF5: mov     ebx, eax
0x8A9EF7: mov     [ebx], ebp
0x8A9EF9: mov     ebp, [edi+4]
0x8A9EFC: mov     [ebx+4], ebp
0x8A9EFF: mov     ebp, [edi+8]
0x8A9F02: mov     [ebx+8], ebp
0x8A9F05: mov     edi, [edi+0Ch]
0x8A9F08: add     eax, 10h
0x8A9F0B: dec     ecx
0x8A9F0C: mov     [ebx+0Ch], edi
0x8A9F0F: jnz     short loc_8A9EF0
0x8A9F11: mov     edx, [esi+48h]
0x8A9F14: xor     eax, eax
0x8A9F16: test    edx, edx
0x8A9F18: jle     short loc_8A9F49
0x8A9F1A: mov     esi, [esi+44h]
0x8A9F1D: mov     ecx, esi
0x8A9F1F: nop
0x8A9F20: cmp     dword ptr [ecx], 1140h
0x8A9F26: jz      short loc_8A9F37
0x8A9F28: inc     eax
0x8A9F29: add     ecx, 10h
0x8A9F2C: cmp     eax, edx
0x8A9F2E: jl      short loc_8A9F20
0x8A9F30: pop     edi
0x8A9F31: pop     esi
0x8A9F32: pop     ebp
0x8A9F33: pop     ebx
0x8A9F34: retn    4
0x8A9F37: shl     eax, 4
0x8A9F3A: lea     eax, [eax+esi+8]
0x8A9F3E: test    eax, eax
0x8A9F40: jz      short loc_8A9F49
0x8A9F42: mov     byte ptr [eax], 0FDh ; 'ý'
0x8A9F45: mov     byte ptr [eax+1], 0
0x8A9F49: pop     edi
0x8A9F4A: pop     esi
0x8A9F4B: pop     ebp
0x8A9F4C: pop     ebx
0x8A9F4D: retn    4
