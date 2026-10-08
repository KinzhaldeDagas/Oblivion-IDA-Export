0x48F7C0: push    0FFFFFFFFh; Canonical form-based container add: item, optional instance ExtraDataList, and signed count. All four external callers enter only at this head; the formerly split interior blocks are one logical routine ending in retn 0x0C. A proxy-to-source conversion hook here covers actor-hit/form adds but not ordinary world-reference pickup.
0x48F7C2: push    offset ContainerExtraData_AddItem_SEH
0x48F7C7: mov     eax, large fs:0
0x48F7CD: push    eax
0x48F7CE: push    ecx
0x48F7CF: push    ebx
0x48F7D0: push    ebp
0x48F7D1: push    esi
0x48F7D2: push    edi
0x48F7D3: mov     eax, ds:0B30AACh
0x48F7D8: xor     eax, esp
0x48F7DA: push    eax
0x48F7DB: lea     eax, [esp+24h+var_C]
0x48F7DF: mov     large fs:0, eax
0x48F7E5: mov     edi, ecx
0x48F7E7: mov     [esp+24h+var_10], edi
0x48F7EB: mov     ebx, [esp+24h+extraList]
0x48F7EF: fld     dword ptr ds:0A30634h
0x48F7F5: test    ebx, ebx
0x48F7F7: fstp    dword ptr [edi+8]
0x48F7FA: jz      short ContainerExtraData_AddItem___ValidateAddedCount
0x48F7FC: mov     ecx, ebx
0x48F7FE: call    BaseExtraList_Count
0x48F803: test    eax, eax
0x48F805: jnz     short ContainerExtraData_AddItem___ValidateAddedCount
0x48F807: mov     eax, [ebx]
0x48F809: mov     edx, [eax]
0x48F80B: push    1
0x48F80D: mov     ecx, ebx
0x48F80F: call    edx
0x48F811: mov     [esp+24h+extraList], 0
0x48F819: mov     ebx, [esp+24h+extraList]
0x48F81D: cmp     [esp+24h+count], 0
0x48F822: jnz     short loc_48F82C
0x48F824: mov     [esp+24h+count], 1
0x48F82C: mov     eax, [edi]
0x48F82E: test    eax, eax
0x48F830: mov     dl, 1
0x48F832: jz      short loc_48F856
0x48F834: test    dl, dl
0x48F836: jz      ContainerExtraData_AddItem___ProcessFoundEntryExtraDataNode
0x48F83C: mov     ecx, [eax]
0x48F83E: test    ecx, ecx
0x48F840: jz      short ContainerExtraData_AddItem___FindEntryForAddedForm_Next
0x48F842: mov     esi, [esp+24h+item]
0x48F846: cmp     [ecx+8], esi
0x48F849: jnz     short ContainerExtraData_AddItem___FindEntryForAddedForm_Next
0x48F84B: xor     dl, dl
0x48F84D: jmp     short loc_48F852
0x48F84F: mov     eax, [eax+4]
0x48F852: test    eax, eax
0x48F854: jnz     short ContainerExtraData_AddItem___FindEntryForAddedFormLoop
0x48F856: xor     ebp, ebp
0x48F858: test    ebx, ebx
0x48F85A: jz      short ContainerExtraData_AddItem___FixupEquippedAmmo
0x48F85C: mov     ecx, ebx; this
0x48F85E: call    ExtraDataList_GetOwner; Verified accessor: returns the owner TESForm pointer stored in the ExtraOwnership payload identified by kExtraData_Ownership, or null when absent. RTTI callers confirm TESNPC/TESFaction owner forms.
0x48F863: mov     ecx, ds:0B333C4h
0x48F869: cmp     eax, ecx
0x48F86B: jnz     short ContainerExtraData_AddItem___FixupEquippedAmmo
0x48F86D: cmp     [edi+4], ecx
0x48F870: jnz     short ContainerExtraData_AddItem___FixupEquippedAmmo
0x48F872: mov     ecx, ebx
0x48F874: call    ExtraDataList_RemoveOwner
0x48F879: mov     ecx, [edi+4]
0x48F87C: mov     eax, [ecx]
0x48F87E: mov     edx, [eax+190h]
0x48F884: call    edx
0x48F886: test    al, al
0x48F888: jz      short ContainerExtraData_AddItem___FixupPersistentRefPointer
0x48F88A: mov     esi, [edi+4]
0x48F88D: test    esi, esi
0x48F88F: jz      short ContainerExtraData_AddItem___FixupPersistentRefPointer
0x48F891: cmp     dword ptr [esi+58h], 0
0x48F895: jz      short ContainerExtraData_AddItem___FixupPersistentRefPointer
0x48F897: mov     ecx, ds:0B33B00h
0x48F89D: call    sub_45A500
0x48F8A2: test    al, al
0x48F8A4: jnz     short ContainerExtraData_AddItem___FixupPersistentRefPointer
0x48F8A6: mov     eax, ds:0B33B00h
0x48F8AB: mov     ecx, [eax+18h]
0x48F8AE: shr     ecx, 0Ch
0x48F8B1: test    cl, 1
0x48F8B4: jnz     short ContainerExtraData_AddItem___FixupPersistentRefPointer
0x48F8B6: mov     ecx, [esi+58h]
0x48F8B9: mov     edx, [ecx]
0x48F8BB: mov     eax, [edx+0F4h]
0x48F8C1: push    0
0x48F8C3: call    eax
0x48F8C5: mov     esi, eax
0x48F8C7: test    esi, esi
0x48F8C9: jz      short ContainerExtraData_AddItem___FixupPersistentRefPointer
0x48F8CB: mov     ecx, [esi+8]
0x48F8CE: cmp     ecx, [esp+24h+item]
0x48F8D2: jnz     short ContainerExtraData_AddItem___FixupPersistentRefPointer
0x48F8D4: mov     eax, [esi]
0x48F8D6: mov     ecx, [eax]
0x48F8D8: mov     edi, ecx
0x48F8DA: call    ExtraDataList_GetExtraCount
0x48F8DF: add     ax, word ptr [esp+24h+count]
0x48F8E4: mov     ecx, edi
0x48F8E6: push    eax
0x48F8E7: call    ExtraDataList_SetExtraCount
0x48F8EC: mov     eax, [esi+4]
0x48F8EF: mov     edx, [esp+24h+count]
0x48F8F3: mov     edi, [esp+24h+var_10]
0x48F8F7: add     eax, edx
0x48F8F9: mov     [esi+4], eax
0x48F8FC: xor     esi, esi
0x48F8FE: cmp     ebx, esi
0x48F900: jz      short ContainerExtraData_AddItem___NewEntryExtraData
0x48F902: mov     ecx, ebx; this
0x48F904: call    ExtraDataList_GetReferencePointer; Return the TESObjectREFR payload from ExtraReferencePointer type 0x22, or null. Provenance only: callers still select EntryData by exact TESForm first.
0x48F909: test    eax, eax
0x48F90B: jz      short ContainerExtraData_AddItem___NewEntryExtraData
0x48F90D: mov     ecx, ebx; this
0x48F90F: call    ExtraDataList_GetReferencePointer; Return the TESObjectREFR payload from ExtraReferencePointer type 0x22, or null. Provenance only: callers still select EntryData by exact TESForm first.
0x48F914: cmp     eax, esi
0x48F916: jz      short ContainerExtraData_AddItem___NewEntryExtraData
0x48F918: mov     ecx, [edi+4]
0x48F91B: push    ecx; reference
0x48F91C: lea     ecx, [eax+44h]; this
0x48F91F: call    ExtraDataList_SetReferencePointer; Set or create ExtraReferencePointer (type 0x22) in one logical function, now merged through 0x41FAF4. This extra preserves persistent-reference provenance inside an already form-keyed inventory entry; it does not override EntryData.type or sourceRef->baseForm and therefore cannot restore a thrown proxy AMMO to its source WEAP.
0x48F924: cmp     ebp, esi
0x48F926: jnz     short loc_48F9A5
0x48F928: push    0Ch; Size
0x48F92A: call    FormHeapAlloc
0x48F92F: add     esp, 4
0x48F932: mov     [esp+24h+extraList], eax
0x48F936: cmp     eax, esi
0x48F938: mov     [esp+24h+var_4], esi
0x48F93C: jz      short loc_48F951
0x48F93E: mov     edx, [esp+24h+count]
0x48F942: mov     ecx, [esp+24h+item]
0x48F946: push    edx
0x48F947: push    ecx
0x48F948: mov     ecx, eax
0x48F94A: call    ContainerEntryExtraData_constr
0x48F94F: mov     esi, eax
0x48F951: cmp     dword ptr [esi], 0
0x48F954: mov     [esp+24h+var_4], 0FFFFFFFFh
0x48F95C: jnz     short ContainerExtraData_AddItem___AddNewEntry
0x48F95E: push    8; Size
0x48F960: call    FormHeapAlloc
0x48F965: add     esp, 4
0x48F968: test    eax, eax
0x48F96A: jz      short ContainerExtraData_AddItem___AddNewEntry__
0x48F96C: mov     dword ptr [eax], 0
0x48F972: mov     dword ptr [eax+4], 0
0x48F979: jmp     short ContainerExtraData_AddItem___AddNewEntry_
0x48F97B: test    eax, eax
0x48F97D: jz      loc_48F856
0x48F983: mov     ebp, [eax]
0x48F985: jmp     ContainerExtraData_AddItem___RemoveUnnecessaryExtraOwner
0x48F98A: xor     eax, eax
0x48F98C: mov     [esi], eax
0x48F98E: mov     ecx, [esi]
0x48F990: push    ebx
0x48F991: call    BSSimpleList_PushFront
0x48F996: push    1; destroyEntryIfMerged
0x48F998: push    esi; entry
0x48F999: mov     ecx, edi; this
0x48F99B: call    ContainerExtraData_AddEntry; Merge or append a complete EntryData into ExtraContainerChanges. Native ABI is two stack arguments (entry, destroyEntryIfMerged) and retn 0x08; all 14 callers pass exactly two. If a matching form entry exists, it merges counts/extra-data chains and conditionally destroys the supplied entry; otherwise it appends that entry directly. Return register has no contract.
0x48F9A0: jmp     loc_48FB9F
0x48F9A5: cmp     [ebp+4], esi
0x48F9A8: jge     short loc_48F9E9
0x48F9AA: cmp     ebx, esi
0x48F9AC: jz      loc_48FA70
0x48F9B2: mov     ecx, ebx; this
0x48F9B4: call    ExtraDataList_GetOwner; Verified accessor: returns the owner TESForm pointer stored in the ExtraOwnership payload identified by kExtraData_Ownership, or null when absent. RTTI callers confirm TESNPC/TESFaction owner forms.
0x48F9B9: test    eax, eax
0x48F9BB: jnz     short loc_48F9E9
0x48F9BD: mov     esi, [ebp+0]
0x48F9C0: test    esi, esi
0x48F9C2: jz      short loc_48F9E9
0x48F9C4: mov     ecx, esi
0x48F9C6: call    BSSimpleList_Count
0x48F9CB: test    eax, eax
0x48F9CD: jz      short loc_48F9E9
0x48F9CF: mov     ecx, [esi]
0x48F9D1: call    sub_41DEF0
0x48F9D6: test    al, al
0x48F9D8: jz      short loc_48F9E9
0x48F9DA: mov     edx, [ebx]
0x48F9DC: mov     eax, [edx]
0x48F9DE: push    1
0x48F9E0: mov     ecx, ebx
0x48F9E2: call    eax
0x48F9E4: jmp     loc_48FA70
0x48F9E9: test    ebx, ebx
0x48F9EB: jz      loc_48FA70
0x48F9F1: mov     eax, [ebp+0]
0x48F9F4: test    eax, eax
0x48F9F6: jz      loc_48FAF2
0x48F9FC: mov     edi, eax
0x48F9FE: mov     bl, 1
0x48FA00: mov     esi, [edi]
0x48FA02: test    esi, esi
0x48FA04: jz      short loc_48FA54
0x48FA06: test    bl, bl
0x48FA08: jz      loc_48FAC3
0x48FA0E: mov     ecx, [esp+24h+extraList]; this
0x48FA12: push    esi; other
0x48FA13: call    ExtraDataList_CompareListForContainer; False means stack-compatible; merge count into the existing list. True means distinct and continues scanning.
0x48FA18: test    al, al
0x48FA1A: jz      short loc_48FA21
0x48FA1C: mov     edi, [edi+4]
0x48FA1F: jmp     short loc_48FA50
0x48FA21: mov     ecx, esi
0x48FA23: call    ExtraDataList_GetExtraCount
0x48FA28: add     ax, word ptr [esp+24h+count]
0x48FA2D: mov     ecx, esi
0x48FA2F: push    eax
0x48FA30: call    ExtraDataList_SetExtraCount
0x48FA35: cmp     dword ptr [esi+4], 0
0x48FA39: jnz     short loc_48FA4E
0x48FA3B: mov     ecx, [ebp+0]
0x48FA3E: push    esi
0x48FA3F: call    BSSimpleList_Remove
0x48FA44: mov     edx, [esi]
0x48FA46: mov     eax, [edx]
0x48FA48: push    1
0x48FA4A: mov     ecx, esi
0x48FA4C: call    eax
0x48FA4E: xor     bl, bl
0x48FA50: test    edi, edi
0x48FA52: jnz     short loc_48FA00
0x48FA54: test    bl, bl
0x48FA56: jz      short loc_48FAC3
0x48FA58: mov     esi, [esp+24h+extraList]
0x48FA5C: cmp     dword ptr [esi+4], 0
0x48FA60: jnz     short loc_48FA85
0x48FA62: mov     edx, [esi]
0x48FA64: push    1
0x48FA66: mov     ecx, esi
0x48FA68: mov     eax, [edx]
0x48FA6A: call    eax
0x48FA6C: mov     edi, [esp+24h+var_10]
0x48FA70: mov     ecx, [edi+4]; this
0x48FA73: test    ecx, ecx
0x48FA75: jz      loc_48FB2F
0x48FA7B: call    TESObjectREFR_GetContainer
0x48FA80: jmp     loc_48FB31
0x48FA85: cmp     dword ptr [ebp+0], 0
0x48FA89: jnz     short loc_48FAB8
0x48FA8B: push    8; Size
0x48FA8D: call    FormHeapAlloc
0x48FA92: add     esp, 4
0x48FA95: test    eax, eax
0x48FA97: jz      short loc_48FAB3
0x48FA99: mov     dword ptr [eax], 0
0x48FA9F: mov     dword ptr [eax+4], 0
0x48FAA6: push    esi
0x48FAA7: mov     ecx, eax
0x48FAA9: mov     [ebp+0], eax
0x48FAAC: call    BSSimpleList_PushFront
0x48FAB1: jmp     short loc_48FA6C
0x48FAB3: xor     eax, eax
0x48FAB5: mov     [ebp+0], eax
0x48FAB8: mov     ecx, [ebp+0]
0x48FABB: push    esi
0x48FABC: call    BSSimpleList_PushFront
0x48FAC1: jmp     short loc_48FA6C
0x48FAC3: push    3F0h
0x48FAC8: call    Menu_GetOpenMenuTile
0x48FACD: add     esp, 4
0x48FAD0: test    eax, eax
0x48FAD2: jz      short loc_48FAE5
0x48FAD4: mov     ecx, eax
0x48FAD6: call    Tile_GetParentMenu
0x48FADB: test    eax, eax
0x48FADD: jz      short loc_48FAE5
0x48FADF: cmp     byte ptr [eax+61h], 0
0x48FAE3: jnz     short loc_48FA6C
0x48FAE5: mov     ecx, [esp+24h+extraList]
0x48FAE9: mov     edx, [ecx]
0x48FAEB: push    1
0x48FAED: jmp     loc_48FA68
0x48FAF2: push    8; Size
0x48FAF4: call    FormHeapAlloc
0x48FAF9: add     esp, 4
0x48FAFC: test    eax, eax
0x48FAFE: jz      short loc_48FB1D
0x48FB00: mov     dword ptr [eax], 0
0x48FB06: mov     dword ptr [eax+4], 0
0x48FB0D: push    ebx
0x48FB0E: mov     ecx, eax
0x48FB10: mov     [ebp+0], eax
0x48FB13: call    BSSimpleList_PushFront
0x48FB18: jmp     loc_48FA70
0x48FB1D: xor     eax, eax
0x48FB1F: push    ebx
0x48FB20: mov     ecx, eax
0x48FB22: mov     [ebp+0], eax
0x48FB25: call    BSSimpleList_PushFront
0x48FB2A: jmp     loc_48FA70
0x48FB2F: xor     eax, eax
0x48FB31: mov     ecx, [esp+24h+item]
0x48FB35: push    ecx
0x48FB36: mov     ecx, eax
0x48FB38: call    TESContainer_GetFormCount
0x48FB3D: mov     ecx, [ebp+4]
0x48FB40: test    ecx, ecx
0x48FB42: jge     short loc_48FB51
0x48FB44: test    eax, eax
0x48FB46: jg      short loc_48FB51
0x48FB48: mov     edx, [esp+24h+count]
0x48FB4C: mov     [ebp+4], edx
0x48FB4F: jmp     short loc_48FB5A
0x48FB51: mov     eax, [esp+24h+count]
0x48FB55: add     ecx, eax
0x48FB57: mov     [ebp+4], ecx
0x48FB5A: mov     eax, [ebp+0]
0x48FB5D: test    eax, eax
0x48FB5F: jz      short loc_48FB9F
0x48FB61: cmp     dword ptr [eax+4], 0
0x48FB65: jnz     short loc_48FB9F
0x48FB67: cmp     dword ptr [eax], 0
0x48FB6A: jnz     short loc_48FB9F
0x48FB6C: cmp     dword ptr [ebp+4], 0
0x48FB70: jnz     short loc_48FB9F
0x48FB72: mov     ecx, [edi]
0x48FB74: push    ebp
0x48FB75: call    BSSimpleList_Remove
0x48FB7A: mov     ecx, [ebp+0]
0x48FB7D: test    ecx, ecx
0x48FB7F: jz      short loc_48FB86
0x48FB81: call    BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x48FB86: mov     ecx, [ebp+0]
0x48FB89: push    ecx
0x48FB8A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x48FB8F: push    ebp
0x48FB90: mov     dword ptr [ebp+0], 0
0x48FB97: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x48FB9C: add     esp, 8
0x48FB9F: mov     ecx, [esp+24h+var_C]
0x48FBA3: mov     large fs:0, ecx
0x48FBAA: pop     ecx
0x48FBAB: pop     edi
0x48FBAC: pop     esi
0x48FBAD: pop     ebp
0x48FBAE: pop     ebx
0x48FBAF: add     esp, 10h
0x48FBB2: retn    0Ch
0x9AFED0: mov     eax, [ebp+8]
0x9AFED3: push    eax
0x9AFED4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AFED9: pop     ecx
0x9AFEDA: retn
0x9AFEDB: mov     edx, [esp+extraList]
0x9AFEDF: lea     eax, [edx-14h]
0x9AFEE2: mov     ecx, [edx-18h]
0x9AFEE5: xor     ecx, eax
0x9AFEE7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AFEEC: mov     eax, offset stru_ADC328
0x9AFEF1: jmp     ___CxxFrameHandler3
