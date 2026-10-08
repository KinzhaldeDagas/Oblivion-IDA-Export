0x7925B0: push    0FFFFFFFFh; 2026-05-19 captured 4.x load pass: recursive branch compute still consumes compact stock SIdvBranchInfo only; no root-support branch parameter or 40007 supplemental-root consumer observed. Captured 23002/23003-in-40007 handling is OBSE sidecar grammar only.
0x7925B2: push    offset SEH_7925B0
0x7925B7: mov     eax, large fs:0
0x7925BD: push    eax
0x7925BE: sub     esp, 0E0h
0x7925C4: push    ebx
0x7925C5: push    ebp
0x7925C6: push    esi
0x7925C7: push    edi
0x7925C8: mov     eax, ds:0B30AACh
0x7925CD: xor     eax, esp
0x7925CF: push    eax
0x7925D0: lea     eax, [esp+100h+var_C]
0x7925D7: mov     large fs:0, eax
0x7925DD: mov     ebp, ecx
0x7925DF: mov     [esp+100h+var_A4], ebp
0x7925E3: mov     ecx, ds:0B429C4h; this
0x7925E9: call    OB_CFrondEngine_Enabled_010201A0; SpeedTree decode: CFrondEngine::Enabled. Returns byte at +0x3C.
0x7925EE: test    al, al
0x7925F0: mov     esi, [esp+100h+a5]
0x7925F7: jz      short loc_792610
0x7925F9: mov     ecx, ds:0B429C4h; this
0x7925FF: call    Shared_GetDwordAtOffset38; Linker-folded Oblivion accessor: returns the dword at this+0x38. In TESClass auto-stat calls this is primaryAttribute1; other call contexts may represent unrelated fields.
0x792604: cmp     esi, eax
0x792606: jl      short loc_792610
0x792608: mov     bl, 1
0x79260A: mov     [esp+100h+var_E5], bl
0x79260E: jmp     short loc_792619
0x792610: mov     [esp+100h+var_E5], 0
0x792615: mov     bl, [esp+100h+var_E5]
0x792619: cmp     esi, ds:0B2B708h
0x79261F: jnz     short loc_792635
0x792621: mov     eax, ds:0B429C0h
0x792626: mov     [esp+100h+a14], eax
0x79262D: add     eax, 1
0x792630: mov     ds:0B429C0h, eax
0x792635: test    esi, esi
0x792637: jnz     short loc_792640
0x792639: mov     ecx, ebp
0x79263B: call    OB_CBranch_BuildBlossomVectors_010201A0; Builds global blossom and non-blossom leaf-map index vectors from compact 0x54 SIdvLeafTexture records.
0x792640: mov     ecx, ds:0B429E0h
0x792646: test    ecx, ecx
0x792648: jz      short loc_792658
0x79264A: mov     eax, ds:0B429E4h
0x79264F: sub     eax, ecx
0x792651: sar     eax, 2
0x792654: cmp     esi, eax
0x792656: jb      short loc_792663
0x792658: call    __invalid_parameter_noinfo
0x79265D: mov     ecx, ds:0B429E0h
0x792663: test    bl, bl
0x792665: mov     esi, [ecx+esi*4]
0x792668: mov     [esp+100h+var_A8], esi
0x79266C: jnz     short loc_79267F
0x79266E: mov     eax, [esp+100h+geometry]
0x792675: movzx   eax, word ptr [eax+22h]
0x792679: movzx   ecx, ax
0x79267C: mov     [ebp+24h], ecx
0x79267F: test    bl, bl
0x792681: fld     [esp+100h+a7]
0x792688: fstp    dword ptr [ebp+4]
0x79268B: jnz     short loc_792695
0x79268D: push    esi
0x79268E: mov     ecx, ebp
0x792690: call    OB_CBranch_ComputeFlareEntries_010201A0; CBranch::Compute uses compact SIdvBranchInfo pointer selected from the static branch-info vector; flare setup consumes fields +0x28..+0x4C.
0x792695: mov     ecx, [esi+60h]; this
0x792698: fld     [esp+100h+a7]
0x79269F: push    ecx
0x7926A0: fstp    [esp+104h+childDistanceAlongBranch]; percent
0x7926A3: call    OB_stBezierSpline_Evaluate_010201A0; Oblivion compact stBezierSpline Evaluate: requires the 500-entry vector at +0x3C, samples/interpolates its y values, maps normalized output through min@0x00/max@0x04, then adds uniform +/- variance@0x08. This executable field order overrides the differing RT4.1 header declaration order.
0x7926A8: fmul    [esp+100h+a4]
0x7926AF: sub     esp, 8
0x7926B2: mov     ecx, offset stru_B429C9; this
0x7926B7: fstp    [esp+108h+var_98]; CBranch::Compute evaluates SIdvBranchInfo length spline pointer at +0x60.
0x7926BB: fld     dword ptr ds:0A3F420h
0x7926C1: fstp    [esp+108h+childDistanceAlongBranch]; maxValue
0x7926C5: fld     dword ptr ds:0A8C694h
0x7926CB: fstp    [esp+108h+incomingWindWeight+4]; minValue
0x7926CE: call    OB_stRandom_GetUniform_010201A0; Oblivion stRandom::GetUniform. Returns minValue + (maxValue - minValue) * SIdvRandomImpl::m_cUniform.Next(). Used throughout spline, branch, frond, tree, leaf-LOD, and seed generation paths.
0x7926D3: mov     ecx, [esi+6Ch]; this
0x7926D6: fstp    [esp+100h+var_D0]
0x7926DA: fld     [esp+100h+a7]
0x7926E1: push    ecx
0x7926E2: fstp    [esp+104h+childDistanceAlongBranch]; percent
0x7926E5: call    OB_stBezierSpline_Evaluate_010201A0; Oblivion compact stBezierSpline Evaluate: requires the 500-entry vector at +0x3C, samples/interpolates its y values, maps normalized output through min@0x00/max@0x04, then adds uniform +/- variance@0x08. This executable field order overrides the differing RT4.1 header declaration order.
0x7926EA: mov     ecx, [esi+54h]; this
0x7926ED: fstp    [esp+100h+var_CC]
0x7926F1: fld     [esp+100h+a7]
0x7926F8: push    ecx
0x7926F9: fstp    [esp+104h+childDistanceAlongBranch]; percent
0x7926FC: call    OB_stBezierSpline_Evaluate_010201A0; Oblivion compact stBezierSpline Evaluate: requires the 500-entry vector at +0x3C, samples/interpolates its y values, maps normalized output through min@0x00/max@0x04, then adds uniform +/- variance@0x08. This executable field order overrides the differing RT4.1 header declaration order.
0x792701: mov     ecx, [esi+64h]; this
0x792704: fstp    [esp+100h+var_7C]
0x79270B: fld     [esp+100h+a7]
0x792712: push    ecx
0x792713: fstp    [esp+104h+childDistanceAlongBranch]; percent
0x792716: call    OB_stBezierSpline_Evaluate_010201A0; Oblivion compact stBezierSpline Evaluate: requires the 500-entry vector at +0x3C, samples/interpolates its y values, maps normalized output through min@0x00/max@0x04, then adds uniform +/- variance@0x08. This executable field order overrides the differing RT4.1 header declaration order.
0x79271B: fmul    [esp+100h+a4]
0x792722: mov     ecx, [esi+58h]; this
0x792725: push    ecx
0x792726: fstp    [esp+104h+var_94]
0x79272A: fld     [esp+104h+a7]
0x792731: fstp    [esp+104h+childDistanceAlongBranch]; percent
0x792734: call    OB_stBezierSpline_Evaluate_010201A0; Oblivion compact stBezierSpline Evaluate: requires the 500-entry vector at +0x3C, samples/interpolates its y values, maps normalized output through min@0x00/max@0x04, then adds uniform +/- variance@0x08. This executable field order overrides the differing RT4.1 header declaration order.
0x792739: mov     dx, [esi]
0x79273C: fstp    [esp+100h+var_80]
0x792743: mov     [ebp+20h], dx
0x792747: cmp     byte ptr [esi+1Eh], 0
0x79274B: jz      short loc_792760
0x79274D: fld     [esp+100h+var_D0]
0x792751: fadd    qword ptr ds:0A2FAA0h
0x792757: fadd    [esp+100h+a7]
0x79275E: jmp     short loc_792762
0x792760: fldz
0x792762: mov     eax, [ebp+0Ch]
0x792765: fstp    [esp+100h+var_90]
0x792769: test    eax, eax
0x79276B: jz      short loc_792782
0x79276D: mov     ecx, [ebp+10h]
0x792770: sub     ecx, eax
0x792772: mov     eax, 2AAAAAABh
0x792777: imul    ecx
0x792779: sar     edx, 1
0x79277B: mov     eax, edx
0x79277D: shr     eax, 1Fh
0x792780: add     eax, edx
0x792782: mov     ecx, [esp+100h+a3]
0x792789: fld     dword ptr [esi+20h]
0x79278C: add     ecx, eax
0x79278E: test    cl, 1
0x792791: jz      short loc_792795
0x792793: fchs
0x792795: cmp     byte ptr [esi+1Dh], 0
0x792799: fstp    [esp+100h+var_DC]
0x79279D: jz      short loc_7927A4
0x79279F: fld     dword ptr [esi+18h]
0x7927A2: jmp     short loc_7927B2
0x7927A4: fld     [esp+100h+var_98]
0x7927A8: fdiv    [esp+100h+a4]
0x7927AF: fmul    dword ptr [esi+18h]
0x7927B2: cmp     byte ptr [esi+1Ch], 0
0x7927B6: fld     dword ptr [esi+14h]
0x7927B9: jnz     short loc_7927C5
0x7927BB: fmul    [esp+100h+var_94]
0x7927BF: fmul    dword ptr ds:0B2B714h
0x7927C5: mov     ecx, [esi+68h]; this
0x7927C8: fstp    [esp+100h+branchBasePosition]
0x7927CC: push    ecx
0x7927CD: fstp    [esp+104h+var_88]
0x7927D1: fld     [esp+104h+var_DC]
0x7927D5: fstp    [esp+104h+var_84]
0x7927DC: fldz
0x7927DE: fstp    [esp+104h+childDistanceAlongBranch]; percent
0x7927E1: call    OB_stBezierSpline_Evaluate_010201A0; Oblivion compact stBezierSpline Evaluate: requires the 500-entry vector at +0x3C, samples/interpolates its y values, maps normalized output through min@0x00/max@0x04, then adds uniform +/- variance@0x08. This executable field order overrides the differing RT4.1 header declaration order.
0x7927E6: fmul    [esp+100h+var_94]
0x7927EA: fstp    [esp+100h+var_A0]
0x7927EE: fldz
0x7927F0: fld     [esp+100h+a15]
0x7927F7: fcom    st(1)
0x7927F9: fnstsw  ax
0x7927FB: fstp    st(1)
0x7927FD: test    ah, 41h
0x792800: jnz     short loc_792823
0x792802: fmul    qword ptr ds:0A563D8h
0x792808: fld     [esp+100h+var_A0]
0x79280C: fcomp   st(1)
0x79280E: fnstsw  ax
0x792810: test    ah, 41h
0x792813: jnz     short loc_792823
0x792815: fstp    [esp+100h+var_A0]
0x792819: fld     [esp+100h+var_A0]
0x79281D: fstp    [esp+100h+var_94]
0x792821: jmp     short loc_792825
0x792823: fstp    st
0x792825: mov     edi, [esi+4];
0x792828: add     edi, 1
0x79282B: cmp     edi, 2
0x79282E: mov     [ebp+1Ch], edi
0x792831: jl      loc_7939D9
0x792837: xor     ecx, ecx
0x792839: mov     eax, edi
0x79283B: mov     edx, 48h ; 'H'
0x792840: mul     edx
0x792842: seto    cl
0x792845: neg     ecx
0x792847: or      ecx, eax
0x792849: push    ecx; Size
0x79284A: call    FormHeapAlloc
0x79284F: mov     ebx, eax
0x792851: add     esp, 4
0x792854: mov     [esp+100h+var_E0], ebx
0x792858: test    ebx, ebx
0x79285A: mov     [esp+100h+var_4], 0
0x792865: jz      short loc_792877
0x792867: push    offset OB_SIdvBranchVertex_ctor_010201A0; Stock compact SIdvBranchVertex ctor: 0x48-byte element; zeros direction/position, initializes +0x1C..+0x3C 3x3 transform to identity. Radius/running length/wind are filled by CBranch::Compute before use.
0x79286C: push    edi
0x79286D: push    48h ; 'H'
0x79286F: push    ebx
0x792870: call    sub_401080; CBranch::Compute allocates branch vertex array with stock stride 0x48 and constructor 0x78F3E0; this proves Oblivion does not use the larger later-4.1 SIdvBranchVertex tail.
0x792875: jmp     short loc_792879
0x792877: xor     ebx, ebx
0x792879: cmp     [esp+100h+var_E5], 0
0x79287E: mov     [esp+100h+var_4], 0FFFFFFFFh
0x792889: mov     [ebp+18h], ebx
0x79288C: jnz     loc_792984;
0x792892: mov     ax, [ebp+1Ch]
0x792896: mov     cx, [esi]
0x792899: add     cx, 2
0x79289D: sub     ax, 1
0x7928A1: imul    ax, cx
0x7928A5: add     ax, ax
0x7928A8: movzx   eax, ax
0x7928AB: mov     dword ptr [esp+100h+stripLength], eax
0x7928AF: movzx   eax, ax
0x7928B2: xor     ecx, ecx
0x7928B4: mov     edx, 2
0x7928B9: mul     edx
0x7928BB: seto    cl
0x7928BE: neg     ecx
0x7928C0: or      ecx, eax
0x7928C2: push    ecx; Size
0x7928C3: call    FormHeapAlloc
0x7928C8: mov     ecx, [esp+104h+geometry]
0x7928CF: movzx   edx, word ptr [ecx+22h]
0x7928D3: mov     [esp+104h+var_DC], edx
0x7928D7: mov     edx, [ebp+1Ch]
0x7928DA: xor     edi, edi
0x7928DC: sub     edx, 1
0x7928DF: add     esp, 4
0x7928E2: xor     ecx, ecx
0x7928E4: test    edx, edx
0x7928E6: mov     [esp+100h+var_B4], edi
0x7928EA: jle     short loc_792969
0x7928EC: mov     edx, [esi]
0x7928EE: add     edx, 1
0x7928F1: xor     ebx, ebx
0x7928F3: test    edx, edx
0x7928F5: mov     [esp+100h+var_E4], edi
0x7928F9: jle     short loc_79292C
0x7928FB: mov     edx, [esp+100h+var_DC]
0x7928FF: mov     bp, [esi]
0x792902: add     edx, edi
0x792904: add     bp, dx
0x792907: add     bp, 1
0x79290B: mov     [eax+ecx*2], bp
0x79290F: add     ecx, 1
0x792912: mov     [eax+ecx*2], dx
0x792916: mov     edx, [esi]
0x792918: add     ebx, 1
0x79291B: add     edx, 1
0x79291E: add     ecx, 1
0x792921: add     edi, 1
0x792924: cmp     ebx, edx
0x792926: jl      short loc_7928FB
0x792928: mov     ebp, [esp+100h+var_A4]
0x79292C: mov     ebx, [esp+100h+var_E4]
0x792930: mov     edx, [esp+100h+var_DC]
0x792934: add     [esp+100h+var_B4], 1
0x792939: add     edx, ebx
0x79293B: movzx   ebx, word ptr [esi]
0x79293E: add     bx, dx
0x792941: add     bx, 1
0x792945: mov     [eax+ecx*2], bx
0x792949: movzx   ebx, word ptr [esi]
0x79294C: add     bx, dx
0x79294F: add     ecx, 1
0x792952: add     bx, 1
0x792956: mov     [eax+ecx*2], bx
0x79295A: mov     edx, [ebp+1Ch]
0x79295D: sub     edx, 1
0x792960: add     ecx, 1
0x792963: cmp     [esp+100h+var_B4], edx
0x792967: jl      short loc_7928EC
0x792969: mov     ecx, dword ptr [esp+100h+stripLength]
0x79296D: mov     esi, [esp+100h+geometry]
0x792974: push    ecx; stripLength
0x792975: push    eax; strip
0x792976: push    0; lodLevel
0x792978: mov     ecx, esi; this
0x79297A: call    OB_CIndexedGeometry_AddStrip_010201A0; OBLIVION AUTHORITY (2026-08-30): CIndexedGeometry::AddStrip receives ownership of a caller FormHeap-allocated unsigned-short array (for example allocation at 0x78F477 before call 0x78F48C), appends its unsigned-short length and pointer to per-LOD nested vectors, then adds the 32-bit result of zero_extend(stripLength)-2 to the per-LOD triangle total. There is no clamp in this function; callers are expected to provide a valid strip length (at least two). RT4.1's later contiguous vector<int> representation is contrast only and was not projected onto Oblivion.
0x79297F: add     word ptr [esi+26h], 1
0x792984: mov     eax, [esp+100h+a6]
0x79298B: fldz
0x79298D: mov     ecx, [eax]
0x79298F: mov     edx, [esp+100h+var_A4]
0x792993: mov     ebx, [edx+18h]
0x792996: mov     esi, [esp+100h+var_A8]
0x79299A: mov     [ebx+0Ch], ecx
0x79299D: mov     edx, [eax+4]
0x7929A0: mov     [ebx+10h], edx
0x7929A3: mov     eax, [eax+8]
0x7929A6: mov     [ebx+14h], eax
0x7929A9: mov     ecx, [esi+50h]; this
0x7929AC: push    ecx
0x7929AD: fstp    [esp+104h+childDistanceAlongBranch]; percent
0x7929B0: call    OB_stBezierSpline_ScaledVariance_010201A0; Oblivion compact stBezierSpline scaled-variance path: samples the 500-entry evenlySpacedPoints vector at +0x3C and returns uniform random variance scaled by the sampled y value and variance@0x08. Confirms the executable's min/max/variance field order.
0x7929B5: mov     ecx, [esi+50h]; this
0x7929B8: fstp    [esp+100h+var_AC]
0x7929BC: fldz
0x7929BE: push    ecx
0x7929BF: fstp    [esp+104h+childDistanceAlongBranch]; percent
0x7929C2: call    OB_stBezierSpline_ScaledVariance_010201A0; Oblivion compact stBezierSpline scaled-variance path: samples the 500-entry evenlySpacedPoints vector at +0x3C and returns uniform random variance scaled by the sampled y value and variance@0x08. Confirms the executable's min/max/variance field order.
0x7929C7: fstp    [esp+100h+var_9C]
0x7929CB: mov     eax, [esp+100h+a9]
0x7929D2: lea     ebp, [ebx+1Ch]
0x7929D5: mov     esi, eax
0x7929D7: mov     ecx, 9
0x7929DC: mov     edi, ebp
0x7929DE: rep movsd;
0x7929E0: fld     dword ptr [eax+4]
0x7929E3: mov     ecx, [esp+100h+a10]
0x7929EA: sub     esp, 0Ch
0x7929ED: fmul    dword ptr [ecx+4]
0x7929F0: fld     dword ptr [ecx]
0x7929F2: fmul    dword ptr [eax]
0x7929F4: faddp   st(1), st
0x7929F6: fld     dword ptr [eax+8]
0x7929F9: fmul    dword ptr [ecx+8]
0x7929FC: faddp   st(1), st
0x7929FE: fstp    [esp+10Ch+var_E4]
0x792A02: fld     dword ptr [eax+0Ch]
0x792A05: fmul    dword ptr [ecx]
0x792A07: fld     dword ptr [eax+10h]
0x792A0A: fmul    dword ptr [ecx+4]
0x792A0D: faddp   st(1), st
0x792A0F: fld     dword ptr [eax+14h]
0x792A12: fmul    dword ptr [ecx+8]
0x792A15: faddp   st(1), st
0x792A17: fstp    dword ptr [esp+10Ch+stripLength]
0x792A1B: fld     dword ptr [eax+18h]
0x792A1E: fmul    dword ptr [ecx]
0x792A20: fld     dword ptr [eax+1Ch]
0x792A23: fmul    dword ptr [ecx+4]
0x792A26: faddp   st(1), st
0x792A28: fld     dword ptr [eax+20h]
0x792A2B: mov     eax, esp
0x792A2D: fmul    dword ptr [ecx+8]
0x792A30: faddp   st(1), st
0x792A32: fstp    [esp+10Ch+var_D8]
0x792A36: fld     [esp+10Ch+var_E4]
0x792A3A: fstp    dword ptr [esp+10Ch+outPlacement]; Parent branch vertex index immediately before child spawn.
0x792A3E: mov     ecx, dword ptr [esp+10Ch+outPlacement]; Parent branch vertex index immediately before child spawn.
0x792A42: fld     dword ptr [esp+10Ch+stripLength]
0x792A46: mov     [eax], ecx
0x792A48: fstp    dword ptr [esp+10Ch+outPlacement+4]; Interpolation percent between preVertexIndex and preVertexIndex+1.
0x792A4C: mov     edx, dword ptr [esp+10Ch+outPlacement+4]; Interpolation percent between preVertexIndex and preVertexIndex+1.
0x792A50: fld     [esp+10Ch+var_D8]
0x792A54: mov     [eax+4], edx
0x792A57: fstp    dword ptr [esp+10Ch+outPlacement+8]
0x792A5B: mov     ecx, dword ptr [esp+10Ch+outPlacement+8]
0x792A5F: fld     [esp+10Ch+var_D0]
0x792A63: mov     [eax+8], ecx
0x792A66: push    ecx
0x792A67: mov     ecx, ebp
0x792A69: fstp    [esp+110h+var_110]; float
0x792A6C: call    OB_Mat3_AxisAngleInPlace_010201A0; In-place axis-angle rotation helper for branch transforms.
0x792A71: fld     [esp+100h+var_AC]
0x792A75: sub     esp, 8
0x792A78: fstp    [esp+108h+childDistanceAlongBranch]; float
0x792A7C: fld     [esp+108h+var_9C]
0x792A80: fadd    [esp+108h+var_CC]
0x792A84: fstp    [esp+108h+var_E4]
0x792A88: fld     [esp+108h+var_E4]
0x792A8C: mov     ecx, ebp
0x792A8E: fstp    [esp+108h+incomingWindWeight+4]; float
0x792A91: call    OB_Mat3_RotateYZ_010201A0; Combined Y/Z branch transform rotation helper.
0x792A96: fld     dword ptr [ebp+0Ch]
0x792A99: mov     esi, [esp+100h+var_A8]
0x792A9D: fld     dword ptr ds:0B2B71Ch
0x792AA3: fld     st
0x792AA5: fmulp   st(2), st
0x792AA7: fld     dword ptr [ebp+0]
0x792AAA: fld     dword ptr ds:0B2B718h
0x792AB0: fld     st
0x792AB2: fmulp   st(2), st
0x792AB4: fxch    st(3)
0x792AB6: faddp   st(1), st
0x792AB8: fld     dword ptr [ebp+18h]
0x792ABB: fld     dword ptr ds:0B2B720h
0x792AC1: fld     st
0x792AC3: fmulp   st(2), st
0x792AC5: fxch    st(2)
0x792AC7: faddp   st(1), st
0x792AC9: fstp    [esp+100h+var_E4]
0x792ACD: fld     dword ptr [ebp+10h]
0x792AD0: fmul    st, st(2)
0x792AD2: fld     dword ptr [ebp+4]
0x792AD5: fmul    st, st(4)
0x792AD7: faddp   st(1), st
0x792AD9: fld     dword ptr [ebp+1Ch]
0x792ADC: fmul    st, st(2)
0x792ADE: faddp   st(1), st
0x792AE0: fstp    dword ptr [esp+100h+stripLength]
0x792AE4: fld     dword ptr [ebp+14h]
0x792AE7: fmulp   st(2), st
0x792AE9: fld     dword ptr [ebp+8]
0x792AEC: fmulp   st(3), st
0x792AEE: fxch    st(1)
0x792AF0: faddp   st(2), st
0x792AF2: fmul    dword ptr [ebp+20h]
0x792AF5: faddp   st(1), st
0x792AF7: fstp    [esp+100h+var_D8]
0x792AFB: fld     [esp+100h+var_E4]
0x792AFF: fstp    dword ptr [esp+100h+outPlacement]; Parent branch vertex index immediately before child spawn.
0x792B03: mov     edx, dword ptr [esp+100h+outPlacement]; Parent branch vertex index immediately before child spawn.
0x792B07: fld     dword ptr [esp+100h+stripLength]
0x792B0B: mov     [ebx], edx
0x792B0D: fstp    dword ptr [esp+100h+outPlacement+4]; Interpolation percent between preVertexIndex and preVertexIndex+1.
0x792B11: mov     eax, dword ptr [esp+100h+outPlacement+4]; Interpolation percent between preVertexIndex and preVertexIndex+1.
0x792B15: fld     [esp+100h+var_D8]
0x792B19: mov     [ebx+4], eax
0x792B1C: fstp    dword ptr [esp+100h+outPlacement+8]
0x792B20: mov     ecx, dword ptr [esp+100h+outPlacement+8]
0x792B24: fldz
0x792B26: mov     [ebx+8], ecx
0x792B29: mov     ecx, [esi+68h]; this
0x792B2C: push    ecx
0x792B2D: fstp    [esp+104h+childDistanceAlongBranch]; percent
0x792B30: call    OB_stBezierSpline_Evaluate_010201A0; Oblivion compact stBezierSpline Evaluate: requires the 500-entry vector at +0x3C, samples/interpolates its y values, maps normalized output through min@0x00/max@0x04, then adds uniform +/- variance@0x08. This executable field order overrides the differing RT4.1 header declaration order.
0x792B35: fmul    [esp+100h+var_94]
0x792B39: fstp    dword ptr [ebx+18h]
0x792B3C: mov     ecx, [esi+5Ch]; this
0x792B3F: fldz
0x792B41: push    ecx
0x792B42: fstp    [esp+104h+childDistanceAlongBranch]; percent
0x792B45: call    OB_stBezierSpline_Evaluate_010201A0; Oblivion compact stBezierSpline Evaluate: requires the 500-entry vector at +0x3C, samples/interpolates its y values, maps normalized output through min@0x00/max@0x04, then adds uniform +/- variance@0x08. This executable field order overrides the differing RT4.1 header declaration order.
0x792B4A: fmul    [esp+100h+var_80]
0x792B51: push    offset referenceVector; referenceVector
0x792B56: mov     ecx, ebx; this
0x792B58: fstp    [esp+104h+var_B0]
0x792B5C: call    OB_Vec3_AngleClamped01_010201A0; Vector angle helper. Dot product against reference vector, clamps to [0,1], returns acos result in radians.
0x792B61: fmul    qword ptr ds:0A8BA48h
0x792B67: fstp    [esp+100h+var_CC]
0x792B6B: fld     [esp+100h+var_CC]
0x792B6F: fsubr   qword ptr ds:0A65A18h
0x792B75: fstp    [esp+100h+var_E4]
0x792B79: fld     [esp+100h+var_E4]
0x792B7D: fabs
0x792B7F: fstp    [esp+100h+var_E4]
0x792B83: fld     [esp+100h+var_E4]
0x792B87: fmul    qword ptr ds:0A8C698h
0x792B8D: fld1
0x792B8F: fsubrp  st(1), st
0x792B91: fstp    dword ptr [esp+100h+stripLength]
0x792B95: fld     dword ptr ds:0B2B72Ch
0x792B9B: fld     st
0x792B9D: fmul    dword ptr [ebx+4]
0x792BA0: fld     dword ptr [ebx+8]
0x792BA3: fld     dword ptr ds:0B2B728h
0x792BA9: fld     st
0x792BAB: fmulp   st(2), st
0x792BAD: fxch    st(2)
0x792BAF: fsubrp  st(1), st
0x792BB1: fstp    [esp+100h+var_DC]
0x792BB5: fld     dword ptr [ebx+8]
0x792BB8: fld     dword ptr ds:0B2B724h
0x792BBE: fld     st
0x792BC0: fmulp   st(2), st
0x792BC2: fld     dword ptr [ebx]
0x792BC4: fmulp   st(4), st
0x792BC6: fxch    st(1)
0x792BC8: fsubrp  st(3), st
0x792BCA: fxch    st(2)
0x792BCC: fstp    [esp+100h+var_D0]
0x792BD0: fmul    dword ptr [ebx]
0x792BD2: fld     dword ptr [ebx+4]
0x792BD5: fmulp   st(2), st
0x792BD7: fsubrp  st(1), st
0x792BD9: fstp    [esp+100h+var_B4]
0x792BDD: fld     [esp+100h+var_D0]
0x792BE1: fld     [esp+100h+var_DC]
0x792BE5: fld     [esp+100h+var_B4]
0x792BE9: fld     st(1)
0x792BEB: fmulp   st(2), st
0x792BED: fld     st(2)
0x792BEF: fmulp   st(3), st
0x792BF1: fxch    st(1)
0x792BF3: faddp   st(2), st
0x792BF5: fmul    st, st
0x792BF7: faddp   st(1), st
0x792BF9: fstp    [esp+100h+var_E4]
0x792BFD: fld     [esp+100h+var_E4]
0x792C01: call    __CIsqrt
0x792C06: fstp    [esp+100h+var_E4]
0x792C0A: fld     [esp+100h+var_E4]
0x792C0E: mov     ecx, [esi+70h]; this
0x792C11: fld1
0x792C13: push    ecx
0x792C14: fdivrp  st(1), st
0x792C16: fstp    [esp+104h+var_E4]
0x792C1A: fld     [esp+104h+var_DC]
0x792C1E: fld     [esp+104h+var_E4]
0x792C22: fld     st
0x792C24: fmulp   st(2), st
0x792C26: fxch    st(1)
0x792C28: fstp    dword ptr [esp+104h+outPlacement]; Parent branch vertex index immediately before child spawn.
0x792C2C: fld     [esp+104h+var_D0]
0x792C30: fmul    st, st(1)
0x792C32: fstp    dword ptr [esp+104h+outPlacement+4]; Interpolation percent between preVertexIndex and preVertexIndex+1.
0x792C36: fmul    [esp+104h+var_B4]
0x792C3A: fstp    dword ptr [esp+104h+outPlacement+8]
0x792C3E: fldz
0x792C40: fstp    [esp+104h+childDistanceAlongBranch]; percent
0x792C43: call    OB_stBezierSpline_Evaluate_010201A0; Oblivion compact stBezierSpline Evaluate: requires the 500-entry vector at +0x3C, samples/interpolates its y values, maps normalized output through min@0x00/max@0x04, then adds uniform +/- variance@0x08. This executable field order overrides the differing RT4.1 header declaration order.
0x792C48: fsub    qword ptr ds:0A2FAA0h
0x792C4E: mov     edx, dword ptr [esp+100h+outPlacement]; Parent branch vertex index immediately before child spawn.
0x792C52: mov     ecx, dword ptr [esp+100h+outPlacement+4]; Interpolation percent between preVertexIndex and preVertexIndex+1.
0x792C56: sub     esp, 0Ch
0x792C59: fadd    st, st
0x792C5B: mov     eax, esp
0x792C5D: mov     [eax], edx
0x792C5F: fmul    qword ptr ds:0A3D360h
0x792C65: fstp    [esp+10Ch+var_E4]
0x792C69: fld1
0x792C6B: fst     [esp+10Ch+rhs.m]
0x792C72: fldz
0x792C74: fst     [esp+10Ch+rhs.m+4]
0x792C7B: fst     [esp+10Ch+rhs.m+8]
0x792C82: fst     [esp+10Ch+rhs.m+0Ch]
0x792C89: fst     [esp+10Ch+rhs.m+14h]
0x792C90: fst     [esp+10Ch+rhs.m+18h]
0x792C97: fstp    [esp+10Ch+rhs.m+1Ch]
0x792C9E: fst     [esp+10Ch+rhs.m+10h]
0x792CA5: fstp    [esp+10Ch+rhs.m+20h]
0x792CAC: fld     [esp+10Ch+var_E4]
0x792CB0: mov     edx, dword ptr [esp+10Ch+outPlacement+8]
0x792CB4: fmul    [esp+10Ch+var_7C]
0x792CBB: mov     [eax+4], ecx
0x792CBE: push    ecx
0x792CBF: mov     [eax+8], edx
0x792CC2: fmul    [esp+110h+var_CC]
0x792CC6: lea     ecx, [esp+110h+rhs]
0x792CCD: fmul    dword ptr [esp+110h+stripLength]
0x792CD1: fstp    [esp+110h+var_E4]
0x792CD5: fld     [esp+110h+var_E4]
0x792CD9: fstp    [esp+110h+var_110]; float
0x792CDC: call    OB_Mat3_AxisAngleBuild_010201A0; Standalone axis-angle 3x3 matrix builder used by branch generation.
0x792CE1: lea     eax, [esp+100h+rhs]
0x792CE8: push    eax; rhs
0x792CE9: lea     ecx, [esp+104h+outTransform]
0x792CF0: push    ecx; outTransform
0x792CF1: mov     ecx, ebp; this
0x792CF3: call    OB_stRotTransform_MultiplyCopy_010201A0;
0x792CF8: cmp     [esp+100h+geometry], 0
0x792D00: mov     esi, eax
0x792D02: mov     ecx, 9
0x792D07: mov     edi, ebp
0x792D09: rep movsd
0x792D0B: fld     dword ptr [ebp+0Ch]
0x792D0E: fld     dword ptr ds:0B2B71Ch
0x792D14: fld     st
0x792D16: fmulp   st(2), st
0x792D18: fld     dword ptr [ebp+0]
0x792D1B: fld     dword ptr ds:0B2B718h
0x792D21: fld     st
0x792D23: fmulp   st(2), st
0x792D25: fxch    st(3)
0x792D27: faddp   st(1), st
0x792D29: fld     dword ptr [ebp+18h]
0x792D2C: fld     dword ptr ds:0B2B720h
0x792D32: fld     st
0x792D34: fmulp   st(2), st
0x792D36: fxch    st(2)
0x792D38: faddp   st(1), st
0x792D3A: fstp    [esp+100h+var_E4]
0x792D3E: fld     dword ptr [ebp+10h]
0x792D41: fmul    st, st(2)
0x792D43: fld     dword ptr [ebp+4]
0x792D46: fmul    st, st(4)
0x792D48: faddp   st(1), st
0x792D4A: fld     dword ptr [ebp+1Ch]
0x792D4D: fmul    st, st(2)
0x792D4F: faddp   st(1), st
0x792D51: fstp    dword ptr [esp+100h+stripLength]
0x792D55: fld     dword ptr [ebp+14h]
0x792D58: fmulp   st(2), st
0x792D5A: fld     dword ptr [ebp+8]
0x792D5D: fmulp   st(3), st
0x792D5F: fxch    st(1)
0x792D61: faddp   st(2), st
0x792D63: fmul    dword ptr [ebp+20h]
0x792D66: faddp   st(1), st
0x792D68: fstp    [esp+100h+var_D8]
0x792D6C: fld     [esp+100h+var_E4]
0x792D70: fstp    dword ptr [esp+100h+outPlacement]; Parent branch vertex index immediately before child spawn.
0x792D74: mov     edx, dword ptr [esp+100h+outPlacement]; Parent branch vertex index immediately before child spawn.
0x792D78: fld     dword ptr [esp+100h+stripLength]
0x792D7C: mov     [ebx], edx
0x792D7E: fstp    dword ptr [esp+100h+outPlacement+4]; Interpolation percent between preVertexIndex and preVertexIndex+1.
0x792D82: mov     eax, dword ptr [esp+100h+outPlacement+4]; Interpolation percent between preVertexIndex and preVertexIndex+1.
0x792D86: fld     [esp+100h+var_D8]
0x792D8A: mov     [ebx+4], eax
0x792D8D: mov     eax, [esp+100h+a5]
0x792D94: fstp    dword ptr [esp+100h+outPlacement+8]
0x792D98: mov     ecx, dword ptr [esp+100h+outPlacement+8]
0x792D9C: mov     [ebx+8], ecx
0x792D9F: jz      short loc_792DD2
0x792DA1: test    eax, eax
0x792DA3: jnz     short loc_792DD2
0x792DA5: fld     dword ptr [ebx+18h]
0x792DA8: mov     ecx, [esp+100h+geometry]
0x792DAF: mov     edx, [esp+100h+var_A8]
0x792DB3: fadd    st, st
0x792DB5: fstp    [esp+100h+var_E4]
0x792DB9: fld     [esp+100h+var_E4]
0x792DBD: fstp    dword ptr [ecx+18h]
0x792DC0: fld     dword ptr [edx+8]
0x792DC3: fmul    [esp+100h+var_98]
0x792DC7: fstp    [esp+100h+var_E4]
0x792DCB: fld     [esp+100h+var_E4]
0x792DCF: fstp    dword ptr [ecx+1Ch]
0x792DD2: mov     ecx, ds:0B2B708h
0x792DD8: fld     [esp+100h+a13]
0x792DDF: cmp     eax, ecx
0x792DE1: fst     [esp+100h+var_B8]
0x792DE5: jg      short loc_792E10
0x792DE7: fstp    st
0x792DE9: fld1
0x792DEB: fstp    [esp+100h+var_DC]
0x792DEF: jnz     short loc_792E03
0x792DF1: fld     [esp+100h+var_B0]
0x792DF5: fmul    qword ptr ds:0A2FC68h
0x792DFB: fld1
0x792DFD: fsubrp  st(1), st
0x792DFF: fstp    [esp+100h+var_DC]
0x792E03: fld     [esp+100h+var_DC]
0x792E07: fst     dword ptr [ebx+44h]; Stock branch vertex +0x44 receives the single cross-section/child wind weight used by Oblivion's branch pipeline.
0x792E0A: fstp    [esp+100h+var_B8]
0x792E0E: jmp     short loc_792E38
0x792E10: cmp     byte ptr ds:0B429C8h, 0
0x792E17: jz      short loc_792E36
0x792E19: fld     st
0x792E1B: fldz
0x792E1D: fsubrp  st(1), st
0x792E1F: fmul    [esp+100h+var_B0]
0x792E23: faddp   st(1), st
0x792E25: fstp    [esp+100h+var_E4]
0x792E29: fld     [esp+100h+var_E4]
0x792E2D: fst     dword ptr [ebx+44h]
0x792E30: fstp    [esp+100h+var_B8]
0x792E34: jmp     short loc_792E38
0x792E36: fstp    st
0x792E38: cmp     [esp+100h+var_E5], 0;
0x792E3D: jnz     short loc_792E9E
0x792E3F: test    eax, eax
0x792E41: fldz
0x792E43: fst     [esp+100h+var_DC]
0x792E47: jz      short loc_792E54
0x792E49: fld     [esp+100h+a8]
0x792E50: fstp    [esp+100h+var_DC]
0x792E54: fld     [esp+100h+var_90]
0x792E58: mov     esi, [esp+100h+var_A4]
0x792E5C: mov     edx, [esp+100h+geometry]
0x792E63: push    eax; int
0x792E64: mov     eax, [esp+104h+a14]
0x792E6B: push    ecx
0x792E6C: fstp    [esp+108h+incomingWindWeight+4]; float
0x792E6F: push    eax; int
0x792E70: fld     [esp+10Ch+var_B8]
0x792E74: movzx   eax, word ptr [esi+20h]
0x792E78: push    ecx
0x792E79: lea     ecx, [esp+110h+branchBasePosition]
0x792E80: fstp    [esp+110h+var_110]; float
0x792E83: push    ecx; int
0x792E84: fld     [esp+114h+var_DC]
0x792E88: push    edx; int
0x792E89: push    eax; int
0x792E8A: sub     esp, 8
0x792E8D: mov     ecx, esi
0x792E8F: fstp    [esp+124h+parentDimmingScalar]; float
0x792E93: fstp    [esp+124h+percentAlongParent]; float
0x792E96: push    ebx; int
0x792E97: call    OB_CBranch_BuildCrossSection_010201A0;
0x792E9C: jmp     short loc_792EEC
0x792E9E: mov     ecx, ds:0B429C4h; this
0x792EA4: call    OB_CFrondEngine_StartGuide_010201A0; Oblivion CFrondEngine::StartGuide constructs one zeroed compact 0x30 SFrondGuide and deep-pushes it into CFrondEngine+0x08. Unlike published RT 4.1, the shipped ABI has no vertex-count argument or stack-vertex selection.
0x792EA9: fld     [esp+100h+var_B8]
0x792EAD: mov     ecx, [esp+100h+a14]
0x792EB4: mov     edx, [ebx+0Ch]
0x792EB7: push    ecx; primaryWindGroup
0x792EB8: sub     esp, 28h
0x792EBB: fstp    [esp+12Ch+incomingWindWeight+4]; primaryCrossSectionOrWindWeight
0x792EBF: mov     edi, esp
0x792EC1: sub     esp, 0Ch
0x792EC4: mov     eax, esp
0x792EC6: mov     ecx, 9
0x792ECB: mov     esi, ebp
0x792ECD: rep movsd
0x792ECF: mov     ecx, [ebx+10h]
0x792ED2: mov     [eax], edx
0x792ED4: mov     edx, [ebx+14h]
0x792ED7: mov     [eax+4], ecx
0x792EDA: mov     ecx, ds:0B429C4h; this
0x792EE0: mov     [eax+8], edx
0x792EE3: call    OB_CFrondEngine_AddGuideVertex_010201A0; Oblivion-authoritative CFrondEngine::AddGuideVertex. Builds a 0x38-byte vertex from position, 3x3 rotation transform, primary cross-section/wind weight, and primary wind group, then pushes it into the final compact guide. Unlike local RT 4.1 source, Oblivion has no secondary frond wind fields here.
0x792EE8: mov     esi, [esp+100h+var_A4]
0x792EEC: fldz
0x792EEE: mov     eax, [esi+18h]
0x792EF1: fst     [esp+100h+var_B4]
0x792EF5: mov     [esp+100h+var_D0], ebx
0x792EF9: fstp    dword ptr [eax+40h]; First stock branch vertex running length at +0x40 is initialized to 0.0.
0x792EFC: mov     eax, 1
0x792F01: cmp     [esi+1Ch], eax
0x792F04: mov     [esp+100h+var_B8], eax
0x792F08: jle     loc_793515
0x792F0E: mov     [esp+100h+var_DC], 48h ; 'H'
0x792F16: jmp     short loc_792F20
0x792F20: mov     eax, [esp+100h+var_A4]
0x792F24: fild    [esp+100h+var_B8]
0x792F28: mov     ecx, [eax+1Ch]
0x792F2B: sub     ecx, 1
0x792F2E: mov     [esp+100h+var_E4], ecx
0x792F32: fidiv   [esp+100h+var_E4]
0x792F36: mov     esi, [esp+100h+var_A8]
0x792F3A: mov     ebp, [eax+18h]
0x792F3D: add     ebp, [esp+100h+var_DC]
0x792F41: fstp    [esp+100h+var_E4]
0x792F45: fld     dword ptr [esi+24h]
0x792F48: fstp    dword ptr [esp+100h+stripLength]
0x792F4C: fld     [esp+100h+var_E4]
0x792F50: fld     dword ptr [esp+100h+stripLength]
0x792F54: call    __CIpow
0x792F59: fstp    [esp+100h+var_E4]
0x792F5D: fld     [esp+100h+var_E4]
0x792F61: mov     ecx, [esi+68h]; this
0x792F64: fstp    [esp+100h+var_B0]
0x792F68: push    ecx
0x792F69: fld     [esp+104h+var_B0]
0x792F6D: fld     st
0x792F6F: fmul    [esp+104h+var_98]
0x792F73: fsub    [esp+104h+var_B4]
0x792F77: fstp    [esp+104h+var_E4]
0x792F7B: fstp    [esp+104h+childDistanceAlongBranch]; percent
0x792F7E: call    OB_stBezierSpline_Evaluate_010201A0; Oblivion compact stBezierSpline Evaluate: requires the 500-entry vector at +0x3C, samples/interpolates its y values, maps normalized output through min@0x00/max@0x04, then adds uniform +/- variance@0x08. This executable field order overrides the differing RT4.1 header declaration order.
0x792F83: fmul    [esp+100h+var_94]
0x792F87: fstp    dword ptr [ebp+18h]
0x792F8A: mov     ecx, [esi+5Ch]; this
0x792F8D: fld     [esp+100h+var_B0]
0x792F91: push    ecx
0x792F92: fstp    [esp+104h+childDistanceAlongBranch]; percent
0x792F95: call    OB_stBezierSpline_Evaluate_010201A0; Oblivion compact stBezierSpline Evaluate: requires the 500-entry vector at +0x3C, samples/interpolates its y values, maps normalized output through min@0x00/max@0x04, then adds uniform +/- variance@0x08. This executable field order overrides the differing RT4.1 header declaration order.
0x792F9A: fmul    [esp+100h+var_80]
0x792FA1: mov     esi, [esp+100h+var_D0]
0x792FA5: lea     ebx, [ebp+1Ch]
0x792FA8: add     esi, 1Ch
0x792FAB: fstp    dword ptr [esp+100h+stripLength]
0x792FAF: mov     ecx, 9
0x792FB4: mov     edi, ebx
0x792FB6: rep movsd
0x792FB8: fld     dword ptr [ebx+0Ch]
0x792FBB: fld     dword ptr ds:0B2B71Ch
0x792FC1: fld     st
0x792FC3: fmulp   st(2), st
0x792FC5: fld     dword ptr [ebx]
0x792FC7: fld     dword ptr ds:0B2B718h
0x792FCD: fld     st
0x792FCF: fmulp   st(2), st
0x792FD1: fxch    st(3)
0x792FD3: faddp   st(1), st
0x792FD5: fld     dword ptr [ebx+18h]
0x792FD8: fld     dword ptr ds:0B2B720h
0x792FDE: fld     st
0x792FE0: fmulp   st(2), st
0x792FE2: fxch    st(2)
0x792FE4: faddp   st(1), st
0x792FE6: fstp    [esp+100h+var_D8]
0x792FEA: fld     dword ptr [ebx+10h]
0x792FED: fmul    st, st(2)
0x792FEF: fld     dword ptr [ebx+4]
0x792FF2: fmul    st, st(4)
0x792FF4: faddp   st(1), st
0x792FF6: fld     dword ptr [ebx+1Ch]
0x792FF9: fmul    st, st(2)
0x792FFB: faddp   st(1), st
0x792FFD: fstp    [esp+100h+var_AC]
0x793001: fld     dword ptr [ebx+14h]
0x793004: fmulp   st(2), st
0x793006: fld     dword ptr [ebx+8]
0x793009: fmulp   st(3), st
0x79300B: fxch    st(1)
0x79300D: faddp   st(2), st
0x79300F: fmul    dword ptr [ebx+20h]
0x793012: faddp   st(1), st
0x793014: fstp    [esp+100h+var_9C]
0x793018: fld     [esp+100h+var_D8]
0x79301C: fstp    [esp+100h+var_60]
0x793023: fld     [esp+100h+var_AC]
0x793027: fstp    [esp+100h+var_5C]
0x79302E: fld     [esp+100h+var_9C]
0x793032: mov     edx, [esp+100h+var_60]
0x793039: mov     eax, [esp+100h+var_5C]
0x793040: fstp    [esp+100h+var_58]
0x793047: mov     ecx, [esp+100h+var_58]
0x79304E: mov     [ebp+0], edx
0x793051: mov     [ebp+4], eax
0x793054: mov     [ebp+8], ecx
0x793057: fld     dword ptr [ebp+4]
0x79305A: fmul    dword ptr ds:0B2B728h
0x793060: fld     dword ptr [ebp+0]
0x793063: fmul    dword ptr ds:0B2B724h
0x793069: faddp   st(1), st
0x79306B: fld     dword ptr [ebp+8]
0x79306E: fmul    dword ptr ds:0B2B72Ch
0x793074: faddp   st(1), st
0x793076: fstp    [esp+100h+var_CC]
0x79307A: fld     dword ptr ds:0A30634h
0x793080: fld     [esp+100h+var_CC]
0x793084: fcom    st(1)
0x793086: fnstsw  ax
0x793088: test    ah, 5
0x79308B: jp      short loc_793095
0x79308D: fstp    st
0x79308F: fstp    [esp+100h+var_CC]
0x793093: jmp     short loc_7930AC
0x793095: fstp    st(1)
0x793097: fld1
0x793099: fcom    st(1)
0x79309B: fnstsw  ax
0x79309D: fstp    st(1)
0x79309F: test    ah, 5
0x7930A2: jp      short loc_7930AA
0x7930A4: fstp    [esp+100h+var_CC]
0x7930A8: jmp     short loc_7930AC
0x7930AA: fstp    st
0x7930AC: fld     [esp+100h+var_CC]
0x7930B0: call    __CIacos
0x7930B5: fstp    [esp+100h+var_D8]
0x7930B9: fld     [esp+100h+var_D8]
0x7930BD: fstp    [esp+100h+var_D8]
0x7930C1: fld     [esp+100h+var_D8]
0x7930C5: fmul    qword ptr ds:0A8BA48h
0x7930CB: fstp    [esp+100h+var_D8]
0x7930CF: fld     [esp+100h+var_D8]
0x7930D3: fsubr   qword ptr ds:0A65A18h
0x7930D9: fstp    [esp+100h+var_AC]
0x7930DD: fld     [esp+100h+var_AC]
0x7930E1: fabs
0x7930E3: fstp    [esp+100h+var_AC]
0x7930E7: fld     [esp+100h+var_AC]
0x7930EB: fmul    qword ptr ds:0A8C698h
0x7930F1: fld1
0x7930F3: fsubrp  st(1), st
0x7930F5: fstp    [esp+100h+var_E0]
0x7930F9: fld     dword ptr [ebp+4]
0x7930FC: fld     dword ptr ds:0B2B72Ch
0x793102: fld     st
0x793104: fmulp   st(2), st
0x793106: fld     dword ptr [ebp+8]
0x793109: fld     dword ptr ds:0B2B728h
0x79310F: fld     st
0x793111: fmulp   st(2), st
0x793113: fxch    st(3)
0x793115: fsubrp  st(1), st
0x793117: fstp    [esp+100h+var_CC]
0x79311B: fld     dword ptr [ebp+8]
0x79311E: fld     dword ptr ds:0B2B724h
0x793124: fld     st
0x793126: fmulp   st(2), st
0x793128: fld     dword ptr [ebp+0]
0x79312B: fmulp   st(3), st
0x79312D: fxch    st(1)
0x79312F: fsubrp  st(2), st
0x793131: fxch    st(1)
0x793133: fstp    [esp+100h+var_9C]
0x793137: fld     dword ptr [ebp+0]
0x79313A: fmulp   st(2), st
0x79313C: fmul    dword ptr [ebp+4]
0x79313F: fsubp   st(1), st
0x793141: fstp    [esp+100h+var_AC]
0x793145: fld     [esp+100h+var_CC]
0x793149: fld     [esp+100h+var_9C]
0x79314D: fld     [esp+100h+var_AC]
0x793151: fld     st(1)
0x793153: fmulp   st(2), st
0x793155: fld     st(2)
0x793157: fmulp   st(3), st
0x793159: fxch    st(1)
0x79315B: faddp   st(2), st
0x79315D: fmul    st, st
0x79315F: faddp   st(1), st
0x793161: fstp    [esp+100h+var_D4]
0x793165: fld     [esp+100h+var_D4]
0x793169: call    __CIsqrt
0x79316E: fstp    [esp+100h+var_D4]
0x793172: fld     [esp+100h+var_D4]
0x793176: mov     edx, [esp+100h+var_A8]
0x79317A: fld1
0x79317C: mov     ecx, [edx+70h]; this
0x79317F: fdivrp  st(1), st
0x793181: push    ecx
0x793182: fstp    [esp+104h+var_D4]
0x793186: fld     [esp+104h+var_CC]
0x79318A: fld     [esp+104h+var_D4]
0x79318E: fld     st
0x793190: fmulp   st(2), st
0x793192: fxch    st(1)
0x793194: fstp    dword ptr [esp+104h+var_6C]
0x79319B: fld     [esp+104h+var_9C]
0x79319F: fmul    st, st(1)
0x7931A1: fstp    dword ptr [esp+104h+var_6C+4]
0x7931A8: fmul    [esp+104h+var_AC]
0x7931AC: fstp    [esp+104h+var_64]
0x7931B3: fld     [esp+104h+var_B0]
0x7931B7: fstp    [esp+104h+childDistanceAlongBranch]; percent
0x7931BA: call    OB_stBezierSpline_Evaluate_010201A0; Oblivion compact stBezierSpline Evaluate: requires the 500-entry vector at +0x3C, samples/interpolates its y values, maps normalized output through min@0x00/max@0x04, then adds uniform +/- variance@0x08. This executable field order overrides the differing RT4.1 header declaration order.
0x7931BF: fsub    qword ptr ds:0A2FAA0h
0x7931C5: mov     ecx, dword ptr [esp+100h+var_6C]
0x7931CC: mov     edx, dword ptr [esp+100h+var_6C+4]
0x7931D3: sub     esp, 0Ch
0x7931D6: fadd    st, st
0x7931D8: mov     eax, esp
0x7931DA: mov     [eax], ecx
0x7931DC: mov     ecx, [esp+10Ch+var_64]
0x7931E3: fmul    qword ptr ds:0A3D360h
0x7931E9: mov     [eax+4], edx
0x7931EC: mov     [eax+8], ecx
0x7931EF: push    ecx
0x7931F0: fstp    [esp+110h+var_D4]
0x7931F4: lea     ecx, [esp+110h+rhs]
0x7931FB: fld     [esp+110h+var_D4]
0x7931FF: fmul    [esp+110h+var_7C]
0x793206: fmul    [esp+110h+var_D8]
0x79320A: fmul    [esp+110h+var_E0]
0x79320E: fstp    [esp+110h+var_E0]
0x793212: fld     [esp+110h+var_E0]
0x793216: fstp    [esp+110h+var_110]; int
0x793219: call    OB_Mat3_AxisAngleBuild_010201A0; Standalone axis-angle 3x3 matrix builder used by branch generation.
0x79321E: lea     edx, [esp+100h+rhs]
0x793225: push    edx; rhs
0x793226: lea     eax, [esp+104h+outTransform]
0x79322D: push    eax; outTransform
0x79322E: mov     ecx, ebx; this
0x793230: call    OB_stRotTransform_MultiplyCopy_010201A0; Oblivion stRotTransform 3x3 multiply (C++ operator* with an explicit hidden result pointer). Computes this*rhs into the supplied 0x24-byte output transform.
0x793235: fld     [esp+100h+var_B0]
0x793239: mov     esi, eax
0x79323B: mov     ecx, 9
0x793240: mov     edi, ebx
0x793242: rep movsd
0x793244: mov     esi, [esp+100h+var_A8]
0x793248: mov     ecx, [esi+50h]; this
0x79324B: push    ecx
0x79324C: fstp    [esp+104h+childDistanceAlongBranch]; percent
0x79324F: call    OB_stBezierSpline_ScaledVariance_010201A0; Oblivion compact stBezierSpline scaled-variance path: samples the 500-entry evenlySpacedPoints vector at +0x3C and returns uniform random variance scaled by the sampled y value and variance@0x08. Confirms the executable's min/max/variance field order.
0x793254: mov     ecx, [esi+50h]; this
0x793257: fstp    [esp+100h+var_E0]
0x79325B: fld     [esp+100h+var_B0]
0x79325F: push    ecx
0x793260: fstp    [esp+104h+childDistanceAlongBranch]; percent
0x793263: call    OB_stBezierSpline_ScaledVariance_010201A0; Oblivion compact stBezierSpline scaled-variance path: samples the 500-entry evenlySpacedPoints vector at +0x3C and returns uniform random variance scaled by the sampled y value and variance@0x08. Confirms the executable's min/max/variance field order.
0x793268: fstp    [esp+100h+var_D4]
0x79326C: sub     esp, 8
0x79326F: fld     [esp+108h+var_E0]
0x793273: mov     ecx, ebx
0x793275: fstp    [esp+108h+childDistanceAlongBranch]; float
0x793279: fld     [esp+108h+var_D4]
0x79327D: fstp    [esp+108h+incomingWindWeight+4]; float
0x793280: call    OB_Mat3_RotateYZ_010201A0;
0x793285: fld     dword ptr [ebx+0Ch]
0x793288: fld     dword ptr ds:0B2B71Ch
0x79328E: fld     st
0x793290: fmulp   st(2), st
0x793292: fld     dword ptr [ebx]
0x793294: fld     dword ptr ds:0B2B718h
0x79329A: fld     st
0x79329C: fmulp   st(2), st
0x79329E: fxch    st(3)
0x7932A0: faddp   st(1), st
0x7932A2: fld     dword ptr [ebx+18h]
0x7932A5: fld     dword ptr ds:0B2B720h
0x7932AB: fld     st
0x7932AD: fmulp   st(2), st
0x7932AF: fxch    st(2)
0x7932B1: faddp   st(1), st
0x7932B3: fstp    [esp+100h+var_E0]
0x7932B7: fld     dword ptr [ebx+10h]
0x7932BA: fmul    st, st(2)
0x7932BC: fld     dword ptr [ebx+4]
0x7932BF: fmul    st, st(4)
0x7932C1: faddp   st(1), st
0x7932C3: fld     dword ptr [ebx+1Ch]
0x7932C6: fmul    st, st(2)
0x7932C8: faddp   st(1), st
0x7932CA: fstp    [esp+100h+var_D4]
0x7932CE: fld     dword ptr [ebx+14h]
0x7932D1: fmulp   st(2), st
0x7932D3: fld     dword ptr [ebx+8]
0x7932D6: fmulp   st(3), st
0x7932D8: fxch    st(1)
0x7932DA: faddp   st(2), st
0x7932DC: fmul    dword ptr [ebx+20h]
0x7932DF: faddp   st(1), st
0x7932E1: fstp    [esp+100h+var_D8]
0x7932E5: fld     [esp+100h+var_E0]
0x7932E9: fstp    [esp+100h+var_78]
0x7932F0: mov     ecx, [esp+100h+var_78]
0x7932F7: fld     [esp+100h+var_D4]
0x7932FB: mov     [ebp+0], ecx
0x7932FE: fstp    [esp+100h+var_74]
0x793305: mov     edx, [esp+100h+var_74]
0x79330C: fld     [esp+100h+var_D8]
0x793310: mov     [ebp+4], edx
0x793313: fstp    [esp+100h+var_70]
0x79331A: mov     eax, [esp+100h+var_70]
0x793321: mov     [ebp+8], eax
0x793324: mov     eax, [esp+100h+var_D0]
0x793328: fld     dword ptr [eax]
0x79332A: fld     [esp+100h+var_E4]
0x79332E: fld     st
0x793330: fmulp   st(2), st
0x793332: fxch    st(1)
0x793334: fstp    [esp+100h+var_E0]
0x793338: fld     dword ptr [eax+4]
0x79333B: fmul    st, st(1)
0x79333D: fstp    [esp+100h+var_D4]
0x793341: fmul    dword ptr [eax+8]
0x793344: fstp    [esp+100h+var_D8]
0x793348: fld     [esp+100h+var_E0]
0x79334C: fadd    dword ptr [eax+0Ch]
0x79334F: fstp    [esp+100h+var_E0]
0x793353: fld     dword ptr [eax+10h]
0x793356: fadd    [esp+100h+var_D4]
0x79335A: fstp    [esp+100h+var_D4]
0x79335E: fld     dword ptr [eax+14h]
0x793361: fadd    [esp+100h+var_D8]
0x793365: fstp    [esp+100h+var_D8]
0x793369: fld     [esp+100h+var_E0]
0x79336D: fstp    dword ptr [esp+100h+outPlacement]; Parent branch vertex index immediately before child spawn.
0x793371: mov     edx, dword ptr [esp+100h+outPlacement]; Parent branch vertex index immediately before child spawn.
0x793375: fld     [esp+100h+var_D4]
0x793379: mov     [ebp+0Ch], edx
0x79337C: fstp    dword ptr [esp+100h+outPlacement+4]; Interpolation percent between preVertexIndex and preVertexIndex+1.
0x793380: mov     ecx, dword ptr [esp+100h+outPlacement+4]; Interpolation percent between preVertexIndex and preVertexIndex+1.
0x793384: fld     [esp+100h+var_D8]
0x793388: mov     [ebp+10h], ecx
0x79338B: fstp    dword ptr [esp+100h+outPlacement+8]; v145 floor hook: this reused stack slot is pending position Z here, consumed by both vertex+14h and frond guide copies. Eight-byte guarded span; resume793393.
0x79338F: mov     eax, dword ptr [esp+100h+outPlacement+8]
0x793393: fld     [esp+100h+a13]
0x79339A: mov     [ebp+14h], eax
0x79339D: mov     eax, ds:0B2B708h
0x7933A2: fst     [esp+100h+var_CC]
0x7933A6: cmp     [esp+100h+a5], eax
0x7933AD: jg      short loc_7933D6
0x7933AF: fstp    st
0x7933B1: fld1
0x7933B3: fstp    [esp+100h+var_D8]
0x7933B7: jnz     short loc_7933C9
0x7933B9: fld     dword ptr [esp+100h+stripLength]
0x7933BD: fmul    [esp+100h+var_B0]
0x7933C1: fld1
0x7933C3: fsubrp  st(1), st
0x7933C5: fstp    [esp+100h+var_D8]
0x7933C9: fld     [esp+100h+var_D8]
0x7933CD: fst     dword ptr [ebp+44h]
0x7933D0: fstp    [esp+100h+var_CC]
0x7933D4: jmp     short loc_7933FE
0x7933D6: cmp     byte ptr ds:0B429C8h, 0
0x7933DD: jz      short loc_7933FC
0x7933DF: fld     st
0x7933E1: fldz
0x7933E3: fsubrp  st(1), st
0x7933E5: fmul    dword ptr [esp+100h+stripLength]
0x7933E9: faddp   st(1), st
0x7933EB: fstp    [esp+100h+var_E0]
0x7933EF: fld     [esp+100h+var_E0]
0x7933F3: fst     dword ptr [ebp+44h]
0x7933F6: fstp    [esp+100h+var_CC]
0x7933FA: jmp     short loc_7933FE
0x7933FC: fstp    st
0x7933FE: cmp     [esp+100h+var_E5], 0;
0x793403: jnz     loc_793499
0x793409: mov     ecx, [esp+100h+a5]
0x793410: test    ecx, ecx
0x793412: jnz     short loc_793440
0x793414: mov     edx, [esp+100h+var_A8]
0x793418: fld     dword ptr [edx+8]
0x79341B: fld     [esp+100h+var_B0]
0x79341F: fcompp
0x793421: fnstsw  ax
0x793423: test    ah, 5
0x793426: jp      short loc_79342C
0x793428: fld1
0x79342A: jmp     short loc_793447
0x79342C: fld     dword ptr [edx+8]
0x79342F: fmul    qword ptr ds:0A3D360h
0x793435: fld     dword ptr [edx+8]
0x793438: fld1
0x79343A: fsubrp  st(1), st
0x79343C: fdivp   st(1), st
0x79343E: jmp     short loc_793447
0x793440: fld     [esp+100h+a8]
0x793447: mov     esi, [esp+100h+var_A4]
0x79344B: fstp    [esp+100h+var_D0]
0x79344F: fld     [esp+100h+var_90]
0x793453: mov     eax, [esp+100h+geometry]
0x79345A: push    ecx; int
0x79345B: push    ecx
0x79345C: mov     ecx, [esp+108h+a14]
0x793463: fstp    [esp+108h+incomingWindWeight+4]; float
0x793466: fld     [esp+108h+var_CC]
0x79346A: push    ecx; int
0x79346B: push    ecx
0x79346C: movzx   ecx, word ptr [esi+20h]
0x793470: fstp    [esp+110h+var_110]; float
0x793473: fld     [esp+110h+var_D0]
0x793477: lea     edx, [esp+110h+branchBasePosition]
0x79347E: push    edx; int
0x79347F: push    eax; int
0x793480: push    ecx; int
0x793481: sub     esp, 8
0x793484: mov     ecx, esi
0x793486: fstp    [esp+124h+parentDimmingScalar]; float
0x79348A: fld     [esp+124h+var_B0]
0x79348E: fstp    [esp+124h+percentAlongParent]; float
0x793491: push    ebp; int
0x793492: call    OB_CBranch_BuildCrossSection_010201A0; Builds one branch cross-section from compact branch vertex position/radius/transform, emits diffuse texcoords, tangent/binormal, coord, packed color, and optional primary wind data into CIndexedGeometry.
0x793497: jmp     short loc_7934DB
0x793499: mov     eax, [esp+100h+a14]
0x7934A0: fld     [esp+100h+var_CC]
0x7934A4: push    eax; primaryWindGroup
0x7934A5: sub     esp, 28h
0x7934A8: fstp    [esp+12Ch+incomingWindWeight+4]; primaryCrossSectionOrWindWeight
0x7934AC: mov     edi, esp
0x7934AE: sub     esp, 0Ch
0x7934B1: mov     eax, esp
0x7934B3: mov     ecx, 9
0x7934B8: mov     esi, ebx
0x7934BA: rep movsd
0x7934BC: mov     ecx, dword ptr [esp+138h+outPlacement+4]; Interpolation percent between preVertexIndex and preVertexIndex+1.
0x7934C0: mov     [eax], edx
0x7934C2: mov     edx, dword ptr [esp+138h+outPlacement+8]
0x7934C6: mov     [eax+4], ecx
0x7934C9: mov     ecx, ds:0B429C4h; this
0x7934CF: mov     [eax+8], edx
0x7934D2: call    OB_CFrondEngine_AddGuideVertex_010201A0; Oblivion-authoritative CFrondEngine::AddGuideVertex. Builds a 0x38-byte vertex from position, 3x3 rotation transform, primary cross-section/wind weight, and primary wind group, then pushes it into the final compact guide. Unlike local RT 4.1 source, Oblivion has no secondary frond wind fields here.
0x7934D7: mov     esi, [esp+100h+var_A4]
0x7934DB: fld     [esp+100h+var_B4]
0x7934DF: mov     ecx, [esp+100h+var_DC]
0x7934E3: fadd    [esp+100h+var_E4]
0x7934E7: mov     eax, [esi+18h]
0x7934EA: add     ecx, 48h ; 'H'
0x7934ED: mov     [esp+100h+var_D0], ebp
0x7934F1: fstp    [esp+100h+var_B4]
0x7934F5: mov     [esp+100h+var_DC], ecx
0x7934F9: fld     [esp+100h+var_B4]
0x7934FD: fstp    dword ptr [ecx+eax-8]; Per-vertex running length write: next 0x48-byte vertex's +0x40 slot receives accumulated branch length.
0x793501: mov     eax, [esp+100h+var_B8]
0x793505: add     eax, 1
0x793508: cmp     eax, [esi+1Ch]
0x79350B: mov     [esp+100h+var_B8], eax
0x79350F: jl      loc_792F20
0x793515: cmp     [esp+100h+var_E5], 0
0x79351A: jz      short loc_793535
0x79351C: fld     [esp+100h+var_A0]
0x793520: push    ecx
0x793521: mov     ecx, ds:0B429C4h; this
0x793527: fstp    [esp+104h+childDistanceAlongBranch]; lodSizeScalar
0x79352A: call    OB_CFrondEngine_EndGuide_010201A0; SpeedTree decode: stock CFrondEngine::EndGuide. Computes guide length from vertex positions, selects frond texture/aspect/size/angle, writes map index/radius/offset, and stores surface area as lodSizeScalar * length.
0x79352F: mov     ebp, [esp+100h+var_A4]
0x793533: jmp     short loc_793555
0x793535: mov     ebp, [esp+100h+var_A4]
0x793539: movzx   eax, word ptr [ebp+24h]
0x79353D: mov     ecx, [esp+100h+geometry]
0x793544: mov     [ecx+22h], ax
0x793548: movzx   edx, word ptr [ebp+20h]
0x79354C: push    edx; crossSectionSegments
0x79354D: push    ecx; geometry
0x79354E: mov     ecx, ebp; this
0x793550: call    OB_CBranch_ComputeBranchNormals_010201A0;
0x793555: mov     esi, [esp+100h+var_A8]
0x793559: fld     dword ptr [esi+10h]
0x79355C: fdiv    [esp+100h+a4]
0x793563: fmul    [esp+100h+var_98]
0x793567: call    Double_To_SInt32; Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
0x79356C: mov     ebx, [esp+100h+a5]
0x793573: mov     ecx, ds:0B429E0h
0x793579: mov     edx, eax
0x79357B: add     ebx, 1
0x79357E: test    ecx, ecx
0x793580: mov     [esp+100h+var_90], edx
0x793584: jnz     short loc_79358A
0x793586: xor     eax, eax
0x793588: jmp     short loc_793594
0x79358A: mov     eax, ds:0B429E4h
0x79358F: sub     eax, ecx
0x793591: sar     eax, 2
0x793594: add     eax, 0FFFFFFFFh
0x793597: cmp     ebx, eax
0x793599: setnl   al
0x79359C: test    al, al
0x79359E: mov     [esp+100h+var_E5], al
0x7935A2: jz      short loc_7935B1
0x7935A4: cmp     byte ptr ds:0B2B704h, 0
0x7935AB: jz      loc_793976
0x7935B1: test    edx, edx
0x7935B3: mov     [esp+100h+var_B8], 0
0x7935BB: jle     loc_793976
0x7935C1: jmp     short loc_7935C7
0x7935C3: mov     esi, [esp+100h+var_A8]
0x7935C7: fldz
0x7935C9: mov     edi, [esp+100h+a3]
0x7935D0: xor     ecx, ecx
0x7935D2: fstp    dword ptr [esp+100h+outPlacement+4]; Interpolation percent between preVertexIndex and preVertexIndex+1.
0x7935D6: test    al, al
0x7935D8: mov     dword ptr [esp+100h+outPlacement], ecx; Parent branch vertex index immediately before child spawn.
0x7935DC: mov     dword ptr [esp+100h+outPlacement+8], ecx
0x7935E0: jnz     short loc_79364F
0x7935E2: add     edi, 3
0x7935E5: push    edi; seed
0x7935E6: mov     ecx, offset stru_B429C9; this
0x7935EB: mov     [esp+104h+a3], edi
0x7935F2: call    OB_stRandom_Reseed_010201A0; Oblivion stRandom::Reseed. Seed -1 derives a nonzero fractional seed from time and either 12345 or an existing uniform sample; explicit seeds <=1 clamp to 1 and use Random::SetLong. Marks the shared generator initialized.
0x7935F7: cmp     [esp+100h+var_B8], 0
0x7935FC: jnz     short loc_79364F
0x7935FE: fld     dword ptr [esi+8]
0x793601: sub     esp, 8
0x793604: fstp    [esp+108h+var_E0]
0x793608: fld     dword ptr [esi+0Ch]
0x79360B: fld     [esp+108h+var_E0]
0x79360F: fld     st
0x793611: fsubp   st(2), st
0x793613: fxch    st(1)
0x793615: fmul    qword ptr ds:0A77838h
0x79361B: faddp   st(1), st
0x79361D: fstp    [esp+108h+var_D4]
0x793621: fld     dword ptr [esi+8]
0x793624: fstp    [esp+108h+var_E0]
0x793628: fld     dword ptr [esi+0Ch]
0x79362B: fld     [esp+108h+var_E0]
0x79362F: fld     st
0x793631: fsubp   st(2), st
0x793633: fxch    st(1)
0x793635: fmul    qword ptr ds:0A563D8h
0x79363B: faddp   st(1), st
0x79363D: fstp    [esp+108h+var_E0]
0x793641: fld     [esp+108h+var_D4]
0x793645: fstp    [esp+108h+childDistanceAlongBranch]
0x793649: fld     [esp+108h+var_E0]
0x79364D: jmp     short loc_79365C
0x79364F: fld     dword ptr [esi+0Ch]
0x793652: sub     esp, 8
0x793655: fstp    [esp+108h+childDistanceAlongBranch]; maxValue
0x793659: fld     dword ptr [esi+8]
0x79365C: mov     ecx, offset stru_B429C9; this
0x793661: fstp    [esp+108h+incomingWindWeight+4]; minValue
0x793664: call    OB_stRandom_GetUniform_010201A0;
0x793669: fstp    [esp+100h+var_DC];
0x79366D: fld     [esp+100h+var_DC]
0x793671: push    ecx
0x793672: fmul    [esp+104h+var_98]
0x793676: lea     eax, [esp+104h+outPlacement]
0x79367A: mov     ecx, ebp; this
0x79367C: fstp    [esp+104h+var_E0]
0x793680: fld     [esp+104h+var_E0]
0x793684: fstp    [esp+104h+childDistanceAlongBranch]; childDistanceAlongBranch
0x793687: push    eax; outPlacement
0x793688: call    OB_CBranch_FillBranch_010201A0;
0x79368D: fld     [esp+100h+a13]
0x793694: mov     esi, dword ptr [esp+100h+outPlacement]; Parent branch vertex index immediately before child spawn.
0x793698: fstp    [esp+100h+var_A0]
0x79369C: fld     dword ptr [esp+100h+outPlacement+4]; Interpolation percent between preVertexIndex and preVertexIndex+1.
0x7936A0: lea     eax, [ebx-1]
0x7936A3: cmp     eax, ds:0B2B708h
0x7936A9: jz      short loc_7936B4
0x7936AB: cmp     byte ptr ds:0B429C8h, 0
0x7936B2: jz      short loc_7936DD
0x7936B4: mov     edx, [ebp+18h]
0x7936B7: lea     ecx, [esi+esi*8]
0x7936BA: fld     dword ptr [edx+ecx*8+44h]
0x7936BE: lea     eax, [edx+ecx*8]; Child branch wind weight interpolation reads parent vertex +0x44 and next vertex +0x44 (+0x8C from current).
0x7936C1: fstp    [esp+100h+var_E0]
0x7936C5: fld     dword ptr [eax+8Ch]
0x7936CB: fld     [esp+100h+var_E0]
0x7936CF: fld     st
0x7936D1: fsubp   st(2), st
0x7936D3: fld     st(2)
0x7936D5: fmulp   st(2), st
0x7936D7: faddp   st(1), st
0x7936D9: fstp    [esp+100h+var_A0]
0x7936DD: cmp     [esp+100h+var_E5], 0
0x7936E2: jnz     short loc_793713
0x7936E4: fstp    st
0x7936E6: push    edi; seed
0x7936E7: mov     ecx, offset stru_B429C9; this
0x7936EC: call    OB_stRandom_Reseed_010201A0; Oblivion stRandom::Reseed. Seed -1 derives a nonzero fractional seed from time and either 12345 or an existing uniform sample; explicit seeds <=1 clamp to 1 and use Random::SetLong. Marks the shared generator initialized.
0x7936F1: fld     dword ptr ds:0A2FE7Ch
0x7936F7: sub     esp, 8
0x7936FA: fstp    [esp+108h+childDistanceAlongBranch]; maxValue
0x7936FE: mov     ecx, offset stru_B429C9; this
0x793703: fldz
0x793705: fstp    [esp+108h+incomingWindWeight+4]; minValue
0x793708: call    OB_stRandom_GetUniform_010201A0; Oblivion stRandom::GetUniform. Returns minValue + (maxValue - minValue) * SIdvRandomImpl::m_cUniform.Next(). Used throughout spline, branch, frond, tree, leaf-LOD, and seed generation paths.
0x79370D: fstp    st
0x79370F: fld     dword ptr [esp+100h+outPlacement+4]; Interpolation percent between preVertexIndex and preVertexIndex+1.
0x793713: mov     eax, [ebp+18h]
0x793716: lea     edi, [esi+esi*8]
0x793719: add     edi, edi
0x79371B: add     edi, edi
0x79371D: add     edi, edi; a2
0x79371F: fld     dword ptr [eax+edi+54h]
0x793723: lea     ecx, [eax+edi]
0x793726: fsub    dword ptr [ecx+0Ch]
0x793729: mov     edx, [esp+100h+var_A8]
0x79372D: fstp    [esp+100h+var_E0]
0x793731: fld     dword ptr [ecx+58h]
0x793734: fsub    dword ptr [ecx+10h]
0x793737: fstp    [esp+100h+var_D4]
0x79373B: fld     dword ptr [ecx+5Ch]
0x79373E: fsub    dword ptr [ecx+14h]
0x793741: fstp    [esp+100h+var_E4]
0x793745: fld     [esp+100h+var_E0]
0x793749: fmul    st, st(1)
0x79374B: fstp    [esp+100h+var_E0]
0x79374F: fld     [esp+100h+var_D4]
0x793753: fmul    st, st(1)
0x793755: fstp    [esp+100h+var_D4]
0x793759: fld     [esp+100h+var_E4]
0x79375D: fmul    st, st(1)
0x79375F: fstp    [esp+100h+var_E4]
0x793763: fld     [esp+100h+var_E0]
0x793767: fadd    dword ptr [ecx+0Ch]
0x79376A: fstp    [esp+100h+var_E0]
0x79376E: fld     [esp+100h+var_D4]
0x793772: fadd    dword ptr [ecx+10h]
0x793775: fstp    [esp+100h+var_D4]
0x793779: fld     [esp+100h+var_E4]
0x79377D: fadd    dword ptr [ecx+14h]
0x793780: fstp    [esp+100h+var_E4]
0x793784: fld     [esp+100h+var_E0]
0x793788: fstp    [esp+100h+branchBasePosition]
0x79378C: fld     [esp+100h+var_D4]
0x793790: fstp    [esp+100h+var_88]
0x793794: fld     [esp+100h+var_E4]
0x793798: fstp    [esp+100h+var_84]
0x79379C: fld1
0x79379E: fstp    [esp+100h+var_D0]
0x7937A2: fld     dword ptr [edx+0Ch]
0x7937A5: fld     dword ptr [edx+8]
0x7937A8: fucompp
0x7937AA: fnstsw  ax
0x7937AC: test    ah, 44h
0x7937AF: jnp     short loc_7937C4
0x7937B1: fld     [esp+100h+var_DC]
0x7937B5: fsub    dword ptr [edx+8]
0x7937B8: fld     dword ptr [edx+0Ch]
0x7937BB: fsub    dword ptr [edx+8]
0x7937BE: fdivp   st(1), st
0x7937C0: fstp    [esp+100h+var_D0]
0x7937C4: cmp     [esp+100h+var_E5], 0
0x7937C9: jz      short loc_793813
0x7937CB: mov     edx, [esp+100h+a14]
0x7937D2: fstp    st
0x7937D4: fld     [esp+100h+var_A0]
0x7937D8: mov     eax, [esp+100h+a12]
0x7937DF: push    edx; int
0x7937E0: push    ecx
0x7937E1: fstp    [esp+108h+incomingWindWeight+4]; float
0x7937E4: push    eax; int
0x7937E5: fld     [esp+10Ch+var_D0]
0x7937E9: push    ecx; int
0x7937EA: add     ecx, 1Ch
0x7937ED: push    ecx; int
0x7937EE: push    ecx
0x7937EF: fstp    [esp+118h+var_118]; float
0x7937F2: lea     ecx, [esp+118h+branchBasePosition]
0x7937F9: fld     [esp+118h+a4]
0x793800: push    ecx; int
0x793801: push    ebx; int
0x793802: push    ecx
0x793803: fstp    [esp+124h+percentAlongParent]; float
0x793806: push    ebp; int
0x793807: mov     ecx, ebp; int
0x793809: call    OB_CBranch_ComputeBud_010201A0; Bud/leaf path. Builds a two-vertex bud direction from next branch-info profile and parent transform, then forwards final leaf candidate data to OB_CBranch_MakeLeaf_010201A0.
0x79380E: jmp     loc_79395D
0x793813: fld     dword ptr [ecx+18h]
0x793816: push    40h ; '@'; Size
0x793818: fstp    [esp+104h+var_E0]
0x79381C: fld     dword ptr [ecx+60h]
0x79381F: fld     [esp+104h+var_E0]
0x793823: fld     st
0x793825: fsubp   st(2), st
0x793827: fxch    st(1)
0x793829: fmulp   st(2), st
0x79382B: faddp   st(1), st
0x79382D: fstp    [esp+104h+var_E0]
0x793831: call    FormHeapAlloc; Child CBranch allocation in recursive compute: allocates exactly 0x40 bytes and inlines the compact constructor fields.
0x793836: add     esp, 4
0x793839: test    eax, eax
0x79383B: jz      short loc_793872
0x79383D: fldz
0x79383F: xor     ecx, ecx
0x793841: fst     dword ptr [eax+4]
0x793844: mov     [eax], ebp
0x793846: mov     [eax+0Ch], ecx
0x793849: mov     [eax+10h], ecx
0x79384C: mov     [eax+14h], ecx
0x79384F: fst     dword ptr [eax+28h]
0x793852: or      edx, 0FFFFFFFFh
0x793855: fstp    dword ptr [eax+2Ch]
0x793858: mov     [eax+18h], ecx
0x79385B: mov     [eax+1Ch], edx
0x79385E: mov     [eax+20h], cx
0x793862: mov     [eax+24h], edx
0x793865: mov     [eax+34h], ecx
0x793868: mov     [eax+38h], ecx
0x79386B: mov     [eax+3Ch], ecx
0x79386E: mov     esi, eax
0x793870: jmp     short loc_793877
0x793872: xor     esi, esi
0x793874: or      edx, 0FFFFFFFFh
0x793877: cmp     ebx, 1
0x79387A: fld     [esp+100h+a8]
0x793881: fld     st
0x793883: mov     [esp+100h+var_4], edx
0x79388A: fld1
0x79388C: mov     dword ptr [esp+100h+outPlacement+8], esi
0x793890: fsubrp  st(1), st
0x793892: fld     [esp+100h+var_D0]
0x793896: fld     st
0x793898: fmulp   st(2), st
0x79389A: fxch    st(1)
0x79389C: faddp   st(2), st
0x79389E: fxch    st(1)
0x7938A0: fstp    [esp+100h+var_DC]
0x7938A4: jg      short loc_7938B0
0x7938A6: fld     [esp+100h+var_DC]
0x7938AA: fmul    st, st
0x7938AC: fstp    [esp+100h+var_DC]
0x7938B0: fld     [esp+100h+var_E0]
0x7938B4: mov     edx, [ebp+18h]
0x7938B7: push    ecx
0x7938B8: mov     ecx, [esp+104h+a14]
0x7938BF: fstp    [esp+104h+childDistanceAlongBranch]; parentRadius
0x7938C2: fld     [esp+104h+var_A0]
0x7938C6: push    ecx; windGroupIndex
0x7938C7: push    ecx
0x7938C8: mov     ecx, [esp+10Ch+geometry]
0x7938CF: fstp    [esp+10Ch+incomingWindWeight]; incomingWindWeight
0x7938D2: fld     [esp+10Ch+var_DC]
0x7938D6: lea     eax, [edx+edi]
0x7938D9: mov     edx, [esp+10Ch+a12]
0x7938E0: push    edx; generatedLeafVectorWrapper
0x7938E1: push    ecx; branchGeometry
0x7938E2: push    eax; parentDirection
0x7938E3: add     eax, 1Ch
0x7938E6: push    eax; parentTransform3x3
0x7938E7: mov     eax, [esp+11Ch+a3]
0x7938EE: sub     esp, 8
0x7938F1: fstp    [esp+124h+parentDimmingScalar]; parentDimmingScalar
0x7938F5: lea     edx, [esp+124h+branchBasePosition]
0x7938FC: fstp    [esp+124h+percentAlongParent]; percentAlongParent
0x7938FF: push    edx; branchBasePosition
0x793900: fld     [esp+128h+a4]
0x793907: push    ebx; branchLevel
0x793908: push    ecx
0x793909: fstp    [esp+130h+treeSizeScalar]; treeSizeScalar
0x79390C: push    eax; rngSeed
0x79390D: mov     ecx, esi; this
0x79390F: call    OB_CBranch_Compute_010201A0;
0x793914: mov     ecx, ds:0B429C4h; this
0x79391A: call    OB_CFrondEngine_Enabled_010201A0; SpeedTree decode: CFrondEngine::Enabled. Returns byte at +0x3C.
0x79391F: test    al, al
0x793921: jz      short loc_793950
0x793923: mov     ecx, ds:0B429C4h; this
0x793929: call    Shared_GetDwordAtOffset38; Linker-folded Oblivion accessor: returns the dword at this+0x38. In TESClass auto-stat calls this is primaryAttribute1; other call contexts may represent unrelated fields.
0x79392E: cmp     ebx, eax
0x793930: jl      short loc_793950
0x793932: test    esi, esi
0x793934: jz      short loc_793946
0x793936: mov     ecx, esi
0x793938: call    OB_CBranch_cleanup_010201A0; Compact CBranch cleanup: frees vertex storage, recursively destroys children, and clears child/flare vectors.
0x79393D: push    esi
0x79393E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x793943: add     esp, 4
0x793946: mov     dword ptr [esp+100h+outPlacement+8], 0
0x79394E: jmp     short loc_79395D
0x793950: lea     ecx, [esp+100h+outPlacement]
0x793954: push    ecx
0x793955: lea     ecx, [ebp+8]
0x793958: call    OB_CBranch_childVectorPush_010201A0; Push helper for compact child-reference vector at CBranch+0x08.
0x79395D: mov     eax, [esp+100h+var_B8];
0x793961: add     eax, 1
0x793964: cmp     eax, [esp+100h+var_90]
0x793968: mov     [esp+100h+var_B8], eax
0x79396C: mov     al, [esp+100h+var_E5]
0x793970: jl      loc_7935C3
0x793976: test    al, al
0x793978: jz      short loc_7939D2
0x79397A: mov     eax, ds:0B42A04h
0x79397F: mov     esi, ds:0B42A00h
0x793985: cmp     esi, eax
0x793987: mov     edi, eax
0x793989: jbe     short loc_7939A9
0x79398B: call    __invalid_parameter_noinfo
0x793990: mov     eax, ds:0B42A04h
0x793995: mov     esi, ds:0B42A00h
0x79399B: cmp     esi, eax
0x79399D: jbe     short loc_7939A9
0x79399F: call    __invalid_parameter_noinfo
0x7939A4: mov     eax, ds:0B42A04h
0x7939A9: cmp     esi, edi
0x7939AB: jz      short loc_7939D2
0x7939AD: sub     eax, edi
0x7939AF: sar     eax, 2
0x7939B2: test    eax, eax
0x7939B4: lea     ecx, ds:0[eax*4]
0x7939BB: lea     ebx, [esi+ecx]
0x7939BE: jle     short loc_7939CC
0x7939C0: push    ecx; Src
0x7939C1: push    edi; Src
0x7939C2: push    ecx; DstSize
0x7939C3: push    esi; Dst
0x7939C4: call    _memmove_s
0x7939C9: add     esp, 10h
0x7939CC: mov     ds:0B42A04h, ebx
0x7939D2: mov     ecx, ebp; this
0x7939D4: call    OB_CBranch_ComputeVolume_010201A0; Sums adjacent compact branch-vertex segment lengths times endpoint radius sum and writes CBranch+0x28 branchVolume.
0x7939D9: mov     ecx, [esp+100h+var_C]
0x7939E0: mov     large fs:0, ecx
0x7939E7: pop     ecx
0x7939E8: pop     edi
0x7939E9: pop     esi
0x7939EA: pop     ebp
0x7939EB: pop     ebx
0x7939EC: add     esp, 0ECh
0x7939F2: retn    34h ; '4'
0x9CBCB0: mov     eax, [ebp-0E0h]
0x9CBCB6: push    eax
0x9CBCB7: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CBCBC: pop     ecx
0x9CBCBD: retn
0x9CBCBE: mov     eax, [ebp-0ECh]
0x9CBCC4: push    eax
0x9CBCC5: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CBCCA: pop     ecx
0x9CBCCB: retn
0x9CBCCC: mov     ecx, [ebp-0ECh]
0x9CBCD2: add     ecx, 8; this
0x9CBCD5: jmp     OB_stVector4_DestroyThiscall_010201A0; OBLIVION AUTHORITY (2026-08-30): Compiler-folded thiscall destructor for a 0x10-byte std::vector owner. Frees begin when non-null and clears begin/end/capacity; xrefs prove use beyond any single SpeedTree specialization.
0x9CBCDA: mov     edx, [esp+a4]
0x9CBCDE: lea     eax, [edx-0F0h]
0x9CBCE4: mov     ecx, [edx-0F4h]
0x9CBCEA: xor     ecx, eax
0x9CBCEC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CBCF1: mov     eax, offset stru_AF4C1C
0x9CBCF6: jmp     ___CxxFrameHandler3
