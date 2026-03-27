0x4AF6E0: push    ecx
0x4AF6E1: push    esi
0x4AF6E2: mov     esi, ecx
0x4AF6E4: call    TESForm_InitializeFormRecord
0x4AF6E9: lea     ecx, [esi+24h]
0x4AF6EC: call    TESLeveledList_SaveComponent
0x4AF6F1: lea     ecx, [esi+34h]
0x4AF6F4: call    TESScriptableForm_Save
0x4AF6F9: mov     eax, [esi+40h]
0x4AF6FC: test    eax, eax
0x4AF6FE: jz      short loc_4AF71B
0x4AF700: mov     eax, [eax+0Ch]
0x4AF703: push    4; Size
0x4AF705: lea     ecx, [esp+0Ch+Src]
0x4AF709: push    ecx; Src
0x4AF70A: push    4D414E54h; int
0x4AF70F: mov     [esp+14h+Src], eax
0x4AF713: call    TESForm_PutFormRecordChunkData
0x4AF718: add     esp, 0Ch
0x4AF71B: mov     ecx, esi
0x4AF71D: pop     esi
0x4AF71E: add     esp, 4
0x4AF721: jmp     TESForm_FinalizeFormRecord
