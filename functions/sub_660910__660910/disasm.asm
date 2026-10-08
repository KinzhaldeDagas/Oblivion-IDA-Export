0x660910: sub     esp, 8; PlayerCharacter vtable +0x2CC pickup transaction for a world reference. Handles activation/ownership, optional direct merge into currently equipped AMMO, world-reference cleanup, and quiver refresh.
0x660913: push    ebx
0x660914: push    ebp
0x660915: push    esi
0x660916: mov     esi, [esp+14h+arg_0]
0x66091A: mov     eax, [esi]
0x66091C: mov     edx, [eax+170h]
0x660922: push    edi; value
0x660923: push    0
0x660925: mov     edi, ecx
0x660927: push    1
0x660929: mov     ecx, esi
0x66092B: call    edx; Player world pickup begins by virtual sourceRef->GetBaseForm(). For a landed thrown proxy this is the AMMO assigned at 0x60CCA5, not the originating WEAP.
0x66092D: push    eax
0x66092E: mov     ecx, edi
0x660930: call    sub_5E99C0
0x660935: mov     eax, [esi]
0x660937: mov     edx, [eax+154h]
0x66093D: push    0
0x66093F: push    1
0x660941: push    1
0x660943: mov     ecx, esi
0x660945: call    edx
0x660947: push    eax
0x660948: call    sub_88CF90
0x66094D: mov     eax, [esi+0Ch]
0x660950: add     esp, 10h
0x660953: push    edi
0x660954: push    eax
0x660955: mov     ecx, (offset qword_B3BB2C+1D4h)
0x66095A: call    sub_674E40
0x66095F: mov     ebx, eax
0x660961: test    ebx, ebx
0x660963: mov     [esp+18h+arg_0], ebx
0x660967: jz      short loc_6609AA
0x660969: lea     esp, [esp+0]
0x660970: mov     ebp, [ebx]
0x660972: test    ebp, ebp
0x660974: jz      short loc_660994
0x660976: mov     ecx, ebp
0x660978: call    sub_5E2E00
0x66097D: cmp     eax, esi
0x66097F: mov     ecx, ebp
0x660981: jnz     short loc_660986
0x660983: push    edi
0x660984: jmp     short loc_660988
0x660986: push    0
0x660988: call    sub_5E03C0; 3DTheft decode 2026-05-17: Actor wrapper for process vfunc +0xD0; writes the resolved procedure target/follow reference into the actor process.
0x66098D: mov     ebx, [ebx+4]
0x660990: test    ebx, ebx
0x660992: jnz     short loc_660970
0x660994: mov     ecx, [esp+18h+arg_0]
0x660998: call    BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x66099D: mov     eax, [esp+18h+arg_0]
0x6609A1: push    eax
0x6609A2: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6609A7: add     esp, 4
0x6609AA: push    0FFFFFFFFh; a2
0x6609AC: mov     ecx, esi; this
0x6609AE: call    TESForm_GetOverrideFile; TESForm override-file selector. With a2=-1 it walks the entire mod-reference list and returns the last non-null TESFile; TESTopicInfo lazy responses therefore read only the winning override file.
0x6609B3: push    3F1h
0x6609B8: mov     [esp+1Ch+arg_0], eax
0x6609BC: call    Menu_GetOpenMenuTile
0x6609C1: add     esp, 4
0x6609C4: test    eax, eax
0x6609C6: jnz     loc_660AD4
0x6609CC: mov     ecx, ds:0B333C4h
0x6609D2: cmp     [ecx+124h], al
0x6609D8: jnz     loc_660AD4
0x6609DE: mov     ecx, esi; reference
0x6609E0: call    TESObjectREFR_GetOwner; Verified owner-resolution order: return this reference's direct XOWN; for non-actors only, try a linked door's XOWN; if still absent, inherit the parent cell's direct owner except for furniture, doors, and activators. Actors never inherit linked-door/cell ownership. Fallout's analogous GetOwner includes an encounter-zone-owner fallback before parent-cell handling; Oblivion's body has no such branch.
0x6609E5: push    0; int
0x6609E7: push    offset ??_R0?AVArrowProjectile@@@8; struct TypeDescriptor *
0x6609EC: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x6609F1: push    0; int
0x6609F3: push    esi; void *
0x6609F4: mov     ebp, eax
0x6609F6: call    OblivionDynamicCast
0x6609FB: add     esp, 14h
0x6609FE: test    ebp, ebp
0x660A00: mov     ebx, eax; Ownership handling explicitly recognizes ArrowProjectile references: projectile pickups qualify for owner removal rather than ordinary stolen-owner handling.
0x660A02: jz      loc_660ACC
0x660A08: push    1; useFactionOwnership
0x660A0A: push    edi; actorReference
0x660A0B: mov     ecx, esi; reference
0x660A0D: call    TESObjectREFR_IsOwnedBy; Verified ownership predicate and flag meaning: resolve the effective owner; accept exact equality with the actor's template/base form. When the owner differs, a nonzero ownership-global value can permit the access. With useFactionOwnership=true, a Faction owner is instead checked against the actor base's faction rank and the reference's effective required rank; callers passing false skip that faction-rank path. Direct callers include many `true` paths and ContainerExtraData_RemoveForm's item-sweep call with false. Fallout's TESObjectREFR::IsAnOwner/DoorLock::IsAnOwner also expose a `useFaction` boolean, but its implementation uses actor faction membership and has different rank/global handling.
0x660A12: test    al, al
0x660A14: jnz     loc_660ACC
0x660A1A: test    ebx, ebx
0x660A1C: jnz     loc_660ACC
0x660A22: mov     edx, [esi]
0x660A24: mov     eax, [edx+170h]
0x660A2A: mov     ecx, esi
0x660A2C: call    eax
0x660A2E: cmp     dword ptr [eax+0Ch], 0Fh
0x660A32: jz      loc_660ACC
0x660A38: push    esi
0x660A39: mov     ecx, (offset qword_B3BB2C+1D4h)
0x660A3E: call    sub_676480
0x660A43: test    byte ptr [esi+8], 1
0x660A47: mov     ds:0B3BAF0h, eax
0x660A4C: jnz     short loc_660A90
0x660A4E: cmp     [esp+18h+arg_0], ebx
0x660A52: jnz     short loc_660A90
0x660A54: push    2
0x660A56: mov     ecx, esi
0x660A58: call    sub_4D8260
0x660A5D: test    al, al
0x660A5F: jnz     short loc_660A90
0x660A61: cmp     dword ptr ds:0B3BAF0h, 0
0x660A68: jz      short loc_660AB4
0x660A6A: mov     ecx, [esp+18h+arg1]
0x660A6E: mov     edx, [esi]
0x660A70: mov     ebx, [edi]
0x660A72: mov     eax, [edx+170h]
0x660A78: push    ebp
0x660A79: push    0
0x660A7B: push    ecx
0x660A7C: mov     ecx, esi
0x660A7E: add     ebx, 238h
0x660A84: call    eax
0x660A86: mov     ecx, ds:0B3BAF0h
0x660A8C: push    eax
0x660A8D: push    ecx
0x660A8E: jmp     short loc_660AAE
0x660A90: mov     eax, [esp+18h+arg1]
0x660A94: mov     edx, [esi]
0x660A96: mov     ebx, [edi]
0x660A98: push    ebp
0x660A99: push    0
0x660A9B: push    eax
0x660A9C: mov     eax, [edx+170h]
0x660AA2: mov     ecx, esi
0x660AA4: add     ebx, 238h
0x660AAA: call    eax
0x660AAC: push    eax
0x660AAD: push    esi
0x660AAE: mov     edx, [ebx]
0x660AB0: mov     ecx, edi
0x660AB2: call    edx
0x660AB4: push    0
0x660AB6: mov     ecx, esi
0x660AB8: call    sub_4DE880
0x660ABD: test    al, al
0x660ABF: lea     ecx, [esi+44h]; this
0x660AC2: jnz     short loc_660ACF
0x660AC4: push    ebp; owner
0x660AC5: call    ExtraDataList__SetOrRemoveExtraOwnership; Verified XOWN mutator: update ExtraOwnership.ownerForm when owner is nonnull; remove the XOWN extra when null; otherwise allocate a 16-byte ExtraOwnership payload and add it to the list. During plugin load the initial dword is a FormID temporarily held in the same union slot; ExtraDataList_ResolveLoadedFormIDs converts it to TESForm*. TESObjectCELL_LinkForm removes direct XOWN, XRNK, and XGLB from an exterior cell when an owner exists.
0x660ACA: jmp     short loc_660AD4
0x660ACC: lea     ecx, [esi+44h]
0x660ACF: call    ExtraDataList_RemoveOwner
0x660AD4: mov     ecx, [edi+58h]
0x660AD7: mov     eax, [ecx]
0x660AD9: mov     edx, [eax+0F4h]
0x660ADF: push    1
0x660AE1: xor     bl, bl
0x660AE3: call    edx
0x660AE5: test    eax, eax
0x660AE7: jz      loc_660BD7
0x660AED: mov     ecx, [edi+58h]
0x660AF0: mov     eax, [ecx]
0x660AF2: mov     edx, [eax+0F4h]
0x660AF8: push    1
0x660AFA: call    edx
0x660AFC: mov     ebp, [eax+8]
0x660AFF: mov     eax, [esi]
0x660B01: mov     edx, [eax+170h]
0x660B07: mov     ecx, esi
0x660B09: call    edx
0x660B0B: cmp     eax, ebp
0x660B0D: jnz     loc_660BD7; Equipped-AMMO fast merge: requires picked reference base form to equal the currently equipped AMMO form. On success this path bypasses both form-based ContainerExtraData_AddItem (0x48F7C0) and reference-based ContainerExtraData_AddItemFromWorldReference (0x48AA10).
0x660B13: mov     ecx, [edi+58h]
0x660B16: mov     eax, [ecx]
0x660B18: mov     edx, [eax+0F4h]
0x660B1E: push    1
0x660B20: call    edx
0x660B22: mov     ecx, eax
0x660B24: call    EntryData_HasDefaultContainerExtraList
0x660B29: test    al, al
0x660B2B: jz      short loc_660B3D
0x660B2D: lea     ecx, [esi+44h]; this
0x660B30: call    ExtraDataList_GetOwner; If equipped EntryData contains a default-for-container extra list, an unowned picked reference is not fast-merged; owned references or entries without that default list may proceed.
0x660B35: test    eax, eax
0x660B37: jz      loc_660BD7
0x660B3D: lea     ebx, [esi+44h]
0x660B40: mov     ecx, ebx
0x660B42: call    ExtraDataList_GetExtraCount
0x660B47: mov     ecx, [edi+58h]
0x660B4A: movsx   ebp, ax
0x660B4D: mov     eax, [ecx]
0x660B4F: mov     edx, [eax+0F4h]
0x660B55: push    1
0x660B57: call    edx
0x660B59: mov     ecx, eax; this
0x660B5B: call    TESHealthForm_GetHealth; Read equipped EntryData +0x04 count field (the callee is a trivial +4 accessor despite its inherited/misapplied type name), then add picked reference ExtraCount.
0x660B60: mov     ecx, [edi+58h]
0x660B63: add     ebp, eax
0x660B65: mov     eax, [ecx]
0x660B67: mov     edx, [eax+0F4h]
0x660B6D: push    ebp; mergedCount was pushed before GetEquippedAmmoData(process,true). That virtual consumes only its own boolean argument, leaving mergedCount on the stack for EntryData_SetCount.
0x660B6E: push    1
0x660B70: call    edx; Calling-convention pipeline: total count remains on stack across GetEquippedAmmoData(process,true), then 0x60D020 consumes it and writes equipped EntryData +0x04 = total.
0x660B72: mov     ecx, eax; this
0x660B74: call    Shared_SetDwordAtOffset04; Writes the previously stacked mergedCount into the selected equipped-AMMO EntryData+0x04; no health calculation occurs in this branch.
0x660B79: mov     ecx, [edi+58h]
0x660B7C: mov     eax, [ecx]
0x660B7E: mov     edx, [eax+0F4h]
0x660B84: push    1
0x660B86: call    edx
0x660B88: mov     ecx, ds:0B333C4h
0x660B8E: mov     eax, [eax+8]
0x660B91: add     ecx, 44h ; 'D'
0x660B94: mov     [esp+18h+var_4], ecx
0x660B98: mov     ecx, ebx
0x660B9A: mov     [esp+18h+form], eax
0x660B9E: call    ExtraDataList_GetExtraCount
0x660BA3: mov     ecx, [esp+18h+var_4]; this
0x660BA7: movsx   edx, ax
0x660BAA: mov     eax, [esp+18h+form]
0x660BAE: push    edx; countDelta
0x660BAF: push    eax; form
0x660BB0: call    ExtraDataList_GetContainerChanges
0x660BB5: mov     ecx, eax; this
0x660BB7: call    ExtraContainerChanges_AdjustCountForForm; Adjust PlayerCharacter ContainerChanges for the equipped AMMO form by the picked reference ExtraCount.
0x660BBC: mov     ecx, [edi+58h]
0x660BBF: mov     edx, [ecx]
0x660BC1: mov     eax, [edx+0F4h]
0x660BC7: push    1
0x660BC9: call    eax
0x660BCB: mov     ecx, [eax]
0x660BCD: mov     ecx, [ecx]
0x660BCF: push    ebp
0x660BD0: call    ExtraDataList_SetExtraCount; Write the merged total into the selected equipped-AMMO ExtraDataList and mark fast-merge success, suppressing both ordinary inventory-add boundaries. A proxy-to-WEAP recovery hook must account for this separate path if it can become reachable.
0x660BD5: mov     bl, 1
0x660BD7: test    byte ptr [esi+8], 1
0x660BDB: jnz     loc_660C81
0x660BE1: cmp     [esp+18h+arg_0], 0
0x660BE6: jnz     loc_660C81
0x660BEC: push    2
0x660BEE: mov     ecx, esi
0x660BF0: call    sub_4D8260
0x660BF5: test    al, al
0x660BF7: jz      short loc_660C29
0x660BF9: mov     ecx, esi
0x660BFB: call    sub_4D7D80
0x660C00: test    bl, bl
0x660C02: jnz     short loc_660C4D
0x660C04: mov     edx, [esp+18h+arg1]
0x660C08: push    0; forceWorn
0x660C0A: push    0; unusedArg
0x660C0C: push    edx; count
0x660C0D: push    esi; sourceRef
0x660C0E: mov     ecx, edi; this
0x660C10: call    TESObjectREFR_AddItemFromWorldReference; Player world-pickup branch uses the reference-based insertion path, not form-based ContainerExtraData_AddItem.
0x660C15: push    0
0x660C17: call    sub_57A3B0
0x660C1C: add     esp, 4
0x660C1F: pop     edi
0x660C20: pop     esi
0x660C21: pop     ebp
0x660C22: pop     ebx
0x660C23: add     esp, 8
0x660C26: retn    0Ch
0x660C29: test    bl, bl
0x660C2B: jnz     short loc_660C3E
0x660C2D: mov     eax, [esp+18h+arg1]
0x660C31: push    0; forceWorn
0x660C33: push    0; unusedArg
0x660C35: push    eax; count
0x660C36: push    esi; sourceRef
0x660C37: mov     ecx, edi; this
0x660C39: call    TESObjectREFR_AddItemFromWorldReference; Player world-pickup branch uses the reference-based insertion path, preserving sourceRef->GetBaseForm().
0x660C3E: mov     edx, [esi]
0x660C40: mov     eax, [edx+10h]
0x660C43: push    1
0x660C45: mov     ecx, esi
0x660C47: call    eax
0x660C49: test    bl, bl
0x660C4B: jz      short loc_660C6D
0x660C4D: mov     eax, [edi+104h]; After recovering/adding the relevant equipped AMMO form, refresh third-person and first-person quiver presentation from the new container count.
0x660C53: push    0; quiverNode
0x660C55: push    eax; animData
0x660C56: mov     ecx, edi; this
0x660C58: call    Actor_RefreshQuiverArrowVisibility; Recomputes Quiver Arrow:0/ArrowN visibility from the current equipped-AMMO inventory count. animData selects the perspective/cache and quiverNode may supply an already resolved node.
0x660C5D: mov     ecx, [edi+5C8h]
0x660C63: push    0; quiverNode
0x660C65: push    ecx; animData
0x660C66: mov     ecx, edi; this
0x660C68: call    Actor_RefreshQuiverArrowVisibility; Second player perspective quiver refresh after recovered AMMO inventory reconciliation.
0x660C6D: push    0
0x660C6F: call    sub_57A3B0
0x660C74: add     esp, 4
0x660C77: pop     edi
0x660C78: pop     esi
0x660C79: pop     ebp
0x660C7A: pop     ebx
0x660C7B: add     esp, 8
0x660C7E: retn    0Ch
0x660C81: mov     ecx, esi
0x660C83: call    sub_4D7D80
0x660C88: test    bl, bl
0x660C8A: jnz     short loc_660C4D
0x660C8C: mov     ecx, [esp+18h+arg2]
0x660C90: mov     edx, [esp+18h+arg1]
0x660C94: push    0; forceWorn
0x660C96: push    ecx; unusedArg
0x660C97: push    edx; count
0x660C98: push    esi; sourceRef
0x660C99: mov     ecx, edi; this
0x660C9B: call    TESObjectREFR_AddItemFromWorldReference; Player world-pickup branch uses the reference-based insertion path; an AMMO-backed thrown reference therefore yields proxy AMMO without a companion hook here.
0x660CA0: push    0
0x660CA2: call    sub_57A3B0
0x660CA7: add     esp, 4
0x660CAA: pop     edi
0x660CAB: pop     esi
0x660CAC: pop     ebp
0x660CAD: pop     ebx
0x660CAE: add     esp, 8
0x660CB1: retn    0Ch
