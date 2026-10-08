0x485E80: mov     eax, [ecx]; Find EntryData for an exact TESForm in ExtraContainerChanges. Native ABI is three stack arguments and retn 0x0C. The middle Boolean is not read; callers conventionally pass true. If referenceFormIDOrZero is nonzero, require an extend-data list whose ExtraReferencePointer target has that form ID; otherwise return the form entry directly.
0x485E82: test    eax, eax
0x485E84: push    esi
0x485E85: mov     dl, 1
0x485E87: jz      short ContainerExtraData_GetEntryForForm___Return_0
0x485E89: mov     esi, [esp+4+form]
0x485E8D: lea     ecx, [ecx+0]
0x485E90: test    dl, dl
0x485E92: jz      short ContainerExtraData_GetEntryForForm___EntryFound
0x485E94: mov     ecx, [eax]
0x485E96: test    ecx, ecx
0x485E98: jz      short ContainerExtraData_GetEntryForForm___FindEntryLoop_Next
0x485E9A: cmp     [ecx+8], esi; Exact TESForm comparison occurs before the optional ExtraReferencePointer FormID filter. Reference provenance cannot redirect an entry from proxy AMMO to source WEAP.
0x485E9D: jnz     short ContainerExtraData_GetEntryForForm___FindEntryLoop_Next
0x485E9F: xor     dl, dl
0x485EA1: jmp     short loc_485EA6
0x485EA3: mov     eax, [eax+4]
0x485EA6: test    eax, eax
0x485EA8: jnz     short ContainerExtraData_GetEntryForForm___FindEntryLoop
0x485EAA: xor     eax, eax
0x485EAC: pop     esi
0x485EAD: retn    0Ch
0x485EB0: test    eax, eax
0x485EB2: jz      short ContainerExtraData_GetEntryForForm___Return_0
0x485EB4: push    ebx
0x485EB5: mov     ebx, [eax]
0x485EB7: test    ebx, ebx
0x485EB9: push    ebp
0x485EBA: jz      short ContainerExtraData_GetEntryForForm___Return_
0x485EBC: mov     ebp, [esp+0Ch+referenceFormIDOrZero]
0x485EC0: test    ebp, ebp
0x485EC2: jz      short ContainerExtraData_GetEntryForForm___Return_
0x485EC4: mov     esi, [ebx]
0x485EC6: test    esi, esi
0x485EC8: push    edi
0x485EC9: jz      short ContainerExtraData_GetEntryForForm___Return_0_
0x485ECB: jmp     short ContainerExtraData_GetEntryForForm___ExtraDataLoop
0x485ED0: mov     edi, [esi]
0x485ED2: test    edi, edi
0x485ED4: jz      short ContainerExtraData_GetEntryForForm___ExtraDataLoop_Next
0x485ED6: mov     ecx, edi; this
0x485ED8: call    ExtraDataList_GetReferencePointer; Return the TESObjectREFR payload from ExtraReferencePointer type 0x22, or null. Provenance only: callers still select EntryData by exact TESForm first.
0x485EDD: test    eax, eax
0x485EDF: jz      short ContainerExtraData_GetEntryForForm___ExtraDataLoop_Next
0x485EE1: mov     ecx, edi; this
0x485EE3: call    ExtraDataList_GetReferencePointer; Return the TESObjectREFR payload from ExtraReferencePointer type 0x22, or null. Provenance only: callers still select EntryData by exact TESForm first.
0x485EE8: cmp     [eax+0Ch], ebp
0x485EEB: jz      short ContainerExtraData_GetEntryForForm___Return
0x485EED: mov     esi, [esi+4]
0x485EF0: test    esi, esi
0x485EF2: jnz     short ContainerExtraData_GetEntryForForm___ExtraDataLoop
0x485EF4: pop     edi
0x485EF5: pop     ebp
0x485EF6: pop     ebx
0x485EF7: xor     eax, eax
0x485EF9: pop     esi
0x485EFA: retn    0Ch
0x485EFD: pop     edi
0x485EFE: pop     ebp
0x485EFF: mov     eax, ebx
0x485F01: pop     ebx
0x485F02: pop     esi
0x485F03: retn    0Ch
0x485F06: pop     ebp
0x485F07: mov     eax, ebx
0x485F09: pop     ebx
0x485F0A: pop     esi
0x485F0B: retn    0Ch
