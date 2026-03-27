0x66CF80: push    ebp
0x66CF81: mov     ebp, [esp+4+arg_0]
0x66CF85: push    esi
0x66CF86: push    ebp
0x66CF87: mov     esi, ecx
0x66CF89: call    sub_612110
0x66CF8E: mov     eax, ds:0B33B00h
0x66CF93: mov     eax, [eax+44h]
0x66CF96: cmp     eax, 1FFFF000h
0x66CF9B: jz      short loc_66CFA8
0x66CF9D: cmp     eax, 7FFFF000h
0x66CFA2: jnz     loc_66D115
0x66CFA8: push    ebx
0x66CFA9: lea     ecx, [esi+44h]
0x66CFAC: call    sub_424770
0x66CFB1: fldz
0x66CFB3: xor     ebx, ebx
0x66CFB5: fst     dword ptr ds:0B3BB08h
0x66CFBB: mov     ds:0B3BAD4h, ebx
0x66CFC1: fstp    dword ptr [esi+700h]
0x66CFC7: mov     eax, [esi+5B0h]
0x66CFCD: cmp     eax, ebx
0x66CFCF: mov     ds:0B3BAD0h, ebx
0x66CFD5: mov     dword ptr [esi+7A0h], 0FFFFFFFFh
0x66CFDF: mov     ds:0B3BB05h, bl
0x66CFE5: mov     ds:0B3BB04h, bl
0x66CFEB: mov     [esi+116h], bl
0x66CFF1: jz      short loc_66D026
0x66CFF3: push    eax
0x66CFF4: call    FormHeapFree
0x66CFF9: push    54h ; 'T'; Size
0x66CFFB: mov     [esi+5B0h], ebx
0x66D001: call    FormHeapAlloc
0x66D006: fldz
0x66D008: add     esp, 8
0x66D00B: mov     [esi+5B0h], eax
0x66D011: xor     eax, eax
0x66D013: mov     ecx, [esi+5B0h]
0x66D019: fst     dword ptr [eax+ecx]
0x66D01C: add     eax, 4
0x66D01F: cmp     eax, 54h ; 'T'
0x66D022: jl      short loc_66D013
0x66D024: fstp    st
0x66D026: mov     ecx, [esi+5ACh]
0x66D02C: cmp     ecx, ebx
0x66D02E: jz      short loc_66D04A
0x66D030: call    BSSimpleList_Clear
0x66D035: mov     edx, [esi+5ACh]
0x66D03B: push    edx
0x66D03C: call    FormHeapFree
0x66D041: add     esp, 4
0x66D044: mov     [esi+5ACh], ebx
0x66D04A: mov     eax, ds:0B3BB48h
0x66D04F: cmp     eax, ebx
0x66D051: push    edi
0x66D052: jz      short loc_66D06B
0x66D054: mov     edi, [eax+4]
0x66D057: push    eax
0x66D058: call    FormHeapFree
0x66D05D: add     esp, 4
0x66D060: cmp     edi, ebx
0x66D062: mov     eax, edi
0x66D064: mov     ds:0B3BB48h, eax
0x66D069: jnz     short loc_66D054
0x66D06B: mov     ds:0B3BB44h, ebx
0x66D071: mov     eax, [esi+1E4h]
0x66D077: push    esi
0x66D078: push    eax
0x66D079: call    ActiveEffect_Base_PreLoadAEList
0x66D07E: add     esp, 8
0x66D081: test    ebp, 2000000h
0x66D087: jz      short loc_66D099
0x66D089: mov     ecx, [esi+5CCh]
0x66D08F: cmp     ecx, ebx
0x66D091: jz      short loc_66D099
0x66D093: push    esi
0x66D094: call    sub_473AA0
0x66D099: call    dword ptr ds:0A280D0h
0x66D09F: mov     ecx, esi
0x66D0A1: mov     [esi+710h], eax
0x66D0A7: call    sub_66A670
0x66D0AC: cmp     [esi+784h], ebx
0x66D0B2: jz      short loc_66D0D0
0x66D0B4: mov     eax, [esi+784h]
0x66D0BA: mov     edi, [eax+4]
0x66D0BD: push    eax
0x66D0BE: call    FormHeapFree
0x66D0C3: add     esp, 4
0x66D0C6: cmp     edi, ebx
0x66D0C8: mov     [esi+784h], edi
0x66D0CE: jnz     short loc_66D0B4
0x66D0D0: push    1; arg1
0x66D0D2: push    ebx; canCreate
0x66D0D3: mov     [esi+780h], ebx
0x66D0D9: call    InterfaceManager_GetSingleton
0x66D0DE: push    1; arg1
0x66D0E0: push    ebx; canCreate
0x66D0E1: mov     [eax+10Ch], ebx
0x66D0E7: call    InterfaceManager_GetSingleton
0x66D0EC: mov     [eax+110h], ebx
0x66D0F2: mov     ecx, ds:0B37C88h
0x66D0F8: add     esp, 10h
0x66D0FB: push    ecx
0x66D0FC: mov     ecx, ds:0B33A98h
0x66D102: call    TESDataHandler_LookupTESClassByFormID
0x66D107: cmp     eax, ebx
0x66D109: pop     edi
0x66D10A: jz      short loc_66D114
0x66D10C: push    ebx
0x66D10D: mov     ecx, eax
0x66D10F: call    sub_51BED0
0x66D114: pop     ebx
0x66D115: pop     esi
0x66D116: pop     ebp
0x66D117: retn    4
