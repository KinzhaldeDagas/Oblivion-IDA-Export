0x527860: push    0FFFFFFFFh
0x527862: push    offset TESNPC_SetFaceGenAge_SEH
0x527867: mov     eax, large fs:0
0x52786D: push    eax
0x52786E: sub     esp, 134h
0x527874: push    ebx
0x527875: push    ebp
0x527876: push    esi
0x527877: push    edi
0x527878: mov     eax, ds:0B30AACh
0x52787D: xor     eax, esp
0x52787F: push    eax
0x527880: lea     eax, [esp+154h+var_C]
0x527887: mov     large fs:0, eax
0x52788D: mov     ebx, ecx
0x52788F: push    offset FaceGenMatrix_Destruct; a5
0x527894: push    offset FaceGenMatrix_Construct; a4
0x527899: push    4; size
0x52789B: push    18h; a2
0x52789D: lea     eax, [esp+164h+a1]
0x5278A1: push    eax; a1
0x5278A2: call    ArrayConstructor
0x5278A7: push    offset FaceGenMatrix_Destruct; a5
0x5278AC: push    offset FaceGenMatrix_Construct; a4
0x5278B1: push    4; size
0x5278B3: push    18h; a2
0x5278B5: lea     ecx, [esp+164h+outDelta]
0x5278BC: push    ecx; a1
0x5278BD: mov     [esp+168h+var_4], 0
0x5278C8: call    ArrayConstructor
0x5278CD: mov     edx, [ebx]
0x5278CF: mov     eax, [edx+128h]
0x5278D5: push    45h ; 'E'
0x5278D7: mov     ecx, ebx
0x5278D9: mov     byte ptr [esp+158h+var_4], 1
0x5278E1: call    eax
0x5278E3: test    eax, eax
0x5278E5: lea     ecx, [ebx+168h]
0x5278EB: jnz     short loc_5278F3
0x5278ED: lea     ecx, [ebx+108h]
0x5278F3: fldz
0x5278F5: mov     eax, [ebx+0E8h]
0x5278FB: push    ecx
0x5278FC: fstp    [esp+158h+value]; maximumRms
0x5278FF: push    0; specialSecondBankMode
0x527901: lea     edx, [esp+15Ch+a1]
0x527905: push    edx; outParameters
0x527906: push    ecx; delta
0x527907: add     eax, 29Ch
0x52790C: push    eax; base
0x52790D: call    FaceGenHeadParameters_Combine; Four-matrix combine. Normal branch adds base+delta; optional positive maximumRms rescales using sqrt(sumSquares/rows), NOT sqrt(sumSquares/(rows*columns)). Equivalent to coefficient RMS only for columns=1. Special second-bank branch copies base matrices 2/3 rather than adding delta. No claim of malformed multi-column asset impact without callers/asset evidence.
0x527912: push    0; matrixChannel
0x527914: lea     eax, [esp+16Ch+a1]
0x527918: push    0; controlIndex
0x52791A: push    eax; parameters
0x52791B: call    FaceGenHeadParameters_GetControlValue; Fan-0 control projection wrapper. matrixChannel 0 projects FaceGen matrix 0; matrixChannel 1 projects FaceGen matrix 2, not matrix 1.
0x527920: fstp    [esp+174h+var_140]
0x527924: push    1; matrixChannel
0x527926: lea     ecx, [esp+178h+a1]
0x52792A: push    0; controlIndex
0x52792C: push    ecx; parameters
0x52792D: call    FaceGenHeadParameters_GetControlValue; Fan-0 control projection wrapper. matrixChannel 0 projects FaceGen matrix 0; matrixChannel 1 projects FaceGen matrix 2, not matrix 1.
0x527932: fstp    [esp+180h+var_138]
0x527936: fild    [esp+180h+arg_0]
0x52793D: add     esp, 2Ch
0x527940: fstp    [esp+154h+var_13C]
0x527944: fld     [esp+154h+var_140]
0x527948: fld     [esp+154h+var_13C]
0x52794C: fld     st
0x52794E: fsubp   st(2), st
0x527950: fxch    st(1)
0x527952: fsubr   [esp+154h+var_138]
0x527956: fstp    [esp+154h+var_140]
0x52795A: fld     qword ptr ds:0A492F0h
0x527960: fcom    st(1)
0x527962: fnstsw  ax
0x527964: fld     dword ptr ds:0A468FCh
0x52796A: test    ah, 5
0x52796D: fld     dword ptr ds:0A47800h
0x527973: jp      short loc_52797E
0x527975: fcom    st(3)
0x527977: fnstsw  ax
0x527979: test    ah, 41h
0x52797C: jnz     short loc_5279C6
0x52797E: fxch    st(3)
0x527980: fcom    st(2)
0x527982: fnstsw  ax
0x527984: test    ah, 41h
0x527987: jz      short loc_527993
0x527989: fstp    st
0x52798B: fst     [esp+154h+var_13C]
0x52798F: fld     [esp+154h+var_13C]
0x527993: fxch    st(1)
0x527995: fxch    st(3)
0x527997: fxch    st(1)
0x527999: fld     [esp+154h+var_140]
0x52799D: fcom    st(3)
0x52799F: fnstsw  ax
0x5279A1: test    ah, 41h
0x5279A4: jnz     short loc_5279AF
0x5279A6: fcom    st(2)
0x5279A8: fnstsw  ax
0x5279AA: test    ah, 5
0x5279AD: jp      short loc_5279D4
0x5279AF: fstp    st(2)
0x5279B1: fxch    st(1)
0x5279B3: fcomp   st(2)
0x5279B5: fnstsw  ax
0x5279B7: fstp    st(1)
0x5279B9: test    ah, 41h
0x5279BC: jz      short loc_5279E2
0x5279BE: fxch    st(1)
0x5279C0: fstp    [esp+154h+var_140]
0x5279C4: jmp     short loc_5279E4
0x5279C6: fstp    st(3)
0x5279C8: fxch    st(2)
0x5279CA: fst     [esp+154h+var_13C]
0x5279CE: fld     [esp+154h+var_13C]
0x5279D2: jmp     short loc_527999
0x5279D4: fstp    st(3)
0x5279D6: fstp    st(2)
0x5279D8: fstp    st(2)
0x5279DA: fxch    st(1)
0x5279DC: fstp    [esp+154h+var_140]
0x5279E0: jmp     short loc_5279E4
0x5279E2: fstp    st(1)
0x5279E4: push    ecx
0x5279E5: fstp    [esp+158h+value]; value
0x5279E8: push    0; matrixChannel
0x5279EA: lea     edx, [esp+15Ch+a1]
0x5279EE: push    0; controlIndex
0x5279F0: push    edx; parameters
0x5279F1: call    FaceGenHeadParameters_SetControlValue; Set one fan-0 control while preserving its paired control. matrixChannel 0 updates matrix 0; matrixChannel 1 updates matrix 2 through the authored FanControls bases.
0x5279F6: fld     [esp+164h+var_140]
0x5279FA: add     esp, 0Ch
0x5279FD: fstp    [esp+158h+value]; value
0x527A00: push    1; matrixChannel
0x527A02: lea     eax, [esp+15Ch+a1]
0x527A06: push    0; controlIndex
0x527A08: push    eax; parameters
0x527A09: call    FaceGenHeadParameters_SetControlValue; Set one fan-0 control while preserving its paired control. matrixChannel 0 updates matrix 0; matrixChannel 1 updates matrix 2 through the authored FanControls bases.
0x527A0E: lea     ecx, [esp+164h+outDelta]
0x527A15: push    ecx; parameters
0x527A16: call    FaceGenHeadParameters_Initialize; Standard FaceGenHeadParameters dimensions: matrix0 50x1, matrix1 30x1, matrix2 50x1, matrix3 untouched. Thus standard initialized active coefficient count is 130, under PF supported 256 cap. Existing elements survive ResizeFill as documented; this routine is not a full zero reset.
0x527A1B: add     esp, 14h
0x527A1E: push    offset FaceGenMatrix_Destruct; a5
0x527A23: push    offset FaceGenMatrix_Construct; a4
0x527A28: push    4; size
0x527A2A: push    18h; a2
0x527A2C: lea     edx, [esp+164h+raceParameters]
0x527A33: push    edx; a1
0x527A34: call    ArrayConstructor
0x527A39: lea     eax, [esp+154h+raceParameters]
0x527A40: push    eax; outAbsolute
0x527A41: mov     ecx, ebx; this
0x527A43: mov     byte ptr [esp+158h+var_4], 2
0x527A4B: call    TESNPC_BuildAbsoluteFaceGenParameters; Builds absolute FaceGen parameters by combining race base with active NPC delta. CORRECTION: bank selection uses base actor value 0x45 (vampirism), zero -> +0x108, nonzero -> +0x168; earlier sex-selected description was incorrect. Null race copies manager default parameters.
0x527A50: lea     ecx, [esp+154h+outDelta]
0x527A57: push    ecx; outDelta
0x527A58: lea     edx, [esp+158h+a1]
0x527A5C: push    edx; absoluteParameters
0x527A5D: lea     eax, [esp+15Ch+raceParameters]
0x527A64: push    eax; raceParameters
0x527A65: call    FaceGenHeadParameters_ComputeRaceDelta; Computes the NPC-persisted delta = adjusted absolute parameters - race base for each active matrix. Prettier Faces 1.19.7 audit: curation must score actual post-projection race-relative coefficients. Applying soft compression again only to score/history (without applying it to output) understates real tails/spikes. Candidate capture limits once; scoring now measures the resulting coefficients directly.
0x527A6A: mov     edx, [ebx]
0x527A6C: mov     eax, [edx+128h]
0x527A72: add     esp, 0Ch
0x527A75: push    45h ; 'E'
0x527A77: mov     ecx, ebx
0x527A79: call    eax
0x527A7B: test    eax, eax
0x527A7D: lea     esi, [ebx+168h]
0x527A83: jnz     short loc_527A8B
0x527A85: lea     esi, [ebx+108h]
0x527A8B: mov     edx, [ebx]
0x527A8D: mov     eax, [edx+128h]
0x527A93: push    45h ; 'E'
0x527A95: mov     ecx, ebx
0x527A97: call    eax
0x527A99: test    eax, eax
0x527A9B: lea     eax, [ebx+168h]
0x527AA1: jnz     short loc_527AA9
0x527AA3: lea     eax, [ebx+108h]
0x527AA9: fldz
0x527AAB: push    ecx
0x527AAC: fstp    [esp+158h+value]; maximumRms
0x527AAF: lea     ecx, [esp+158h+outDelta]
0x527AB6: push    0; specialSecondBankMode
0x527AB8: push    esi; outParameters
0x527AB9: push    eax; delta
0x527ABA: push    ecx; base
0x527ABB: call    FaceGenHeadParameters_Combine; Four-matrix combine. Normal branch adds base+delta; optional positive maximumRms rescales using sqrt(sumSquares/rows), NOT sqrt(sumSquares/(rows*columns)). Equivalent to coefficient RMS only for columns=1. Special second-bank branch copies base matrices 2/3 rather than adding delta. No claim of malformed multi-column asset impact without callers/asset evidence.
0x527AC0: add     esp, 14h
0x527AC3: push    offset unk_B39C00; lpCriticalSection
0x527AC8: call    dword ptr ds:0A2806Ch
0x527ACE: call    dword ptr ds:0A2808Ch
0x527AD4: add     dword ptr ds:0B39C7Ch, 1
0x527ADB: mov     ds:0B39C78h, eax
0x527AE0: mov     eax, [ebx+1D4h]
0x527AE6: test    eax, eax
0x527AE8: mov     [esp+154h+var_13C], eax
0x527AEC: jz      loc_527BF2
0x527AF2: mov     [esp+154h+var_138], 2
0x527AFA: jmp     short loc_527B04
0x527B00: mov     eax, [esp+154h+var_13C]
0x527B04: test    eax, eax
0x527B06: jz      loc_527BE7
0x527B0C: movzx   ecx, word ptr [eax+0B6h]
0x527B13: xor     edi, edi
0x527B15: test    ecx, ecx
0x527B17: mov     [esp+154h+var_130], ecx
0x527B1B: mov     [esp+154h+var_140], edi
0x527B1F: jbe     loc_527BDD
0x527B25: jmp     short loc_527B34
0x527B27: jmp     short loc_527B30
0x527B30: mov     eax, [esp+154h+var_13C]
0x527B34: movzx   edx, word ptr [eax+0B6h]
0x527B3B: cmp     edx, edi
0x527B3D: jbe     loc_527BCC
0x527B43: mov     eax, [eax+0B0h]
0x527B49: mov     ecx, [eax+edi*4]
0x527B4C: test    ecx, ecx
0x527B4E: jz      short loc_527BCC
0x527B50: mov     edx, [ecx]
0x527B52: mov     eax, [edx+10h]
0x527B55: call    eax
0x527B57: mov     ebp, eax
0x527B59: test    ebp, ebp
0x527B5B: jz      short loc_527BCC
0x527B5D: push    ebp
0x527B5E: call    sub_550790
0x527B63: mov     esi, eax
0x527B65: add     esp, 4
0x527B68: test    esi, esi
0x527B6A: jz      short loc_527BCC
0x527B6C: mov     edx, [esi]
0x527B6E: mov     eax, [edx+54h]
0x527B71: mov     ecx, esi
0x527B73: call    eax
0x527B75: test    eax, eax
0x527B77: jz      short loc_527BCC
0x527B79: fld1
0x527B7B: mov     edx, [esi]
0x527B7D: mov     eax, [edx+54h]
0x527B80: push    0; basePositions
0x527B82: push    ecx
0x527B83: fstp    [esp+15Ch+morphScale]; morphScale
0x527B86: push    ebp; geometry
0x527B87: lea     ecx, [esp+160h+outDelta]
0x527B8E: push    ecx; parameters
0x527B8F: mov     ecx, esi
0x527B91: call    eax
0x527B93: mov     ecx, eax; this
0x527B95: call    BSFaceGenModel_ApplyEGMMorph; Native EGM lock defects, statically verified: early failures after stream acquisition can return false without unlock; failed acquisition can still continue via cached base-vertex branch then success unlocks preexisting stream. Preconditions matter; runtime/shipped-asset reachability not established. IDA range +0x944 matches deployed EXE hash 33bcefd2c3f77a074957c9a8a22b445211c7ee83f533fcf8f6cfca843cd4bde0. PF guards source versions 1.19.11, but local PF DLL removed 2026-10-01 at user request. OCO LoadGame root cause remains unresolved.
0x527B9A: mov     esi, [ebp+8]
0x527B9D: mov     edi, offset aFacegenhair; "FaceGenHair"
0x527BA2: mov     ecx, 0Ch
0x527BA7: xor     edx, edx
0x527BA9: repe cmpsb
0x527BAB: jnz     short loc_527BC8
0x527BAD: fld     dword ptr [ebx+1CCh]
0x527BB3: push    ecx
0x527BB4: fstp    [esp+158h+var_134]
0x527BB8: fld     [esp+158h+var_134]
0x527BBC: fstp    [esp+158h+value]; hairLength
0x527BBF: push    ebp; hairGeometry
0x527BC0: call    BSFaceGen_ApplyHairLengthMorph; After an age remorph rewrites FaceGenHair vertices, reapply the NPC's stored hairLength so the independent hair morph is preserved.
0x527BC5: add     esp, 8
0x527BC8: mov     edi, [esp+154h+var_140]
0x527BCC: add     edi, 1
0x527BCF: cmp     edi, [esp+154h+var_130]
0x527BD3: mov     [esp+154h+var_140], edi
0x527BD7: jb      loc_527B30
0x527BDD: mov     eax, [ebx+1D8h]
0x527BE3: mov     [esp+154h+var_13C], eax
0x527BE7: sub     [esp+154h+var_138], 1
0x527BEC: jnz     loc_527B00
0x527BF2: sub     dword ptr ds:0B39C7Ch, 1
0x527BF9: jnz     short loc_527C05
0x527BFB: mov     dword ptr ds:0B39C78h, 0
0x527C05: push    offset unk_B39C00; lpCriticalSection
0x527C0A: call    dword ptr ds:0A28074h
0x527C10: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x527C15: push    4; int
0x527C17: push    18h; unsigned int
0x527C19: lea     ecx, [esp+160h+raceParameters]
0x527C20: push    ecx; void *
0x527C21: mov     byte ptr [esp+164h+var_4], 1
0x527C29: call    $LN21
0x527C2E: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x527C33: push    4; int
0x527C35: push    18h; unsigned int
0x527C37: lea     edx, [esp+160h+outDelta]
0x527C3E: push    edx; void *
0x527C3F: mov     byte ptr [esp+164h+var_4], 0
0x527C47: call    $LN21
0x527C4C: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x527C51: push    4; int
0x527C53: push    18h; unsigned int
0x527C55: lea     eax, [esp+160h+a1]
0x527C59: push    eax; void *
0x527C5A: mov     [esp+164h+var_4], 0FFFFFFFFh
0x527C65: call    $LN21
0x527C6A: mov     ecx, dword ptr [esp+154h+var_C]
0x527C71: mov     large fs:0, ecx
0x527C78: pop     ecx
0x527C79: pop     edi
0x527C7A: pop     esi
0x527C7B: pop     ebp
0x527C7C: pop     ebx
0x527C7D: add     esp, 140h
0x527C83: retn    4
0x9B8210: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x9B8215: push    4; int
0x9B8217: push    18h; unsigned int
0x9B8219: lea     eax, [ebp-12Ch]
0x9B821F: push    eax; void *
0x9B8220: call    $LN21
0x9B8225: retn
0x9B8226: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x9B822B: push    4; int
0x9B822D: push    18h; unsigned int
0x9B822F: lea     eax, [ebp-0CCh]
0x9B8235: push    eax; void *
0x9B8236: call    $LN21
0x9B823B: retn
0x9B823C: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x9B8241: push    4; int
0x9B8243: push    18h; unsigned int
0x9B8245: lea     eax, [ebp-6Ch]
0x9B8248: push    eax; void *
0x9B8249: call    $LN21
0x9B824E: retn
0x9B824F: mov     edx, [esp+arg_4]
0x9B8253: lea     eax, [edx-144h]
0x9B8259: mov     ecx, [edx-148h]
0x9B825F: xor     ecx, eax
0x9B8261: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B8266: mov     eax, offset stru_AE2964
0x9B826B: jmp     ___CxxFrameHandler3
