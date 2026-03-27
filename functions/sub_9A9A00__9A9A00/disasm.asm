0x9A9A00: push    ebx
0x9A9A01: mov     ebx, [esp+4+arg_0]
0x9A9A05: mov     edx, [ebx]
0x9A9A07: test    edx, edx
0x9A9A09: setz    al
0x9A9A0C: test    al, al
0x9A9A0E: push    esi
0x9A9A0F: mov     esi, ecx
0x9A9A11: jz      short loc_9A9A1B
0x9A9A13: pop     esi
0x9A9A14: or      eax, 0FFFFFFFFh
0x9A9A17: pop     ebx
0x9A9A18: retn    4
0x9A9A1B: push    ebp
0x9A9A1C: push    edi
0x9A9A1D: movzx   edi, word ptr [esi+0Ah]
0x9A9A21: xor     eax, eax
0x9A9A23: test    di, di
0x9A9A26: jbe     short loc_9A9A48
0x9A9A28: mov     ebp, [esi+4]
0x9A9A2B: jmp     short loc_9A9A30
0x9A9A2D: align 10h
0x9A9A30: movzx   ecx, ax
0x9A9A33: cmp     dword ptr [ebp+ecx*4+0], 0
0x9A9A38: setz    cl
0x9A9A3B: test    cl, cl
0x9A9A3D: jnz     short loc_9A9A73
0x9A9A3F: add     eax, 1
0x9A9A42: cmp     ax, [esi+0Ah]
0x9A9A46: jb      short loc_9A9A30
0x9A9A48: movzx   ecx, word ptr [esi+8]
0x9A9A4C: movzx   edi, di
0x9A9A4F: cmp     edi, ecx
0x9A9A51: jb      short loc_9A9A61
0x9A9A53: movzx   edx, word ptr [esi+0Eh]
0x9A9A57: add     edx, edi
0x9A9A59: push    edx
0x9A9A5A: mov     ecx, esi
0x9A9A5C: call    sub_74A8C0
0x9A9A61: push    ebx
0x9A9A62: push    edi
0x9A9A63: mov     ecx, esi
0x9A9A65: call    sub_9A9670
0x9A9A6A: mov     eax, edi
0x9A9A6C: pop     edi
0x9A9A6D: pop     ebp
0x9A9A6E: pop     esi
0x9A9A6F: pop     ebx
0x9A9A70: retn    4
0x9A9A73: movzx   ebx, ax
0x9A9A76: mov     edi, [ebp+ebx*4+0]
0x9A9A7A: cmp     edi, edx
0x9A9A7C: jz      short loc_9A9AB6
0x9A9A7E: test    edi, edi
0x9A9A80: jz      short loc_9A9A9E
0x9A9A82: lea     edx, [edi+4]
0x9A9A85: push    edx; lpAddend
0x9A9A86: call    ds:InterlockedDecrement
0x9A9A8C: test    eax, eax
0x9A9A8E: jnz     short loc_9A9A9E
0x9A9A90: test    edi, edi
0x9A9A92: jz      short loc_9A9A9E
0x9A9A94: mov     eax, [edi]
0x9A9A96: mov     edx, [eax]
0x9A9A98: push    1
0x9A9A9A: mov     ecx, edi
0x9A9A9C: call    edx
0x9A9A9E: mov     eax, [esp+10h+arg_0]
0x9A9AA2: mov     eax, [eax]
0x9A9AA4: test    eax, eax
0x9A9AA6: mov     [ebp+ebx*4+0], eax
0x9A9AAA: jz      short loc_9A9AB6
0x9A9AAC: add     eax, 4
0x9A9AAF: push    eax; lpAddend
0x9A9AB0: call    ds:InterlockedIncrement
0x9A9AB6: add     word ptr [esi+0Ch], 1
0x9A9ABB: pop     edi
0x9A9ABC: pop     ebp
0x9A9ABD: pop     esi
0x9A9ABE: mov     eax, ebx
0x9A9AC0: pop     ebx
0x9A9AC1: retn    4
