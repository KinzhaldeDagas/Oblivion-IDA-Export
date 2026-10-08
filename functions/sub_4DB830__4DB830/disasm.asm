0x4DB830: push    esi; Verified effective ownership-rank lookup order: this reference's XRNK, then linked door XRNK, then parent cell's required rank; missing rank defaults to zero. Fallout's TESObjectREFR::GetOwnershipRank inserts EncounterZone owner-rank between linked-door and parent-cell checks; Oblivion has no encounter-zone branch here.
0x4DB831: push    edi
0x4DB832: mov     edi, ecx
0x4DB834: lea     esi, [edi+44h]
0x4DB837: mov     ecx, esi; this
0x4DB839: call    ExtraDataList_GetRank; Verified accessor: returns ExtraRank.rank as signed 32-bit; returns -1 when kExtraData_Rank is absent. Cell ownership compares this required rank against the actor's faction rank.
0x4DB83E: cmp     eax, 0FFFFFFFFh
0x4DB841: jnz     short loc_4DB882
0x4DB843: mov     ecx, esi; this
0x4DB845: call    ExtraDataList_GetTeleport
0x4DB84A: mov     esi, eax
0x4DB84C: test    esi, esi
0x4DB84E: jz      short loc_4DB86F
0x4DB850: mov     ecx, esi; this
0x4DB852: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x4DB857: test    eax, eax
0x4DB859: jz      short loc_4DB86F
0x4DB85B: mov     ecx, esi; this
0x4DB85D: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x4DB862: lea     ecx, [eax+44h]; this
0x4DB865: call    ExtraDataList_GetRank; Verified accessor: returns ExtraRank.rank as signed 32-bit; returns -1 when kExtraData_Rank is absent. Cell ownership compares this required rank against the actor's faction rank.
0x4DB86A: cmp     eax, 0FFFFFFFFh
0x4DB86D: jnz     short loc_4DB882
0x4DB86F: mov     ecx, [edi+40h]; cell
0x4DB872: test    ecx, ecx
0x4DB874: jz      short loc_4DB880
0x4DB876: call    TESObjectCELL_GetRequiredOwnerFactionRank; Verified cell helper: returns ExtraRank.rank from the cell's XRNK extra, substituting 0 when no rank extra exists.
0x4DB87B: cmp     eax, 0FFFFFFFFh
0x4DB87E: jnz     short loc_4DB882
0x4DB880: xor     eax, eax
0x4DB882: pop     edi
0x4DB883: pop     esi
0x4DB884: retn
