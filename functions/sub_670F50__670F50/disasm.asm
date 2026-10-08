0x670F50: sub     esp, 2Ch
0x670F53: push    ebx
0x670F54: push    ebp
0x670F55: push    esi
0x670F56: push    edi
0x670F57: mov     edi, ecx
0x670F59: lea     ecx, [edi+44h]
0x670F5C: call    ExtraDataList_GetOblivionEntry; Returns ExtraOblivionEntry type 0x3E itself, or null.
0x670F61: mov     esi, eax
0x670F63: test    esi, esi
0x670F65: jz      loc_67109D
0x670F6B: cmp     dword ptr [esi+18h], 0
0x670F6F: jz      loc_67109D
0x670F75: push    0
0x670F77: push    edi
0x670F78: mov     ecx, (offset qword_B3BB2C+1D4h)
0x670F7D: call    sub_675D50
0x670F82: mov     ecx, [esi+18h]; this
0x670F85: call    TESObjectREFR_GetLinkedTeleportMarkerPosition; Verified linked-door marker resolver: read this door's TeleportData, follow its linkedDoor pointer, fetch the linked door's TeleportData, then return a pointer to that record's xyz fields at +4. Return g_zeroNiPoint3 when the source data or linked-door target is missing.
0x670F8A: mov     ebx, [eax]
0x670F8C: mov     ebp, [eax+4]
0x670F8F: mov     eax, [eax+8]
0x670F92: mov     ecx, [esi+18h]
0x670F95: mov     edx, [ecx]
0x670F97: mov     [esp+3Ch+var_10], eax
0x670F9B: mov     eax, [edx+174h]
0x670FA1: mov     [esp+3Ch+var_18], ebx
0x670FA5: mov     [esp+3Ch+var_14], ebp
0x670FA9: call    eax
0x670FAB: fld     dword ptr [eax+4]
0x670FAE: fsub    [esp+3Ch+var_14]
0x670FB2: lea     ecx, [esp+3Ch+var_C]
0x670FB6: push    ecx
0x670FB7: fstp    [esp+40h+var_2C]
0x670FBB: fld     dword ptr [eax+8]
0x670FBE: fsub    [esp+40h+var_10]
0x670FC2: fstp    [esp+40h+var_28]
0x670FC6: fld     dword ptr [eax]
0x670FC8: fsub    [esp+40h+var_18]
0x670FCC: fstp    [esp+40h+var_C]
0x670FD0: fld     [esp+40h+var_2C]
0x670FD4: fstp    [esp+40h+var_8]
0x670FD8: fld     [esp+40h+var_28]
0x670FDC: fstp    [esp+40h+var_4]
0x670FE0: fldz
0x670FE2: fst     [esp+40h+var_24]
0x670FE6: fstp    [esp+40h+var_20]
0x670FEA: call    Vector3_CalculateHeadingRadiansXY; Returns heading in the XY plane from a normalized vector, normalized to [0,2pi).
0x670FEF: fstp    [esp+40h+var_1C]
0x670FF3: mov     ecx, [esi+18h]; this
0x670FF6: add     esp, 4
0x670FF9: call    TESObjectREFR_GetWorldSpace
0x670FFE: test    eax, eax
0x671000: jz      short loc_671047
0x671002: mov     edx, [esp+3Ch+var_24]
0x671006: mov     ecx, [esp+3Ch+var_20]
0x67100A: push    0; char
0x67100C: push    eax; int
0x67100D: sub     esp, 0Ch
0x671010: mov     eax, esp
0x671012: mov     [eax], edx
0x671014: mov     edx, [esp+50h+var_1C]
0x671018: mov     [eax+4], ecx
0x67101B: mov     ecx, [esp+50h+var_10]
0x67101F: mov     [eax+8], edx
0x671022: sub     esp, 0Ch
0x671025: mov     eax, esp
0x671027: mov     [eax], ebx
0x671029: mov     [eax+4], ebp
0x67102C: mov     [eax+8], ecx
0x67102F: mov     ecx, edi
0x671031: call    PlayerCharacter_RelocateToFastTravelTarget; Direct relocation helper call through PlayerCharacter vtable method using an extra-data target reference. This bypasses PlayerCharacter_FastTravelCore/Sky fast-travel flag path.
0x671036: push    0
0x671038: mov     ecx, edi
0x67103A: call    sub_4D8E60
0x67103F: pop     edi
0x671040: pop     esi
0x671041: pop     ebp
0x671042: pop     ebx
0x671043: add     esp, 2Ch
0x671046: retn
0x671047: mov     ecx, [esi+18h]; this
0x67104A: call    Shared_GetDwordAtOffset40; Linker-folded two-instruction accessor shared by unrelated classes: returns the dword at this+0x40. The field meaning is determined by each call context; on TESClass it is specialization, while on TESObjectREFR it may be parentCell.
0x67104F: mov     esi, eax
0x671051: test    esi, esi
0x671053: jz      short loc_671094
0x671055: mov     ecx, esi; this
0x671057: call    TESObjectCELL_IsInterior; 3DTheft decode: TESObjectCELL_IsInterior returns flags0 bit 0, matching the plugin's CellIsInterior test.
0x67105C: test    al, al
0x67105E: jz      short loc_671094
0x671060: mov     edx, [esp+3Ch+var_24]
0x671064: mov     ecx, [esp+3Ch+var_20]
0x671068: push    0; char
0x67106A: push    esi; int
0x67106B: sub     esp, 0Ch
0x67106E: mov     eax, esp
0x671070: mov     [eax], edx
0x671072: mov     edx, [esp+50h+var_1C]
0x671076: mov     [eax+4], ecx
0x671079: mov     ecx, [esp+50h+var_10]
0x67107D: mov     [eax+8], edx
0x671080: sub     esp, 0Ch
0x671083: mov     eax, esp
0x671085: mov     [eax], ebx
0x671087: mov     [eax+4], ebp
0x67108A: mov     [eax+8], ecx
0x67108D: mov     ecx, edi; int
0x67108F: call    PlayerCharacter_ChangeCellAndPosition; World/cell transition path used by fast travel relocation after cell resolution. Leaves normal exterior refresh/SpeedTree/weather side effects intact.
0x671094: push    0
0x671096: mov     ecx, edi
0x671098: call    sub_4D8E60
0x67109D: pop     edi
0x67109E: pop     esi
0x67109F: pop     ebp
0x6710A0: pop     ebx
0x6710A1: add     esp, 2Ch
0x6710A4: retn
