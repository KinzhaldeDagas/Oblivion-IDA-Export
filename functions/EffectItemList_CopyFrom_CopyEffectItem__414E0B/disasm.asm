0x414E0B: push    24h ; '$'; Size
0x414E0D: call    FormHeapAlloc
0x414E12: add     esp, 4
0x414E15: mov     [esp+arg_24], eax
0x414E19: cmp     eax, ebx
0x414E1B: mov     [esp+arg_1C], ebx
0x414E1F: jz      short loc_414E2D
0x414E21: push    esi
0x414E22: mov     ecx, eax
0x414E24: call    EffectItem_constrCopy
0x414E29: mov     edi, eax
0x414E2B: jmp     short EffectItemList_CopyFrom___FindLastEntry
0x414E2D: xor     edi, edi
