0x4D76F0: add     ecx, 44h ; 'D'; Verified linked-door marker resolver: read this door's TeleportData, follow its linkedDoor pointer, fetch the linked door's TeleportData, then return a pointer to that record's xyz fields at +4. Return g_zeroNiPoint3 when the source data or linked-door target is missing.
0x4D76F3: call    ExtraDataList_GetTeleport
0x4D76F8: test    eax, eax
0x4D76FA: jz      short loc_4D771A
0x4D76FC: mov     ecx, eax; this
0x4D76FE: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x4D7703: test    eax, eax
0x4D7705: jz      short loc_4D7721
0x4D7707: lea     ecx, [eax+44h]; this
0x4D770A: call    ExtraDataList_GetTeleport
0x4D770F: test    eax, eax
0x4D7711: jz      short loc_4D7721
0x4D7713: mov     ecx, eax
0x4D7715: jmp     EmbeddedList_GetHead; ExtraTeleport_GetPosition-style accessor: returns ExtraTeleport+4, the stored xyz marker position used by TravelPath distance/teleport resolution.
0x4D771A: xor     ecx, ecx
0x4D771C: call    EmbeddedList_GetHead; ExtraTeleport_GetPosition-style accessor: returns ExtraTeleport+4, the stored xyz marker position used by TravelPath distance/teleport resolution.
0x4D7721: mov     eax, offset g_zeroNiPoint3
0x4D7726: retn
