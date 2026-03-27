0x41B490: push    esi
0x41B491: push    edi
0x41B492: mov     edi, ecx
0x41B494: call    TESForm_InitializeFormRecord
0x41B499: lea     esi, [edi+24h]
0x41B49C: mov     ecx, esi
0x41B49E: call    TESFullName_Save
0x41B4A3: mov     eax, [esi]
0x41B4A5: mov     edx, [eax+38h]
0x41B4A8: mov     ecx, esi
0x41B4AA: call    edx
0x41B4AC: mov     eax, [esi]
0x41B4AE: mov     edx, [eax+2Ch]
0x41B4B1: mov     ecx, esi
0x41B4B3: call    edx
0x41B4B5: push    eax; Size
0x41B4B6: mov     eax, [esi]
0x41B4B8: mov     edx, [eax+28h]
0x41B4BB: mov     ecx, esi
0x41B4BD: call    edx
0x41B4BF: push    eax; Src
0x41B4C0: mov     eax, [esi]
0x41B4C2: mov     edx, [eax+24h]
0x41B4C5: mov     ecx, esi
0x41B4C7: call    edx
0x41B4C9: push    eax; int
0x41B4CA: call    TESForm_PutFormRecordChunkData
0x41B4CF: add     esp, 0Ch
0x41B4D2: lea     ecx, [edi+30h]
0x41B4D5: call    EffectItemList_Save
0x41B4DA: mov     ecx, edi
0x41B4DC: pop     edi
0x41B4DD: pop     esi
0x41B4DE: jmp     TESForm_FinalizeFormRecord
