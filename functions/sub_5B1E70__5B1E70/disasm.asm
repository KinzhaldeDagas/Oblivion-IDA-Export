0x5B1E70: sub     esp, 8
0x5B1E73: push    ebx
0x5B1E74: push    esi
0x5B1E75: mov     esi, ecx
0x5B1E77: xor     ebx, ebx
0x5B1E79: test    esi, esi
0x5B1E7B: jz      short loc_5B1EE9
0x5B1E7D: xor     ecx, ecx
0x5B1E7F: mov     eax, esi
0x5B1E81: cmp     [eax], ebx
0x5B1E83: jz      short loc_5B1E88
0x5B1E85: add     ecx, 1
0x5B1E88: mov     eax, [eax+4]
0x5B1E8B: test    eax, eax
0x5B1E8D: jnz     short loc_5B1E81
0x5B1E8F: test    ecx, ecx
0x5B1E91: mov     [esp+10h+var_4], ecx
0x5B1E95: mov     al, 1
0x5B1E97: jz      short loc_5B1EE9
0x5B1E99: push    ebp
0x5B1E9A: push    edi
0x5B1E9B: jmp     short loc_5B1EA4
0x5B1E9D: align 10h
0x5B1EA0: mov     al, [esp+18h+var_5]
0x5B1EA4: test    al, al
0x5B1EA6: jz      short loc_5B1EE7
0x5B1EA8: test    esi, esi
0x5B1EAA: mov     [esp+18h+var_5], 0
0x5B1EAF: jz      short loc_5B1EE0
0x5B1EB1: test    ebx, ebx
0x5B1EB3: jz      short loc_5B1ED7
0x5B1EB5: mov     ebp, [esi]
0x5B1EB7: mov     edi, [ebx]
0x5B1EB9: push    ebp
0x5B1EBA: push    edi
0x5B1EBB: call    [esp+20h+arg_0]
0x5B1EBF: add     esp, 8
0x5B1EC2: test    eax, eax
0x5B1EC4: jle     short loc_5B1ED7
0x5B1EC6: test    edi, edi
0x5B1EC8: jz      short loc_5B1ECC
0x5B1ECA: mov     [esi], edi
0x5B1ECC: test    ebp, ebp
0x5B1ECE: jz      short loc_5B1ED2
0x5B1ED0: mov     [ebx], ebp
0x5B1ED2: mov     [esp+18h+var_5], 1
0x5B1ED7: mov     ebx, esi
0x5B1ED9: mov     esi, [esi+4]
0x5B1EDC: test    esi, esi
0x5B1EDE: jnz     short loc_5B1EB1
0x5B1EE0: sub     [esp+18h+var_4], 1
0x5B1EE5: jnz     short loc_5B1EA0
0x5B1EE7: pop     edi
0x5B1EE8: pop     ebp
0x5B1EE9: pop     esi
0x5B1EEA: pop     ebx
0x5B1EEB: add     esp, 8
0x5B1EEE: retn    4
