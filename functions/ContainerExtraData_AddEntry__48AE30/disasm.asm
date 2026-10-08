0x48AE30: sub     esp, 14h; Merge or append a complete EntryData into ExtraContainerChanges. Native ABI is two stack arguments (entry, destroyEntryIfMerged) and retn 0x08; all 14 callers pass exactly two. If a matching form entry exists, it merges counts/extra-data chains and conditionally destroys the supplied entry; otherwise it appends that entry directly. Return register has no contract.
0x48AE33: fld     dword ptr ds:0A30634h
0x48AE39: push    ebx
0x48AE3A: mov     ebx, [esp+18h+entry]
0x48AE3E: push    ebp
0x48AE3F: push    edi
0x48AE40: mov     edi, ecx
0x48AE42: xor     ebp, ebp
0x48AE44: fstp    dword ptr [edi+8]
0x48AE47: cmp     ebx, ebp
0x48AE49: mov     [esp+20h+var_10], edi
0x48AE4D: jz      ContainerExtraData_AddEntry___Done
0x48AE53: mov     ecx, [edi+4]
0x48AE56: cmp     ecx, ebp
0x48AE58: jz      short ContainerExtraData_AddEntry___GetExistingEntry
0x48AE5A: mov     eax, [ecx]
0x48AE5C: mov     edx, [eax+40h]
0x48AE5F: push    8000000h
0x48AE64: call    edx
0x48AE66: mov     eax, [ebx+8]
0x48AE69: push    esi
0x48AE6A: push    ebp; referenceFormIDOrZero
0x48AE6B: push    1; unusedAlwaysOne
0x48AE6D: push    eax; form
0x48AE6E: mov     ecx, edi; this
0x48AE70: call    ContainerExtraData_GetEntryForForm; Find EntryData for an exact TESForm in ExtraContainerChanges. Native ABI is three stack arguments and retn 0x0C. The middle Boolean is not read; callers conventionally pass true. If referenceFormIDOrZero is nonzero, require an extend-data list whose ExtraReferencePointer target has that form ID; otherwise return the form entry directly.
0x48AE75: mov     esi, eax
0x48AE77: mov     eax, [ebx+8]
0x48AE7A: mov     [esp+24h+var_4], eax
0x48AE7E: mov     eax, [ebx]
0x48AE80: cmp     eax, ebp
0x48AE82: mov     [esp+24h+var_8], esi
0x48AE86: jz      short ContainerExtraData_AddEntry___MergeEntryToExistingEntry
0x48AE88: cmp     [eax+4], ebp
0x48AE8B: jnz     short ContainerExtraData_AddEntry___MergeEntryToExistingEntry
0x48AE8D: cmp     [eax], ebp
0x48AE8F: jnz     short ContainerExtraData_AddEntry___MergeEntryToExistingEntry
0x48AE91: push    eax
0x48AE92: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x48AE97: add     esp, 4
0x48AE9A: mov     [ebx], ebp
0x48AE9C: cmp     esi, ebp
0x48AE9E: jz      ContainerExtraData_AddEntry___AddArgumentEntryToEntryList
0x48AEA4: mov     ecx, [ebx+4]
0x48AEA7: add     [esi+4], ecx
0x48AEAA: mov     eax, [ebx]
0x48AEAC: cmp     eax, ebp
0x48AEAE: jz      short loc_48AEBD
0x48AEB0: cmp     [eax+4], ebp
0x48AEB3: jnz     short loc_48AEBD
0x48AEB5: cmp     [eax], ebp
0x48AEB7: jz      loc_48AFED
0x48AEBD: cmp     eax, ebp
0x48AEBF: mov     edx, [esi]
0x48AEC1: mov     [esp+24h+var_14], edx
0x48AEC5: mov     [esp+24h+form], eax
0x48AEC9: jz      ContainerExtraData_AddEntry___DestroyArgEntry
0x48AECF: jmp     short ContainerExtraData_AddEntry___MergeEntryDataTableLoop_
0x48AED1: mov     eax, [esp+24h+form]
0x48AED5: mov     esi, [esp+24h+var_8]
0x48AED9: mov     edi, [eax]
0x48AEDB: cmp     edi, ebp
0x48AEDD: jz      loc_48AFC2
0x48AEE3: mov     ecx, edi; this
0x48AEE5: mov     bl, 1
0x48AEE7: call    ExtraDataList_GetReferencePointer; Return the TESObjectREFR payload from ExtraReferencePointer type 0x22, or null. Provenance only: callers still select EntryData by exact TESForm first.
0x48AEEC: test    eax, eax
0x48AEEE: jz      short loc_48AEFF
0x48AEF0: mov     eax, [esp+24h+var_10]
0x48AEF4: mov     ecx, [eax+4]
0x48AEF7: push    ecx; reference
0x48AEF8: mov     ecx, edi; this
0x48AEFA: call    ExtraDataList_SetReferencePointer; Set or create ExtraReferencePointer (type 0x22) in one logical function, now merged through 0x41FAF4. This extra preserves persistent-reference provenance inside an already form-keyed inventory entry; it does not override EntryData.type or sourceRef->baseForm and therefore cannot restore a thrown proxy AMMO to its source WEAP.
0x48AEFF: cmp     [esp+24h+var_14], ebp
0x48AF03: jz      short loc_48AF60
0x48AF05: mov     edx, [esp+24h+var_14]
0x48AF09: mov     esi, [edx]
0x48AF0B: cmp     esi, ebp
0x48AF0D: jz      short loc_48AF58
0x48AF0F: test    bl, bl
0x48AF11: jz      ContainerExtraData_AddEntry___MergeEntryDataTableLoop_Next
0x48AF17: cmp     edi, ebp
0x48AF19: jz      short loc_48AF47
0x48AF1B: push    esi; other
0x48AF1C: mov     ecx, edi; this
0x48AF1E: call    ExtraDataList_CompareListForContainer; False means these two ExtraDataLists are stack-compatible; then native code adds their ExtraCount values. True advances to the next candidate.
0x48AF23: test    al, al
0x48AF25: jnz     short loc_48AF47
0x48AF27: mov     ecx, esi
0x48AF29: call    ExtraDataList_GetExtraCount
0x48AF2E: mov     ecx, edi
0x48AF30: movzx   ebx, ax
0x48AF33: call    ExtraDataList_GetExtraCount
0x48AF38: add     bx, ax
0x48AF3B: mov     ecx, esi
0x48AF3D: push    ebx
0x48AF3E: call    ExtraDataList_SetExtraCount
0x48AF43: xor     bl, bl
0x48AF45: jmp     short loc_48AF52
0x48AF47: mov     eax, [esp+24h+var_14]
0x48AF4B: mov     ecx, [eax+4]
0x48AF4E: mov     [esp+24h+var_14], ecx
0x48AF52: cmp     [esp+24h+var_14], ebp
0x48AF56: jnz     short loc_48AF05
0x48AF58: test    bl, bl
0x48AF5A: jz      short ContainerExtraData_AddEntry___MergeEntryDataTableLoop_Next
0x48AF5C: mov     esi, [esp+24h+var_8]
0x48AF60: cmp     [esi], ebp
0x48AF62: jnz     short loc_48AF7D
0x48AF64: push    8; Size
0x48AF66: call    FormHeapAlloc
0x48AF6B: add     esp, 4
0x48AF6E: cmp     eax, ebp
0x48AF70: jz      short loc_48AF79
0x48AF72: mov     [eax], ebp
0x48AF74: mov     [eax+4], ebp
0x48AF77: jmp     short loc_48AF7B
0x48AF79: xor     eax, eax
0x48AF7B: mov     [esi], eax
0x48AF7D: cmp     edi, ebp
0x48AF7F: mov     esi, [esi]
0x48AF81: jz      short ContainerExtraData_AddEntry___MergeEntryDataTableLoop_Next
0x48AF83: cmp     [esi], ebp
0x48AF85: jz      short loc_48AFA9
0x48AF87: push    8; Size
0x48AF89: call    FormHeapAlloc
0x48AF8E: add     esp, 4
0x48AF91: cmp     eax, ebp
0x48AF93: jz      short loc_48AF9E
0x48AF95: mov     edx, [esi]
0x48AF97: mov     [eax], edx
0x48AF99: mov     [eax+4], ebp
0x48AF9C: jmp     short loc_48AFA0
0x48AF9E: xor     eax, eax
0x48AFA0: mov     ecx, [esi+4]
0x48AFA3: mov     [eax+4], ecx
0x48AFA6: mov     [esi+4], eax
0x48AFA9: mov     [esi], edi
0x48AFAB: mov     edx, [esp+24h+form]
0x48AFAF: mov     eax, [edx+4]
0x48AFB2: cmp     eax, ebp
0x48AFB4: mov     ebx, [esp+24h+entry]
0x48AFB8: mov     [esp+24h+form], eax
0x48AFBC: jnz     ContainerExtraData_AddEntry___MergeEntryDataTableLoop
0x48AFC2: mov     edi, [esp+24h+var_10]
0x48AFC6: cmp     [esp+24h+destroyEntryIfMerged], 0
0x48AFCB: jz      short loc_48AFED
0x48AFCD: mov     ecx, [ebx]
0x48AFCF: cmp     ecx, ebp
0x48AFD1: jz      short loc_48AFD8
0x48AFD3: call    BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x48AFD8: mov     eax, [ebx]
0x48AFDA: push    eax
0x48AFDB: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x48AFE0: push    ebx
0x48AFE1: mov     [ebx], ebp
0x48AFE3: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x48AFE8: add     esp, 8
0x48AFEB: mov     ebx, ebp
0x48AFED: mov     ecx, [esp+24h+var_4]
0x48AFF1: push    ebp; referenceFormIDOrZero
0x48AFF2: push    1; unusedAlwaysOne
0x48AFF4: push    ecx; form
0x48AFF5: mov     ecx, edi; this
0x48AFF7: call    ContainerExtraData_GetEntryForForm; Find EntryData for an exact TESForm in ExtraContainerChanges. Native ABI is three stack arguments and retn 0x0C. The middle Boolean is not read; callers conventionally pass true. If referenceFormIDOrZero is nonzero, require an extend-data list whose ExtraReferencePointer target has that form ID; otherwise return the form entry directly.
0x48AFFC: mov     esi, eax
0x48AFFE: cmp     esi, ebp
0x48B000: jz      short ContainerExtraData_AddEntry___Done_
0x48B002: mov     eax, [esi]
0x48B004: cmp     eax, ebp
0x48B006: jz      short loc_48B011
0x48B008: cmp     [eax+4], ebp
0x48B00B: jnz     short ContainerExtraData_AddEntry___Done_
0x48B00D: cmp     [eax], ebp
0x48B00F: jnz     short ContainerExtraData_AddEntry___Done_
0x48B011: cmp     [esi+4], ebp
0x48B014: jnz     short ContainerExtraData_AddEntry___Done_
0x48B016: mov     edx, [esp+24h+var_10]
0x48B01A: mov     ecx, [edx]
0x48B01C: push    esi
0x48B01D: call    BSSimpleList_Remove
0x48B022: mov     ecx, [esi]
0x48B024: cmp     ecx, ebp
0x48B026: jz      short loc_48B02D
0x48B028: call    BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x48B02D: mov     eax, [esi]
0x48B02F: push    eax
0x48B030: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x48B035: push    esi
0x48B036: mov     [esi], ebp
0x48B038: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x48B03D: add     esp, 8
0x48B040: cmp     ebx, ebp
0x48B042: jz      short ContainerExtraData_AddEntry___Done_
0x48B044: mov     ecx, [ebx]
0x48B046: cmp     ecx, ebp
0x48B048: jz      short loc_48B04F
0x48B04A: call    BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x48B04F: mov     ecx, [ebx]
0x48B051: push    ecx
0x48B052: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x48B057: push    ebx
0x48B058: mov     [ebx], ebp
0x48B05A: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x48B05F: add     esp, 8
0x48B062: pop     esi
0x48B063: pop     edi
0x48B064: pop     ebp
0x48B065: pop     ebx
0x48B066: add     esp, 14h
0x48B069: retn    8
0x48B06C: mov     ecx, [edi]
0x48B06E: push    ebx
0x48B06F: call    BSSimpleList_PushBack
0x48B074: pop     esi
0x48B075: pop     edi
0x48B076: pop     ebp
0x48B077: pop     ebx
0x48B078: add     esp, 14h
0x48B07B: retn    8
