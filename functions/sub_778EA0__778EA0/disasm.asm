0x778EA0: push    ebx
0x778EA1: mov     ebx, ecx
0x778EA3: mov     ecx, [esp+4+arg_0]
0x778EA7: xor     eax, eax
0x778EA9: sub     ecx, eax
0x778EAB: push    edi
0x778EAC: jz      short loc_778EC6
0x778EAE: sub     ecx, 1
0x778EB1: jz      short loc_778EBF
0x778EB3: sub     ecx, 1
0x778EB6: jnz     short loc_778F2D
0x778EB8: call    sub_77EA10
0x778EBD: jmp     short loc_778ECB
0x778EBF: call    sub_77DE00
0x778EC4: jmp     short loc_778ECB
0x778EC6: call    sub_77DD20
0x778ECB: mov     edi, eax
0x778ECD: test    edi, edi
0x778ECF: jz      short loc_778F2B
0x778ED1: mov     ecx, [ebx+0Ch]
0x778ED4: push    esi
0x778ED5: lea     esi, [ebx+4]
0x778ED8: xor     eax, eax
0x778EDA: test    ecx, ecx
0x778EDC: jbe     short loc_778EF4
0x778EDE: mov     edx, [esi]
0x778EE0: cmp     [edx], edi
0x778EE2: jz      short loc_778EF0
0x778EE4: add     eax, 1
0x778EE7: add     edx, 4
0x778EEA: cmp     eax, ecx
0x778EEC: jb      short loc_778EE0
0x778EEE: jmp     short loc_778EF4
0x778EF0: test    eax, eax
0x778EF2: jge     short loc_778F2A
0x778EF4: mov     eax, [esi+4]
0x778EF7: cmp     ecx, eax
0x778EF9: jnz     short loc_778F10
0x778EFB: test    eax, eax
0x778EFD: jbe     short loc_778F03
0x778EFF: add     eax, eax
0x778F01: jmp     short loc_778F08
0x778F03: mov     eax, 1
0x778F08: push    eax
0x778F09: mov     ecx, esi
0x778F0B: call    sub_6E8CA0
0x778F10: mov     eax, [esi+8]
0x778F13: mov     ecx, [esi]
0x778F15: mov     [ecx+eax*4], edi
0x778F18: add     dword ptr [esi+8], 1
0x778F1C: mov     eax, [ebx+10h]
0x778F1F: mov     [edi+8], eax
0x778F22: mov     edx, [eax]
0x778F24: push    eax
0x778F25: mov     eax, [edx+4]
0x778F28: call    eax
0x778F2A: pop     esi
0x778F2B: mov     eax, edi
0x778F2D: pop     edi
0x778F2E: pop     ebx
0x778F2F: retn    4
