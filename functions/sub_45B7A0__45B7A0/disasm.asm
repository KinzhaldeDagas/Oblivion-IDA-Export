0x45B7A0: push    esi
0x45B7A1: push    edi
0x45B7A2: mov     edi, [esp+8+arg_0]
0x45B7A6: push    0; int
0x45B7A8: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x45B7AD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45B7B2: push    0; int
0x45B7B4: push    edi; void *
0x45B7B5: call    OblivionDynamicCast
0x45B7BA: push    0; int
0x45B7BC: push    offset ??_R0?AVTESQuest@@@8; struct TypeDescriptor *
0x45B7C1: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45B7C6: push    0; int
0x45B7C8: push    edi; void *
0x45B7C9: mov     esi, eax
0x45B7CB: call    OblivionDynamicCast
0x45B7D0: add     esp, 28h
0x45B7D3: test    esi, esi
0x45B7D5: jz      loc_45B975
0x45B7DB: push    ebp
0x45B7DC: mov     ebp, [esi+3Ch]
0x45B7DF: xor     edi, edi
0x45B7E1: test    ebp, ebp
0x45B7E3: jz      short loc_45B7F1
0x45B7E5: mov     eax, [ebp+0]
0x45B7E8: mov     edx, [eax+8]
0x45B7EB: mov     ecx, ebp
0x45B7ED: call    edx
0x45B7EF: mov     edi, eax
0x45B7F1: push    ebx
0x45B7F2: push    0; int
0x45B7F4: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x45B7F9: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x45B7FE: push    0; int
0x45B800: push    esi; void *
0x45B801: call    OblivionDynamicCast
0x45B806: mov     ebx, [esp+24h+arg_4]
0x45B80A: add     esp, 14h
0x45B80D: test    ebx, 2000000h
0x45B813: mov     [esp+10h+arg_0], eax
0x45B817: jz      short loc_45B867
0x45B819: test    eax, eax
0x45B81B: jz      short loc_45B835
0x45B81D: mov     edx, [eax]
0x45B81F: mov     ecx, eax
0x45B821: mov     eax, [edx+164h]
0x45B827: call    eax
0x45B829: test    eax, eax
0x45B82B: jz      short loc_45B863
0x45B82D: mov     ecx, [esp+10h+arg_0]
0x45B831: mov     edx, [ecx]
0x45B833: jmp     short loc_45B859
0x45B835: test    edi, edi
0x45B837: jz      short loc_45B867
0x45B839: push    0
0x45B83B: mov     ecx, edi
0x45B83D: call    sub_405790
0x45B842: test    eax, eax
0x45B844: jz      short loc_45B863
0x45B846: push    0
0x45B848: mov     ecx, edi
0x45B84A: call    sub_405790
0x45B84F: cmp     dword ptr [eax+0Ch], 0
0x45B853: jz      short loc_45B863
0x45B855: mov     edx, [esi]
0x45B857: mov     ecx, esi
0x45B859: mov     eax, [edx+48h]
0x45B85C: push    2000000h
0x45B861: call    eax
0x45B863: mov     eax, [esp+10h+arg_0]
0x45B867: test    bl, 8
0x45B86A: jz      short loc_45B87C
0x45B86C: test    eax, eax
0x45B86E: jnz     short loc_45B87C
0x45B870: push    ebp
0x45B871: mov     ecx, esi
0x45B873: call    sub_4D8F20
0x45B878: mov     eax, [esp+10h+arg_0]
0x45B87C: test    ebx, 20000000h
0x45B882: jz      loc_45B96E
0x45B888: test    eax, eax
0x45B88A: jz      loc_45B96E
0x45B890: test    ebp, ebp
0x45B892: jz      loc_45B96E
0x45B898: lea     ecx, [eax+44h]; this
0x45B89B: call    ExtraDataList_GetContainerChanges
0x45B8A0: test    eax, eax
0x45B8A2: jz      loc_45B96E
0x45B8A8: mov     ebp, [eax]
0x45B8AA: xor     bl, bl
0x45B8AC: lea     esp, [esp+0]
0x45B8B0: test    ebp, ebp
0x45B8B2: jz      loc_45B95A
0x45B8B8: mov     edi, [ebp+0]
0x45B8BB: test    edi, edi
0x45B8BD: jz      loc_45B94D
0x45B8C3: push    0
0x45B8C5: mov     ecx, edi
0x45B8C7: call    ContainerEntryExtraData_HasWorn
0x45B8CC: test    al, al
0x45B8CE: jz      short loc_45B94D
0x45B8D0: mov     eax, [edi+8]
0x45B8D3: test    eax, eax
0x45B8D5: jz      short loc_45B94D
0x45B8D7: mov     cl, [eax+4]
0x45B8DA: cmp     cl, 16h
0x45B8DD: jz      short loc_45B8E4
0x45B8DF: cmp     cl, 14h
0x45B8E2: jnz     short loc_45B94D
0x45B8E4: push    eax
0x45B8E5: call    sub_4691B0
0x45B8EA: add     esp, 4
0x45B8ED: mov     esi, eax
0x45B8EF: push    0
0x45B8F1: push    7
0x45B8F3: mov     ecx, esi
0x45B8F5: call    TESBipedModelForm_CoversSlot
0x45B8FA: test    al, al
0x45B8FC: jnz     short loc_45B94D
0x45B8FE: push    0
0x45B900: push    6
0x45B902: mov     ecx, esi
0x45B904: call    TESBipedModelForm_CoversSlot
0x45B909: test    al, al
0x45B90B: jnz     short loc_45B94D
0x45B90D: push    0
0x45B90F: push    8
0x45B911: mov     ecx, esi
0x45B913: call    TESBipedModelForm_CoversSlot
0x45B918: test    al, al
0x45B91A: jnz     short loc_45B94D
0x45B91C: push    0
0x45B91E: push    0Dh
0x45B920: mov     ecx, esi
0x45B922: call    TESBipedModelForm_CoversSlot
0x45B927: test    al, al
0x45B929: jnz     short loc_45B94D
0x45B92B: test    bl, bl
0x45B92D: mov     esi, [edi]
0x45B92F: jnz     short loc_45B94D
0x45B931: test    esi, esi
0x45B933: jz      short loc_45B94D
0x45B935: mov     ecx, [esi]
0x45B937: test    ecx, ecx
0x45B939: jz      short loc_45B946
0x45B93B: call    sub_41E850
0x45B940: test    eax, eax
0x45B942: jz      short loc_45B946
0x45B944: mov     bl, 1
0x45B946: test    bl, bl
0x45B948: mov     esi, [esi+4]
0x45B94B: jz      short loc_45B931
0x45B94D: test    bl, bl
0x45B94F: mov     ebp, [ebp+4]
0x45B952: jz      loc_45B8B0
0x45B958: jmp     short loc_45B95E
0x45B95A: test    bl, bl
0x45B95C: jz      short loc_45B96E
0x45B95E: mov     ecx, [esp+10h+arg_0]
0x45B962: mov     edx, [ecx]
0x45B964: mov     eax, [edx+48h]
0x45B967: push    20000000h
0x45B96C: call    eax
0x45B96E: pop     ebx
0x45B96F: pop     ebp
0x45B970: pop     edi
0x45B971: pop     esi
0x45B972: retn    8
0x45B975: test    eax, eax
0x45B977: jz      short loc_45B970
0x45B979: cmp     dword ptr [eax+58h], 0
0x45B97D: jz      short loc_45B970
0x45B97F: mov     edx, [eax]
0x45B981: mov     ecx, eax
0x45B983: mov     eax, [edx+48h]
0x45B986: push    8000000h
0x45B98B: call    eax
0x45B98D: pop     edi
0x45B98E: pop     esi
0x45B98F: retn    8
