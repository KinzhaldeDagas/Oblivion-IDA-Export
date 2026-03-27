0x785E90: sub     esp, 8
0x785E93: push    esi
0x785E94: mov     esi, ecx
0x785E96: push    edi
0x785E97: mov     edi, [esi+4]
0x785E9A: test    edi, edi
0x785E9C: jnz     short loc_785EA2
0x785E9E: xor     ecx, ecx
0x785EA0: jmp     short loc_785EB8
0x785EA2: mov     ecx, [esi+8]
0x785EA5: sub     ecx, edi
0x785EA7: mov     eax, 2AAAAAABh
0x785EAC: imul    ecx
0x785EAE: sar     edx, 2
0x785EB1: mov     ecx, edx
0x785EB3: shr     ecx, 1Fh
0x785EB6: add     ecx, edx
0x785EB8: test    edi, edi
0x785EBA: jz      short loc_785F07
0x785EBC: mov     edx, [esi+0Ch]
0x785EBF: sub     edx, edi
0x785EC1: mov     eax, 2AAAAAABh
0x785EC6: imul    edx
0x785EC8: sar     edx, 2
0x785ECB: mov     eax, edx
0x785ECD: shr     eax, 1Fh
0x785ED0: add     eax, edx
0x785ED2: cmp     ecx, eax
0x785ED4: jnb     short loc_785F07
0x785ED6: mov     ecx, [esp+10h+arg_0]
0x785EDA: mov     edx, [esp+10h+arg_0]
0x785EDE: mov     edi, [esi+8]
0x785EE1: mov     byte ptr [esp+10h+var_8], 0
0x785EE6: mov     eax, [esp+10h+var_8]
0x785EEA: push    eax
0x785EEB: push    ecx
0x785EEC: push    esi
0x785EED: push    edx
0x785EEE: push    1
0x785EF0: push    edi
0x785EF1: call    sub_7848E0
0x785EF6: add     esp, 18h
0x785EF9: add     edi, 18h
0x785EFC: mov     [esi+8], edi
0x785EFF: pop     edi
0x785F00: pop     esi
0x785F01: add     esp, 8
0x785F04: retn    4
0x785F07: push    ebx
0x785F08: mov     ebx, [esi+8]
0x785F0B: cmp     edi, ebx
0x785F0D: jbe     short loc_785F14
0x785F0F: call    __invalid_parameter_noinfo
0x785F14: mov     eax, [esp+14h+arg_0]
0x785F18: push    eax
0x785F19: push    ebx
0x785F1A: push    esi
0x785F1B: lea     ecx, [esp+20h+var_8]
0x785F1F: push    ecx
0x785F20: mov     ecx, esi
0x785F22: call    sub_7857D0
