0x529530: push    0FFFFFFFFh
0x529532: push    offset SEH_529530
0x529537: mov     eax, large fs:0
0x52953D: push    eax
0x52953E: sub     esp, 130h
0x529544: push    ebx
0x529545: push    ebp
0x529546: push    esi
0x529547: push    edi
0x529548: mov     eax, ds:0B30AACh
0x52954D: xor     eax, esp
0x52954F: push    eax
0x529550: lea     eax, [esp+150h+var_C]
0x529557: mov     large fs:0, eax
0x52955D: mov     esi, ecx
0x52955F: mov     ebx, ds:0B36308h
0x529565: test    ebx, ebx
0x529567: jz      loc_529725
0x52956D: lea     ebp, [esi+168h]
0x529573: push    ebp; parameters
0x529574: add     ebx, 29Ch
0x52957A: call    FaceGenHeadParameters_Initialize; Standard FaceGenHeadParameters dimensions: matrix0 50x1, matrix1 30x1, matrix2 50x1, matrix3 untouched. Thus standard initialized active coefficient count is 130, under PF supported 256 cap. Existing elements survive ResizeFill as documented; this routine is not a full zero reset.
0x52957F: fld     [esp+154h+arg_0]
0x529586: fldz
0x529588: add     esp, 4
0x52958B: fsub    st(1), st
0x52958D: xor     edi, edi
0x52958F: fsubr   qword ptr ds:0A309F0h
0x529595: fdivp   st(1), st
0x529597: fstp    [esp+150h+var_138]
0x52959B: jmp     short loc_5295A0
0x5295A0: push    edi; sliderIndex
0x5295A1: push    0; matrixChannel
0x5295A3: push    1; matrixGroup
0x5295A5: push    ebx; parameters
0x5295A6: call    FaceGenHeadParameters_GetSliderValue; Projects a manual FaceGen slider value by multiplying its authored basis row by the selected parameter matrix (matrix index = matrixChannel + 2*matrixGroup).
0x5295AB: fstp    [esp+160h+var_13C]
0x5295AF: fld     [esp+160h+var_13C]
0x5295B3: add     esp, 0Ch
0x5295B6: fldz
0x5295B8: fsub    st(1), st
0x5295BA: fxch    st(1)
0x5295BC: fmul    [esp+154h+var_138]
0x5295C0: faddp   st(1), st
0x5295C2: fstp    [esp+154h+var_13C]
0x5295C6: fld     [esp+154h+var_13C]
0x5295CA: fstp    [esp+154h+value]; value
0x5295CD: push    edi; sliderIndex
0x5295CE: push    0; matrixChannel
0x5295D0: push    1; matrixGroup
0x5295D2: push    ebp; parameters
0x5295D3: call    FaceGenHeadParameters_SetSliderValue; Sets a manual FaceGen slider by projecting its current value, transposing the authored basis, scaling by target-current, and adding the adjustment into the selected parameter matrix.
0x5295D8: add     edi, 1
0x5295DB: add     esp, 14h
0x5295DE: cmp     edi, 1Fh
0x5295E1: jl      short loc_5295A0
0x5295E3: push    offset FaceGenMatrix_Destruct; a5
0x5295E8: push    offset FaceGenMatrix_Construct; a4
0x5295ED: push    4; size
0x5295EF: push    18h; a2
0x5295F1: lea     eax, [esp+160h+a1]
0x5295F5: push    eax; a1
0x5295F6: call    ArrayConstructor
0x5295FB: lea     ecx, [esp+150h+a1]
0x5295FF: push    ecx; outAbsolute
0x529600: mov     ecx, esi; this
0x529602: mov     [esp+154h+var_4], 0
0x52960D: call    TESNPC_BuildAbsoluteFaceGenParameters; Builds absolute FaceGen parameters by combining race base with active NPC delta. CORRECTION: bank selection uses base actor value 0x45 (vampirism), zero -> +0x108, nonzero -> +0x168; earlier sex-selected description was incorrect. Null race copies manager default parameters.
0x529612: push    0; matrixChannel
0x529614: lea     edx, [esp+154h+a1]
0x529618: push    0; controlIndex
0x52961A: push    edx; parameters
0x52961B: call    FaceGenHeadParameters_GetControlValue; Fan-0 control projection wrapper. matrixChannel 0 projects FaceGen matrix 0; matrixChannel 1 projects FaceGen matrix 2, not matrix 1.
0x529620: fstp    [esp+15Ch+var_13C]
0x529624: fld     [esp+15Ch+arg_0]
0x52962B: add     esp, 0Ch
0x52962E: fdiv    qword ptr ds:0A309F0h
0x529634: fimul   dword ptr ds:0B362DCh
0x52963A: fadd    [esp+150h+var_13C]
0x52963E: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x529643: push    eax
0x529644: mov     ecx, esi
0x529646: call    TESNPC_SetFaceGenAge
0x52964B: lea     ecx, [esp+150h+parameters]; this
0x529652: call    FaceGenRenderState_Construct; Constructs a 0xC4 FaceGenRenderState. The first 0x60 bytes are FaceGenHeadParameters; appearance assets and four 0x10-byte pointer arrays follow.
0x529657: mov     ecx, [esi+0E8h]; this
0x52965D: lea     eax, [esp+150h+parameters]
0x529664: push    eax; outState
0x529665: push    esi; npc
0x529666: mov     byte ptr [esp+158h+var_4], 1
0x52966E: call    TESRace_BuildFaceGenRenderState; Builds the complete FaceGenRenderState from this race and an optional TESNPC. Resolves absolute coefficients, appearance selections, the nine head-part resources, texture overrides, race tint data, and fallback eyes.
0x529673: mov     eax, [esi+1D4h]
0x529679: lea     ecx, [esp+150h+parameters]
0x529680: push    ecx; state
0x529681: push    eax; faceNode
0x529682: call    BSFaceGen_ApplyHeadParametersToNode; Applies a complete FaceGenRenderState to a BSFaceGenNiNode: projects age, binds nine head-part resources, handles sex-specific parts, eyes and hair, then rebuilds property state and updates the node.
0x529687: mov     eax, [esi+1D8h]
0x52968D: lea     edx, [esp+158h+parameters]
0x529694: push    edx; state
0x529695: push    eax; faceNode
0x529696: call    BSFaceGen_ApplyHeadParametersToNode; Applies a complete FaceGenRenderState to a BSFaceGenNiNode: projects age, binds nine head-part resources, handles sex-specific parts, eyes and hair, then rebuilds property state and updates the node.
0x52969B: fldz
0x52969D: fcomp   [esp+160h+arg_0]
0x5296A4: add     esp, 10h
0x5296A7: fnstsw  ax
0x5296A9: test    ah, 5
0x5296AC: jp      short loc_5296BE
0x5296AE: mov     eax, ds:0B36308h
0x5296B3: add     eax, 0A8h ; '¨'
0x5296B8: jz      short loc_5296CC
0x5296BA: mov     eax, [eax]
0x5296BC: jmp     short loc_5296C4
0x5296BE: mov     eax, [esi+1D0h]
0x5296C4: push    eax
0x5296C5: mov     ecx, esi
0x5296C7: call    sub_5263B0
0x5296CC: mov     esi, [esi+1D4h]
0x5296D2: test    esi, esi
0x5296D4: jz      short loc_5296F3
0x5296D6: mov     eax, [esi]
0x5296D8: mov     edx, [eax+9Ch]
0x5296DE: mov     ecx, esi
0x5296E0: call    edx
0x5296E2: test    eax, eax
0x5296E4: jz      short loc_5296F3
0x5296E6: fld     [esp+150h+arg_0]
0x5296ED: fstp    dword ptr [eax+1DCh]
0x5296F3: lea     ecx, [esp+150h+parameters]; this
0x5296FA: mov     byte ptr [esp+150h+var_4], 0
0x529702: call    FaceGenRenderState_Destruct; Destroys FaceGenRenderState: releases texture-override smart pointers, destroys the four pointer arrays, then destroys the four embedded FaceGen coefficient matrices.
0x529707: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x52970C: push    4; int
0x52970E: push    18h; unsigned int
0x529710: lea     eax, [esp+15Ch+a1]
0x529714: push    eax; void *
0x529715: mov     [esp+160h+var_4], 0FFFFFFFFh
0x529720: call    $LN21
0x529725: mov     ecx, [esp+150h+var_C]
0x52972C: mov     large fs:0, ecx
0x529733: pop     ecx
0x529734: pop     edi
0x529735: pop     esi
0x529736: pop     ebp
0x529737: pop     ebx
0x529738: add     esp, 13Ch
0x52973E: retn    4
0x9B8380: push    offset FaceGenMatrix_Destruct; void (__thiscall *)(void *)
0x9B8385: push    4; int
0x9B8387: push    18h; unsigned int
0x9B8389: lea     eax, [ebp-130h]
0x9B838F: push    eax; void *
0x9B8390: call    $LN21
0x9B8395: retn
0x9B8396: lea     ecx, [ebp-0D0h]; this
0x9B839C: jmp     FaceGenRenderState_Destruct; Destroys FaceGenRenderState: releases texture-override smart pointers, destroys the four pointer arrays, then destroys the four embedded FaceGen coefficient matrices.
0x9B83A1: mov     edx, [esp+arg_4]
0x9B83A5: lea     eax, [edx-140h]
0x9B83AB: mov     ecx, [edx-144h]
0x9B83B1: xor     ecx, eax
0x9B83B3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B83B8: mov     eax, offset stru_AE2A78
0x9B83BD: jmp     ___CxxFrameHandler3
