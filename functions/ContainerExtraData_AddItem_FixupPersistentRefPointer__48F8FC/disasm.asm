0x48F8FC: xor     esi, esi
0x48F8FE: cmp     ebx, esi
0x48F900: jz      short ContainerExtraData_AddItem___NewEntryExtraData
0x48F902: mov     ecx, ebx
0x48F904: call    ExtraDataList_GetReferencePointer
0x48F909: test    eax, eax
0x48F90B: jz      short ContainerExtraData_AddItem___NewEntryExtraData
0x48F90D: mov     ecx, ebx
0x48F90F: call    ExtraDataList_GetReferencePointer
0x48F914: cmp     eax, esi
0x48F916: jz      short ContainerExtraData_AddItem___NewEntryExtraData
0x48F918: mov     ecx, [edi+4]
0x48F91B: push    ecx
0x48F91C: lea     ecx, [eax+44h]
0x48F91F: call    ExtraDataList_SetReferencePointer
