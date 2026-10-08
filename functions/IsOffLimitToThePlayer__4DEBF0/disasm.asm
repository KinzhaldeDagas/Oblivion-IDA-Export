0x4DEBF0: push    ecx; Verified IsOffLimitToThePlayer flow: door access first checks actor/owner policy and the effective lock. For linked interior cells it also checks TESObjectCELL_HasPublicOrTempPublicState (flags0 bits 0x20|0x40). Oblivion's bit 0x40 is toggled by linked-door lock/unlock operations and cleared during ordinary cell load; Probable meaning is TempPublic, corroborated by Fallout's SetTempPublic.
0x4DEBF1: push    ebx
0x4DEBF2: push    ebp
0x4DEBF3: push    esi
0x4DEBF4: mov     esi, ecx
0x4DEBF6: lea     ebp, [esi+44h]
0x4DEBF9: mov     ecx, ebp; this
0x4DEBFB: mov     [esp+10h+var_1], 0
0x4DEC00: call    ExtraDataList_GetLock; Verified: looks up BSExtraData type 0x31 (ExtraLock) and returns its ExtraLockData* payload at wrapper offset +0x0C, or null. The returned value is the 12-byte lock-data structure, not the ExtraLock wrapper.
0x4DEC05: mov     ebx, eax
0x4DEC07: test    ebx, ebx
0x4DEC09: jnz     short loc_4DEC36
0x4DEC0B: push    edi
0x4DEC0C: mov     ecx, ebp; this
0x4DEC0E: call    ExtraDataList_GetTeleport
0x4DEC13: mov     edi, eax
0x4DEC15: test    edi, edi
0x4DEC17: jz      short loc_4DEC35
0x4DEC19: mov     ecx, edi; this
0x4DEC1B: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x4DEC20: test    eax, eax
0x4DEC22: jz      short loc_4DEC35
0x4DEC24: mov     ecx, edi; this
0x4DEC26: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x4DEC2B: lea     ecx, [eax+44h]; this
0x4DEC2E: call    ExtraDataList_GetLock; Verified: looks up BSExtraData type 0x31 (ExtraLock) and returns its ExtraLockData* payload at wrapper offset +0x0C, or null. The returned value is the 12-byte lock-data structure, not the ExtraLock wrapper.
0x4DEC33: mov     ebx, eax
0x4DEC35: pop     edi
0x4DEC36: mov     ecx, esi; reference
0x4DEC38: call    TESObjectREFR_GetOwner; Verified owner-resolution order: return this reference's direct XOWN; for non-actors only, try a linked door's XOWN; if still absent, inherit the parent cell's direct owner except for furniture, doors, and activators. Actors never inherit linked-door/cell ownership. Fallout's analogous GetOwner includes an encounter-zone-owner fallback before parent-cell handling; Oblivion's body has no such branch.
0x4DEC3D: test    eax, eax
0x4DEC3F: jnz     short loc_4DEC4C
0x4DEC41: mov     ecx, esi; reference
0x4DEC43: call    TESObjectREFR_GetOwner; Verified owner-resolution order: return this reference's direct XOWN; for non-actors only, try a linked door's XOWN; if still absent, inherit the parent cell's direct owner except for furniture, doors, and activators. Actors never inherit linked-door/cell ownership. Fallout's analogous GetOwner includes an encounter-zone-owner fallback before parent-cell handling; Oblivion's body has no such branch.
0x4DEC48: test    eax, eax
0x4DEC4A: jz      short loc_4DEC76
0x4DEC4C: mov     cl, [eax+4]
0x4DEC4F: cmp     cl, 6
0x4DEC52: jnz     short loc_4DEC5E
0x4DEC54: movzx   eax, byte ptr [eax+34h]
0x4DEC58: shr     eax, 1
0x4DEC5A: test    al, 1
0x4DEC5C: jmp     short loc_4DEC6D
0x4DEC5E: cmp     cl, 23h ; '#'
0x4DEC61: jnz     short loc_4DEC76
0x4DEC63: lea     ecx, [eax+24h]
0x4DEC66: call    TESActorBaseData_AllFactionsAreEvil
0x4DEC6B: test    al, al
0x4DEC6D: jz      short loc_4DEC76
0x4DEC6F: pop     esi
0x4DEC70: pop     ebp
0x4DEC71: xor     al, al
0x4DEC73: pop     ebx
0x4DEC74: pop     ecx
0x4DEC75: retn
0x4DEC76: mov     edx, [esi]
0x4DEC78: mov     eax, [edx+170h]
0x4DEC7E: mov     ecx, esi
0x4DEC80: call    eax
0x4DEC82: cmp     byte ptr [eax+4], 18h
0x4DEC86: mov     ecx, esi
0x4DEC88: jnz     loc_4DEDF1
0x4DEC8E: mov     edx, [esi]
0x4DEC90: mov     eax, [edx+170h]
0x4DEC96: call    eax
0x4DEC98: test    eax, eax
0x4DEC9A: jz      loc_4DED6C
0x4DECA0: mov     ecx, ds:0B333C4h
0x4DECA6: push    1; useFactionOwnership
0x4DECA8: push    ecx; actorReference
0x4DECA9: mov     ecx, esi; reference
0x4DECAB: call    TESObjectREFR_IsOwnedBy; Verified ownership predicate and flag meaning: resolve the effective owner; accept exact equality with the actor's template/base form. When the owner differs, a nonzero ownership-global value can permit the access. With useFactionOwnership=true, a Faction owner is instead checked against the actor base's faction rank and the reference's effective required rank; callers passing false skip that faction-rank path. Direct callers include many `true` paths and ContainerExtraData_RemoveForm's item-sweep call with false. Fallout's TESObjectREFR::IsAnOwner/DoorLock::IsAnOwner also expose a `useFaction` boolean, but its implementation uses actor faction membership and has different rank/global handling.
0x4DECB0: test    al, al
0x4DECB2: jnz     loc_4DED6C
0x4DECB8: mov     ecx, esi; reference
0x4DECBA: call    TESObjectREFR_GetOwner; Verified owner-resolution order: return this reference's direct XOWN; for non-actors only, try a linked door's XOWN; if still absent, inherit the parent cell's direct owner except for furniture, doors, and activators. Actors never inherit linked-door/cell ownership. Fallout's analogous GetOwner includes an encounter-zone-owner fallback before parent-cell handling; Oblivion's body has no such branch.
0x4DECBF: test    eax, eax
0x4DECC1: jz      loc_4DED6C
0x4DECC7: mov     edx, ds:0B333C4h
0x4DECCD: push    0; bypassPolicyWhenNoEffectiveLock
0x4DECCF: push    0; unknownPolicyFlag0
0x4DECD1: push    edx; actor
0x4DECD2: push    esi; doorReference
0x4DECD3: call    TESObjectDOOR_CheckActorAccessPolicy; Verified policy byte 1 behavior: when GetEffectiveDoorLock returns null, bypassPolicyWhenNoEffectiveLock=true returns accessible immediately; false continues through ownership, guard, trespass, and linked-cell checks. Current Oblivion callers: TravelPath_ComputeDoorTransitionPenalty passes (unknownPolicyFlag0=0, bypassPolicyWhenNoEffectiveLock=1), while IsOffLimitToThePlayer passes (0,0). unknownPolicyFlag0 is zero at all identified callers and remains Unknown. Fallout has analogous DoorLock policy methods, but the parameter meaning here is established from Oblivion control flow.
0x4DECD8: add     esp, 10h
0x4DECDB: test    al, al
0x4DECDD: jnz     short loc_4DEC6F
0x4DECDF: test    ebx, ebx
0x4DECE1: jz      short loc_4DECF2
0x4DECE3: mov     ecx, ebx; this
0x4DECE5: call    ExtraLockData_IsLocked; Lock flag evidence: IsOffLimitToThePlayer obtains the reference ExtraLock, calls ExtraLock_IsLocked0x428E70 at0x4DECE5 and returns true/inaccessible at0x4DECEC when bit0 is set on the door path. This makes the load-time forced bit at0x425B0D a native locked-state bit, not an unexplained/CSE-derived label. Bit2 leveled difficulty behavior is separately visible in0x429990 at0x42999E.
0x4DECEA: test    al, al
0x4DECEC: jnz     loc_4DEE5B
0x4DECF2: mov     ecx, ebp; this
0x4DECF4: call    ExtraDataList_GetTeleport
0x4DECF9: xor     bl, bl
0x4DECFB: test    eax, eax
0x4DECFD: jz      loc_4DEE60
0x4DED03: mov     ecx, eax
0x4DED05: call    sub_42B460; ExtraTeleport_GetTargetCell-style helper: returns parent cell of ExtraTeleport+0 target ref if present.
0x4DED0A: mov     esi, eax
0x4DED0C: test    esi, esi
0x4DED0E: jz      short loc_4DED5E
0x4DED10: mov     ecx, esi; cell
0x4DED12: call    TESObjectCELL_GetOwner; Verified Oblivion getter: returns only the direct XOWN/ExtraOwnership form stored in the cell extra list at cell+8. Unlike Fallout TESObjectCELL::GetOwner, it does not fall back to an encounter-zone owner.
0x4DED17: test    eax, eax
0x4DED19: jz      short loc_4DED5E
0x4DED1B: mov     cl, [eax+4]
0x4DED1E: cmp     cl, 6
0x4DED21: jnz     short loc_4DED2D
0x4DED23: movzx   eax, byte ptr [eax+34h]
0x4DED27: shr     eax, 1
0x4DED29: test    al, 1
0x4DED2B: jmp     short loc_4DED3C
0x4DED2D: cmp     cl, 23h ; '#'
0x4DED30: jnz     short loc_4DED40
0x4DED32: lea     ecx, [eax+24h]
0x4DED35: call    TESActorBaseData_AllFactionsAreEvil
0x4DED3A: test    al, al
0x4DED3C: jz      short loc_4DED40
0x4DED3E: mov     bl, 1
0x4DED40: mov     ecx, esi; this
0x4DED42: call    TESObjectCELL_IsInterior; 3DTheft decode: TESObjectCELL_IsInterior returns flags0 bit 0, matching the plugin's CellIsInterior test.
0x4DED47: test    al, al
0x4DED49: jz      short loc_4DED5E
0x4DED4B: mov     ecx, esi; this
0x4DED4D: call    TESObjectCELL_HasPublicOrTempPublicState; Verified: returns true when flags0 bit 0x20 or 0x40 is set. IsOffLimitToThePlayer uses this combined check for interior-cell access. Probable interpretation is Public or TempPublic state; Fallout GetPublicState uses the same OR of SetPublic 0x20 and SetTempPublic 0x40.
0x4DED52: test    al, al
0x4DED54: jnz     short loc_4DED5E
0x4DED56: test    bl, bl
0x4DED58: jz      loc_4DEE5B
0x4DED5E: pop     esi
0x4DED5F: mov     [esp+0Ch+var_1], 0
0x4DED64: mov     al, [esp+0Ch+var_1]
0x4DED68: pop     ebp
0x4DED69: pop     ebx
0x4DED6A: pop     ecx
0x4DED6B: retn
0x4DED6C: mov     ecx, ebp; this
0x4DED6E: xor     bl, bl
0x4DED70: call    ExtraDataList_GetTeleport
0x4DED75: test    eax, eax
0x4DED77: jz      short loc_4DEDE3
0x4DED79: mov     ecx, eax
0x4DED7B: call    sub_42B460; ExtraTeleport_GetTargetCell-style helper: returns parent cell of ExtraTeleport+0 target ref if present.
0x4DED80: mov     esi, eax
0x4DED82: test    esi, esi
0x4DED84: jz      short loc_4DEDE3
0x4DED86: mov     ecx, esi; cell
0x4DED88: call    TESObjectCELL_GetOwner; Verified Oblivion getter: returns only the direct XOWN/ExtraOwnership form stored in the cell extra list at cell+8. Unlike Fallout TESObjectCELL::GetOwner, it does not fall back to an encounter-zone owner.
0x4DED8D: test    eax, eax
0x4DED8F: jz      short loc_4DEDE3
0x4DED91: mov     cl, [eax+4]
0x4DED94: cmp     cl, 6
0x4DED97: jnz     short loc_4DEDA4
0x4DED99: movzx   ecx, byte ptr [eax+34h]
0x4DED9D: shr     ecx, 1
0x4DED9F: test    cl, 1
0x4DEDA2: jmp     short loc_4DEDB3
0x4DEDA4: cmp     cl, 23h ; '#'
0x4DEDA7: jnz     short loc_4DEDB7
0x4DEDA9: lea     ecx, [eax+24h]
0x4DEDAC: call    TESActorBaseData_AllFactionsAreEvil
0x4DEDB1: test    al, al
0x4DEDB3: jz      short loc_4DEDB7
0x4DEDB5: mov     bl, 1
0x4DEDB7: mov     ecx, esi; this
0x4DEDB9: call    TESObjectCELL_IsInterior; 3DTheft decode: TESObjectCELL_IsInterior returns flags0 bit 0, matching the plugin's CellIsInterior test.
0x4DEDBE: test    al, al
0x4DEDC0: jz      short loc_4DEDE3
0x4DEDC2: mov     ecx, esi; this
0x4DEDC4: call    TESObjectCELL_HasPublicOrTempPublicState; Verified: returns true when flags0 bit 0x20 or 0x40 is set. IsOffLimitToThePlayer uses this combined check for interior-cell access. Probable interpretation is Public or TempPublic state; Fallout GetPublicState uses the same OR of SetPublic 0x20 and SetTempPublic 0x40.
0x4DEDC9: test    al, al
0x4DEDCB: jnz     short loc_4DEDE3
0x4DEDCD: test    bl, bl
0x4DEDCF: jnz     short loc_4DEDE3
0x4DEDD1: mov     edx, ds:0B333C4h
0x4DEDD7: push    edx; actor
0x4DEDD8: mov     ecx, esi; cell
0x4DEDDA: call    TESObjectCELL_IsOwnedByActor; Verified Oblivion owner predicate: reads the cell's XOWN and XRNK extra data; returns true for an NPC owner matching the actor's base form, or for a faction owner when the actor is an NPC whose faction rank meets the cell's required rank. Player identity is passed into faction-rank evaluation for its special handling. Called by door access/trespass policy and other ownership paths. Fallout has the analogous TESObjectCELL::IsActorBaseCellOwner; it takes TESActorBase* and uses a differently exposed faction-rank path.
0x4DEDDF: test    al, al
0x4DEDE1: jz      short loc_4DEE5B
0x4DEDE3: pop     esi
0x4DEDE4: mov     [esp+0Ch+var_1], 0
0x4DEDE9: mov     al, [esp+0Ch+var_1]
0x4DEDED: pop     ebp
0x4DEDEE: pop     ebx
0x4DEDEF: pop     ecx
0x4DEDF0: retn
0x4DEDF1: mov     eax, [esi]
0x4DEDF3: mov     edx, [eax+170h]
0x4DEDF9: call    edx
0x4DEDFB: cmp     byte ptr [eax+4], 23h ; '#'
0x4DEDFF: jnz     short loc_4DEE22
0x4DEE01: mov     ecx, ds:0B333C4h
0x4DEE07: call    Actor_IsSneaking; 3DTheft decode: Actor_IsSneaking returns true when process movement flags include 0x400 and do not include swimming flag 0x800.
0x4DEE0C: test    al, al
0x4DEE0E: jz      short loc_4DEE22
0x4DEE10: mov     eax, [esi]
0x4DEE12: mov     edx, [eax+198h]
0x4DEE18: push    0
0x4DEE1A: mov     ecx, esi
0x4DEE1C: call    edx
0x4DEE1E: test    al, al
0x4DEE20: jz      short loc_4DEE5B
0x4DEE22: mov     ecx, esi; reference
0x4DEE24: call    TESObjectREFR_GetOwner; Verified owner-resolution order: return this reference's direct XOWN; for non-actors only, try a linked door's XOWN; if still absent, inherit the parent cell's direct owner except for furniture, doors, and activators. Actors never inherit linked-door/cell ownership. Fallout's analogous GetOwner includes an encounter-zone-owner fallback before parent-cell handling; Oblivion's body has no such branch.
0x4DEE29: test    eax, eax
0x4DEE2B: jz      short loc_4DEE60
0x4DEE2D: mov     eax, ds:0B333C4h
0x4DEE32: push    1; useFactionOwnership
0x4DEE34: push    eax; actorReference
0x4DEE35: mov     ecx, esi; reference
0x4DEE37: call    TESObjectREFR_IsOwnedBy; Verified ownership predicate and flag meaning: resolve the effective owner; accept exact equality with the actor's template/base form. When the owner differs, a nonzero ownership-global value can permit the access. With useFactionOwnership=true, a Faction owner is instead checked against the actor base's faction rank and the reference's effective required rank; callers passing false skip that faction-rank path. Direct callers include many `true` paths and ContainerExtraData_RemoveForm's item-sweep call with false. Fallout's TESObjectREFR::IsAnOwner/DoorLock::IsAnOwner also expose a `useFaction` boolean, but its implementation uses actor faction membership and has different rank/global handling.
0x4DEE3C: test    al, al
0x4DEE3E: jnz     short loc_4DEE60
0x4DEE40: mov     edx, [esi]
0x4DEE42: mov     eax, [edx+190h]
0x4DEE48: mov     ecx, esi
0x4DEE4A: call    eax
0x4DEE4C: test    al, al
0x4DEE4E: jz      short loc_4DEE5B
0x4DEE50: mov     ecx, esi
0x4DEE52: call    TESObjectREFR_HasHorseCreatureBase; 0x4D74D0: Travel-horse target predicate decoded 2026-09-05: reference base pointer+0x1C must be nonnull; GetBaseForm virtual slot+0x170 yields typebyte0x24 CREA; creature byte+0x104 must equal4 (horse). XHRS resolver invokes this at0x426681 after target REFR cast. TESCS peer0x53F310 uses ref+0x28, vslot+0x19C, creature+0x138.
0x4DEE57: test    al, al
0x4DEE59: jz      short loc_4DEE60
0x4DEE5B: mov     [esp+10h+var_1], 1
0x4DEE60: mov     al, [esp+10h+var_1]
0x4DEE64: pop     esi
0x4DEE65: pop     ebp
0x4DEE66: pop     ebx
0x4DEE67: pop     ecx
0x4DEE68: retn
