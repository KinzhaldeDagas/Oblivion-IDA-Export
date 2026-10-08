0x50BB70: push    0FFFFFFFFh; Verified behavior: this script-style wrapper extracts a reference and boolean; true sets a target flag, and when the player's current cell owner matches that reference it temporarily enables TravelPath ignore-locks/minimal-use settings, builds a TravelPath from the player to exterior WorldSpace FormID 0x3C at the origin, restores the settings, finds a route reference, and if it has a linked door calls TESObjectDOOR_TransitionPlayerThroughLinkedDoor. False clears the target flag. Candidate command-dispatch role is supported by Script_ExtractArgs/ParamInfo signature; exact command identity remains Unknown because no Oblivion registration entry, command name, or xref was found.
0x50BB72: push    offset SEH_50BB70
0x50BB77: mov     eax, large fs:0
0x50BB7D: push    eax
0x50BB7E: sub     esp, 30h
0x50BB81: push    esi
0x50BB82: mov     eax, ds:0B30AACh
0x50BB87: xor     eax, esp
0x50BB89: push    eax
0x50BB8A: lea     eax, [esp+44h+var_C]
0x50BB8E: mov     large fs:0, eax
0x50BB94: mov     edx, [esp+44h+l]
0x50BB98: lea     eax, [esp+44h+var_38]
0x50BB9C: push    eax
0x50BB9D: mov     eax, [esp+48h+arg_10]
0x50BBA1: lea     ecx, [esp+48h+var_3C]
0x50BBA5: push    ecx; UInt16
0x50BBA6: mov     ecx, [esp+4Ch+arg_C]
0x50BBAA: push    edx; l
0x50BBAB: mov     edx, [esp+50h+a4]
0x50BBAF: push    eax; a6
0x50BBB0: mov     eax, [esp+54h+a3]
0x50BBB4: push    ecx; a5
0x50BBB5: mov     ecx, [esp+58h+arg_4]
0x50BBB9: push    edx; a4
0x50BBBA: mov     edx, [esp+5Ch+a1]
0x50BBBE: push    eax; a3
0x50BBBF: push    ecx; a2
0x50BBC0: push    edx; a1
0x50BBC1: mov     dword ptr [esp+68h+var_3C], 0
0x50BBC9: mov     [esp+68h+var_38], 0
0x50BBD1: call    Script_ExtractArgs; TES4 authoritative: Script_ExtractArgs consumes compiled command arguments using ParamInfo records. ParamInfo is 0x0C bytes: +0 type string, +4 type id, +8 optional flag.
0x50BBD6: add     esp, 24h
0x50BBD9: test    al, al
0x50BBDB: jnz     short loc_50BBEE
0x50BBDD: mov     ecx, [esp+44h+var_C]
0x50BBE1: mov     large fs:0, ecx
0x50BBE8: pop     ecx
0x50BBE9: pop     esi
0x50BBEA: add     esp, 3Ch
0x50BBED: retn
0x50BBEE: cmp     [esp+44h+var_38], 0
0x50BBF3: mov     eax, dword ptr [esp+44h+var_3C]
0x50BBF7: push    4
0x50BBF9: mov     ecx, eax
0x50BBFB: jz      loc_50BD5F
0x50BC01: or      byte ptr [eax+34h], 8
0x50BC05: mov     eax, [ecx]
0x50BC07: mov     edx, [eax+40h]
0x50BC0A: call    edx
0x50BC0C: mov     ecx, ds:0B333C4h; this
0x50BC12: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x50BC17: test    eax, eax
0x50BC19: jz      loc_50BD6A
0x50BC1F: mov     ecx, eax; cell
0x50BC21: call    TESObjectCELL_GetOwner; Verified Oblivion getter: returns only the direct XOWN/ExtraOwnership form stored in the cell extra list at cell+8. Unlike Fallout TESObjectCELL::GetOwner, it does not fall back to an encounter-zone owner.
0x50BC26: cmp     eax, dword ptr [esp+44h+var_3C]
0x50BC2A: jnz     loc_50BD6A
0x50BC30: mov     eax, ds:0B333C4h
0x50BC35: push    0
0x50BC37: push    eax
0x50BC38: mov     ecx, (offset qword_B3BB2C+1D4h)
0x50BC3D: call    sub_675D50
0x50BC42: call    TravelPath_GetIgnoreLocks; Verified: reads policy byte 0 at qword_B3BB2C[0xBA]. CalcLowPathToPoint's first boolean argument is saved/restored through this accessor. TravelPath_ComputeDoorTransitionPenalty skips its lock/access penalty branch when this flag is true.
0x50BC47: push    1; enabled
0x50BC49: mov     [esp+48h+enabled], al
0x50BC4D: call    TravelPath_SetIgnoreLocks; Verified: writes policy byte 0 at qword_B3BB2C[0xBA] and returns the assigned value. The registered CalcLowPathToPoint option description identifies it as ignore locks.
0x50BC52: call    TravelPath_GetIgnoreMinUse; Verified: reads policy byte 1 at qword_B3BB2C[0xBA]. When false, TravelPath_ComputeDoorTransitionPenalty may add the extra cost for a door whose TESObjectDOOR_HasMinUseFlag is set.
0x50BC57: push    1; enabled
0x50BC59: mov     [esp+4Ch+var_30], al
0x50BC5D: call    TravelPath_SetIgnoreMinUse; Verified: writes policy byte 1 at qword_B3BB2C[0xBA] and returns the assigned value. The third CalcLowPathToPoint boolean is saved/restored through this setter and corresponds to 'ignore min use'.
0x50BC62: add     esp, 8
0x50BC65: push    0; int
0x50BC67: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x50BC6C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x50BC71: push    0; int
0x50BC73: push    3Ch ; '<'; a1
0x50BC75: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x50BC7A: add     esp, 4
0x50BC7D: push    eax; void *
0x50BC7E: call    OblivionDynamicCast
0x50BC83: add     esp, 14h
0x50BC86: lea     ecx, [esp+44h+var_20]; this
0x50BC8A: mov     esi, eax
0x50BC8C: call    PathLow_ctor; Verified PathLow constructor: installs the PathLow vtable at +0, initializes the BSSimpleList at +4/+8 to empty, copies unk_B3A458 to +0x0C, and sets byte +0x10 to 1. +0x0C and byte +0x10 semantics remain Unknown.
0x50BC91: fld     dword ptr ds:0A32048h
0x50BC97: mov     edx, ds:0B333C4h
0x50BC9D: fst     [esp+44h+destinationPosition.x]
0x50BCA1: push    esi; destinationWorldspace
0x50BCA2: fst     [esp+48h+destinationPosition.y]
0x50BCA6: push    0; destinationCell
0x50BCA8: fstp    [esp+4Ch+destinationPosition.z]
0x50BCAC: lea     ecx, [esp+4Ch+destinationPosition]
0x50BCB0: push    ecx; destinationPosition
0x50BCB1: push    edx; sourceRef
0x50BCB2: lea     ecx, [esp+54h+var_20]; this
0x50BCB6: mov     [esp+54h+var_4], 0
0x50BCBE: call    TravelPath_BuildToDestination; Verified top-level TravelPath build sequence: select the destination's smallest containing interior/exterior SubSpace (fallback to supplied cell/worldspace), call TravelPath_BuildRoute with the source reference and positions, then, on success, augment the route with TESRoad surface samples.
0x50BCC3: mov     eax, dword ptr [esp+44h+enabled]
0x50BCC7: push    eax; enabled
0x50BCC8: call    TravelPath_SetIgnoreLocks; Verified: writes policy byte 0 at qword_B3BB2C[0xBA] and returns the assigned value. The registered CalcLowPathToPoint option description identifies it as ignore locks.
0x50BCCD: mov     ecx, dword ptr [esp+48h+var_30]
0x50BCD1: push    ecx; enabled
0x50BCD2: call    TravelPath_SetIgnoreMinUse; Verified: writes policy byte 1 at qword_B3BB2C[0xBA] and returns the assigned value. The third CalcLowPathToPoint boolean is saved/restored through this setter and corresponds to 'ignore min use'.
0x50BCD7: add     esp, 8
0x50BCDA: push    0; continueAfterMatch
0x50BCDC: push    0; targetWorldspace
0x50BCDE: lea     ecx, [esp+4Ch+var_20]; this
0x50BCE2: call    TravelPath_FindReferenceForWorldspace; Verified: scans TravelPath reference nodes for a reference whose spatial container or WorldSpace matches targetWorldspace. If the reference is a teleport door in another space, it checks the linked door and may return that linked door. continueAfterMatch controls whether scanning continues after a match; the fast-travel script wrapper calls with false to return the first match.
0x50BCE7: test    eax, eax
0x50BCE9: jz      short loc_50BD3B
0x50BCEB: mov     ecx, eax; this
0x50BCED: call    TESObjectREFR_GetTeleportData; Verified TESObjectREFR_GetTeleportData returns ExtraDataList_GetTeleport from this reference's baseExtraList: the TeleportData* payload stored in ExtraTeleport+0x0C.
0x50BCF2: mov     esi, eax
0x50BCF4: test    esi, esi
0x50BCF6: jz      short loc_50BD3B
0x50BCF8: mov     ecx, esi; this
0x50BCFA: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x50BCFF: test    eax, eax
0x50BD01: jz      short loc_50BD3B
0x50BD03: mov     ecx, esi; this
0x50BD05: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x50BD0A: push    0; int
0x50BD0C: mov     esi, eax
0x50BD0E: mov     edx, [esi]
0x50BD10: mov     eax, [edx+170h]
0x50BD16: push    offset ??_R0?AVTESObjectDOOR@@@8; struct TypeDescriptor *
0x50BD1B: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x50BD20: push    0; int
0x50BD22: mov     ecx, esi
0x50BD24: call    eax
0x50BD26: push    eax; void *
0x50BD27: call    OblivionDynamicCast
0x50BD2C: add     esp, 14h
0x50BD2F: test    eax, eax
0x50BD31: jz      short loc_50BD3B
0x50BD33: push    esi
0x50BD34: mov     ecx, eax
0x50BD36: call    TESObjectDOOR_TransitionPlayerThroughLinkedDoor; Verified call edge: after TravelPath_BuildToDestination/TravelPath_FindReferenceForWorldspace finds a route reference and its linked door base form, the wrapper calls TESObjectDOOR_TransitionPlayerThroughLinkedDoor with that linked door and reference. The script command's identity remains Unknown.
0x50BD3B: lea     ecx, [esp+44h+var_20]; this
0x50BD3F: mov     [esp+44h+var_4], 0FFFFFFFFh
0x50BD47: call    PathLow_dtor; Verified PathLow destructor: restores the PathLow vtable and frees/clears owned TravelPathNode records through TravelPath_ClearNodes. This routine does not free the containing object.
0x50BD4C: mov     al, 1
0x50BD4E: mov     ecx, [esp+44h+var_C]
0x50BD52: mov     large fs:0, ecx
0x50BD59: pop     ecx
0x50BD5A: pop     esi
0x50BD5B: add     esp, 3Ch
0x50BD5E: retn
0x50BD5F: mov     edx, [ecx]
0x50BD61: and     byte ptr [eax+34h], 0F7h
0x50BD65: mov     eax, [edx+40h]
0x50BD68: call    eax
0x50BD6A: mov     al, 1
0x50BD6C: mov     ecx, [esp+44h+var_C]
0x50BD70: mov     large fs:0, ecx
0x50BD77: pop     ecx
0x50BD78: pop     esi
0x50BD79: add     esp, 3Ch
0x50BD7C: retn
0x9B6DF0: lea     ecx, [ebp-20h]; this
0x9B6DF3: jmp     PathLow_dtor; Verified PathLow destructor: restores the PathLow vtable and frees/clears owned TravelPathNode records through TravelPath_ClearNodes. This routine does not free the containing object.
0x9B6DF8: mov     edx, [esp+arg_4]
0x9B6DFC: lea     eax, [edx-34h]
0x9B6DFF: mov     ecx, [edx-38h]
0x9B6E02: xor     ecx, eax
0x9B6E04: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B6E09: mov     eax, offset stru_AE1B10
0x9B6E0E: jmp     ___CxxFrameHandler3
