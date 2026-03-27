0x485ED0: mov     edi, [esi]
0x485ED2: test    edi, edi
0x485ED4: jz      short ContainerExtraData_GetEntryForForm___ExtraDataLoop_Next
0x485ED6: mov     ecx, edi
0x485ED8: call    ExtraDataList_GetReferencePointer
0x485EDD: test    eax, eax
0x485EDF: jz      short ContainerExtraData_GetEntryForForm___ExtraDataLoop_Next
0x485EE1: mov     ecx, edi
0x485EE3: call    ExtraDataList_GetReferencePointer
0x485EE8: cmp     [eax+0Ch], ebp
0x485EEB: jz      short ContainerExtraData_GetEntryForForm___Return
