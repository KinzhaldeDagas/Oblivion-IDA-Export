0x510E60: push    ebp; Verified script registration: CalcLowPathToPoint, alias LP2P, ID 289, callback 0x510E60; description: 'ignore locks, allow disabled doors, ignore min use'. Argument flow is verified: first boolean -> policy byte 0/ignore locks; second -> policy byte 2/allow disabled; third -> policy byte 1/ignore min use. The command saves prior policy bytes, applies these values for route evaluation, then restores them.
0x510E61: mov     ebp, esp
0x510E63: and     esp, 0FFFFFFC0h
0x510E66: push    0FFFFFFFFh
0x510E68: push    offset SEH_510E60
0x510E6D: mov     eax, large fs:0
0x510E73: push    eax
0x510E74: sub     esp, 4E8h
0x510E7A: mov     eax, ds:0B30AACh
0x510E7F: xor     eax, esp
0x510E81: mov     [esp+4F4h+var_44], eax
0x510E88: push    ebx
0x510E89: push    esi
0x510E8A: push    edi
0x510E8B: mov     eax, ds:0B30AACh
0x510E90: xor     eax, esp
0x510E92: push    eax; Format
0x510E93: lea     eax, [esp+504h+var_C]
0x510E9A: mov     large fs:0, eax
0x510EA0: mov     esi, [ebp+arg_14]
0x510EA3: mov     edi, dword ptr [ebp+arg_C+4]
0x510EA6: mov     edx, dword ptr [ebp+arg_C]
0x510EA9: mov     ebx, [ebp+a4]
0x510EAC: mov     ecx, [ebp+arg_4]
0x510EAF: mov     eax, [ebp+a1]
0x510EB2: mov     [esp+504h+l], esi
0x510EB6: mov     esi, [ebp+arg_1C]
0x510EB9: mov     [esp+504h+a3], esi
0x510EBD: xor     esi, esi
0x510EBF: mov     dword ptr [esp+504h+var_49C], esi
0x510EC3: mov     [esp+504h+var_4A0], esi
0x510EC7: mov     [esp+504h+var_4A4], esi
0x510ECB: lea     esi, [esp+504h+var_4A4]
0x510ECF: push    esi
0x510ED0: lea     esi, [esp+508h+var_4A0]
0x510ED4: push    esi
0x510ED5: lea     esi, [esp+50Ch+var_49C]
0x510ED9: push    esi; UInt16
0x510EDA: mov     esi, [esp+510h+l]
0x510EDE: push    esi; l
0x510EDF: push    edi; a6
0x510EE0: push    edx; a5
0x510EE1: mov     edx, [esp+51Ch+a3]
0x510EE5: push    ebx; a4
0x510EE6: push    edx; a3
0x510EE7: push    ecx; a2
0x510EE8: push    eax; a1
0x510EE9: call    Script_ExtractArgs; TES4 authoritative: Script_ExtractArgs consumes compiled command arguments using ParamInfo records. ParamInfo is 0x0C bytes: +0 type string, +4 type id, +8 optional flag.
0x510EEE: add     esp, 28h
0x510EF1: test    al, al
0x510EF3: jz      loc_511544
0x510EF9: call    TravelPath_GetIgnoreLocks; Verified: reads policy byte 0 at qword_B3BB2C[0xBA]. CalcLowPathToPoint's first boolean argument is saved/restored through this accessor. TravelPath_ComputeDoorTransitionPenalty skips its lock/access penalty branch when this flag is true.
0x510EFE: mov     [esp+504h+enabled], al
0x510F02: call    TravelPath_GetAllowDisabledDoors; Verified: reads policy byte 2 at qword_B3BB2C[0xBA]. TravelPathSpaceDoorLink_IsEligibleInSpace permits references with the disabled bit (0x800) when this flag is true.
0x510F07: mov     [esp+504h+var_498], al
0x510F0B: call    TravelPath_GetIgnoreMinUse; Verified: reads policy byte 1 at qword_B3BB2C[0xBA]. When false, TravelPath_ComputeDoorTransitionPenalty may add the extra cost for a door whose TESObjectDOOR_HasMinUseFlag is set.
0x510F10: xor     esi, esi
0x510F12: cmp     dword ptr [esp+504h+var_49C], esi
0x510F16: mov     [esp+504h+var_494], al
0x510F1A: setnz   al
0x510F1D: push    eax; enabled
0x510F1E: call    TravelPath_SetIgnoreLocks; Verified: writes policy byte 0 at qword_B3BB2C[0xBA] and returns the assigned value. The registered CalcLowPathToPoint option description identifies it as ignore locks.
0x510F23: cmp     [esp+508h+var_4A0], esi
0x510F27: setnz   cl
0x510F2A: push    ecx; enabled
0x510F2B: call    TravelPath_SetAllowDisabledDoors; Verified: writes policy byte 2 at qword_B3BB2C[0xBA] and returns the assigned value. The second CalcLowPathToPoint boolean is saved/restored through this setter and corresponds to 'allow disabled doors'.
0x510F30: cmp     [esp+50Ch+var_4A4], esi
0x510F34: setnz   dl
0x510F37: push    edx; enabled
0x510F38: call    TravelPath_SetIgnoreMinUse; Verified: writes policy byte 1 at qword_B3BB2C[0xBA] and returns the assigned value. The third CalcLowPathToPoint boolean is saved/restored through this setter and corresponds to 'ignore min use'.
0x510F3D: add     esp, 0Ch
0x510F40: cmp     ebx, esi
0x510F42: jz      loc_511521
0x510F48: mov     eax, ds:0B333C4h
0x510F4D: cmp     eax, esi
0x510F4F: jz      loc_511521
0x510F55: mov     edx, [ebx]
0x510F57: push    eax; sourceRef
0x510F58: lea     eax, [esp+508h+outRouteNodes]
0x510F5C: push    eax; outRouteNodes
0x510F5D: mov     eax, [edx+174h]
0x510F63: mov     ecx, ebx
0x510F65: mov     [esp+50Ch+outRouteNodes.firstNode.data], esi
0x510F69: mov     [esp+50Ch+outRouteNodes.firstNode.next], esi
0x510F6D: call    eax
0x510F6F: push    eax; destinationPosition
0x510F70: mov     ecx, ebx; this
0x510F72: call    TESObjectREFR_GetSpatialContainerAtPosition; Verified return semantics: for a reference with a parent cell, returns the smallest containing TESSubSpace when the base form is not TESSubSpace and one contains its position; otherwise falls back to that interior cell. For exterior references it resolves the parent cell's WorldSpace and returns the smallest containing TESSubSpace when applicable, otherwise the WorldSpace. A TESSubSpace base skips the containment lookup and still falls back to its parent cell/WorldSpace. Null is returned when no parent container exists.
0x510F77: mov     ecx, ds:0B333C4h
0x510F7D: mov     edx, [ecx]
0x510F7F: push    eax; destinationSpace
0x510F80: mov     eax, [edx+174h]
0x510F86: call    eax
0x510F88: mov     ecx, ds:0B333C4h; this
0x510F8E: push    eax; sourcePosition
0x510F8F: call    TESObjectREFR_GetSpatialContainerAtPosition; Verified return semantics: for a reference with a parent cell, returns the smallest containing TESSubSpace when the base form is not TESSubSpace and one contains its position; otherwise falls back to that interior cell. For exterior references it resolves the parent cell's WorldSpace and returns the smallest containing TESSubSpace when applicable, otherwise the WorldSpace. A TESSubSpace base skips the containment lookup and still falls back to its parent cell/WorldSpace. Null is returned when no parent container exists.
0x510F94: push    eax; sourceSpace
0x510F95: call    TravelPath_FindLowLevelRoute; Verified state layout now typed: TravelPathSpaceDoorLink is 0x14 bytes (16-bit table index, two ref/space endpoint pairs); TravelPathSearchState is 0x10 bytes (fitness, predecessor link, current space, flags). The 0x01 discovered interpretation remains Probable; 0x02 expanded is Verified.
0x510F9A: add     esp, 18h
0x510F9D: test    al, al
0x510F9F: jz      loc_51150B
0x510FA5: mov     ecx, ds:0B3F9A8h
0x510FAB: fldz
0x510FAD: mov     edx, ds:0B3F9ACh
0x510FB3: fstp    [esp+504h+var_4E0]
0x510FB7: mov     eax, ds:0B3F9B0h
0x510FBC: mov     [esp+504h+end.x], ecx
0x510FC0: mov     ecx, ds:0B333C4h
0x510FC6: mov     [esp+504h+end.z], eax
0x510FCA: mov     [esp+504h+end.y], edx
0x510FCE: mov     edx, [ecx]
0x510FD0: mov     eax, [edx+174h]
0x510FD6: call    eax
0x510FD8: mov     ecx, [eax]
0x510FDA: mov     edx, [eax+4]
0x510FDD: mov     eax, [eax+8]
0x510FE0: mov     [esp+504h+var_4C8], ecx
0x510FE4: mov     ecx, ds:0B333C4h; this
0x510FEA: mov     [esp+504h+var_4C4], edx
0x510FEE: mov     [esp+504h+var_4C0], eax
0x510FF2: call    TESObjectREFR_GetSpatialContainerAtPosition; Verified return semantics: for a reference with a parent cell, returns the smallest containing TESSubSpace when the base form is not TESSubSpace and one contains its position; otherwise falls back to that interior cell. For exterior references it resolves the parent cell's WorldSpace and returns the smallest containing TESSubSpace when applicable, otherwise the WorldSpace. A TESSubSpace base skips the containment lookup and still falls back to its parent cell/WorldSpace. Null is returned when no parent container exists.
0x510FF7: cmp     [esp+504h+outRouteNodes.firstNode.next], esi
0x510FFB: mov     ecx, [esp+504h+outRouteNodes.firstNode.data]
0x510FFF: mov     edi, eax
0x511001: jnz     short loc_51100B
0x511003: cmp     ecx, esi
0x511005: jz      loc_5112BB
0x51100B: mov     edx, [ecx]
0x51100D: mov     eax, [edx+174h]
0x511013: call    eax
0x511015: mov     ecx, [eax]
0x511017: mov     [esp+504h+end.x], ecx
0x51101B: mov     edx, [eax+4]
0x51101E: mov     [esp+504h+end.y], edx
0x511022: mov     eax, [eax+8]
0x511025: lea     ecx, [esp+504h+outRouteNodes]
0x511029: mov     [esp+504h+end.z], eax
0x51102D: mov     [esp+504h+a3], ecx
0x511031: mov     edx, [esp+504h+a3]
0x511035: mov     esi, [edx]
0x511037: test    esi, esi
0x511039: jz      loc_5112A6
0x51103F: mov     ecx, esi; this
0x511041: call    TESObjectREFR_GetTeleportData; Verified TESObjectREFR_GetTeleportData returns ExtraDataList_GetTeleport from this reference's baseExtraList: the TeleportData* payload stored in ExtraTeleport+0x0C.
0x511046: mov     ecx, eax; this
0x511048: mov     [esp+504h+var_4BC], eax
0x51104C: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x511051: mov     ecx, eax; this
0x511053: call    TESObjectREFR_GetSpatialContainerAtPosition; Verified return semantics: for a reference with a parent cell, returns the smallest containing TESSubSpace when the base form is not TESSubSpace and one contains its position; otherwise falls back to that interior cell. For exterior references it resolves the parent cell's WorldSpace and returns the smallest containing TESSubSpace when applicable, otherwise the WorldSpace. A TESSubSpace base skips the containment lookup and still falls back to its parent cell/WorldSpace. Null is returned when no parent container exists.
0x511058: mov     [esp+504h+var_4E4], eax
0x51105C: mov     eax, [esi]
0x51105E: mov     edx, [eax+174h]
0x511064: mov     ecx, esi
0x511066: call    edx
0x511068: fld     dword ptr [eax]
0x51106A: fsub    [esp+504h+var_4C8]
0x51106E: fstp    [esp+504h+var_490]
0x511072: fld     dword ptr [eax+4]
0x511075: fsub    [esp+504h+var_4C4]
0x511079: fstp    [esp+504h+l]
0x51107D: fld     dword ptr [eax+8]
0x511080: fsub    [esp+504h+var_4C0]
0x511084: fstp    [esp+504h+var_4E8]
0x511088: fld     [esp+504h+l]
0x51108C: fld     [esp+504h+var_490]
0x511090: fld     [esp+504h+var_4E8]
0x511094: fld     st(1)
0x511096: fmulp   st(2), st
0x511098: fld     st(2)
0x51109A: fmulp   st(3), st
0x51109C: fxch    st(1)
0x51109E: faddp   st(2), st
0x5110A0: fmul    st, st
0x5110A2: faddp   st(1), st
0x5110A4: fstp    [esp+504h+var_4E8]
0x5110A8: fld     [esp+504h+var_4E8]
0x5110AC: call    __CIsqrt
0x5110B1: fstp    [esp+504h+var_4E8]
0x5110B5: fld     [esp+504h+var_4E8]
0x5110B9: xor     eax, eax
0x5110BB: fstp    [esp+504h+l]
0x5110BF: mov     dword ptr [esp+504h+var_4D8], eax
0x5110C3: fld     [esp+504h+l]
0x5110C7: mov     word ptr [esp+504h+var_4D8+4], ax
0x5110CC: fadd    [esp+504h+var_4E0]
0x5110D0: mov     word ptr [esp+504h+var_4D8+6], ax
0x5110D5: fstp    [esp+504h+var_4E0]
0x5110D9: mov     ecx, esi; this
0x5110DB: mov     [esp+504h+var_4], eax
0x5110E2: call    TESObjectREFR_GetEffectiveDoorLock; Verified: returns this reference's ExtraLockData* payload when present; otherwise, if its ExtraTeleport has a linked door, returns that linked reference's ExtraLockData* payload; null when neither exists. Directly supported by ExtraDataList_GetLock, ExtraDataList_GetTeleport, and TeleportData_GetLinkedDoor.
0x5110E7: test    eax, eax
0x5110E9: jz      short loc_51110B
0x5110EB: mov     ecx, esi; this
0x5110ED: call    TESObjectREFR_GetEffectiveDoorLock; Verified: returns this reference's ExtraLockData* payload when present; otherwise, if its ExtraTeleport has a linked door, returns that linked reference's ExtraLockData* payload; null when neither exists. Directly supported by ExtraDataList_GetLock, ExtraDataList_GetTeleport, and TeleportData_GetLinkedDoor.
0x5110F2: mov     ecx, eax; this
0x5110F4: call    ExtraLockData_IsLocked; Verified runtime lock predicate: returns (ExtraLockData.flags & 0x01) != 0. ExtraDataList_Load sets this bit on accepted 12-byte and legacy 16-byte XLOC payloads; serialized flag bits are then preserved. This is a runtime normalization step.
0x5110F9: test    al, al
0x5110FB: jz      short loc_51110B
0x5110FD: push    offset aLocked; "-Locked"
0x511102: lea     ecx, [esp+508h+var_4D8]
0x511106: call    BSStringT_Append
0x51110B: mov     eax, [esi+8]
0x51110E: shr     eax, 0Bh
0x511111: test    al, 1
0x511113: jnz     short loc_511129
0x511115: mov     ecx, [esp+504h+var_4BC]; this
0x511119: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x51111E: mov     ecx, [eax+8]
0x511121: shr     ecx, 0Bh
0x511124: test    cl, 1
0x511127: jz      short loc_511137
0x511129: push    offset aDisabled; "-Disabled"
0x51112E: lea     ecx, [esp+508h+var_4D8]
0x511132: call    BSStringT_Append
0x511137: mov     edx, [esi]
0x511139: mov     eax, [edx+170h]
0x51113F: mov     ecx, esi
0x511141: call    eax
0x511143: mov     ecx, eax; this
0x511145: call    TESObjectDOOR_HasMinUseFlag; Verified: tests bit 0x08 at TESObjectDOOR +0x64. CalcLowPathToPoint prints the suffix '-MinUse' when this helper succeeds; travel search adds a penalty for either endpoint door carrying the bit unless ignore-min-use is enabled.
0x51114A: test    al, al
0x51114C: jnz     short loc_51116E
0x51114E: mov     ecx, [esp+504h+var_4BC]; this
0x511152: call    TeleportData_GetLinkedDoor; Verified TeleportData_GetLinkedDoor returns TeleportData.linkedDoor from offset +0. This operates on TeleportData, which is the payload pointer stored at ExtraTeleport+0x0C, not on the ExtraTeleport object itself.
0x511157: mov     edx, [eax]
0x511159: mov     ecx, eax
0x51115B: mov     eax, [edx+170h]
0x511161: call    eax
0x511163: mov     ecx, eax; this
0x511165: call    TESObjectDOOR_HasMinUseFlag; Verified: tests bit 0x08 at TESObjectDOOR +0x64. CalcLowPathToPoint prints the suffix '-MinUse' when this helper succeeds; travel search adds a penalty for either endpoint door carrying the bit unless ignore-min-use is enabled.
0x51116A: test    al, al
0x51116C: jz      short loc_51117C
0x51116E: push    offset aMinuse; "-MinUse"
0x511173: lea     ecx, [esp+508h+var_4D8]
0x511177: call    BSStringT_Append
0x51117C: mov     al, [edi+4]
0x51117F: cmp     al, 35h ; '5'
0x511181: jnz     short loc_511197
0x511183: push    offset aWorldspace; "worldspace"
0x511188: push    104h
0x51118D: lea     ecx, [esp+50Ch+Dest]
0x511194: push    ecx
0x511195: jmp     short loc_5111C1
0x511197: cmp     al, 30h ; '0'
0x511199: jnz     short loc_5111AF
0x51119B: push    offset aInteriorCell; "interior cell"
0x5111A0: push    104h
0x5111A5: lea     edx, [esp+50Ch+Dest]
0x5111AC: push    edx
0x5111AD: jmp     short loc_5111C1
0x5111AF: push    offset aUnknown; "UNKNOWN"
0x5111B4: push    104h; Count
0x5111B9: lea     eax, [esp+50Ch+Dest]
0x5111C0: push    eax; Dest
0x5111C1: call    __snprintf
0x5111C6: mov     eax, [edi+0Ch]
0x5111C9: mov     edx, [edi]
0x5111CB: add     esp, 0Ch
0x5111CE: push    eax
0x5111CF: mov     eax, [edx+0D4h]
0x5111D5: mov     ecx, edi
0x5111D7: call    eax
0x5111D9: push    eax
0x5111DA: lea     ecx, [esp+50Ch+Dest]
0x5111E1: push    ecx; Format
0x5111E2: push    offset aSS08x_1; "%s '%s' (%08X)"
0x5111E7: lea     edx, [esp+514h+var_258]
0x5111EE: push    104h; Count
0x5111F3: push    edx; Dest
0x5111F4: call    __snprintf
0x5111F9: fld     [esp+51Ch+l]
0x5111FD: add     esp, 18h
0x511200: lea     eax, [esp+504h+var_258]
0x511207: push    eax
0x511208: sub     esp, 8
0x51120B: fstp    [esp+510h+var_510]
0x51120E: push    offset aTravel_0fUnits; "- Travel %.0f units in %s."
0x511213: call    Interface_ConsolePrint
0x511218: mov     ecx, dword ptr [esp+514h+var_4D8]
0x51121C: mov     eax, [esi+0Ch]
0x51121F: mov     edx, [esi]
0x511221: add     esp, 10h
0x511224: test    ecx, ecx
0x511226: jz      short loc_511244
0x511228: push    ecx
0x511229: push    eax
0x51122A: mov     eax, [edx+0D4h]
0x511230: mov     ecx, esi
0x511232: call    eax
0x511234: push    eax
0x511235: push    offset aActivateDoorS0; "- Activate Door '%s' (%08X). (%s)"
0x51123A: call    Interface_ConsolePrint
0x51123F: add     esp, 10h
0x511242: jmp     short loc_51125D
0x511244: push    eax
0x511245: mov     eax, [edx+0D4h]
0x51124B: mov     ecx, esi
0x51124D: call    eax
0x51124F: push    eax
0x511250: push    offset aActivateDoor_0; "- Activate Door '%s' (%08X)."
0x511255: call    Interface_ConsolePrint
0x51125A: add     esp, 0Ch
0x51125D: mov     ecx, [esp+504h+var_4BC]
0x511261: mov     edi, [esp+504h+var_4E4]
0x511265: call    EmbeddedList_GetHead; ExtraTeleport_GetPosition-style accessor: returns ExtraTeleport+4, the stored xyz marker position used by TravelPath distance/teleport resolution.
0x51126A: mov     ecx, [eax]
0x51126C: mov     edx, [eax+4]
0x51126F: mov     eax, [eax+8]
0x511272: mov     [esp+504h+var_4C8], ecx
0x511276: mov     ecx, dword ptr [esp+504h+var_4D8]
0x51127A: push    ecx
0x51127B: mov     [esp+508h+var_4C4], edx
0x51127F: mov     [esp+508h+var_4C0], eax
0x511283: mov     [esp+508h+var_4], 0FFFFFFFFh
0x51128E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x511293: add     esp, 4
0x511296: xor     eax, eax
0x511298: mov     dword ptr [esp+504h+var_4D8], eax
0x51129C: mov     word ptr [esp+504h+var_4D8+6], ax
0x5112A1: mov     word ptr [esp+504h+var_4D8+4], ax
0x5112A6: mov     edx, [esp+504h+a3]
0x5112AA: mov     eax, [edx+4]
0x5112AD: test    eax, eax
0x5112AF: mov     [esp+504h+a3], eax
0x5112B3: jnz     loc_511031
0x5112B9: jmp     short loc_5112DB
0x5112BB: mov     eax, [ebx]
0x5112BD: mov     edx, [eax+174h]
0x5112C3: mov     ecx, ebx
0x5112C5: call    edx
0x5112C7: mov     ecx, [eax]
0x5112C9: mov     [esp+504h+end.x], ecx
0x5112CD: mov     edx, [eax+4]
0x5112D0: mov     [esp+504h+end.y], edx
0x5112D4: mov     eax, [eax+8]
0x5112D7: mov     [esp+504h+end.z], eax
0x5112DB: mov     edx, [ebx]
0x5112DD: mov     eax, [edx+174h]
0x5112E3: mov     ecx, ebx
0x5112E5: call    eax
0x5112E7: fld     dword ptr [eax]
0x5112E9: fsub    [esp+504h+var_4C8]
0x5112ED: lea     ecx, [esp+504h+var_4D8]
0x5112F1: fstp    dword ptr [esp+504h+var_4D8]
0x5112F5: fld     dword ptr [eax+4]
0x5112F8: fsub    [esp+504h+var_4C4]
0x5112FC: fstp    dword ptr [esp+504h+var_4D8+4]
0x511300: fld     dword ptr [eax+8]
0x511303: fsub    [esp+504h+var_4C0]
0x511307: fstp    [esp+504h+var_4D0]
0x51130B: call    NiPoint3_Length; Returns sqrt(x*x + y*y + z*z) for the three-float NiPoint3 value. Fallout's related NiPoint3 helpers corroborate the engine type; behavior verified here.
0x511310: mov     al, [edi+4]
0x511313: fstp    [esp+504h+l]
0x511317: cmp     al, 35h ; '5'
0x511319: jnz     short loc_51132F
0x51131B: push    offset aWorldspace; "worldspace"
0x511320: push    104h
0x511325: lea     ecx, [esp+50Ch+Format]
0x51132C: push    ecx
0x51132D: jmp     short loc_511359
0x51132F: cmp     al, 30h ; '0'
0x511331: jnz     short loc_511347
0x511333: push    offset aInteriorCell; "interior cell"
0x511338: push    104h
0x51133D: lea     edx, [esp+50Ch+Format]
0x511344: push    edx
0x511345: jmp     short loc_511359
0x511347: push    offset aUnknown; "UNKNOWN"
0x51134C: push    104h; Count
0x511351: lea     eax, [esp+50Ch+Format]
0x511358: push    eax; Dest
0x511359: call    __snprintf
0x51135E: mov     eax, [edi+0Ch]
0x511361: mov     edx, [edi]
0x511363: add     esp, 0Ch
0x511366: push    eax
0x511367: mov     eax, [edx+0D4h]
0x51136D: mov     ecx, edi
0x51136F: call    eax
0x511371: push    eax
0x511372: lea     ecx, [esp+50Ch+Format]
0x511379: push    ecx; Format
0x51137A: push    offset aSS08x_1; "%s '%s' (%08X)"
0x51137F: lea     edx, [esp+514h+var_150]
0x511386: push    104h; Count
0x51138B: push    edx; Dest
0x51138C: call    __snprintf
0x511391: fld     [esp+51Ch+l]
0x511395: add     esp, 18h
0x511398: lea     eax, [esp+504h+var_150]
0x51139F: push    eax
0x5113A0: sub     esp, 8
0x5113A3: fstp    [esp+510h+var_510]
0x5113A6: push    offset aTravel_0fUnits; "- Travel %.0f units in %s."
0x5113AB: call    Interface_ConsolePrint
0x5113B0: mov     edx, [ebx]
0x5113B2: mov     eax, [edx+174h]
0x5113B8: add     esp, 10h
0x5113BB: mov     ecx, ebx
0x5113BD: call    eax
0x5113BF: mov     edx, [ebx]
0x5113C1: mov     esi, eax
0x5113C3: mov     eax, [edx+174h]
0x5113C9: mov     ecx, ebx
0x5113CB: call    eax
0x5113CD: fld     dword ptr [eax+8]
0x5113D0: mov     edx, [ebx]
0x5113D2: mov     eax, [edx+174h]
0x5113D8: sub     esp, 8
0x5113DB: mov     ecx, ebx
0x5113DD: fstp    [esp+50Ch+var_510+4]
0x5113E0: call    eax
0x5113E2: fld     dword ptr [eax+4]
0x5113E5: sub     esp, 10h
0x5113E8: fstp    qword ptr [esp+8]
0x5113EC: fld     dword ptr [esi]
0x5113EE: fstp    [esp+51Ch+var_51C]
0x5113F1: push    offset aWalkToCoord_0f; "- Walk to coord (%.0f, %.0f, %.0f)."
0x5113F6: call    Interface_ConsolePrint
0x5113FB: fld     [esp+520h+l]
0x5113FF: fadd    [esp+520h+var_4E0]
0x511403: push    3Ah ; ':'; a1
0x511405: fstp    [esp+524h+var_4E0]
0x511409: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x51140E: fld     [esp+524h+var_4E0]
0x511412: mov     ecx, ds:0B333C4h
0x511418: add     esp, 20h
0x51141B: fstp    [esp+504h+var_4D8]
0x51141F: mov     esi, eax
0x511421: call    sub_5E65B0; Authoritative actor movement speed selector: process flags +0x2C0 choose run (0x200), swim (0x800), fly-speed (0x2000); when those are absent it falls through to ordinary walk speed. AI callers may supply a movement vector without direction bits.
0x511426: fdivr   [esp+504h+var_4D8]
0x51142A: sub     esp, 8
0x51142D: fstp    [esp+50Ch+var_4E4]
0x511431: fld     [esp+50Ch+var_4E4]
0x511435: fdiv    qword ptr ds:0A2F938h
0x51143B: fstp    [esp+50Ch+var_4E8]
0x51143F: fld     dword ptr [esi+24h]
0x511442: fstp    [esp+50Ch+var_4E4]
0x511446: fld     [esp+50Ch+var_4E0]
0x51144A: fstp    [esp+50Ch+var_510+4]
0x51144D: push    offset aTotalDistance_; "--Total distance: %.0f units."
0x511452: call    Interface_ConsolePrint
0x511457: fld     [esp+510h+var_4E4]
0x51145B: fmul    [esp+510h+var_4E8]
0x51145F: add     esp, 4
0x511462: fstp    [esp+50Ch+var_4E4]
0x511466: fld     [esp+50Ch+var_4E4]
0x51146A: fstp    [esp+50Ch+var_510+4]
0x51146D: push    offset aEstimatedTrave; "--Estimated Travel Time: %.2f game hour"...
0x511472: call    Interface_ConsolePrint
0x511477: fld1
0x511479: add     esp, 0Ch
0x51147C: fst     [esp+504h+var_478]
0x511483: lea     ecx, [esp+504h+var_478]
0x51148A: fldz
0x51148C: push    ecx; endColor
0x51148D: mov     ecx, ds:0B333C4h
0x511493: fst     [esp+508h+var_474]
0x51149A: fst     [esp+508h+var_46C]
0x5114A1: lea     edx, [esp+508h+end]
0x5114A5: fst     [esp+508h+var_484]
0x5114AC: push    edx; end
0x5114AD: fstp    [esp+50Ch+var_47C]
0x5114B4: lea     eax, [esp+50Ch+var_488]
0x5114BB: push    eax; startColor
0x5114BC: fst     [esp+510h+var_470]
0x5114C3: fst     [esp+510h+var_488]
0x5114CA: fstp    [esp+510h+var_480]
0x5114D1: mov     edx, [ecx]
0x5114D3: mov     eax, [edx+174h]
0x5114D9: call    eax
0x5114DB: push    eax; start
0x5114DC: call    NiLines_CreateSegment; Verified generic NiLines_CreateSegment: copies two endpoint positions and two per-vertex colors, supplies line flags [1,0], and returns a two-vertex NiLines segment. TESPathGrid_RebuildRenderedGraph calls it for adjacency edges.
0x5114E1: add     esp, 10h
0x5114E4: mov     esi, eax
0x5114E6: call    DebugRender_GetOrCreateVertexColorProperty; Verified shared debug property getter/creator, used by PathGrid debug rendering and the registered TestSeenData/TestLocalMap visualization commands, plus other debug-geometry callers. Lazily constructs NiVertexColorProperty, sets its observed render flags, stores the refcounted global g_DebugRenderVertexColorProperty and returns it.
0x5114EB: push    eax; a2
0x5114EC: mov     ecx, esi; this
0x5114EE: call    sub_405680; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
0x5114F3: fld     dword ptr ds:0A37CC8h
0x5114F9: push    ecx
0x5114FA: mov     ecx, ds:0B333A0h
0x511500: fstp    [esp+508h+var_508]; float
0x511503: push    esi; int
0x511504: call    sub_440E60
0x511509: jmp     short loc_511518
0x51150B: push    offset aNoPathFound_; "No Path found."
0x511510: call    Interface_ConsolePrint
0x511515: add     esp, 4
0x511518: lea     ecx, [esp+504h+outRouteNodes]
0x51151C: call    BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x511521: mov     ecx, dword ptr [esp+504h+enabled]
0x511525: push    ecx; enabled
0x511526: call    TravelPath_SetIgnoreLocks; Verified: writes policy byte 0 at qword_B3BB2C[0xBA] and returns the assigned value. The registered CalcLowPathToPoint option description identifies it as ignore locks.
0x51152B: mov     edx, dword ptr [esp+508h+var_498]
0x51152F: push    edx; enabled
0x511530: call    TravelPath_SetAllowDisabledDoors; Verified: writes policy byte 2 at qword_B3BB2C[0xBA] and returns the assigned value. The second CalcLowPathToPoint boolean is saved/restored through this setter and corresponds to 'allow disabled doors'.
0x511535: mov     eax, dword ptr [esp+50Ch+var_494]
0x511539: push    eax; enabled
0x51153A: call    TravelPath_SetIgnoreMinUse; Verified: writes policy byte 1 at qword_B3BB2C[0xBA] and returns the assigned value. The third CalcLowPathToPoint boolean is saved/restored through this setter and corresponds to 'ignore min use'.
0x51153F: add     esp, 0Ch
0x511542: mov     al, 1
0x511544: mov     ecx, [esp+504h+var_C]
0x51154B: mov     large fs:0, ecx
0x511552: pop     ecx
0x511553: pop     edi
0x511554: pop     esi
0x511555: pop     ebx
0x511556: mov     ecx, [esp+4F4h+var_44]
0x51155D: xor     ecx, esp
0x51155F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x511564: mov     esp, ebp
0x511566: pop     ebp
0x511567: retn
0x9B6FB0: lea     ecx, [ebp+var_4D8]; void *
0x9B6FB6: jmp     BSStringT_Clear
0x9B6FBB: mov     edx, [esp-4+arg_4]
0x9B6FBF: lea     eax, [edx-4F4h]
0x9B6FC5: mov     ecx, [edx-4F8h]
0x9B6FCB: xor     ecx, eax
0x9B6FCD: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B6FD2: add     eax, 0Ch
0x9B6FD5: mov     ecx, [edx-38h]
0x9B6FD8: xor     ecx, eax
0x9B6FDA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B6FDF: mov     eax, offset stru_AE1C9C
0x9B6FE4: jmp     ___CxxFrameHandler3
