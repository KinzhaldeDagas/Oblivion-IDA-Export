0x530A10: push    ecx
0x530A11: push    ebx
0x530A12: mov     ebx, [esp+8+arg_4]
0x530A16: push    ebp
0x530A17: xor     ebp, ebp
0x530A19: cmp     ebx, ebp
0x530A1B: mov     [esp+0Ch+var_4], ecx
0x530A1F: jz      loc_530ACB
0x530A25: push    esi
0x530A26: push    edi
0x530A27: call    sub_530500
0x530A2C: add     ebx, 8
0x530A2F: cmp     ebx, ebp
0x530A31: jz      short loc_530A79
0x530A33: mov     edi, [ebx]
0x530A35: cmp     edi, ebp
0x530A37: jz      short loc_530A79
0x530A39: mov     esi, [esp+14h+var_4]
0x530A3D: mov     ebx, [ebx+4]
0x530A40: add     esi, 8
0x530A43: cmp     [esi+4], ebp
0x530A46: jz      short loc_530A50
0x530A48: mov     esi, [esi+4]
0x530A4B: cmp     [esi+4], ebp
0x530A4E: jnz     short loc_530A48
0x530A50: cmp     [esi], ebp
0x530A52: jz      short loc_530A73
0x530A54: push    8; Size
0x530A56: call    FormHeapAlloc
0x530A5B: add     esp, 4
0x530A5E: cmp     eax, ebp
0x530A60: jz      short loc_530A6C
0x530A62: mov     [eax], edi
0x530A64: mov     [eax+4], ebp
0x530A67: mov     [esi+4], eax
0x530A6A: jmp     short loc_530A75
0x530A6C: xor     eax, eax
0x530A6E: mov     [esi+4], eax
0x530A71: jmp     short loc_530A75
0x530A73: mov     [esi], edi
0x530A75: cmp     ebx, ebp
0x530A77: jnz     short loc_530A33
0x530A79: mov     ebx, [esp+14h+arg_4]
0x530A7D: lea     ecx, [ecx+0]
0x530A80: mov     edi, [ebx]
0x530A82: cmp     edi, ebp
0x530A84: jz      short loc_530AC9
0x530A86: mov     esi, [esp+14h+var_4]
0x530A8A: mov     ebx, [ebx+4]
0x530A8D: mov     eax, esi
0x530A8F: add     eax, 4
0x530A92: cmp     [eax], ebp
0x530A94: jz      short loc_530AA0
0x530A96: mov     esi, [eax]
0x530A98: cmp     [esi+4], ebp
0x530A9B: lea     eax, [esi+4]
0x530A9E: jnz     short loc_530A96
0x530AA0: cmp     [esi], ebp
0x530AA2: jz      short loc_530AC3
0x530AA4: push    8; Size
0x530AA6: call    FormHeapAlloc
0x530AAB: add     esp, 4
0x530AAE: cmp     eax, ebp
0x530AB0: jz      short loc_530ABC
0x530AB2: mov     [eax], edi
0x530AB4: mov     [eax+4], ebp
0x530AB7: mov     [esi+4], eax
0x530ABA: jmp     short loc_530AC5
0x530ABC: xor     eax, eax
0x530ABE: mov     [esi+4], eax
0x530AC1: jmp     short loc_530AC5
0x530AC3: mov     [esi], edi
0x530AC5: cmp     ebx, ebp
0x530AC7: jnz     short loc_530A80
0x530AC9: pop     edi
0x530ACA: pop     esi
0x530ACB: pop     ebp
0x530ACC: pop     ebx
0x530ACD: pop     ecx
0x530ACE: retn    8
