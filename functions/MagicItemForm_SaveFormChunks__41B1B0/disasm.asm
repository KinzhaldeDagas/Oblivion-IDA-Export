0x41B1B0: push    esi
0x41B1B1: push    edi
0x41B1B2: mov     edi, ecx
0x41B1B4: call    TESForm_InitializeFormRecord
0x41B1B9: lea     esi, [edi+18h]
0x41B1BC: mov     ecx, esi
0x41B1BE: call    TESFullName_Save
0x41B1C3: mov     eax, [esi]
0x41B1C5: mov     edx, [eax+38h]
0x41B1C8: mov     ecx, esi
0x41B1CA: call    edx
0x41B1CC: mov     eax, [esi]
0x41B1CE: mov     edx, [eax+2Ch]
0x41B1D1: mov     ecx, esi
0x41B1D3: call    edx
0x41B1D5: push    eax; Size
0x41B1D6: mov     eax, [esi]
0x41B1D8: mov     edx, [eax+28h]
0x41B1DB: mov     ecx, esi
0x41B1DD: call    edx
0x41B1DF: push    eax; Src
0x41B1E0: mov     eax, [esi]
0x41B1E2: mov     edx, [eax+24h]
0x41B1E5: mov     ecx, esi
0x41B1E7: call    edx
0x41B1E9: push    eax; int
0x41B1EA: call    TESForm_PutFormRecordChunkData
0x41B1EF: add     esp, 0Ch
0x41B1F2: lea     ecx, [edi+24h]
0x41B1F5: call    EffectItemList_Save
0x41B1FA: mov     ecx, edi
0x41B1FC: pop     edi
0x41B1FD: pop     esi
0x41B1FE: jmp     TESForm_FinalizeFormRecord
