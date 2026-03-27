0x772A80: push    ecx
0x772A81: push    ebx
0x772A82: push    ebp
0x772A83: push    esi
0x772A84: push    0Ch; Size
0x772A86: mov     esi, ecx
0x772A88: call    FormHeapAlloc
0x772A8D: xor     ebp, ebp
0x772A8F: add     esp, 4
0x772A92: cmp     eax, ebp
0x772A94: jz      short loc_772AAA
0x772A96: mov     ecx, [esp+10h+arg_0]
0x772A9A: push    ecx
0x772A9B: mov     ecx, eax
0x772A9D: call    sub_7728D0
0x772AA2: mov     ecx, eax
0x772AA4: mov     [esp+10h+var_4], ecx
0x772AA8: jmp     short loc_772AB0
0x772AAA: mov     [esp+10h+var_4], ebp
0x772AAE: mov     ecx, ebp
0x772AB0: xor     ebx, ebx
0x772AB2: cmp     [esp+10h+arg_0], ebp
0x772AB6: jbe     short loc_772B07
0x772AB8: push    edi
0x772AB9: lea     esp, [esp+0]
0x772AC0: cmp     ebx, [ecx+4]
0x772AC3: jb      short loc_772AC9
0x772AC5: xor     edi, edi
0x772AC7: jmp     short loc_772ACD
0x772AC9: mov     edi, [ecx]
0x772ACB: add     edi, ebp
0x772ACD: mov     eax, [esi+4]
0x772AD0: cmp     [esi+8], eax
0x772AD3: jnz     short loc_772AEE
0x772AD5: test    eax, eax
0x772AD7: jbe     short loc_772ADD
0x772AD9: add     eax, eax
0x772ADB: jmp     short loc_772AE2
0x772ADD: mov     eax, 1
0x772AE2: push    eax
0x772AE3: mov     ecx, esi
0x772AE5: call    sub_6E8CA0
0x772AEA: mov     ecx, [esp+14h+var_4]
0x772AEE: mov     edx, [esi+8]
0x772AF1: mov     eax, [esi]
0x772AF3: mov     [eax+edx*4], edi
0x772AF6: add     dword ptr [esi+8], 1
0x772AFA: add     ebx, 1
0x772AFD: add     ebp, 10h
0x772B00: cmp     ebx, [esp+14h+arg_0]
0x772B04: jb      short loc_772AC0
0x772B06: pop     edi
0x772B07: mov     edx, [esi+14h]
0x772B0A: mov     [ecx+8], edx
0x772B0D: mov     [esi+14h], ecx
0x772B10: pop     esi
0x772B11: pop     ebp
0x772B12: pop     ebx
0x772B13: pop     ecx
0x772B14: retn    4
