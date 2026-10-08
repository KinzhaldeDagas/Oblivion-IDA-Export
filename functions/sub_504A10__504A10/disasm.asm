0x504A10: push    ecx; Verified behavior: script-argument wrapper for setting a reference lock level. It obtains/creates ExtraLockData, writes a nonzero supplied level, sets locked bit 0x01, marks the reference modified, and when its optional second argument is positive propagates unlocked=false to the linked door's owner cells. It marks the form active-file modified and logs `Locked %s with lock level %d` in console mode. Candidate command identity is Lock; registration/name-table evidence remains Unknown.
0x504A11: push    esi
0x504A12: mov     esi, [esp+8+otherEndpoint]
0x504A16: test    esi, esi
0x504A18: jnz     short loc_504A1F
0x504A1A: xor     al, al
0x504A1C: pop     esi
0x504A1D: pop     ecx
0x504A1E: retn
0x504A1F: mov     edx, [esp+8+l]
0x504A23: lea     eax, [esp+8+var_4]
0x504A27: push    eax
0x504A28: mov     eax, [esp+0Ch+arg_10]
0x504A2C: lea     ecx, [esp+0Ch+otherEndpoint]
0x504A30: push    ecx; UInt16
0x504A31: mov     ecx, [esp+10h+arg_C]
0x504A35: push    edx; l
0x504A36: mov     edx, [esp+14h+a3]
0x504A3A: push    eax; a6
0x504A3B: mov     eax, [esp+18h+arg_4]
0x504A3F: push    ecx; a5
0x504A40: mov     ecx, [esp+1Ch+a1]
0x504A44: push    esi; a4
0x504A45: push    edx; a3
0x504A46: push    eax; a2
0x504A47: push    ecx; a1
0x504A48: mov     [esp+2Ch+otherEndpoint], 0
0x504A50: mov     [esp+2Ch+var_4], 0
0x504A58: call    Script_ExtractArgs; TES4 authoritative: Script_ExtractArgs consumes compiled command arguments using ParamInfo records. ParamInfo is 0x0C bytes: +0 type string, +4 type id, +8 optional flag.
0x504A5D: add     esp, 24h
0x504A60: test    al, al
0x504A62: jz      short loc_504A1A
0x504A64: push    4
0x504A66: mov     ecx, esi
0x504A68: call    sub_4D8260
0x504A6D: test    al, al
0x504A6F: jz      short loc_504A7C
0x504A71: push    1; char
0x504A73: push    0; float
0x504A75: mov     ecx, esi
0x504A77: call    sub_4DE460
0x504A7C: mov     ecx, esi; this
0x504A7E: call    TESObjectREFR_GetEffectiveDoorLock; Verified: returns this reference's ExtraLockData* payload when present; otherwise, if its ExtraTeleport has a linked door, returns that linked reference's ExtraLockData* payload; null when neither exists. Directly supported by ExtraDataList_GetLock, ExtraDataList_GetTeleport, and TeleportData_GetLinkedDoor.
0x504A83: test    eax, eax
0x504A85: jnz     short loc_504A8E
0x504A87: mov     ecx, esi; this
0x504A89: call    TESObjectREFR_GetOrCreateLockData; Verified lock-data factory: returns the existing ExtraLockData payload or allocates a zeroed 12-byte payload, installs it in an ExtraLock wrapper, and returns it. An allocation failure leaves/sets a null-payload ExtraLock wrapper through ExtraDataList_SetLock.
0x504A8E: mov     ecx, [esp+8+otherEndpoint]
0x504A92: test    ecx, ecx
0x504A94: jz      short loc_504A98
0x504A96: mov     [eax], cl
0x504A98: or      byte ptr [eax+8], 1
0x504A9C: mov     ecx, esi; this
0x504A9E: call    TESObjectREFR_MarkLockDataAsModified; Verified modified-state propagation: if this reference has lock data, calls TESFormVtbl::MarkAsModified with mask 0x40; otherwise, if its linked-door chain has lock data, marks that linked-door reference with the same mask.
0x504AA3: cmp     [esp+8+var_4], 0
0x504AA8: jle     short loc_504ABF
0x504AAA: mov     ecx, esi; this
0x504AAC: call    TESObjectREFR_GetTeleportData; Verified TESObjectREFR_GetTeleportData returns ExtraDataList_GetTeleport from this reference's baseExtraList: the TeleportData* payload stored in ExtraTeleport+0x0C.
0x504AB1: test    eax, eax
0x504AB3: jz      short loc_504ABF
0x504AB5: push    0; unlocked
0x504AB7: push    esi; otherEndpoint
0x504AB8: mov     ecx, eax; linkedDoorSlot
0x504ABA: call    TESObjectREFR_PropagateLockStateToLinkedDoorCells; Verified: Lock script wrapper optionally propagates `unlocked=false` to the linked door and both owner cells when its second extracted argument is positive.
0x504ABF: mov     edx, [esi]
0x504AC1: mov     eax, [edx+90h]
0x504AC7: push    1
0x504AC9: mov     ecx, esi
0x504ACB: call    eax
0x504ACD: cmp     byte ptr ds:0B361ACh, 0
0x504AD4: jz      short loc_504AF0
0x504AD6: mov     ecx, [esp+8+otherEndpoint]
0x504ADA: push    ecx
0x504ADB: mov     ecx, esi; this
0x504ADD: call    TESObjectREFR_GetName
0x504AE2: push    eax
0x504AE3: push    offset aLockedSWithLoc; "Locked %s with lock level %d"
0x504AE8: call    Interface_ConsolePrint
0x504AED: add     esp, 0Ch
0x504AF0: mov     al, 1
0x504AF2: pop     esi
0x504AF3: pop     ecx
0x504AF4: retn
