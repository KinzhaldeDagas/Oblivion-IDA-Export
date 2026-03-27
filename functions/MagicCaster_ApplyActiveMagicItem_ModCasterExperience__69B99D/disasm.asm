0x69B99D: cmp     [esp+arg_10], 0
0x69B9A2: jz      short MagicCaster_ApplyActiveMagicItem___UnkCleanup?
0x69B9A4: mov     ebx, [esp+arg_14]
0x69B9A8: test    ebx, ebx
0x69B9AA: jz      short MagicCaster_ApplyActiveMagicItem___UnkCleanup?
0x69B9AC: mov     eax, [esi]
0x69B9AE: mov     edx, [eax+30h]
0x69B9B1: mov     ecx, esi
0x69B9B3: call    edx
0x69B9B5: mov     edx, [eax]
0x69B9B7: mov     ecx, eax
0x69B9B9: mov     eax, [edx+18h]
0x69B9BC: call    eax
0x69B9BE: test    eax, eax
0x69B9C0: jz      short loc_69B9D9
0x69B9C2: mov     edx, [esi]
0x69B9C4: mov     eax, [edx+30h]
0x69B9C7: mov     ecx, esi
0x69B9C9: call    eax
0x69B9CB: mov     edx, [eax]
0x69B9CD: mov     ecx, eax
0x69B9CF: mov     eax, [edx+18h]
0x69B9D2: call    eax
0x69B9D4: cmp     eax, 5
0x69B9D7: jnz     short MagicCaster_ApplyActiveMagicItem___UnkCleanup?
0x69B9D9: fldz
0x69B9DB: mov     edx, [esi]
0x69B9DD: mov     edi, [ebx]
0x69B9DF: mov     eax, [edx+30h]
0x69B9E2: push    ecx
0x69B9E3: fstp    [esp+4+var_4]
0x69B9E6: push    1
0x69B9E8: mov     ecx, esi
0x69B9EA: add     edi, 39Ch
0x69B9F0: call    eax
0x69B9F2: mov     ecx, eax
0x69B9F4: add     ecx, 0Ch
0x69B9F7: call    EffectItemList_GetSchoolAV
0x69B9FC: mov     edx, [edi]
0x69B9FE: push    eax
0x69B9FF: mov     ecx, ebx
0x69BA01: call    edx
