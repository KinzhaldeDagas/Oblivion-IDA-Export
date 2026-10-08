0x4DBE40: push    esi; Verified lock-state propagation helper: if this reference has an ExtraLock wrapper, sets its locked bit; otherwise follows its linked-door reference and sets that wrapper's locked bit. It then calls TESObjectREFR_MarkLockDataAsModified so the owning reference or linked door records change mask 0x40.
0x4DBE41: push    edi
0x4DBE42: mov     edi, ecx
0x4DBE44: lea     esi, [edi+44h]
0x4DBE47: push    31h ; '1'; a2
0x4DBE49: mov     ecx, esi; this
0x4DBE4B: call    BaseExtraList_GetExtraData
0x4DBE50: test    eax, eax
0x4DBE52: jnz     short loc_4DBE7E
0x4DBE54: mov     ecx, esi; this
0x4DBE56: call    ExtraDataList_GetTeleport
0x4DBE5B: mov     esi, eax
0x4DBE5D: test    esi, esi
0x4DBE5F: jz      short loc_4DBE8E
0x4DBE61: mov     ecx, esi; this
0x4DBE63: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x4DBE68: test    eax, eax
0x4DBE6A: jz      short loc_4DBE8E
0x4DBE6C: mov     ecx, esi; this
0x4DBE6E: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x4DBE73: mov     ecx, eax; doorReference
0x4DBE75: call    TESObjectREFR_FindLockExtraOnLinkedDoorChain; Verified wrapper lookup: follows linked-door references until it finds an ExtraLock wrapper, returning that wrapper or null when the chain ends without lock data.
0x4DBE7A: test    eax, eax
0x4DBE7C: jz      short loc_4DBE8E
0x4DBE7E: mov     ecx, eax; this
0x4DBE80: call    ExtraLock_SetLockedFlag; Verified: sets only ExtraLockData.flags bit 0x01 (Locked), preserving bit 0x02. LockEffect_Apply first writes bit 0x02, then calls the self/linked-door locked setter to produce flags 0x03.
0x4DBE85: mov     ecx, edi; this
0x4DBE87: pop     edi
0x4DBE88: pop     esi
0x4DBE89: jmp     TESObjectREFR_MarkLockDataAsModified; Verified modified-state propagation: if this reference has lock data, calls TESFormVtbl::MarkAsModified with mask 0x40; otherwise, if its linked-door chain has lock data, marks that linked-door reference with the same mask.
0x4DBE8E: pop     edi
0x4DBE8F: pop     esi
0x4DBE90: retn
