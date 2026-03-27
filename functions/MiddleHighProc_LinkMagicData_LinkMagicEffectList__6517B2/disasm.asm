0x6517B2: mov     ecx, [edi+174h]
0x6517B8: push    ebx
0x6517B9: push    ecx
0x6517BA: call    ActiveEffect_Base_LinkAEList
0x6517BF: mov     edx, ds:0B33B00h
0x6517C5: add     esp, 8
0x6517C8: cmp     byte ptr [edx+7Ch], 65h ; 'e'
0x6517CC: jb      short loc_651821
0x6517CE: push    ebp
0x6517CF: lea     esi, [edi+0A8h]
0x6517D5: xor     ebp, ebp
0x6517D7: test    esi, esi
0x6517D9: jz      short loc_651820
0x6517DB: jmp     short loc_6517E0
0x6517DD: align 10h
0x6517E0: cmp     dword ptr [esi+4], 0
0x6517E4: jnz     short loc_6517EB
0x6517E6: cmp     dword ptr [esi], 0
0x6517E9: jz      short loc_651820
0x6517EB: mov     ebx, [esi]
0x6517ED: test    ebx, ebx
0x6517EF: jz      short loc_65184B
0x6517F1: push    0; int
0x6517F3: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x6517F8: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x6517FD: push    0; int
0x6517FF: push    ebx; a1
0x651800: call    TESForm_LookupByFormID
0x651805: add     esp, 4
0x651808: push    eax; void *
0x651809: call    OblivionDynamicCast
0x65180E: add     esp, 14h
0x651811: test    eax, eax
0x651813: jz      short loc_65184B
0x651815: mov     [esi], eax
0x651817: mov     ebp, esi
0x651819: mov     esi, [esi+4]
0x65181C: test    esi, esi
0x65181E: jnz     short loc_6517E0
0x651820: pop     ebp
0x651821: mov     eax, ds:0B33B00h
0x651826: cmp     byte ptr [eax+7Ch], 71h ; 'q'
0x65182A: jb      short loc_651845
0x65182C: mov     eax, [edi+148h]
0x651832: test    eax, eax
0x651834: jz      short loc_651845
0x651836: push    eax
0x651837: call    MagicItem_LookupByFormID
0x65183C: add     esp, 4
0x65183F: mov     [edi+148h], eax
0x651845: pop     edi
0x651846: pop     esi
0x651847: pop     ebx
0x651848: retn    0Ch
0x65184B: test    ebp, ebp
0x65184D: jnz     short loc_651873
0x65184F: mov     eax, [esi+4]
0x651852: test    eax, eax
0x651854: jz      short loc_65186B
0x651856: mov     ecx, [eax+4]
0x651859: mov     [esi+4], ecx
0x65185C: mov     edx, [eax]
0x65185E: push    eax
0x65185F: mov     [esi], edx
0x651861: call    FormHeapFree
0x651866: add     esp, 4
0x651869: jmp     short loc_65181C
0x65186B: mov     dword ptr [esi], 0
0x651871: jmp     short loc_65181C
0x651873: push    ebx
0x651874: mov     ecx, ebp
0x651876: call    BSSimpleList_Remove
0x65187B: mov     esi, [ebp+4]
0x65187E: jmp     short loc_65181C
