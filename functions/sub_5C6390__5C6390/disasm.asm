0x5C6390: push    0FFFFFFFFh
0x5C6392: push    offset SEH_5C6390
0x5C6397: mov     eax, large fs:0
0x5C639D: push    eax
0x5C639E: sub     esp, 13Ch
0x5C63A4: push    ebx
0x5C63A5: push    ebp
0x5C63A6: push    esi
0x5C63A7: push    edi
0x5C63A8: mov     eax, ds:0B30AACh
0x5C63AD: xor     eax, esp
0x5C63AF: push    eax
0x5C63B0: lea     eax, [esp+15Ch+var_C]
0x5C63B7: mov     large fs:0, eax
0x5C63BD: mov     ebp, ecx
0x5C63BF: mov     [esp+15Ch+var_130], ebp
0x5C63C3: push    offset FaceGenMatrix_Destruct; a5
0x5C63C8: push    offset FaceGenMatrix_Construct; a4
0x5C63CD: push    4; size
0x5C63CF: push    18h; a2
0x5C63D1: lea     eax, [esp+16Ch+a1]
0x5C63D8: push    eax; a1
0x5C63D9: call    ArrayConstructor
0x5C63DE: push    offset FaceGenMatrix_Destruct; a5
0x5C63E3: push    offset FaceGenMatrix_Construct; a4
0x5C63E8: push    4; size
0x5C63EA: push    18h; a2
0x5C63EC: lea     ecx, [esp+16Ch+outDelta]
0x5C63F0: xor     edi, edi
0x5C63F2: push    ecx; a1
0x5C63F3: mov     [esp+170h+var_4], edi
0x5C63FA: call    ArrayConstructor
0x5C63FF: mov     ecx, ds:0B333C4h
0x5C6405: mov     edx, [ecx]
0x5C6407: mov     eax, [edx+170h]
0x5C640D: mov     byte ptr [esp+15Ch+var_4], 1
0x5C6415: call    eax
0x5C6417: fldz
0x5C6419: push    ecx
0x5C641A: fstp    [esp+160h+a3]; maximumRms
0x5C641D: mov     ebx, eax
0x5C641F: mov     esi, [ebx+0E8h]
0x5C6425: push    edi; specialSecondBankMode
0x5C6426: lea     ecx, [esp+164h+a1]
0x5C642D: push    ecx; outParameters
0x5C642E: mov     ecx, ebx; this
0x5C6430: call    TESNPC_GetActiveFaceGenDeltaParameters; CORRECTION: chooses inline FaceGen delta by GetAViBase(0x45), NOT sex. Vtable 0xA53DD4+0x128 -> TESNPC_GetAViBase 0x5232D0. Zero vampirism selects NPC+0x108, nonzero selects +0x168. Both are four 0x18-byte matrices. Earlier sex-specific naming was wrong; sex bit at NPC+0x28 is separate.
0x5C6435: push    eax; delta
0x5C6436: add     esi, 29Ch
0x5C643C: push    esi; base
0x5C643D: call    FaceGenHeadParameters_Combine; Four-matrix combine. Normal branch adds base+delta; optional positive maximumRms rescales using sqrt(sumSquares/rows), NOT sqrt(sumSquares/(rows*columns)). Equivalent to coefficient RMS only for columns=1. Special second-bank branch copies base matrices 2/3 rather than adding delta. No claim of malformed multi-column asset impact without callers/asset evidence.
0x5C6442: mov     eax, ds:0B39000h
0x5C6447: add     esp, 14h
0x5C644A: push    0FA8h
0x5C644F: sub     esp, 8
0x5C6452: mov     ecx, esp; this
0x5C6454: mov     [esp+168h+sliderIndex], esp
0x5C6458: push    edi; a3
0x5C6459: push    eax; a2
0x5C645A: mov     [ecx], edi
0x5C645C: mov     [ecx+4], di
0x5C6460: mov     [ecx+6], di
0x5C6464: call    BSStringT_Set
0x5C6469: mov     ecx, ebp
0x5C646B: call    RaceSexMenu_GetCategoryTileByName
0x5C6470: mov     ecx, [ebp+4]
0x5C6473: push    0FAEh
0x5C6478: mov     esi, eax
0x5C647A: call    Tile_GetFloat
0x5C647F: fstp    qword ptr [esp+160h+sliderIndex]
0x5C6483: mov     ecx, esi
0x5C6485: call    Tile_GetFloat
0x5C648A: fcomp   qword ptr [esp+15Ch+sliderIndex]
0x5C648E: mov     ecx, [ebx+0E8h]
0x5C6494: fnstsw  ax
0x5C6496: fldz
0x5C6498: test    ah, 44h
0x5C649B: jp      short loc_5C64BA
0x5C649D: fcomp   dword ptr [ecx+0A4h]
0x5C64A3: fnstsw  ax
0x5C64A5: test    ah, 5
0x5C64A8: jp      short loc_5C64B2
0x5C64AA: fld     dword ptr [ecx+0A4h]
0x5C64B0: jmp     short loc_5C64D5
0x5C64B2: fld     dword ptr ds:0A46C30h
0x5C64B8: jmp     short loc_5C64D5
0x5C64BA: fcomp   dword ptr [ecx+0A0h]
0x5C64C0: fnstsw  ax
0x5C64C2: test    ah, 5
0x5C64C5: jp      short loc_5C64CF
0x5C64C7: fld     dword ptr [ecx+0A0h]
0x5C64CD: jmp     short loc_5C64D5
0x5C64CF: fld     dword ptr ds:0A31E2Ch
0x5C64D5: mov     edi, [esp+15Ch+arg_0]
0x5C64DC: fstp    [esp+15Ch+var_148]
0x5C64E0: mov     ecx, [ebp+edi*4+94h]
0x5C64E7: push    0FB6h
0x5C64EC: call    Tile_GetFloat
0x5C64F1: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x5C64F6: test    eax, eax
0x5C64F8: mov     ecx, [ebp+edi*4+94h]
0x5C64FF: push    0FAEh
0x5C6504: jnz     short loc_5C6539
0x5C6506: call    Tile_GetFloat
0x5C650B: fstp    [esp+15Ch+var_140]
0x5C650F: fld     [esp+15Ch+var_148]
0x5C6513: fld     st
0x5C6515: fchs
0x5C6517: fstp    [esp+15Ch+var_144]
0x5C651B: fld     [esp+15Ch+var_140]
0x5C651F: fldz
0x5C6521: fsub    st(1), st
0x5C6523: fld1
0x5C6525: fsubrp  st(1), st
0x5C6527: fdivp   st(1), st
0x5C6529: fld     [esp+15Ch+var_144]
0x5C652D: fld     st
0x5C652F: fsubp   st(3), st
0x5C6531: fxch    st(1)
0x5C6533: fmulp   st(2), st
0x5C6535: faddp   st(1), st
0x5C6537: jmp     short loc_5C655C
0x5C6539: call    Tile_GetFloat
0x5C653E: fstp    [esp+15Ch+var_140]
0x5C6542: fld     [esp+15Ch+var_140]
0x5C6546: fldz
0x5C6548: fsub    st(1), st
0x5C654A: fld1
0x5C654C: fsubrp  st(1), st
0x5C654E: fdivp   st(1), st
0x5C6550: fmul    qword ptr ds:0A46E48h
0x5C6556: fsub    qword ptr ds:0A3F3E8h
0x5C655C: mov     esi, [ebp+edi*4+94h]
0x5C6563: fstp    [esp+15Ch+var_144]
0x5C6567: fld     [esp+15Ch+var_144]
0x5C656B: push    ecx
0x5C656C: fstp    [esp+160h+a3]; value
0x5C656F: push    0FB5h
0x5C6574: mov     ecx, esi
0x5C6576: call    Tile_GetFloat
0x5C657B: fsub    qword ptr ds:0A2F928h
0x5C6581: fnstcw  word ptr [esp+160h+var_148]
0x5C6585: mov     ecx, esi
0x5C6587: movzx   eax, word ptr [esp+160h+var_148]
0x5C658C: or      eax, 0C00h
0x5C6591: mov     [esp+160h+var_140], eax
0x5C6595: fldcw   word ptr [esp+160h+var_140]
0x5C6599: fistp   qword ptr [esp+160h+sliderIndex]
0x5C659D: mov     edx, [esp+160h+sliderIndex]
0x5C65A1: push    edx; sliderIndex
0x5C65A2: push    0; matrixChannel
0x5C65A4: fldcw   word ptr [esp+168h+var_148]
0x5C65A8: push    0FB6h
0x5C65AD: call    Tile_GetFloat
0x5C65B2: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x5C65B7: push    eax; matrixGroup
0x5C65B8: lea     eax, [esp+16Ch+a1]
0x5C65BF: push    eax; parameters
0x5C65C0: call    FaceGenHeadParameters_SetSliderValue; Sets a manual FaceGen slider by projecting its current value, transposing the authored basis, scaling by target-current, and adding the adjustment into the selected parameter matrix.
0x5C65C5: add     esp, 14h
0x5C65C8: push    offset FaceGenMatrix_Destruct; a5
0x5C65CD: push    offset FaceGenMatrix_Construct; a4
0x5C65D2: push    4; size
0x5C65D4: push    18h; a2
0x5C65D6: lea     ecx, [esp+16Ch+raceParameters]
0x5C65DD: push    ecx; a1
0x5C65DE: call    ArrayConstructor
0x5C65E3: lea     edx, [esp+15Ch+raceParameters]
0x5C65EA: push    edx; outAbsolute
0x5C65EB: mov     ecx, ebx; this
0x5C65ED: mov     byte ptr [esp+160h+var_4], 2
0x5C65F5: call    TESNPC_BuildAbsoluteFaceGenParameters; Builds absolute FaceGen parameters by combining race base with active NPC delta. CORRECTION: bank selection uses base actor value 0x45 (vampirism), zero -> +0x108, nonzero -> +0x168; earlier sex-selected description was incorrect. Null race copies manager default parameters.
0x5C65FA: lea     eax, [esp+15Ch+outDelta]
0x5C65FE: push    eax; outDelta
0x5C65FF: lea     ecx, [esp+160h+a1]
0x5C6606: push    ecx; absoluteParameters
0x5C6607: lea     edx, [esp+164h+raceParameters]
0x5C660E: push    edx; raceParameters
0x5C660F: call    FaceGenHeadParameters_ComputeRaceDelta; Computes the NPC-persisted delta = adjusted absolute parameters - race base for each active matrix. Prettier Faces 1.19.7 audit: curation must score actual post-projection race-relative coefficients. Applying soft compression again only to score/history (without applying it to output) understates real tails/spikes. Candidate capture limits once; scoring now measures the resulting coefficients directly.
0x5C6614: fldz
0x5C6616: add     esp, 8
0x5C6619: fstp    [esp+160h+a3]; maximumRms
0x5C661C: push    0; specialSecondBankMode
0x5C661E: mov     ecx, ebx; this
0x5C6620: call    TESNPC_GetActiveFaceGenDeltaParameters; CORRECTION: chooses inline FaceGen delta by GetAViBase(0x45), NOT sex. Vtable 0xA53DD4+0x128 -> TESNPC_GetAViBase 0x5232D0. Zero vampirism selects NPC+0x108, nonzero selects +0x168. Both are four 0x18-byte matrices. Earlier sex-specific naming was wrong; sex bit at NPC+0x28 is separate.
0x5C6625: push    eax; outParameters
0x5C6626: mov     ecx, ebx; this
0x5C6628: call    TESNPC_GetActiveFaceGenDeltaParameters; CORRECTION: chooses inline FaceGen delta by GetAViBase(0x45), NOT sex. Vtable 0xA53DD4+0x128 -> TESNPC_GetAViBase 0x5232D0. Zero vampirism selects NPC+0x108, nonzero selects +0x168. Both are four 0x18-byte matrices. Earlier sex-specific naming was wrong; sex bit at NPC+0x28 is separate.
0x5C662D: push    eax; delta
0x5C662E: lea     eax, [esp+16Ch+outDelta]
0x5C6632: push    eax; base
0x5C6633: call    FaceGenHeadParameters_Combine; Four-matrix combine. Normal branch adds base+delta; optional positive maximumRms rescales using sqrt(sumSquares/rows), NOT sqrt(sumSquares/(rows*columns)). Equivalent to coefficient RMS only for columns=1. Special second-bank branch copies base matrices 2/3 rather than adding delta. No claim of malformed multi-column asset impact without callers/asset evidence.
0x5C6638: mov     ecx, [ebp+edi*4+94h]
0x5C663F: add     esp, 14h
0x5C6642: push    0FB6h
0x5C6647: call    Tile_GetFloat
0x5C664C: fcomp   dword ptr ds:0A2FAA8h
0x5C6652: fnstsw  ax
0x5C6654: test    ah, 44h
0x5C6657: jp      loc_5C67B9
0x5C665D: mov     ecx, ds:0B333C4h
0x5C6663: mov     edx, [ecx]
0x5C6665: mov     eax, [edx+130h]
0x5C666B: push    0
0x5C666D: call    eax
0x5C666F: mov     edi, eax
0x5C6671: test    edi, edi
0x5C6673: mov     [esp+15Ch+var_148], edi
0x5C6677: jz      loc_5C67B2
0x5C667D: mov     [esp+15Ch+var_140], 2
0x5C6685: jmp     short loc_5C6694
0x5C6687: jmp     short loc_5C6690
0x5C6690: mov     edi, [esp+15Ch+var_148]
0x5C6694: movzx   eax, word ptr [edi+0B6h]
0x5C669B: xor     esi, esi
0x5C669D: test    eax, eax
0x5C669F: mov     [esp+15Ch+sliderIndex], eax
0x5C66A3: mov     [esp+15Ch+var_144], esi
0x5C66A7: jbe     loc_5C6791
0x5C66AD: movzx   ecx, word ptr [edi+0B6h]
0x5C66B4: cmp     ecx, esi
0x5C66B6: jbe     loc_5C677C
0x5C66BC: mov     edx, [edi+0B0h]
0x5C66C2: mov     ecx, [edx+esi*4]
0x5C66C5: test    ecx, ecx
0x5C66C7: jz      loc_5C677C
0x5C66CD: mov     eax, [ecx]
0x5C66CF: mov     edx, [eax+10h]
0x5C66D2: call    edx
0x5C66D4: mov     ebp, eax
0x5C66D6: test    ebp, ebp
0x5C66D8: jz      loc_5C677C
0x5C66DE: mov     esi, [ebp+8]
0x5C66E1: mov     edi, offset aFacegenhair; "FaceGenHair"
0x5C66E6: mov     ecx, 0Ch
0x5C66EB: xor     eax, eax
0x5C66ED: repe cmpsb
0x5C66EF: jnz     short loc_5C670C
0x5C66F1: fld     dword ptr [ebx+1CCh]
0x5C66F7: push    ecx
0x5C66F8: fstp    [esp+160h+var_13C]
0x5C66FC: fld     [esp+160h+var_13C]
0x5C6700: fstp    [esp+160h+a3]; hairLength
0x5C6703: push    ebp; hairGeometry
0x5C6704: call    BSFaceGen_ApplyHairLengthMorph; Apply TESNPC+0x1CC hairLength to this FaceGenHair geometry.
0x5C6709: add     esp, 8
0x5C670C: push    ebp
0x5C670D: call    sub_550790
0x5C6712: mov     esi, eax
0x5C6714: add     esp, 4
0x5C6717: test    esi, esi
0x5C6719: jz      short loc_5C6774
0x5C671B: mov     edx, [esi]
0x5C671D: mov     eax, [edx+54h]
0x5C6720: mov     ecx, esi
0x5C6722: call    eax
0x5C6724: test    eax, eax
0x5C6726: jz      short loc_5C6774
0x5C6728: fld1
0x5C672A: mov     edx, [esi]
0x5C672C: mov     eax, [edx+54h]
0x5C672F: push    0; basePositions
0x5C6731: push    ecx
0x5C6732: fstp    [esp+164h+morphScale]; morphScale
0x5C6735: push    ebp; geometry
0x5C6736: lea     ecx, [esp+168h+outDelta]
0x5C673A: push    ecx; parameters
0x5C673B: mov     ecx, esi
0x5C673D: call    eax
0x5C673F: mov     ecx, eax; this
0x5C6741: call    BSFaceGenModel_ApplyEGMMorph; Native EGM lock defects, statically verified: early failures after stream acquisition can return false without unlock; failed acquisition can still continue via cached base-vertex branch then success unlocks preexisting stream. Preconditions matter; runtime/shipped-asset reachability not established. IDA range +0x944 matches deployed EXE hash 33bcefd2c3f77a074957c9a8a22b445211c7ee83f533fcf8f6cfca843cd4bde0. PF guards source versions 1.19.11, but local PF DLL removed 2026-10-01 at user request. OCO LoadGame root cause remains unresolved.
0x5C6746: mov     esi, [ebp+8]
0x5C6749: mov     edi, offset aFacegenhair; "FaceGenHair"
0x5C674E: mov     ecx, 0Ch
0x5C6753: xor     edx, edx
0x5C6755: repe cmpsb
0x5C6757: jnz     short loc_5C6774
0x5C6759: fld     dword ptr [ebx+1CCh]
0x5C675F: push    ecx
0x5C6760: fstp    [esp+160h+var_13C]
0x5C6764: fld     [esp+160h+var_13C]
0x5C6768: fstp    [esp+160h+a3]; hairLength
0x5C676B: push    ebp; hairGeometry
0x5C676C: call    BSFaceGen_ApplyHairLengthMorph; Apply TESNPC+0x1CC hairLength to the alternate FaceGenHair geometry.
0x5C6771: add     esp, 8
0x5C6774: mov     edi, [esp+15Ch+var_148]
0x5C6778: mov     esi, [esp+15Ch+var_144]
0x5C677C: add     esi, 1
0x5C677F: cmp     esi, [esp+15Ch+sliderIndex]
0x5C6783: mov     [esp+15Ch+var_144], esi
0x5C6787: jb      loc_5C66AD
0x5C678D: mov     ebp, [esp+15Ch+var_130]
0x5C6791: mov     ecx, ds:0B333C4h
0x5C6797: mov     eax, [ecx]
0x5C6799: mov     edx, [eax+134h]
0x5C679F: push    0; a3
0x5C67A1: call    edx
0x5C67A3: sub     [esp+15Ch+var_140], 1
0x5C67A8: mov     [esp+15Ch+var_148], eax
0x5C67AC: jnz     loc_5C6690
0x5C67B2: mov     edi, [esp+15Ch+arg_0]
0x5C67B9: mov     esi, [ebp+edi*4+94h]
0x5C67C0: push    0FAEh
0x5C67C5: mov     ecx, esi
0x5C67C7: call    Tile_GetFloat
0x5C67CC: push    ecx
0x5C67CD: fstp    [esp+160h+a3]; value
0x5C67D0: push    0FB8h; propertyCode
0x5C67D5: mov     ecx, esi; this
0x5C67D7: call    Tile_SetFloat; Set or create a numeric Tile property. A missing property is handled, but a null Tile is dereferenced by Tile_GetPropertyByCode_.
0x5C67DC: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x5C67E1: push    4; int
0x5C67E3: push    18h; unsigned int
0x5C67E5: lea     eax, [esp+168h+raceParameters]
0x5C67EC: push    eax; void *
0x5C67ED: mov     byte ptr [esp+16Ch+var_4], 1
0x5C67F5: call    $LN21
0x5C67FA: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x5C67FF: push    4; int
0x5C6801: push    18h; unsigned int
0x5C6803: lea     ecx, [esp+168h+outDelta]
0x5C6807: push    ecx; void *
0x5C6808: mov     byte ptr [esp+16Ch+var_4], 0
0x5C6810: call    $LN21
0x5C6815: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x5C681A: push    4; int
0x5C681C: push    18h; unsigned int
0x5C681E: lea     edx, [esp+168h+a1]
0x5C6825: push    edx; void *
0x5C6826: mov     [esp+16Ch+var_4], 0FFFFFFFFh
0x5C6831: call    $LN21
0x5C6836: mov     ecx, [esp+15Ch+var_C]
0x5C683D: mov     large fs:0, ecx
0x5C6844: pop     ecx
0x5C6845: pop     edi
0x5C6846: pop     esi
0x5C6847: pop     ebp
0x5C6848: pop     ebx
0x5C6849: add     esp, 148h
0x5C684F: retn    4
0x9C13D0: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x9C13D5: push    4; int
0x9C13D7: push    18h; unsigned int
0x9C13D9: lea     eax, [ebp-0CCh]
0x9C13DF: push    eax; void *
0x9C13E0: call    $LN21
0x9C13E5: retn
0x9C13E6: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x9C13EB: push    4; int
0x9C13ED: push    18h; unsigned int
0x9C13EF: lea     eax, [ebp-12Ch]
0x9C13F5: push    eax; void *
0x9C13F6: call    $LN21
0x9C13FB: retn
0x9C13FC: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x9C1401: push    4; int
0x9C1403: push    18h; unsigned int
0x9C1405: lea     eax, [ebp-6Ch]
0x9C1408: push    eax; void *
0x9C1409: call    $LN21
0x9C140E: retn
0x9C140F: mov     edx, [esp+arg_4]
0x9C1413: lea     eax, [edx-14Ch]
0x9C1419: mov     ecx, [edx-150h]
0x9C141F: xor     ecx, eax
0x9C1421: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C1426: mov     eax, offset stru_AEA4AC
0x9C142B: jmp     ___CxxFrameHandler3
