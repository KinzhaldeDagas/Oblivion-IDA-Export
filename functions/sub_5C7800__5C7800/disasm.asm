0x5C7800: push    0FFFFFFFFh
0x5C7802: push    offset SEH_5C7800
0x5C7807: mov     eax, large fs:0
0x5C780D: push    eax
0x5C780E: sub     esp, 1F4h
0x5C7814: push    esi
0x5C7815: push    edi
0x5C7816: mov     eax, ds:0B30AACh
0x5C781B: xor     eax, esp
0x5C781D: push    eax; state
0x5C781E: lea     eax, [esp+20Ch+var_C]
0x5C7825: mov     large fs:0, eax
0x5C782B: push    40Ch
0x5C7830: call    Menu_GetOpenMenuTile
0x5C7835: add     esp, 4
0x5C7838: test    eax, eax
0x5C783A: jz      loc_5C7B7A
0x5C7840: mov     ecx, eax
0x5C7842: call    Tile_GetParentMenu
0x5C7847: test    eax, eax
0x5C7849: jz      loc_5C7B7A
0x5C784F: mov     ecx, ds:0B333C4h
0x5C7855: mov     eax, [ecx]
0x5C7857: mov     edx, [eax+130h]
0x5C785D: push    0
0x5C785F: call    edx
0x5C7861: test    eax, eax
0x5C7863: jz      loc_5C7B7A
0x5C7869: mov     ecx, ds:0B333C4h
0x5C786F: mov     eax, [ecx]
0x5C7871: mov     edx, [eax+134h]
0x5C7877: push    0
0x5C7879: call    edx
0x5C787B: test    eax, eax
0x5C787D: jz      loc_5C7B7A
0x5C7883: mov     ecx, ds:0B333C4h
0x5C7889: mov     eax, [ecx]
0x5C788B: mov     edx, [eax+170h]
0x5C7891: call    edx
0x5C7893: mov     esi, eax
0x5C7895: mov     eax, ds:0B333C4h
0x5C789A: mov     ecx, [eax+58h]
0x5C789D: mov     edx, [ecx]
0x5C789F: mov     eax, [edx+5Ch]
0x5C78A2: call    eax
0x5C78A4: push    offset FaceGenMatrix_Destruct; a5
0x5C78A9: push    offset FaceGenMatrix_Construct; a4
0x5C78AE: push    4; size
0x5C78B0: push    18h; a2
0x5C78B2: lea     ecx, [esp+21Ch+a1]
0x5C78B6: push    ecx; a1
0x5C78B7: call    ArrayConstructor
0x5C78BC: push    offset FaceGenMatrix_Destruct; a5
0x5C78C1: push    offset FaceGenMatrix_Construct; a4
0x5C78C6: push    4; size
0x5C78C8: push    18h; a2
0x5C78CA: lea     edx, [esp+21Ch+outDelta]
0x5C78D1: push    edx; a1
0x5C78D2: mov     [esp+220h+var_4], 0
0x5C78DD: call    ArrayConstructor
0x5C78E2: fldz
0x5C78E4: mov     edi, [esi+0E8h]
0x5C78EA: push    ecx
0x5C78EB: fstp    [esp+210h+value]; maximumRms
0x5C78EE: push    0; specialSecondBankMode
0x5C78F0: lea     eax, [esp+214h+a1]
0x5C78F4: push    eax; outParameters
0x5C78F5: mov     ecx, esi; this
0x5C78F7: mov     byte ptr [esp+218h+var_4], 1
0x5C78FF: call    TESNPC_GetActiveFaceGenDeltaParameters; CORRECTION: chooses inline FaceGen delta by GetAViBase(0x45), NOT sex. Vtable 0xA53DD4+0x128 -> TESNPC_GetAViBase 0x5232D0. Zero vampirism selects NPC+0x108, nonzero selects +0x168. Both are four 0x18-byte matrices. Earlier sex-specific naming was wrong; sex bit at NPC+0x28 is separate.
0x5C7904: push    eax; delta
0x5C7905: add     edi, 29Ch
0x5C790B: push    edi; base
0x5C790C: call    FaceGenHeadParameters_Combine; Four-matrix combine. Normal branch adds base+delta; optional positive maximumRms rescales using sqrt(sumSquares/rows), NOT sqrt(sumSquares/(rows*columns)). Equivalent to coefficient RMS only for columns=1. Special second-bank branch copies base matrices 2/3 rather than adding delta. No claim of malformed multi-column asset impact without callers/asset evidence.
0x5C7911: fldz
0x5C7913: push    1; matrixChannel
0x5C7915: fsubr   st, st
0x5C7917: lea     ecx, [esp+224h+a1]
0x5C791B: push    0; controlIndex
0x5C791D: push    ecx; parameters
0x5C791E: fstp    [esp+22Ch+var_1F8]
0x5C7922: call    FaceGenHeadParameters_GetControlValue; Fan-0 control projection wrapper. matrixChannel 0 projects FaceGen matrix 0; matrixChannel 1 projects FaceGen matrix 2, not matrix 1.
0x5C7927: fsub    [esp+22Ch+var_1F8]
0x5C792B: add     esp, 20h
0x5C792E: fstp    dword ptr [esp+20Ch+var_200]
0x5C7932: fld     dword ptr [esp+20Ch+var_200]
0x5C7936: fld     qword ptr ds:0A492F0h
0x5C793C: fcom    st(1)
0x5C793E: fnstsw  ax
0x5C7940: test    ah, 5
0x5C7943: jp      short loc_5C7956
0x5C7945: fld     dword ptr ds:0A47800h
0x5C794B: fcom    st(2)
0x5C794D: fnstsw  ax
0x5C794F: test    ah, 41h
0x5C7952: jnz     short loc_5C7969
0x5C7954: fstp    st
0x5C7956: fcomp   st(1)
0x5C7958: fnstsw  ax
0x5C795A: test    ah, 5
0x5C795D: jnp     short loc_5C7975
0x5C795F: fstp    st
0x5C7961: fld     dword ptr ds:0A468FCh
0x5C7967: jmp     short loc_5C796D
0x5C7969: fstp    st(2)
0x5C796B: fstp    st
0x5C796D: fstp    dword ptr [esp+20Ch+var_200]
0x5C7971: fld     dword ptr [esp+20Ch+var_200]
0x5C7975: push    ecx
0x5C7976: fstp    [esp+210h+value]; value
0x5C7979: push    1; matrixChannel
0x5C797B: lea     edx, [esp+214h+a1]
0x5C797F: push    0; controlIndex
0x5C7981: push    edx; parameters
0x5C7982: call    FaceGenHeadParameters_SetControlValue; Set one fan-0 control while preserving its paired control. matrixChannel 0 updates matrix 0; matrixChannel 1 updates matrix 2 through the authored FanControls bases.
0x5C7987: push    1; matrixChannel
0x5C7989: lea     eax, [esp+220h+a1]
0x5C798D: push    1; controlIndex
0x5C798F: push    eax; parameters
0x5C7990: call    FaceGenHeadParameters_GetControlValue; Fan-0 control projection wrapper. matrixChannel 0 projects FaceGen matrix 0; matrixChannel 1 projects FaceGen matrix 2, not matrix 1.
0x5C7995: fstp    [esp+228h+var_200]
0x5C7999: add     esp, 1Ch
0x5C799C: mov     ecx, esi; this
0x5C799E: call    TESNPC_GetSexMorphBase; Returns the stock sex-morph base endpoint: +2.0 for female TESNPCs and -2.0 for male TESNPCs.
0x5C79A3: fsubr   [esp+20Ch+var_200]
0x5C79A7: fstp    dword ptr [esp+20Ch+var_200]
0x5C79AB: fld     dword ptr [esp+20Ch+var_200]
0x5C79AF: fsub    [esp+20Ch+var_1F8]
0x5C79B3: fstp    dword ptr [esp+20Ch+var_200]
0x5C79B7: fld     dword ptr ds:0A53954h
0x5C79BD: fld     dword ptr [esp+20Ch+var_200]
0x5C79C1: fcom    st(1)
0x5C79C3: fnstsw  ax
0x5C79C5: test    ah, 41h
0x5C79C8: jnz     short loc_5C79DB
0x5C79CA: fld     dword ptr ds:0A379B4h
0x5C79D0: fcom    st(1)
0x5C79D2: fnstsw  ax
0x5C79D4: test    ah, 41h
0x5C79D7: jnz     short loc_5C79EA
0x5C79D9: fstp    st
0x5C79DB: fcomp   st(1)
0x5C79DD: fnstsw  ax
0x5C79DF: test    ah, 41h
0x5C79E2: jz      short loc_5C79F4
0x5C79E4: fstp    dword ptr [esp+20Ch+var_200]
0x5C79E8: jmp     short loc_5C79F6
0x5C79EA: fstp    st(1)
0x5C79EC: fstp    st(1)
0x5C79EE: fstp    dword ptr [esp+20Ch+var_200]
0x5C79F2: jmp     short loc_5C79F6
0x5C79F4: fstp    st
0x5C79F6: mov     ecx, esi; this
0x5C79F8: call    TESNPC_GetSexMorphBase; Returns the stock sex-morph base endpoint: +2.0 for female TESNPCs and -2.0 for male TESNPCs.
0x5C79FD: fadd    dword ptr [esp+20Ch+var_200]
0x5C7A01: push    ecx
0x5C7A02: lea     ecx, [esp+210h+a1]
0x5C7A06: fstp    dword ptr [esp+210h+var_200]
0x5C7A0A: fld     dword ptr [esp+210h+var_200]
0x5C7A0E: fstp    [esp+210h+value]; value
0x5C7A11: push    1; matrixChannel
0x5C7A13: push    1; controlIndex
0x5C7A15: push    ecx; parameters
0x5C7A16: call    FaceGenHeadParameters_SetControlValue; Set one fan-0 control while preserving its paired control. matrixChannel 0 updates matrix 0; matrixChannel 1 updates matrix 2 through the authored FanControls bases.
0x5C7A1B: lea     edx, [esp+21Ch+outDelta]
0x5C7A22: push    edx; parameters
0x5C7A23: call    FaceGenHeadParameters_Initialize; Standard FaceGenHeadParameters dimensions: matrix0 50x1, matrix1 30x1, matrix2 50x1, matrix3 untouched. Thus standard initialized active coefficient count is 130, under PF supported 256 cap. Existing elements survive ResizeFill as documented; this routine is not a full zero reset.
0x5C7A28: add     esp, 14h
0x5C7A2B: push    offset FaceGenMatrix_Destruct; a5
0x5C7A30: push    offset FaceGenMatrix_Construct; a4
0x5C7A35: push    4; size
0x5C7A37: push    18h; a2
0x5C7A39: lea     eax, [esp+21Ch+raceParameters]
0x5C7A40: push    eax; a1
0x5C7A41: call    ArrayConstructor
0x5C7A46: lea     ecx, [esp+20Ch+raceParameters]
0x5C7A4D: push    ecx; outAbsolute
0x5C7A4E: mov     ecx, esi; this
0x5C7A50: mov     byte ptr [esp+210h+var_4], 2
0x5C7A58: call    TESNPC_BuildAbsoluteFaceGenParameters; Builds absolute FaceGen parameters by combining race base with active NPC delta. CORRECTION: bank selection uses base actor value 0x45 (vampirism), zero -> +0x108, nonzero -> +0x168; earlier sex-selected description was incorrect. Null race copies manager default parameters.
0x5C7A5D: lea     edx, [esp+20Ch+outDelta]
0x5C7A61: push    edx; outDelta
0x5C7A62: lea     eax, [esp+210h+a1]
0x5C7A66: push    eax; absoluteParameters
0x5C7A67: lea     ecx, [esp+214h+raceParameters]
0x5C7A6E: push    ecx; raceParameters
0x5C7A6F: call    FaceGenHeadParameters_ComputeRaceDelta; Computes the NPC-persisted delta = adjusted absolute parameters - race base for each active matrix. Prettier Faces 1.19.7 audit: curation must score actual post-projection race-relative coefficients. Applying soft compression again only to score/history (without applying it to output) understates real tails/spikes. Candidate capture limits once; scoring now measures the resulting coefficients directly.
0x5C7A74: fldz
0x5C7A76: add     esp, 8
0x5C7A79: fstp    [esp+210h+value]; maximumRms
0x5C7A7C: push    0; specialSecondBankMode
0x5C7A7E: mov     ecx, esi; this
0x5C7A80: call    TESNPC_GetActiveFaceGenDeltaParameters; CORRECTION: chooses inline FaceGen delta by GetAViBase(0x45), NOT sex. Vtable 0xA53DD4+0x128 -> TESNPC_GetAViBase 0x5232D0. Zero vampirism selects NPC+0x108, nonzero selects +0x168. Both are four 0x18-byte matrices. Earlier sex-specific naming was wrong; sex bit at NPC+0x28 is separate.
0x5C7A85: push    eax; outParameters
0x5C7A86: mov     ecx, esi; this
0x5C7A88: call    TESNPC_GetActiveFaceGenDeltaParameters; CORRECTION: chooses inline FaceGen delta by GetAViBase(0x45), NOT sex. Vtable 0xA53DD4+0x128 -> TESNPC_GetAViBase 0x5232D0. Zero vampirism selects NPC+0x108, nonzero selects +0x168. Both are four 0x18-byte matrices. Earlier sex-specific naming was wrong; sex bit at NPC+0x28 is separate.
0x5C7A8D: push    eax; delta
0x5C7A8E: lea     edx, [esp+21Ch+outDelta]
0x5C7A95: push    edx; base
0x5C7A96: call    FaceGenHeadParameters_Combine; Four-matrix combine. Normal branch adds base+delta; optional positive maximumRms rescales using sqrt(sumSquares/rows), NOT sqrt(sumSquares/(rows*columns)). Equivalent to coefficient RMS only for columns=1. Special second-bank branch copies base matrices 2/3 rather than adding delta. No claim of malformed multi-column asset impact without callers/asset evidence.
0x5C7A9B: add     esp, 14h
0x5C7A9E: lea     ecx, [esp+20Ch+outState]; this
0x5C7AA5: call    FaceGenRenderState_Construct; Constructs a 0xC4 FaceGenRenderState. The first 0x60 bytes are FaceGenHeadParameters; appearance assets and four 0x10-byte pointer arrays follow.
0x5C7AAA: mov     ecx, [esi+0E8h]; this
0x5C7AB0: lea     eax, [esp+20Ch+outState]
0x5C7AB7: push    eax; outState
0x5C7AB8: push    esi; npc
0x5C7AB9: mov     byte ptr [esp+214h+var_4], 3
0x5C7AC1: call    TESRace_BuildFaceGenRenderState; Builds the complete FaceGenRenderState from this race and an optional TESNPC. Resolves absolute coefficients, appearance selections, the nine head-part resources, texture overrides, race tint data, and fallback eyes.
0x5C7AC6: lea     ecx, [esp+20Ch+outState]
0x5C7ACD: push    ecx
0x5C7ACE: mov     ecx, ds:0B333C4h
0x5C7AD4: mov     edx, [ecx]
0x5C7AD6: mov     eax, [edx+130h]
0x5C7ADC: push    0
0x5C7ADE: call    eax
0x5C7AE0: push    eax; faceNode
0x5C7AE1: call    BSFaceGen_ApplyHeadParametersToNode; Applies a complete FaceGenRenderState to a BSFaceGenNiNode: projects age, binds nine head-part resources, handles sex-specific parts, eyes and hair, then rebuilds property state and updates the node.
0x5C7AE6: add     esp, 8
0x5C7AE9: lea     ecx, [esp+208h+outState.parameters.matrices.columns]
0x5C7AF0: push    ecx
0x5C7AF1: mov     ecx, ds:0B333C4h
0x5C7AF7: mov     edx, [ecx]
0x5C7AF9: mov     eax, [edx+134h]
0x5C7AFF: push    0; state
0x5C7B01: call    eax
0x5C7B03: push    eax; faceNode
0x5C7B04: call    BSFaceGen_ApplyHeadParametersToNode; Applies a complete FaceGenRenderState to a BSFaceGenNiNode: projects age, binds nine head-part resources, handles sex-specific parts, eyes and hair, then rebuilds property state and updates the node.
0x5C7B09: add     esp, 8
0x5C7B0C: mov     byte ptr [esp+20Ch+var_4], 2
0x5C7B14: lea     ecx, [esp+20Ch+outState]; this
0x5C7B1B: call    FaceGenRenderState_Destruct; Destroys FaceGenRenderState: releases texture-override smart pointers, destroys the four pointer arrays, then destroys the four embedded FaceGen coefficient matrices.
0x5C7B20: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x5C7B25: push    4; int
0x5C7B27: push    18h; unsigned int
0x5C7B29: lea     ecx, [esp+218h+raceParameters]
0x5C7B30: push    ecx; void *
0x5C7B31: mov     byte ptr [esp+21Ch+var_4], 1
0x5C7B39: call    $LN21
0x5C7B3E: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x5C7B43: push    4; int
0x5C7B45: push    18h; unsigned int
0x5C7B47: lea     edx, [esp+218h+outDelta]
0x5C7B4E: push    edx; void *
0x5C7B4F: mov     byte ptr [esp+21Ch+var_4], 0
0x5C7B57: call    $LN21
0x5C7B5C: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x5C7B61: push    4; int
0x5C7B63: push    18h; unsigned int
0x5C7B65: lea     eax, [esp+218h+a1]
0x5C7B69: push    eax; void *
0x5C7B6A: mov     [esp+21Ch+var_4], 0FFFFFFFFh
0x5C7B75: call    $LN21
0x5C7B7A: mov     ecx, [esp+20Ch+var_C]
0x5C7B81: mov     large fs:0, ecx
0x5C7B88: pop     ecx
0x5C7B89: pop     edi
0x5C7B8A: pop     esi
0x5C7B8B: add     esp, 200h
0x5C7B91: retn
0x9C1540: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x9C1545: push    4; int
0x9C1547: push    18h; unsigned int
0x9C1549: lea     eax, [ebp-1F0h]
0x9C154F: push    eax; void *
0x9C1550: call    $LN21
0x9C1555: retn
0x9C1556: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x9C155B: push    4; int
0x9C155D: push    18h; unsigned int
0x9C155F: lea     eax, [ebp-190h]
0x9C1565: push    eax; void *
0x9C1566: call    $LN21
0x9C156B: retn
0x9C156C: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x9C1571: push    4; int
0x9C1573: push    18h; unsigned int
0x9C1575: lea     eax, [ebp-130h]
0x9C157B: push    eax; void *
0x9C157C: call    $LN21
0x9C1581: retn
0x9C1582: lea     ecx, [ebp-0D0h]; this
0x9C1588: jmp     FaceGenRenderState_Destruct; Destroys FaceGenRenderState: releases texture-override smart pointers, destroys the four pointer arrays, then destroys the four embedded FaceGen coefficient matrices.
0x9C158D: mov     edx, [esp+arg_4]
0x9C1591: lea     eax, [edx-1FCh]
0x9C1597: mov     ecx, [edx-200h]
0x9C159D: xor     ecx, eax
0x9C159F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C15A4: mov     eax, offset stru_AEA5C0
0x9C15A9: jmp     ___CxxFrameHandler3
