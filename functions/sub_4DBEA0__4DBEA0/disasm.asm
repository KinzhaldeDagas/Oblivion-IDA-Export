0x4DBEA0: push    esi; Verified inverse lock-state helper: if this reference has an ExtraLock wrapper, clears its locked bit; otherwise follows the linked-door reference and clears that wrapper's locked bit. It then marks the owning reference or linked door modified with mask 0x40.
0x4DBEA1: push    edi
0x4DBEA2: mov     edi, ecx
0x4DBEA4: lea     esi, [edi+44h]
0x4DBEA7: push    31h ; '1'; a2
0x4DBEA9: mov     ecx, esi; this
0x4DBEAB: call    BaseExtraList_GetExtraData
0x4DBEB0: test    eax, eax
0x4DBEB2: jnz     short loc_4DBEDE
0x4DBEB4: mov     ecx, esi; this
0x4DBEB6: call    ExtraDataList_GetTeleport
0x4DBEBB: mov     esi, eax
0x4DBEBD: test    esi, esi
0x4DBEBF: jz      short loc_4DBEEE
0x4DBEC1: mov     ecx, esi; this
0x4DBEC3: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x4DBEC8: test    eax, eax
0x4DBECA: jz      short loc_4DBEEE
0x4DBECC: mov     ecx, esi; this
0x4DBECE: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x4DBED3: mov     ecx, eax; doorReference
0x4DBED5: call    TESObjectREFR_FindLockExtraOnLinkedDoorChain; Verified wrapper lookup: follows linked-door references until it finds an ExtraLock wrapper, returning that wrapper or null when the chain ends without lock data.
0x4DBEDA: test    eax, eax
0x4DBEDC: jz      short loc_4DBEEE
0x4DBEDE: mov     ecx, eax; this
0x4DBEE0: call    ExtraLock_ClearLockedFlag; Verified: clears only ExtraLockData.flags bit 0x01 (Locked), preserving bit 0x02. OpenEffect uses this after its lock-category test; this preserves LockEffect's bit-0x02 ownership marker.
0x4DBEE5: mov     ecx, edi; this
0x4DBEE7: pop     edi
0x4DBEE8: pop     esi
0x4DBEE9: jmp     TESObjectREFR_MarkLockDataAsModified; Verified modified-state propagation: if this reference has lock data, calls TESFormVtbl::MarkAsModified with mask 0x40; otherwise, if its linked-door chain has lock data, marks that linked-door reference with the same mask.
0x4DBEEE: pop     edi
0x4DBEEF: pop     esi
0x4DBEF0: retn
