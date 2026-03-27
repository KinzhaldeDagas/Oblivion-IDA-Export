0x4676B0: sub     esp, 8
0x4676B3: push    ebx
0x4676B4: push    ebp
0x4676B5: push    esi
0x4676B6: mov     esi, [esp+14h+arg_0]
0x4676BA: test    esi, esi
0x4676BC: mov     ebp, ecx
0x4676BE: push    edi
0x4676BF: lea     edi, [ebp+18h]
0x4676C2: jz      short loc_4676D1
0x4676C4: push    0FFFFFFFFh; a2
0x4676C6: mov     ecx, esi; this
0x4676C8: call    TESForm_GetOverrideFile
0x4676CD: mov     ebx, eax
0x4676CF: jmp     short loc_4676D3
0x4676D1: xor     ebx, ebx
0x4676D3: test    edi, edi
0x4676D5: jz      short loc_46774E
0x4676D7: mov     esi, [edi]
0x4676D9: test    esi, esi
0x4676DB: jz      short loc_467743
0x4676DD: mov     eax, [esi]
0x4676DF: test    eax, eax
0x4676E1: jz      short loc_46771F
0x4676E3: mov     [esp+18h+a1], eax
0x4676E7: lea     eax, [esp+18h+a1]
0x4676EB: push    ebx; a2
0x4676EC: push    eax; a1
0x4676ED: call    TESForm_ResolveFormID
0x4676F2: mov     ecx, [esp+20h+a1]
0x4676F6: add     esp, 8
0x4676F9: push    0; int
0x4676FB: push    offset ??_R0?AVTESFaction@@@8; struct TypeDescriptor *
0x467700: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x467705: push    0; int
0x467707: push    ecx; a1
0x467708: call    TESForm_LookupByFormID
0x46770D: add     esp, 4
0x467710: push    eax; void *
0x467711: call    OblivionDynamicCast
0x467716: add     esp, 14h
0x467719: test    eax, eax
0x46771B: mov     [esi], eax
0x46771D: jnz     short loc_467743
0x46771F: mov     eax, [edi+4]
0x467722: test    eax, eax
0x467724: jz      short loc_46773B
0x467726: mov     edx, [eax+4]
0x467729: mov     [edi+4], edx
0x46772C: mov     ecx, [eax]
0x46772E: push    eax
0x46772F: mov     [edi], ecx
0x467731: call    FormHeapFree
0x467736: add     esp, 4
0x467739: jmp     short loc_467746
0x46773B: mov     dword ptr [edi], 0
0x467741: jmp     short loc_467746
0x467743: mov     edi, [edi+4]
0x467746: test    edi, edi
0x467748: jnz     short loc_4676D7
0x46774A: mov     esi, [esp+18h+arg_0]
0x46774E: mov     eax, [ebp+14h]
0x467751: test    eax, eax
0x467753: mov     dword ptr [esp+18h+ArgList], eax
0x467757: jz      short loc_4677B7
0x467759: lea     edx, [esp+18h+ArgList]
0x46775D: push    ebx; a2
0x46775E: push    edx; a1
0x46775F: call    TESForm_ResolveFormID
0x467764: mov     eax, dword ptr [esp+20h+ArgList]
0x467768: add     esp, 8
0x46776B: push    0; int
0x46776D: push    offset ??_R0?AVTESLevItem@@@8; struct TypeDescriptor *
0x467772: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x467777: push    0; int
0x467779: push    eax; a1
0x46777A: call    TESForm_LookupByFormID
0x46777F: add     esp, 4
0x467782: push    eax; void *
0x467783: call    OblivionDynamicCast
0x467788: add     esp, 14h
0x46778B: test    eax, eax
0x46778D: mov     [ebp+14h], eax
0x467790: jnz     short loc_4677B7
0x467792: mov     ecx, [esp+18h+arg_0]
0x467796: mov     edx, [ecx]
0x467798: mov     eax, [edx+0D4h]
0x46779E: mov     esi, [esi+0Ch]
0x4677A1: call    eax
0x4677A3: mov     ecx, dword ptr [esp+18h+ArgList]
0x4677A7: push    eax
0x4677A8: push    esi
0x4677A9: push    ecx; ArgList
0x4677AA: push    offset aUnableToFindDe; "Unable to find death item (%08X) on Act"...
0x4677AF: call    PrintError
0x4677B4: add     esp, 10h
0x4677B7: pop     edi
0x4677B8: pop     esi
0x4677B9: pop     ebp
0x4677BA: pop     ebx
0x4677BB: add     esp, 8
0x4677BE: retn    4
