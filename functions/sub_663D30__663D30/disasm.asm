0x663D30: push    0FFFFFFFFh
0x663D32: push    offset SEH_62F810
0x663D37: mov     eax, large fs:0
0x663D3D: push    eax
0x663D3E: sub     esp, 2Ch
0x663D41: push    ebx
0x663D42: push    esi
0x663D43: push    edi
0x663D44: mov     eax, ds:0B30AACh
0x663D49: xor     eax, esp
0x663D4B: push    eax
0x663D4C: lea     eax, [esp+48h+var_C]
0x663D50: mov     large fs:0, eax
0x663D56: mov     esi, ecx
0x663D58: mov     edi, [esi+638h]
0x663D5E: test    edi, edi
0x663D60: mov     dword ptr [esi+63Ch], 0
0x663D6A: jz      loc_663E63
0x663D70: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x663D75: cmp     edi, eax
0x663D77: jz      loc_663E63
0x663D7D: mov     ecx, esi; this
0x663D7F: call    TESObjectREFR_GetWorldSpace
0x663D84: cmp     edi, eax
0x663D86: jz      loc_663E63
0x663D8C: call    TravelPath_GetIgnoreLocks; Verified: reads policy byte 0 at qword_B3BB2C[0xBA]. CalcLowPathToPoint's first boolean argument is saved/restored through this accessor. TravelPath_ComputeDoorTransitionPenalty skips its lock/access penalty branch when this flag is true.
0x663D91: push    1; enabled
0x663D93: mov     [esp+4Ch+var_34], al
0x663D97: call    TravelPath_SetIgnoreLocks; Verified: writes policy byte 0 at qword_B3BB2C[0xBA] and returns the assigned value. The registered CalcLowPathToPoint option description identifies it as ignore locks.
0x663D9C: call    TravelPath_GetAllowDisabledDoors; Verified: reads policy byte 2 at qword_B3BB2C[0xBA]. TravelPathSpaceDoorLink_IsEligibleInSpace permits references with the disabled bit (0x800) when this flag is true.
0x663DA1: push    1; enabled
0x663DA3: mov     [esp+50h+enabled], al
0x663DA7: call    TravelPath_SetAllowDisabledDoors; Verified: writes policy byte 2 at qword_B3BB2C[0xBA] and returns the assigned value. The second CalcLowPathToPoint boolean is saved/restored through this setter and corresponds to 'allow disabled doors'.
0x663DAC: call    TravelPath_GetIgnoreMinUse; Verified: reads policy byte 1 at qword_B3BB2C[0xBA]. When false, TravelPath_ComputeDoorTransitionPenalty may add the extra cost for a door whose TESObjectDOOR_HasMinUseFlag is set.
0x663DB1: push    0; enabled
0x663DB3: mov     [esp+54h+var_30], al
0x663DB7: call    TravelPath_SetIgnoreMinUse; Verified: writes policy byte 1 at qword_B3BB2C[0xBA] and returns the assigned value. The third CalcLowPathToPoint boolean is saved/restored through this setter and corresponds to 'ignore min use'.
0x663DBC: mov     eax, [esi+638h]
0x663DC2: mov     cl, [eax+4]
0x663DC5: add     esp, 0Ch
0x663DC8: xor     ebx, ebx
0x663DCA: xor     edi, edi
0x663DCC: cmp     cl, 30h ; '0'
0x663DCF: jnz     short loc_663DD5
0x663DD1: mov     ebx, eax
0x663DD3: jmp     short loc_663DDC
0x663DD5: cmp     cl, 35h ; '5'
0x663DD8: jnz     short loc_663DDC
0x663DDA: mov     edi, eax
0x663DDC: lea     ecx, [esp+48h+var_20]; this
0x663DE0: call    PathLow_ctor; Verified PathLow constructor: installs the PathLow vtable at +0, initializes the BSSimpleList at +4/+8 to empty, copies unk_B3A458 to +0x0C, and sets byte +0x10 to 1. +0x0C and byte +0x10 semantics remain Unknown.
0x663DE5: mov     eax, [esi+62Ch]
0x663DEB: mov     ecx, [esi+630h]
0x663DF1: mov     edx, [esi+634h]
0x663DF7: push    edi; destinationWorldspace
0x663DF8: mov     [esp+4Ch+destinationPosition.x], eax
0x663DFC: push    ebx; destinationCell
0x663DFD: mov     [esp+50h+destinationPosition.y], ecx
0x663E01: mov     ecx, ds:0B333C4h
0x663E07: lea     eax, [esp+50h+destinationPosition]
0x663E0B: push    eax; destinationPosition
0x663E0C: push    ecx; sourceRef
0x663E0D: lea     ecx, [esp+58h+var_20]; this
0x663E11: mov     [esp+58h+var_4], 0
0x663E19: mov     [esp+58h+destinationPosition.z], edx
0x663E1D: call    TravelPath_BuildToDestination; Verified top-level TravelPath build sequence: select the destination's smallest containing interior/exterior SubSpace (fallback to supplied cell/worldspace), call TravelPath_BuildRoute with the source reference and positions, then, on success, augment the route with TESRoad surface samples.
0x663E22: lea     ecx, [esp+48h+var_20]
0x663E26: call    sub_68A1B0
0x663E2B: mov     edx, dword ptr [esp+48h+enabled]
0x663E2F: push    edx; enabled
0x663E30: mov     [esi+63Ch], eax
0x663E36: call    TravelPath_SetAllowDisabledDoors; Verified: writes policy byte 2 at qword_B3BB2C[0xBA] and returns the assigned value. The second CalcLowPathToPoint boolean is saved/restored through this setter and corresponds to 'allow disabled doors'.
0x663E3B: mov     eax, dword ptr [esp+4Ch+var_34]
0x663E3F: push    eax; enabled
0x663E40: call    TravelPath_SetIgnoreLocks; Verified: writes policy byte 0 at qword_B3BB2C[0xBA] and returns the assigned value. The registered CalcLowPathToPoint option description identifies it as ignore locks.
0x663E45: mov     ecx, dword ptr [esp+50h+var_30]
0x663E49: push    ecx; enabled
0x663E4A: call    TravelPath_SetIgnoreMinUse; Verified: writes policy byte 1 at qword_B3BB2C[0xBA] and returns the assigned value. The third CalcLowPathToPoint boolean is saved/restored through this setter and corresponds to 'ignore min use'.
0x663E4F: add     esp, 0Ch
0x663E52: lea     ecx, [esp+48h+var_20]; this
0x663E56: mov     [esp+48h+var_4], 0FFFFFFFFh
0x663E5E: call    PathLow_dtor; Verified PathLow destructor: restores the PathLow vtable and frees/clears owned TravelPathNode records through TravelPath_ClearNodes. This routine does not free the containing object.
0x663E63: mov     ecx, [esp+48h+var_C]
0x663E67: mov     large fs:0, ecx
0x663E6E: pop     ecx
0x663E6F: pop     edi
0x663E70: pop     esi
0x663E71: pop     ebx
0x663E72: add     esp, 38h
0x663E75: retn
0x9C3D80: lea     ecx, [ebp-20h]; this
0x9C3D83: jmp     PathLow_dtor; Verified PathLow destructor: restores the PathLow vtable and frees/clears owned TravelPathNode records through TravelPath_ClearNodes. This routine does not free the containing object.
0x9C3D88: mov     edx, [esp+arg_4]
0x9C3D8C: lea     eax, [edx-38h]
0x9C3D8F: mov     ecx, [edx-3Ch]
0x9C3D92: xor     ecx, eax
0x9C3D94: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C3D99: mov     eax, offset stru_AEC898
0x9C3D9E: jmp     ___CxxFrameHandler3
