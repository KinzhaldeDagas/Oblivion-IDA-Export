0x67F5D0: push    ebx; Verified duplicate test: finds the two endpoint spaces from the door reference and linked door, looks up that pair in the nested map, and checks whether any AStarWorldNode in the list contains this reference at either endpoint. TESObjectREFR::AddToLowPathWorld skips construction/insertion when this returns true.
0x67F5D1: push    edi
0x67F5D2: mov     edi, [esp+8+doorReference]
0x67F5D6: xor     ebx, ebx
0x67F5D8: cmp     edi, ebx
0x67F5DA: jz      loc_67F689
0x67F5E0: push    esi
0x67F5E1: mov     ecx, edi; this
0x67F5E3: call    TESObjectREFR_GetTeleportData; Verified TESObjectREFR_GetTeleportData returns ExtraDataList_GetTeleport from this reference's baseExtraList: the TeleportData* payload stored in ExtraTeleport+0x0C.
0x67F5E8: mov     esi, eax
0x67F5EA: cmp     esi, ebx
0x67F5EC: jz      loc_67F688
0x67F5F2: mov     ecx, esi; this
0x67F5F4: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x67F5F9: test    eax, eax
0x67F5FB: jz      loc_67F688
0x67F601: mov     ecx, edi; this
0x67F603: call    TESObjectREFR_GetSpatialContainerAtPosition; Verified return semantics: for a reference with a parent cell, returns the smallest containing TESSubSpace when the base form is not TESSubSpace and one contains its position; otherwise falls back to that interior cell. For exterior references it resolves the parent cell's WorldSpace and returns the smallest containing TESSubSpace when applicable, otherwise the WorldSpace. A TESSubSpace base skips the containment lookup and still falls back to its parent cell/WorldSpace. Null is returned when no parent container exists.
0x67F608: cmp     eax, ebx
0x67F60A: jz      short loc_67F688
0x67F60C: lea     ecx, [esp+0Ch+doorReference]
0x67F610: push    ecx
0x67F611: mov     ecx, ds:0B3BE00h
0x67F617: push    eax
0x67F618: mov     [esp+14h+doorReference], ebx
0x67F61C: call    NiTMap_GetAt
0x67F621: test    al, al
0x67F623: jz      short loc_67F688
0x67F625: push    ebp
0x67F626: mov     ebp, [esp+10h+doorReference]
0x67F62A: cmp     ebp, ebx
0x67F62C: jz      short loc_67F687
0x67F62E: mov     ecx, esi; this
0x67F630: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x67F635: mov     ecx, eax; this
0x67F637: call    TESObjectREFR_GetSpatialContainerAtPosition; Verified return semantics: for a reference with a parent cell, returns the smallest containing TESSubSpace when the base form is not TESSubSpace and one contains its position; otherwise falls back to that interior cell. For exterior references it resolves the parent cell's WorldSpace and returns the smallest containing TESSubSpace when applicable, otherwise the WorldSpace. A TESSubSpace base skips the containment lookup and still falls back to its parent cell/WorldSpace. Null is returned when no parent container exists.
0x67F63C: cmp     eax, ebx
0x67F63E: jz      short loc_67F687
0x67F640: lea     edx, [esp+10h+doorReference]
0x67F644: push    edx
0x67F645: push    eax
0x67F646: mov     ecx, ebp
0x67F648: mov     [esp+18h+doorReference], ebx
0x67F64C: call    NiTMap_GetAt
0x67F651: test    al, al
0x67F653: jz      short loc_67F687
0x67F655: mov     esi, [esp+10h+doorReference]
0x67F659: cmp     esi, ebx
0x67F65B: jz      short loc_67F687
0x67F65D: lea     ecx, [ecx+0]
0x67F660: mov     ecx, esi
0x67F662: call    BSSimpleList_IsEmpty
0x67F667: test    al, al
0x67F669: jnz     short loc_67F687
0x67F66B: mov     ecx, [esi]; this
0x67F66D: push    edi; reference
0x67F66E: call    AStarWorldNode_ContainsReference; Verified endpoint predicate: returns true when the supplied TESObjectREFR equals either referenceA or referenceB in the AStarWorldNode.
0x67F673: test    al, al
0x67F675: jnz     short loc_67F685
0x67F677: mov     esi, [esi+4]
0x67F67A: cmp     esi, ebx
0x67F67C: jnz     short loc_67F660
0x67F67E: pop     ebp
0x67F67F: pop     esi
0x67F680: pop     edi
0x67F681: mov     al, bl
0x67F683: pop     ebx
0x67F684: retn
0x67F685: mov     bl, 1
0x67F687: pop     ebp
0x67F688: pop     esi
0x67F689: pop     edi
0x67F68A: mov     al, bl
0x67F68C: pop     ebx
0x67F68D: retn
