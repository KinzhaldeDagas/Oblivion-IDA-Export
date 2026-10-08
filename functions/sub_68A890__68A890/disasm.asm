0x68A890: push    ecx; Verified: scans TravelPath reference nodes for a reference whose spatial container or WorldSpace matches targetWorldspace. If the reference is a teleport door in another space, it checks the linked door and may return that linked door. continueAfterMatch controls whether scanning continues after a match; the fast-travel script wrapper calls with false to return the first match.
0x68A891: push    ebx
0x68A892: xor     eax, eax
0x68A894: lea     ebx, [ecx+4]
0x68A897: test    ebx, ebx
0x68A899: mov     [esp+8+var_4], eax
0x68A89D: jz      loc_68A9C1
0x68A8A3: push    ebp
0x68A8A4: mov     ebp, [esp+0Ch+targetWorldspace]
0x68A8A8: push    esi
0x68A8A9: push    edi
0x68A8AA: lea     ebx, [ebx+0]
0x68A8B0: mov     ecx, [ebx]; this
0x68A8B2: test    ecx, ecx
0x68A8B4: mov     ebx, [ebx+4]
0x68A8B7: jz      loc_68A9A7
0x68A8BD: call    TravelPathNode_GetReference; Verified returns payload as TESObjectREFR* only when kind==0 (reference node); returns null for position nodes or other kinds.
0x68A8C2: mov     edi, eax
0x68A8C4: test    edi, edi
0x68A8C6: jz      loc_68A9A7
0x68A8CC: mov     ecx, edi; this
0x68A8CE: call    TESObjectREFR_GetSpatialContainerAtPosition; Verified return semantics: for a reference with a parent cell, returns the smallest containing TESSubSpace when the base form is not TESSubSpace and one contains its position; otherwise falls back to that interior cell. For exterior references it resolves the parent cell's WorldSpace and returns the smallest containing TESSubSpace when applicable, otherwise the WorldSpace. A TESSubSpace base skips the containment lookup and still falls back to its parent cell/WorldSpace. Null is returned when no parent container exists.
0x68A8D3: push    0; int
0x68A8D5: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x68A8DA: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x68A8DF: mov     esi, eax
0x68A8E1: push    0; int
0x68A8E3: push    esi; void *
0x68A8E4: call    OblivionDynamicCast
0x68A8E9: add     esp, 14h
0x68A8EC: test    eax, eax
0x68A8EE: jnz     short loc_68A914
0x68A8F0: push    eax; int
0x68A8F1: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x68A8F6: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x68A8FB: push    eax; int
0x68A8FC: push    esi; void *
0x68A8FD: call    OblivionDynamicCast
0x68A902: add     esp, 14h
0x68A905: test    eax, eax
0x68A907: jz      short loc_68A92D
0x68A909: mov     ecx, eax; this
0x68A90B: call    TESObjectREFR_GetWorldSpace
0x68A910: test    eax, eax
0x68A912: jz      short loc_68A92D
0x68A914: test    ebp, ebp
0x68A916: jz      short loc_68A927
0x68A918: cmp     eax, ebp
0x68A91A: jz      short loc_68A927
0x68A91C: mov     ecx, eax; this
0x68A91E: call    Shared_GetPointerAtOffset7C; Shared four-byte accessor returning *(this+0x7C). Verified contexts include TESWorldSpace::parentWorldspace and ArrowProjectile::arrowEnch; class-specific naming is unsafe.
0x68A923: cmp     eax, ebp
0x68A925: jnz     short loc_68A92D
0x68A927: mov     [esp+14h+var_4], edi
0x68A92B: jmp     short loc_68A9A7
0x68A92D: mov     ecx, edi; this
0x68A92F: call    TESObjectREFR_GetTeleportData; Verified TESObjectREFR_GetTeleportData returns ExtraDataList_GetTeleport from this reference's baseExtraList: the TeleportData* payload stored in ExtraTeleport+0x0C.
0x68A934: mov     edi, eax
0x68A936: test    edi, edi
0x68A938: jz      short loc_68A9A7
0x68A93A: mov     ecx, edi; this
0x68A93C: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x68A941: mov     ecx, eax; this
0x68A943: call    TESObjectREFR_GetSpatialContainerAtPosition; Verified return semantics: for a reference with a parent cell, returns the smallest containing TESSubSpace when the base form is not TESSubSpace and one contains its position; otherwise falls back to that interior cell. For exterior references it resolves the parent cell's WorldSpace and returns the smallest containing TESSubSpace when applicable, otherwise the WorldSpace. A TESSubSpace base skips the containment lookup and still falls back to its parent cell/WorldSpace. Null is returned when no parent container exists.
0x68A948: push    0; int
0x68A94A: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x68A94F: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x68A954: mov     esi, eax
0x68A956: push    0; int
0x68A958: push    esi; void *
0x68A959: call    OblivionDynamicCast
0x68A95E: add     esp, 14h
0x68A961: test    eax, eax
0x68A963: jnz     short loc_68A989
0x68A965: push    eax; int
0x68A966: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x68A96B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x68A970: push    eax; int
0x68A971: push    esi; void *
0x68A972: call    OblivionDynamicCast
0x68A977: add     esp, 14h
0x68A97A: test    eax, eax
0x68A97C: jz      short loc_68A9A7
0x68A97E: mov     ecx, eax; this
0x68A980: call    TESObjectREFR_GetWorldSpace
0x68A985: test    eax, eax
0x68A987: jz      short loc_68A9A7
0x68A989: test    ebp, ebp
0x68A98B: jz      short loc_68A99C
0x68A98D: cmp     eax, ebp
0x68A98F: jz      short loc_68A99C
0x68A991: mov     ecx, eax; this
0x68A993: call    Shared_GetPointerAtOffset7C; Shared four-byte accessor returning *(this+0x7C). Verified contexts include TESWorldSpace::parentWorldspace and ArrowProjectile::arrowEnch; class-specific naming is unsafe.
0x68A998: cmp     eax, ebp
0x68A99A: jnz     short loc_68A9A7
0x68A99C: mov     ecx, edi; this
0x68A99E: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x68A9A3: mov     [esp+14h+var_4], eax
0x68A9A7: mov     eax, [esp+14h+var_4]
0x68A9AB: test    eax, eax
0x68A9AD: jz      short loc_68A9B6
0x68A9AF: cmp     [esp+14h+continueAfterMatch], 0
0x68A9B4: jz      short loc_68A9BE
0x68A9B6: test    ebx, ebx
0x68A9B8: jnz     loc_68A8B0
0x68A9BE: pop     edi
0x68A9BF: pop     esi
0x68A9C0: pop     ebp
0x68A9C1: pop     ebx
0x68A9C2: pop     ecx
0x68A9C3: retn    8
