0x680A00: push    ebx; Verified factory filter: refuses a TESObjectREFR whose TESFormMembr.flags has deleted bit 0x20, then requires ExtraTeleport and a non-null linked door before allocating the AStarWorldNode.
0x680A01: mov     ebx, [esp+4+doorReference]
0x680A05: push    esi
0x680A06: xor     esi, esi
0x680A08: cmp     ebx, esi
0x680A0A: jz      loc_680A97
0x680A10: mov     eax, [ebx+8]
0x680A13: shr     eax, 5
0x680A16: test    al, 1
0x680A18: jnz     short loc_680A97
0x680A1A: push    edi
0x680A1B: mov     ecx, ebx; this
0x680A1D: call    TESObjectREFR_GetTeleportData; Verified TESObjectREFR_GetTeleportData returns ExtraDataList_GetTeleport from this reference's baseExtraList: the TeleportData* payload stored in ExtraTeleport+0x0C.
0x680A22: mov     edi, eax
0x680A24: cmp     edi, esi
0x680A26: jz      short loc_680A91
0x680A28: mov     ecx, edi; this
0x680A2A: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x680A2F: test    eax, eax
0x680A31: jz      short loc_680A91
0x680A33: push    ebp
0x680A34: call    TravelPath_AllocateSearchStateSlot; Verified the call has no logical argument; PUSH EBP preserves the caller's saved register. The allocator returns the state slot in AX.
0x680A39: movzx   ebp, ax
0x680A3C: cmp     bp, 0FFFFh
0x680A41: jnb     short loc_680A8A
0x680A43: push    14h; Size
0x680A45: call    FormHeapAlloc
0x680A4A: add     esp, 4
0x680A4D: cmp     eax, esi
0x680A4F: jz      short loc_680A64
0x680A51: mov     [eax+4], esi
0x680A54: mov     [eax+8], esi
0x680A57: mov     [eax+0Ch], esi
0x680A5A: mov     [eax+10h], esi
0x680A5D: mov     word ptr [eax], 0FFFFh
0x680A62: mov     esi, eax
0x680A64: mov     ecx, edi; this
0x680A66: mov     [esi+4], ebx
0x680A69: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x680A6E: mov     ecx, [esi+4]; this
0x680A71: mov     [esi+0Ch], eax
0x680A74: call    TESObjectREFR_GetSpatialContainerAtPosition; Verified return semantics: for a reference with a parent cell, returns the smallest containing TESSubSpace when the base form is not TESSubSpace and one contains its position; otherwise falls back to that interior cell. For exterior references it resolves the parent cell's WorldSpace and returns the smallest containing TESSubSpace when applicable, otherwise the WorldSpace. A TESSubSpace base skips the containment lookup and still falls back to its parent cell/WorldSpace. Null is returned when no parent container exists.
0x680A79: mov     ecx, [esi+0Ch]; this
0x680A7C: mov     [esi+8], eax
0x680A7F: call    TESObjectREFR_GetSpatialContainerAtPosition; Verified return semantics: for a reference with a parent cell, returns the smallest containing TESSubSpace when the base form is not TESSubSpace and one contains its position; otherwise falls back to that interior cell. For exterior references it resolves the parent cell's WorldSpace and returns the smallest containing TESSubSpace when applicable, otherwise the WorldSpace. A TESSubSpace base skips the containment lookup and still falls back to its parent cell/WorldSpace. Null is returned when no parent container exists.
0x680A84: mov     [esi+10h], eax
0x680A87: mov     [esi], bp
0x680A8A: pop     ebp
0x680A8B: pop     edi
0x680A8C: mov     eax, esi
0x680A8E: pop     esi
0x680A8F: pop     ebx
0x680A90: retn
0x680A91: pop     edi
0x680A92: mov     eax, esi
0x680A94: pop     esi
0x680A95: pop     ebx
0x680A96: retn
0x680A97: mov     eax, esi
0x680A99: pop     esi
0x680A9A: pop     ebx
0x680A9B: retn
