0x4DB900: push    esi; Verified conflict-cleanup helper: clears XOWN, XGLB, and XRNK from the supplied reference and marks mask 0x380; if it has a linked door, clears the same three extras there and marks that reference modified too. TESObjectREFR_CopyFrom calls it when both the copied reference and linked door carry ownership, then logs that conflicting shared data was removed.
0x4DB901: push    edi
0x4DB902: mov     edi, ecx
0x4DB904: lea     esi, [edi+44h]
0x4DB907: push    0; owner
0x4DB909: mov     ecx, esi; this
0x4DB90B: call    ExtraDataList__SetOrRemoveExtraOwnership; Verified XOWN mutator: update ExtraOwnership.ownerForm when owner is nonnull; remove the XOWN extra when null; otherwise allocate a 16-byte ExtraOwnership payload and add it to the list. During plugin load the initial dword is a FormID temporarily held in the same union slot; ExtraDataList_ResolveLoadedFormIDs converts it to TESForm*. TESObjectCELL_LinkForm removes direct XOWN, XRNK, and XGLB from an exterior cell when an owner exists.
0x4DB910: push    0; global
0x4DB912: mov     ecx, esi; this
0x4DB914: call    ExtraDataList_SetGlobal; Verified XGLB mutator: update the stored TESGlobal* when nonnull; remove the extra when null; otherwise allocate a 16-byte ExtraGlobal payload. During plugin load the stored dword is a FormID temporarily; ExtraDataList_ResolveLoadedFormIDs rebases, looks it up, RTTI-checks TESGlobal, and removes missing/wrong-type entries.
0x4DB919: push    0FFFFFFFFh; rank
0x4DB91B: mov     ecx, esi; this
0x4DB91D: call    ExtraDataList_SetRank; Verified ExtraRank lifecycle writer: rank -1 removes the payload; every other signed 32-bit value updates or allocates ExtraRank. XRNK loading supplies a bounded 4-byte value into a zero-initialized local, so empty/short chunks become zero.
0x4DB922: mov     eax, [edi]
0x4DB924: mov     edx, [eax+40h]
0x4DB927: push    380h
0x4DB92C: mov     ecx, edi
0x4DB92E: call    edx
0x4DB930: mov     ecx, esi; this
0x4DB932: call    ExtraDataList_GetTeleport
0x4DB937: mov     esi, eax
0x4DB939: test    esi, esi
0x4DB93B: jz      short loc_4DB990
0x4DB93D: mov     ecx, esi; this
0x4DB93F: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x4DB944: test    eax, eax
0x4DB946: jz      short loc_4DB990
0x4DB948: mov     ecx, esi; this
0x4DB94A: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x4DB94F: push    0; owner
0x4DB951: lea     ecx, [eax+44h]; this
0x4DB954: call    ExtraDataList__SetOrRemoveExtraOwnership; Verified XOWN mutator: update ExtraOwnership.ownerForm when owner is nonnull; remove the XOWN extra when null; otherwise allocate a 16-byte ExtraOwnership payload and add it to the list. During plugin load the initial dword is a FormID temporarily held in the same union slot; ExtraDataList_ResolveLoadedFormIDs converts it to TESForm*. TESObjectCELL_LinkForm removes direct XOWN, XRNK, and XGLB from an exterior cell when an owner exists.
0x4DB959: mov     ecx, esi; this
0x4DB95B: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x4DB960: push    0; global
0x4DB962: lea     ecx, [eax+44h]; this
0x4DB965: call    ExtraDataList_SetGlobal; Verified XGLB mutator: update the stored TESGlobal* when nonnull; remove the extra when null; otherwise allocate a 16-byte ExtraGlobal payload. During plugin load the stored dword is a FormID temporarily; ExtraDataList_ResolveLoadedFormIDs rebases, looks it up, RTTI-checks TESGlobal, and removes missing/wrong-type entries.
0x4DB96A: mov     ecx, esi; this
0x4DB96C: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x4DB971: push    0FFFFFFFFh; rank
0x4DB973: lea     ecx, [eax+44h]; this
0x4DB976: call    ExtraDataList_SetRank; Verified ExtraRank lifecycle writer: rank -1 removes the payload; every other signed 32-bit value updates or allocates ExtraRank. XRNK loading supplies a bounded 4-byte value into a zero-initialized local, so empty/short chunks become zero.
0x4DB97B: mov     ecx, esi; this
0x4DB97D: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x4DB982: mov     edx, [eax]
0x4DB984: mov     ecx, eax
0x4DB986: mov     eax, [edx+40h]
0x4DB989: push    380h
0x4DB98E: call    eax
0x4DB990: pop     edi
0x4DB991: pop     esi
0x4DB992: retn
