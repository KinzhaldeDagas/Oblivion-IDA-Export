0x41D590: push    0FFFFFFFFh
0x41D592: push    offset SEH_803C90
0x41D597: mov     eax, large fs:0
0x41D59D: push    eax
0x41D59E: push    ecx
0x41D59F: push    esi
0x41D5A0: push    edi
0x41D5A1: mov     eax, ___security_cookie
0x41D5A6: xor     eax, esp
0x41D5A8: push    eax
0x41D5A9: lea     eax, [esp+1Ch+var_C]
0x41D5AD: mov     large fs:0, eax
0x41D5B3: push    44h ; 'D'; Size
0x41D5B5: call    FormHeapAlloc
0x41D5BA: add     esp, 4
0x41D5BD: mov     [esp+1Ch+var_10], eax
0x41D5C1: test    eax, eax
0x41D5C3: mov     [esp+1Ch+var_4], 0
0x41D5CB: jz      short loc_41D5D8
0x41D5CD: mov     ecx, eax; this
0x41D5CF: call    ??0SpellItem@@QAE@XZ; SpellItem::SpellItem(void)
0x41D5D4: mov     esi, eax
0x41D5D6: jmp     short loc_41D5DA
0x41D5D8: xor     esi, esi
0x41D5DA: push    24h ; '$'; Size
0x41D5DC: mov     [esp+20h+var_4], 0FFFFFFFFh
0x41D5E4: call    FormHeapAlloc
0x41D5E9: mov     edi, eax
0x41D5EB: add     esp, 4
0x41D5EE: mov     [esp+1Ch+var_10], edi
0x41D5F2: test    edi, edi
0x41D5F4: mov     [esp+1Ch+var_4], 1
0x41D5FC: jz      short loc_41D617
0x41D5FE: push    41524150h
0x41D603: call    EffectSettingCollection_LookupByCode
0x41D608: add     esp, 4
0x41D60B: push    eax
0x41D60C: mov     ecx, edi
0x41D60E: call    EffectItem_constr
0x41D613: mov     edi, eax
0x41D615: jmp     short loc_41D619
0x41D617: xor     edi, edi
0x41D619: push    0
0x41D61B: mov     ecx, edi
0x41D61D: mov     [esp+20h+var_4], 0FFFFFFFFh
0x41D625: call    EffectItem_SetRange
0x41D62A: push    0Ah
0x41D62C: mov     ecx, edi
0x41D62E: call    EffectItem_SetDuration
0x41D633: push    0
0x41D635: mov     ecx, edi
0x41D637: call    EffectItem_SetMagnitude
0x41D63C: push    0
0x41D63E: mov     ecx, edi
0x41D640: call    EffectItem_SetArea
0x41D645: push    edi
0x41D646: lea     ecx, [esi+24h]
0x41D649: call    EffectItemList_AddItem
0x41D64E: push    0; a3
0x41D650: push    offset aMasterMarksman; "Master Marksman Paralysis"
0x41D655: lea     ecx, [esi+1Ch]; this
0x41D658: call    BSStringT_Set
0x41D65D: mov     eax, [esi+18h]
0x41D660: mov     edx, [eax+14h]
0x41D663: lea     ecx, [esi+18h]
0x41D666: push    0
0x41D668: mov     dword ptr [esi+34h], 0
0x41D66F: mov     dword ptr [esi+38h], 0
0x41D676: call    edx
0x41D678: mov     eax, esi
0x41D67A: mov     ecx, dword ptr [esp+1Ch+var_C]
0x41D67E: mov     large fs:0, ecx
0x41D685: pop     ecx
0x41D686: pop     edi
0x41D687: pop     esi
0x41D688: add     esp, 10h
0x41D68B: retn
