0x46E780: mov     eax, [esp+arg_0]
0x46E784: push    esi
0x46E785: push    edi
0x46E786: push    0; int
0x46E788: push    offset ??_R0?AVTESReactionForm@@@8; struct TypeDescriptor *
0x46E78D: push    offset ??_R0?AVBaseFormComponent@@@8; struct _s_RTTICompleteObjectLocator *
0x46E792: push    0; int
0x46E794: push    eax; void *
0x46E795: mov     esi, ecx
0x46E797: call    OblivionDynamicCast
0x46E79C: mov     edi, eax
0x46E79E: add     esp, 14h
0x46E7A1: test    edi, edi
0x46E7A3: jz      loc_46E83E
0x46E7A9: push    ebp
0x46E7AA: mov     ecx, esi
0x46E7AC: call    sub_46E600
0x46E7B1: add     edi, 4
0x46E7B4: lea     ebp, [esi+4]
0x46E7B7: mov     [esp+0Ch+arg_0], edi
0x46E7BB: jz      loc_46E83D
0x46E7C1: push    ebx
0x46E7C2: jmp     short loc_46E7C8
0x46E7C4: mov     edi, [esp+10h+arg_0]
0x46E7C8: mov     esi, [edi]
0x46E7CA: test    esi, esi
0x46E7CC: jz      short loc_46E83C
0x46E7CE: push    8; Size
0x46E7D0: call    FormHeapAlloc
0x46E7D5: mov     ecx, [esi]
0x46E7D7: mov     edi, eax
0x46E7D9: mov     [edi], ecx
0x46E7DB: mov     edx, [esi+4]
0x46E7DE: lea     ebx, [ebp+4]
0x46E7E1: add     esp, 4
0x46E7E4: mov     [edi+4], edx
0x46E7E7: cmp     dword ptr [ebx], 0
0x46E7EA: mov     esi, ebp
0x46E7EC: jz      short loc_46E7FB
0x46E7EE: mov     eax, ebx
0x46E7F0: mov     esi, [eax]
0x46E7F2: cmp     dword ptr [esi+4], 0
0x46E7F6: lea     eax, [esi+4]
0x46E7F9: jnz     short loc_46E7F0
0x46E7FB: cmp     dword ptr [esi], 0
0x46E7FE: jz      short loc_46E823
0x46E800: push    8; Size
0x46E802: call    FormHeapAlloc
0x46E807: add     esp, 4
0x46E80A: test    eax, eax
0x46E80C: jz      short loc_46E81C
0x46E80E: mov     [eax], edi
0x46E810: mov     dword ptr [eax+4], 0
0x46E817: mov     [esi+4], eax
0x46E81A: jmp     short loc_46E825
0x46E81C: xor     eax, eax
0x46E81E: mov     [esi+4], eax
0x46E821: jmp     short loc_46E825
0x46E823: mov     [esi], edi
0x46E825: mov     ebx, [ebx]
0x46E827: test    ebx, ebx
0x46E829: jz      short loc_46E82D
0x46E82B: mov     ebp, ebx
0x46E82D: mov     eax, [esp+10h+arg_0]
0x46E831: mov     eax, [eax+4]
0x46E834: test    eax, eax
0x46E836: mov     [esp+10h+arg_0], eax
0x46E83A: jnz     short loc_46E7C4
0x46E83C: pop     ebx
0x46E83D: pop     ebp
0x46E83E: pop     edi
0x46E83F: pop     esi
0x46E840: retn    4
