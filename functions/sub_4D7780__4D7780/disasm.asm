0x4D7780: push    esi; Verified effective lock-level helper: returns 0 when neither this reference nor its linked-door reference has ExtraLockData; otherwise tail-calls ExtraLockData_GetPlayerScaledLockLevel and returns its integer result. Callers feed the result to GetLockLevel or compare lock difficulty for lockpick/open behavior.
0x4D7781: lea     esi, [ecx+44h]
0x4D7784: push    edi
0x4D7785: mov     ecx, esi; this
0x4D7787: xor     edi, edi
0x4D7789: call    ExtraDataList_GetLock; Verified: looks up BSExtraData type 0x31 (ExtraLock) and returns its ExtraLockData* payload at wrapper offset +0x0C, or null. The returned value is the 12-byte lock-data structure, not the ExtraLock wrapper.
0x4D778E: test    eax, eax
0x4D7790: jnz     short loc_4D77BD
0x4D7792: mov     ecx, esi; this
0x4D7794: call    ExtraDataList_GetTeleport
0x4D7799: mov     esi, eax
0x4D779B: test    esi, esi
0x4D779D: jz      short loc_4D77C6
0x4D779F: mov     ecx, esi; this
0x4D77A1: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x4D77A6: test    eax, eax
0x4D77A8: jz      short loc_4D77C6
0x4D77AA: mov     ecx, esi; this
0x4D77AC: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x4D77B1: lea     ecx, [eax+44h]; this
0x4D77B4: call    ExtraDataList_GetLock; Verified: looks up BSExtraData type 0x31 (ExtraLock) and returns its ExtraLockData* payload at wrapper offset +0x0C, or null. The returned value is the 12-byte lock-data structure, not the ExtraLock wrapper.
0x4D77B9: test    eax, eax
0x4D77BB: jz      short loc_4D77C6
0x4D77BD: pop     edi
0x4D77BE: mov     ecx, eax; this
0x4D77C0: pop     esi
0x4D77C1: jmp     ExtraLockData_GetPlayerScaledLockLevel; Verified player-scaled lock level calculation. This reads ExtraLockData.level as a signed byte; when flags bit 0x04 is set it adds PlayerCharacter::GetLevel() multiplied by GameSettingFloat fLeveledLockMult and clamps to 99. Fallout's REFR_LOCK::GetLevel accepts an owner reference and uses that reference's calculated level when non-null; Oblivion always uses global PlayerCharacter reference. This is a direct implementation divergence.
0x4D77C6: mov     eax, edi
0x4D77C8: pop     edi
0x4D77C9: pop     esi
0x4D77CA: retn
