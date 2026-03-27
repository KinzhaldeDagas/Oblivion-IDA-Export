0x73AA00: push    ecx
0x73AA01: mov     eax, [esp+4+arg_0]
0x73AA05: push    ebx
0x73AA06: push    ebp
0x73AA07: push    esi
0x73AA08: push    edi
0x73AA09: push    eax
0x73AA0A: mov     ebp, ecx
0x73AA0C: call    sub_70D440
0x73AA11: movzx   eax, word ptr [ebp+12Eh]
0x73AA18: xor     edi, edi
0x73AA1A: test    eax, eax
0x73AA1C: mov     [esp+14h+arg_0], eax
0x73AA20: jbe     short loc_73AA6D
0x73AA22: lea     esi, [ebp+124h]
0x73AA28: jmp     short loc_73AA30
0x73AA2A: align 10h
0x73AA30: movzx   ebx, word ptr [esi+0Ah]
0x73AA34: movzx   eax, word ptr [esi+8]
0x73AA38: cmp     ebx, eax
0x73AA3A: mov     ecx, [ebp+128h]
0x73AA40: lea     edx, [ecx+edi*4]
0x73AA43: mov     [esp+14h+var_4], edx
0x73AA47: jb      short loc_73AA57
0x73AA49: movzx   ecx, word ptr [esi+0Eh]
0x73AA4D: add     ecx, ebx
0x73AA4F: push    ecx
0x73AA50: mov     ecx, esi
0x73AA52: call    sub_6C4510
0x73AA57: mov     edx, [esp+14h+var_4]
0x73AA5B: push    edx
0x73AA5C: push    ebx
0x73AA5D: mov     ecx, esi
0x73AA5F: call    sub_739810
0x73AA64: add     edi, 1
0x73AA67: cmp     edi, [esp+14h+arg_0]
0x73AA6B: jb      short loc_73AA30
0x73AA6D: lea     ecx, [ebp+124h]
0x73AA73: call    sub_739670
0x73AA78: movzx   eax, word ptr [ebp+13Eh]
0x73AA7F: xor     ebx, ebx
0x73AA81: test    eax, eax
0x73AA83: mov     [esp+14h+arg_0], eax
0x73AA87: jbe     short loc_73AACD
0x73AA89: lea     esi, [ebp+134h]
0x73AA8F: nop
0x73AA90: movzx   edi, word ptr [esi+0Ah]
0x73AA94: movzx   edx, word ptr [esi+8]
0x73AA98: cmp     edi, edx
0x73AA9A: mov     eax, [ebp+138h]
0x73AAA0: lea     ecx, [eax+ebx*4]
0x73AAA3: mov     [esp+14h+var_4], ecx
0x73AAA7: jb      short loc_73AAB7
0x73AAA9: movzx   eax, word ptr [esi+0Eh]
0x73AAAD: add     eax, edi
0x73AAAF: push    eax
0x73AAB0: mov     ecx, esi
0x73AAB2: call    sub_6C4510
0x73AAB7: mov     ecx, [esp+14h+var_4]
0x73AABB: push    ecx
0x73AABC: push    edi
0x73AABD: mov     ecx, esi
0x73AABF: call    sub_7395A0
0x73AAC4: add     ebx, 1
0x73AAC7: cmp     ebx, [esp+14h+arg_0]
0x73AACB: jb      short loc_73AA90
0x73AACD: lea     ecx, [ebp+134h]
0x73AAD3: call    sub_739670
0x73AAD8: pop     edi
0x73AAD9: pop     esi
0x73AADA: pop     ebp
0x73AADB: pop     ebx
0x73AADC: pop     ecx
0x73AADD: retn    4
