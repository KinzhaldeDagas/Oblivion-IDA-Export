0x48D6C0: sub     esp, 8
0x48D6C3: push    ebx
0x48D6C4: push    ebp
0x48D6C5: push    esi
0x48D6C6: push    edi
0x48D6C7: mov     edi, ecx
0x48D6C9: mov     ecx, [edi+4]; this
0x48D6CC: xor     ebp, ebp
0x48D6CE: test    ecx, ecx
0x48D6D0: mov     [esp+18h+var_4], edi
0x48D6D4: mov     [esp+18h+var_8], ebp
0x48D6D8: jz      loc_48D7DA
0x48D6DE: call    TESObjectREFR_GetContainer
0x48D6E3: test    eax, eax
0x48D6E5: jz      loc_48D7DA
0x48D6EB: mov     ecx, [edi+4]; this
0x48D6EE: test    ecx, ecx
0x48D6F0: jz      short loc_48D6F9
0x48D6F2: call    TESObjectREFR_GetContainer
0x48D6F7: jmp     short loc_48D6FB
0x48D6F9: xor     eax, eax
0x48D6FB: lea     ebx, [eax+8]
0x48D6FE: test    ebx, ebx
0x48D700: jz      loc_48D7DA
0x48D706: mov     edi, [ebx]
0x48D708: test    edi, edi
0x48D70A: jz      loc_48D7D2
0x48D710: mov     eax, [edi+4]
0x48D713: push    0; int
0x48D715: push    offset ??_R0?AVTESLevItem@@@8; struct TypeDescriptor *
0x48D71A: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x48D71F: push    0; int
0x48D721: push    eax; void *
0x48D722: call    OblivionDynamicCast
0x48D727: add     esp, 14h
0x48D72A: test    eax, eax
0x48D72C: jnz     loc_48D7C7
0x48D732: mov     ecx, [esp+18h+var_4]
0x48D736: mov     eax, [ecx]
0x48D738: test    eax, eax
0x48D73A: mov     esi, [edi+4]
0x48D73D: mov     dl, 1
0x48D73F: jz      short loc_48D75F
0x48D741: test    dl, dl
0x48D743: jz      loc_48D816
0x48D749: mov     ecx, [eax]
0x48D74B: test    ecx, ecx
0x48D74D: jz      short loc_48D758
0x48D74F: cmp     [ecx+8], esi
0x48D752: jnz     short loc_48D758
0x48D754: xor     dl, dl
0x48D756: jmp     short loc_48D75B
0x48D758: mov     eax, [eax+4]
0x48D75B: test    eax, eax
0x48D75D: jnz     short loc_48D741
0x48D75F: xor     esi, esi
0x48D761: mov     ecx, [edi]
0x48D763: mov     eax, ecx
0x48D765: test    eax, eax
0x48D767: jge     short loc_48D76B
0x48D769: neg     eax
0x48D76B: test    esi, esi
0x48D76D: jz      short loc_48D7C2
0x48D76F: mov     edx, [esi+4]
0x48D772: add     eax, edx
0x48D774: test    eax, eax
0x48D776: jle     short loc_48D7C7
0x48D778: test    ecx, ecx
0x48D77A: jge     short loc_48D780
0x48D77C: cmp     edx, ecx
0x48D77E: jle     short loc_48D7C7
0x48D780: mov     eax, [esi]
0x48D782: test    eax, eax
0x48D784: jz      short loc_48D7C2
0x48D786: cmp     [eax], ebp
0x48D788: jz      short loc_48D7C2
0x48D78A: mov     ecx, esi
0x48D78C: call    InventoryEntryData_Cleanup
0x48D791: add     [esp+18h+var_8], eax
0x48D795: mov     ecx, esi
0x48D797: call    sub_4847C0
0x48D79C: test    al, al
0x48D79E: jz      short loc_48D7A5
0x48D7A0: add     [esp+18h+var_8], 1
0x48D7A5: mov     ecx, esi
0x48D7A7: call    sub_4845D0
0x48D7AC: mov     ecx, [esi+4]
0x48D7AF: add     ecx, [edi]
0x48D7B1: cmp     eax, ecx
0x48D7B3: jge     short loc_48D7C7
0x48D7B5: push    0
0x48D7B7: mov     ecx, esi
0x48D7B9: call    ContainerEntryExtraData_HasWorn
0x48D7BE: test    al, al
0x48D7C0: jnz     short loc_48D7C7
0x48D7C2: add     [esp+18h+var_8], 1
0x48D7C7: mov     ebx, [ebx+4]
0x48D7CA: test    ebx, ebx
0x48D7CC: jnz     loc_48D706
0x48D7D2: mov     edi, [esp+18h+var_4]
0x48D7D6: mov     ebp, [esp+18h+var_8]
0x48D7DA: mov     ebx, [edi]
0x48D7DC: test    ebx, ebx
0x48D7DE: jz      loc_48D8F6
0x48D7E4: mov     esi, [ebx]
0x48D7E6: test    esi, esi
0x48D7E8: jz      loc_48D8E7
0x48D7EE: cmp     dword ptr [esi+4], 0
0x48D7F2: jle     loc_48D8DC
0x48D7F8: mov     ecx, [edi+4]; this
0x48D7FB: test    ecx, ecx
0x48D7FD: jz      short loc_48D83A
0x48D7FF: call    TESObjectREFR_GetContainer
0x48D804: test    eax, eax
0x48D806: jz      short loc_48D83A
0x48D808: mov     ecx, [edi+4]; this
0x48D80B: test    ecx, ecx
0x48D80D: jz      short loc_48D825
0x48D80F: call    TESObjectREFR_GetContainer
0x48D814: jmp     short loc_48D827
0x48D816: test    eax, eax
0x48D818: jz      loc_48D75F
0x48D81E: mov     esi, [eax]
0x48D820: jmp     loc_48D761
0x48D825: xor     eax, eax
0x48D827: mov     edx, [esi+8]
0x48D82A: push    edx; a2
0x48D82B: mov     ecx, eax; this
0x48D82D: call    TESContainer_HasForm
0x48D832: test    al, al
0x48D834: jnz     loc_48D8DC
0x48D83A: mov     ecx, esi
0x48D83C: call    InventoryEntryData_Cleanup
0x48D841: mov     edi, [esi]
0x48D843: add     [esp+18h+var_8], eax
0x48D847: test    edi, edi
0x48D849: jz      short loc_48D86D
0x48D84B: jmp     short loc_48D850
0x48D84D: align 10h
0x48D850: mov     ecx, [edi]
0x48D852: test    ecx, ecx
0x48D854: jz      short loc_48D86D
0x48D856: call    ExtraDataList_IsExtraDefaultForContainer_all
0x48D85B: test    al, al
0x48D85D: jnz     short loc_48D868
0x48D85F: mov     edi, [edi+4]
0x48D862: test    edi, edi
0x48D864: jnz     short loc_48D850
0x48D866: jmp     short loc_48D86D
0x48D868: add     [esp+18h+var_8], 1
0x48D86D: mov     edi, [esi+4]
0x48D870: mov     ecx, esi
0x48D872: call    sub_4845D0
0x48D877: cmp     eax, edi
0x48D879: jge     short loc_48D880
0x48D87B: add     [esp+18h+var_8], 1
0x48D880: test    edi, edi
0x48D882: jge     short loc_48D8D8
0x48D884: mov     eax, [esi]
0x48D886: test    eax, eax
0x48D888: jz      short loc_48D89B
0x48D88A: mov     eax, [eax]
0x48D88C: test    eax, eax
0x48D88E: jz      short loc_48D89B
0x48D890: mov     ecx, eax
0x48D892: call    sub_41DEF0
0x48D897: test    al, al
0x48D899: jnz     short loc_48D8D8
0x48D89B: mov     edi, [esp+18h+var_4]
0x48D89F: mov     ecx, [edi]
0x48D8A1: push    esi
0x48D8A2: call    BSSimpleList_Remove
0x48D8A7: mov     ecx, esi
0x48D8A9: call    ContainerEntryExtraData_ClearDataTable
0x48D8AE: mov     ecx, [esi]
0x48D8B0: test    ecx, ecx
0x48D8B2: jz      short loc_48D8B9
0x48D8B4: call    BSSimpleList_Clear
0x48D8B9: mov     eax, [esi]
0x48D8BB: push    eax
0x48D8BC: call    FormHeapFree
0x48D8C1: push    esi
0x48D8C2: mov     dword ptr [esi], 0
0x48D8C8: call    FormHeapFree
0x48D8CD: mov     ebx, [edi]
0x48D8CF: add     esp, 8
0x48D8D2: mov     [esp+18h+var_8], ebp
0x48D8D6: jmp     short loc_48D8DF
0x48D8D8: mov     edi, [esp+18h+var_4]
0x48D8DC: mov     ebx, [ebx+4]
0x48D8DF: test    ebx, ebx
0x48D8E1: jnz     loc_48D7E4
0x48D8E7: mov     eax, [esp+18h+var_8]
0x48D8EB: pop     edi
0x48D8EC: pop     esi
0x48D8ED: pop     ebp
0x48D8EE: add     eax, 1
0x48D8F1: pop     ebx
0x48D8F2: add     esp, 8
0x48D8F5: retn
0x48D8F6: pop     edi
0x48D8F7: pop     esi
0x48D8F8: lea     eax, [ebp+1]
0x48D8FB: pop     ebp
0x48D8FC: pop     ebx
0x48D8FD: add     esp, 8
0x48D900: retn
