0x487760: push    ecx
0x487761: push    ebx
0x487762: mov     ebx, [esp+8+arg_0]
0x487766: xor     eax, eax
0x487768: test    ebx, ebx
0x48776A: push    edi
0x48776B: mov     edi, ecx
0x48776D: mov     [esp+0Ch+var_4], eax
0x487771: jz      loc_48780C
0x487777: mov     ecx, [edi+4]; this
0x48777A: test    ecx, ecx
0x48777C: jz      short loc_487785
0x48777E: call    TESObjectREFR_GetContainer
0x487783: jmp     short loc_487787
0x487785: xor     eax, eax
0x487787: push    ebp
0x487788: push    esi
0x487789: lea     esi, [eax+8]
0x48778C: xor     ebp, ebp
0x48778E: test    esi, esi
0x487790: jz      short loc_4877CB
0x487792: cmp     dword ptr [esi+4], 0
0x487796: jnz     short loc_48779D
0x487798: cmp     dword ptr [esi], 0
0x48779B: jz      short loc_4877CB
0x48779D: mov     eax, [esi]
0x48779F: mov     eax, [eax+4]
0x4877A2: push    0; int
0x4877A4: push    offset ??_R0?AVTESLevItem@@@8; struct TypeDescriptor *
0x4877A9: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x4877AE: push    0; int
0x4877B0: push    eax; void *
0x4877B1: call    OblivionDynamicCast
0x4877B6: add     esp, 14h
0x4877B9: test    eax, eax
0x4877BB: jz      short loc_4877C4
0x4877BD: cmp     eax, ebx
0x4877BF: jz      short loc_4877CB
0x4877C1: add     ebp, 1
0x4877C4: mov     esi, [esi+4]
0x4877C7: test    esi, esi
0x4877C9: jnz     short loc_487792
0x4877CB: mov     ebx, [edi]
0x4877CD: test    ebx, ebx
0x4877CF: jz      short loc_487806
0x4877D1: mov     edi, [ebx]
0x4877D3: test    edi, edi
0x4877D5: jz      short loc_487806
0x4877D7: mov     esi, [edi]
0x4877D9: test    esi, esi
0x4877DB: jz      short loc_4877FF
0x4877DD: lea     ecx, [ecx+0]
0x4877E0: mov     ecx, [esi]
0x4877E2: test    ecx, ecx
0x4877E4: jz      short loc_4877FF
0x4877E6: call    ExtraDataList_GetExtraLeveledItem
0x4877EB: cmp     eax, ebp
0x4877ED: jz      short loc_4877F8
0x4877EF: mov     esi, [esi+4]
0x4877F2: test    esi, esi
0x4877F4: jnz     short loc_4877E0
0x4877F6: jmp     short loc_4877FF
0x4877F8: mov     ecx, [edi+8]
0x4877FB: mov     [esp+14h+var_4], ecx
0x4877FF: mov     ebx, [ebx+4]
0x487802: test    ebx, ebx
0x487804: jnz     short loc_4877D1
0x487806: mov     eax, [esp+14h+var_4]
0x48780A: pop     esi
0x48780B: pop     ebp
0x48780C: pop     edi
0x48780D: pop     ebx
0x48780E: pop     ecx
0x48780F: retn    4
