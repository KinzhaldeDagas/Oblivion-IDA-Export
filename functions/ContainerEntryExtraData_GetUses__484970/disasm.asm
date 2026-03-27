0x484970: push    esi
0x484971: push    0; int
0x484973: push    offset ??_R0?AVTESUsesForm@@@8; struct TypeDescriptor *
0x484978: mov     esi, ecx
0x48497A: mov     eax, [esi+8]
0x48497D: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x484982: push    0; int
0x484984: push    eax; void *
0x484985: call    OblivionDynamicCast
0x48498A: add     esp, 14h
0x48498D: test    eax, eax
0x48498F: jz      short ContainerEntryExtraData_GetUses___Return_Neg1
0x484991: mov     ecx, [esi]
0x484993: test    ecx, ecx
0x484995: jz      short ContainerEntryExtraData_GetUses___Return_BaseUseCount
0x484997: mov     esi, [ecx]
0x484999: test    esi, esi
0x48499B: jz      short ContainerEntryExtraData_GetUses___Return_BaseUseCount
0x48499D: mov     ecx, esi
0x48499F: call    ExtraDataList_GetUses
0x4849A4: test    al, al
0x4849A6: jz      short ContainerEntryExtraData_GetUses___Return_Neg1
0x4849A8: mov     ecx, esi
0x4849AA: call    ExtraDataList_GetUses
0x4849AF: movzx   eax, al
0x4849B2: pop     esi
0x4849B3: retn
