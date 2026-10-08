// 2026-05-19 captured 4.x load pass: recursive branch compute still consumes compact stock SIdvBranchInfo only; no root-support branch parameter or 40007 supplemental-root consumer is observed. Captured 23002/23003-in-40007 handling is OBSE sidecar grammar only.
//
// [2026-10-03 supplemental frond generation] Verified standard thiscall with13 stack arguments, ret0x34; old EDI input was spurious from incorrect __invalid_parameter_noinfo metadata. Calls Enabled at7925E9 and compares branchLevel to CFrondEngine+38; this selects a guide versus branch geometry. After recursive Compute79390F, Enabled79391A and the child level decide whether to destroy temporary child or retain branch hierarchy. Both decisions must be adapted together for later supplemental above/below rules. Parent pointer is CBranch+0, percentAlongParent+4, selected SIdvBranchInfo comes from B429E0[level] and its segment count is +4. Native vertex count is segments+1 at792825..79282E. Plugin wraps the root and recursive calls, implements source 25002..25007 rules in TLS context, skips computation for PRUNED, and scopes segment overrides with finally restoration. No tail fields are added to native objects.
// [2026-10-04 cluster comparison] Fallout named CIdvBranch::Compute82825ED0 has same inherited vertex basis at recursive82826EA8 (vertex+1C matrix,vertex direction). Source RT4.1 adds cluster first-visible-level identity/up reset absent at native recursive call79390F. Native ABI already typed; no object layout change needed. v113 implements only that reset, not suppression of virtual support branch geometry.
// [2026-10-05 root extension v123] Native has no40000 root candidate/data argument. Plugin appends authored root candidates when this native parent Compute returns, before outer CTreeEngine BuildBranchLods. RT4.1 Branch.cpp464-591: add int(rootFrequency/size*parentLength), reset initial parent seed once before roots; child seed retains normal-candidate seed increments; roots skip frequency/fork but obey parent pruning; bUseRoots disables child generation and turns ENABLED fronds into DISABLED (PRUNED still prunes). Root branchInfo pointer is a scoped override in B429E0[level], always restored; no native class tail is added. User-game coverage remains UNVERIFIED.
// [Cattail v127 2026-10-06] Asset inspection CONFIRMED: MeshLeafCattail.spt branch level1 firstChild=lastChild=0, frequency profile begins1/ends0. Plugin ProcessSupplementalChild previously initialized normalized coordinate=1 when range collapsed, selecting zero frequency and rejecting candidates (v125 log frequencyCulled=5, leaf LOD counts0). Supplied RT4.1 DLL computes same asset authored seed145863 into leaf counts2/1. v127 preserves native candidates for undefined normalized ranges rather than inventing an endpoint. This is a conservative plugin policy, not a claim of exact SDK NaN behavior. Targeted fixture passes; live v127 rendering UNVERIFIED.
// [Mesh generation pose v135] New extension is scoped to terminal normal branch level: leaf vector begin+4/end+8 is sampled around native branch compute and root generation; successful mesh-enabled appended leaves receive a validated N/T/B frame. Source RT4.1 Branch.cpp resets mesh rotation index at branch entry and consumes randomBank entries only for nonzero mesh rotation; previous renderer position hash did not preserve this generation-time choice. Existing native-seeded supplemental random bank is reused. Exact parity for different native/RT4.1 generation histories remains UNKNOWN.
// [24000 research 2026-10-07] Verified native candidate chain:793555..793567 computes child count from branch frequency/tree size*branch length;793669 samples first/last branch interval;793688 FillBranch supplies native spine interpolation;79379E..7937C0 normalizes the sample within authored first/last for ComputeBud793809. These existing controls explain density/distribution but are not a verified consumer of24002/24003. Current sole-reference RT4.1 source uses26007/26008 branch pruning before ComputeBud; its24000 fields are only initialized/parsed/serialized in the inspected source.
// [24000 history distinction 2026-10-07] Approved reference Branch.cpp:536 applies Prune using branch-info fields26007/26008 before leaf bud creation at576. CAD manual describes leaf pruning, relative depth, and signed distance, but no evidence binds that behavior to24000. Do not replace the requested24000 feature with already implemented26000 pruning. Details and exact reference paths: docs/leaf_placement_24000_audit.json.
void __thiscall OB_CBranch_Compute_010201A0(
        OB_CBranch_010201A0 *this,
        unsigned int rngSeed,
        float treeSizeScalar,
        int branchLevel,
        const float *branchBasePosition,
        float percentAlongParent,
        float parentDimmingScalar,
        const float *parentTransform3x3,
        const float *parentDirection,
        OB_CIndexedGeometry_010201A0 *branchGeometry,
        void *generatedLeafVectorWrapper,
        float incomingWindWeight,
        int windGroupIndex,
        float parentRadius)
{
  OB_CBranch_010201A0 *v14; // ebp
  char v15; // bl
  unsigned int *begin; // ecx
  OB_SIdvBranchInfo_010201A0 *selectedBranchInfo; // esi Compact stock SIdvBranchInfo selected from dword_B429DC..dword_B429E8 by branchLevel.
  double Uniform_010201A0; // st7
  OB_stBezierSpline_010201A0 *startAngleProfile; // ecx
  double v20; // st7
  OB_stBezierSpline_010201A0 *gravityProfile; // ecx
  double v22; // st7
  OB_stBezierSpline_010201A0 *radiusProfile; // ecx
  double v24; // st7
  OB_stBezierSpline_010201A0 *flexibilityProfile; // ecx
  double v26; // st7
  unsigned __int16 crossSectionSegments; // dx
  double v28; // st7
  int v29; // eax
  double oldDiffuseTwist; // st7
  double diffuseTTile; // st7
  double diffuseSTile; // st6
  OB_stBezierSpline_010201A0 *radiusScaleProfile; // ecx
  double v34; // st7
  int v35; // edi
  bool v36; // sf
  float v37; // eax
  OB_SIdvBranchVertex_010201A0 *v38; // ebx
  unsigned __int16 *v39; // eax
  float v40; // edi
  int v41; // ecx
  bool v42; // cc
  int v43; // edx
  int v44; // ebx
  unsigned __int16 v45; // dx
  int v46; // ecx
  __int16 v47; // dx
  int v48; // ecx
  OB_SIdvBranchVertex_010201A0 *branchVertices; // ebx
  OB_SIdvBranchInfo_010201A0 *v50; // esi
  double v51; // st7
  const OB_stBezierSpline_010201A0 *disturbanceProfile; // ecx
  OB_SIdvBranchInfo_010201A0 *v54; // esi
  double v55; // st6
  double v56; // st7
  double v57; // st5
  double v58; // st7
  double v59; // st7
  double v60; // st7
  double v61; // st6
  double v62; // st5
  double v63; // st7
  const OB_stBezierSpline_010201A0 *angleProfile; // ecx
  double v65; // st7
  double v66; // st7
  double v67; // st6
  double v68; // st7
  double v69; // st5
  double v70; // st7
  double v71; // st7
  OB_SIdvBranchInfo_010201A0 *v72; // edx
  bool v73; // zf
  double v74; // st7
  double v75; // st7
  OB_CBranch_010201A0 *v76; // esi
  float v77; // ecx
  float v78; // edx
  OB_SIdvBranchVertex_010201A0 *v79; // eax
  OB_SIdvBranchInfo_010201A0 *v80; // esi
  OB_SIdvBranchVertex_010201A0 *v81; // ebp
  OB_stBezierSpline_010201A0 *v82; // ecx
  double v83; // st7
  double v84; // st7
  double v85; // st7
  OB_stRotTransform_010201A0 *transform3x3; // ebx
  double v87; // st6
  double v88; // st7
  double v89; // st5
  float v90; // eax
  float v91; // ecx
  double v92; // st6
  double v93; // st7
  double v94; // st5
  double v95; // st6
  OB_stBezierSpline_010201A0 *v96; // ecx
  double v97; // st7
  double v98; // st7
  OB_stRotTransform_010201A0 *v99; // eax
  double v100; // st7
  OB_SIdvBranchInfo_010201A0 *v101; // esi
  OB_stBezierSpline_010201A0 *v102; // ecx
  double v103; // st7
  const OB_stBezierSpline_010201A0 *v104; // ecx
  double v105; // st6
  double v106; // st7
  double v107; // st5
  double v108; // st7
  double v109; // st7
  float v110; // edx
  double v111; // st7
  double v112; // st7
  int v113; // eax
  double v114; // st7
  double v115; // st7
  double v116; // st7
  OB_CBranch_010201A0 *v117; // esi
  OB_SIdvBranchVertex_010201A0 *v118; // eax
  OB_CBranch_010201A0 *v119; // ebp
  OB_SIdvBranchInfo_010201A0 *v120; // esi
  float v121; // eax
  unsigned int *v122; // ecx
  int v123; // edx
  int childBranchLevel; // ebx
  int v125; // eax
  bool v126; // al
  unsigned int v127; // edi
  double firstBranch; // st7
  int v129; // esi
  double v130; // st7
  int v131; // eax
  int v132; // edi
  float *direction; // ecx
  double v134; // st6
  int v135; // eax
  OB_CBranch_010201A0 *childBranch; // esi
  unsigned int *end; // eax
  unsigned int *v138; // esi
  unsigned int *v139; // edi
  int v140; // eax
  unsigned int *v141; // ebx
  OB_stVec3_010201A0 v142; // [esp-8h] [ebp-138h]
  OB_stVec3_010201A0 v143; // [esp-8h] [ebp-138h]
  _BYTE v144[40]; // [esp+4h] [ebp-12Ch] BYREF
  int childDistanceAlongBranch; // [esp+2Ch] [ebp-104h]
  rsize_t v146; // [esp+30h] [ebp-100h]
  char v147; // [esp+4Bh] [ebp-E5h]
  float v148; // [esp+4Ch] [ebp-E4h]
  float v149; // [esp+50h] [ebp-E0h]
  float v150; // [esp+54h] [ebp-DCh]
  float v151; // [esp+58h] [ebp-D8h]
  float v152; // [esp+5Ch] [ebp-D4h]
  float v153; // [esp+60h] [ebp-D0h]
  float v154; // [esp+64h] [ebp-CCh]
  unsigned __int16 scratchFloatC8[2]; // [esp+68h] [ebp-C8h]
  _BYTE outPlacement[12]; // [esp+6Ch] [ebp-C4h] BYREF
  int v157; // [esp+78h] [ebp-B8h]
  float v158; // [esp+7Ch] [ebp-B4h]
  float v159; // [esp+80h] [ebp-B0h]
  float v160; // [esp+84h] [ebp-ACh]
  OB_SIdvBranchInfo_010201A0 *branchInfo; // [esp+88h] [ebp-A8h] Compact stock SIdvBranchInfo selected from dword_B429DC..dword_B429E8 by branchLevel.
  OB_CBranch_010201A0 *currentBranch; // [esp+8Ch] [ebp-A4h]
  float v163; // [esp+90h] [ebp-A0h]
  float v164; // [esp+94h] [ebp-9Ch]
  float branchLength; // [esp+98h] [ebp-98h]
  float branchRadius; // [esp+9Ch] [ebp-94h]
  float v167; // [esp+A0h] [ebp-90h]
  float childBasePosition; // [esp+A4h] [ebp-8Ch] BYREF
  float v169; // [esp+A8h] [ebp-88h]
  float v170; // [esp+ACh] [ebp-84h]
  float branchFlexibility; // [esp+B0h] [ebp-80h]
  float branchGravity; // [esp+B4h] [ebp-7Ch]
  float v173; // [esp+B8h] [ebp-78h]
  float v174; // [esp+BCh] [ebp-74h]
  float v175; // [esp+C0h] [ebp-70h]
  double v176; // [esp+C4h] [ebp-6Ch]
  float v177; // [esp+CCh] [ebp-64h]
  float v178; // [esp+D0h] [ebp-60h]
  float v179; // [esp+D4h] [ebp-5Ch]
  float v180; // [esp+D8h] [ebp-58h]
  OB_stRotTransform_010201A0 rhs; // [esp+DCh] [ebp-54h] BYREF
  OB_stRotTransform_010201A0 outTransform; // [esp+100h] [ebp-30h] BYREF
  unsigned int v183; // [esp+12Ch] [ebp-4h]

  v14 = this; /*0x7925dd*/
  currentBranch = this; /*0x7925df*/
  if ( OB_CFrondEngine_Enabled_010201A0((const OB_CFrondEngine_010201A0 *)unk_B429C4) /*0x792606*/
    && branchLevel >= (int)Shared_GetDwordAtOffset38((void *)unk_B429C4) )
  {
    v15 = 1; /*0x792608*/
    v147 = 1; /*0x79260a*/
  }
  else
  {
    v147 = 0; /*0x792610*/
    v15 = 0; /*0x792615*/
  }
  if ( branchLevel == dword_B2B708 ) /*0x79261f*/
    windGroupIndex = unk_B429C0++; /*0x792626*/
  if ( *(float *)&branchLevel == 0.0 ) /*0x792637*/
    OB_CBranch_BuildBlossomVectors_010201A0(0); /*0x79263b*/
  begin = lastOwner.begin; /*0x792640*/
  if ( !lastOwner.begin || branchLevel >= (unsigned int)(lastOwner.end - begin) ) /*0x792656*/
  {
    _invalid_parameter_noinfo(); /*0x792658*/
    begin = lastOwner.begin; /*0x79265d*/
  }
  selectedBranchInfo = (OB_SIdvBranchInfo_010201A0 *)begin[branchLevel]; /*0x792665*/
  branchInfo = selectedBranchInfo; /*0x792668*/
  if ( !v15 ) /*0x79266c*/
    v14->startVertexOffset = branchGeometry->currentVertexWriteCounter; /*0x79267c*/
  v14->percentAlongParent = percentAlongParent; /*0x792688*/
  if ( !v15 ) /*0x79268b*/
    OB_CBranch_ComputeFlareEntries_010201A0((OB_stVector16_010201A0 *)v14, (int)selectedBranchInfo);// CBranch::Compute uses compact SIdvBranchInfo pointer selected from the static branch-info vector; flare setup consumes fields +0x28..+0x4C. /*0x792690*/
  branchLength = OB_stBezierSpline_Evaluate_010201A0(selectedBranchInfo->lengthProfile, percentAlongParent) /*0x7926b7*/
               * treeSizeScalar;                // CBranch::Compute evaluates SIdvBranchInfo length spline pointer at +0x60.
  Uniform_010201A0 = OB_stRandom_GetUniform_010201A0(&stru_B429C9, flt_A8C694, flt_A3F420); /*0x7926ce*/
  startAngleProfile = selectedBranchInfo->startAngleProfile; /*0x7926d3*/
  v153 = Uniform_010201A0; /*0x7926d6*/
  v20 = OB_stBezierSpline_Evaluate_010201A0(startAngleProfile, percentAlongParent); /*0x7926e5*/
  gravityProfile = selectedBranchInfo->gravityProfile; /*0x7926ea*/
  v154 = v20; /*0x7926ed*/
  v22 = OB_stBezierSpline_Evaluate_010201A0(gravityProfile, percentAlongParent); /*0x7926fc*/
  radiusProfile = selectedBranchInfo->radiusProfile; /*0x792701*/
  branchGravity = v22; /*0x792704*/
  v24 = OB_stBezierSpline_Evaluate_010201A0(radiusProfile, percentAlongParent); /*0x792716*/
  flexibilityProfile = selectedBranchInfo->flexibilityProfile; /*0x792722*/
  branchRadius = v24 * treeSizeScalar; /*0x792726*/
  v26 = OB_stBezierSpline_Evaluate_010201A0(flexibilityProfile, percentAlongParent); /*0x792734*/
  crossSectionSegments = selectedBranchInfo->crossSectionSegments; /*0x792739*/
  branchFlexibility = v26; /*0x79273c*/
  v14->crossSectionSegmentCount = crossSectionSegments; /*0x792743*/
  if ( selectedBranchInfo->oldDiffuseRandomTFlag ) /*0x792747*/
    v28 = v153 + dbl_A2FAA0 + percentAlongParent; /*0x792757*/
  else
    v28 = 0.0; /*0x792760*/
  v29 = (int)v14->children.begin; /*0x792762*/
  v167 = v28; /*0x792765*/
  if ( v29 ) /*0x79276b*/
    v29 = ((int)v14->children.end - v29) / 0xC; /*0x792780*/
  oldDiffuseTwist = selectedBranchInfo->oldDiffuseTwist; /*0x792789*/
  if ( (((_BYTE)v29 + (_BYTE)rngSeed) & 1) != 0 ) /*0x792791*/
    oldDiffuseTwist = -oldDiffuseTwist; /*0x792793*/
  v73 = selectedBranchInfo->diffuseTTileAbsolute == 0; /*0x792795*/
  v150 = oldDiffuseTwist; /*0x792799*/
  if ( v73 ) /*0x79279d*/
    diffuseTTile = branchLength / treeSizeScalar * selectedBranchInfo->diffuseTTile; /*0x7927af*/
  else
    diffuseTTile = selectedBranchInfo->diffuseTTile; /*0x79279f*/
  diffuseSTile = selectedBranchInfo->diffuseSTile; /*0x7927b6*/
  if ( !selectedBranchInfo->diffuseSTileAbsolute ) /*0x7927b2*/
    diffuseSTile = diffuseSTile * branchRadius * flt_B2B714; /*0x7927bf*/
  radiusScaleProfile = selectedBranchInfo->radiusScaleProfile; /*0x7927c5*/
  childBasePosition = diffuseSTile; /*0x7927c8*/
  v169 = diffuseTTile; /*0x7927cd*/
  v170 = v150; /*0x7927d5*/
  v163 = OB_stBezierSpline_Evaluate_010201A0(radiusScaleProfile, 0.0) * branchRadius; /*0x7927ea*/
  if ( parentRadius > 0.0 ) /*0x792800*/
  {
    v34 = parentRadius * dbl_A563D8; /*0x792802*/
    if ( v163 > v34 ) /*0x792813*/
    {
      v163 = v34; /*0x792815*/
      branchRadius = v163; /*0x79281d*/
    }
  }
  v35 = selectedBranchInfo->segments + 1; /*0x792828*/
  v36 = selectedBranchInfo->segments - 1 < 0; /*0x79282b*/
  v14->branchVertexCount = v35; /*0x79282e*/
  if ( v36 == __OFSUB__(v35, 2) )
  {
    v37 = COERCE_FLOAT(FormHeapAlloc((0x48 * (unsigned __int64)(unsigned int)v35) >> 0x20 != 0 ? 0xFFFFFFFF : 0x48 * v35));
    v38 = (OB_SIdvBranchVertex_010201A0 *)LODWORD(v37); /*0x79284f*/
    v149 = v37; /*0x792854*/
    v183 = 0; /*0x79285a*/
    if ( v37 == 0.0 ) /*0x792865*/
      v38 = 0; /*0x792877*/
    else
      sub_401080((void *)LODWORD(v37), 0x48, v35, (void *(__thiscall *)(void *))OB_SIdvBranchVertex_ctor_010201A0);// CBranch::Compute allocates branch vertex array with stock stride 0x48 and constructor 0x78F3E0; this proves Oblivion does not use the larger later-4.1 SIdvBranchVertex tail. /*0x792870*/
    v73 = v147 == 0; /*0x792879*/
    v183 = 0xFFFFFFFF; /*0x79287e*/
    v14->branchVertices = v38; /*0x792889*/
    if ( v73 )
    {
      *(_DWORD *)scratchFloatC8 = (unsigned __int16)(2 /*0x7928ab*/
                                                   * (LOWORD(selectedBranchInfo->crossSectionSegments) + 2)
                                                   * (LOWORD(v14->branchVertexCount) - 1));
      v39 = (unsigned __int16 *)FormHeapAlloc((unsigned __int64)scratchFloatC8[0] >> 0x1F != 0 ? 0xFFFFFFFF : 2 * scratchFloatC8[0]);
      LODWORD(v150) = branchGeometry->currentVertexWriteCounter; /*0x7928d3*/
      v40 = 0.0; /*0x7928da*/
      v41 = 0; /*0x7928e2*/
      v42 = v14->branchVertexCount - 1 <= 0; /*0x7928e4*/
      v158 = 0.0; /*0x7928e6*/
      if ( !v42 ) /*0x7928ea*/
      {
        do /*0x792967*/
        {
          v43 = selectedBranchInfo->crossSectionSegments + 1; /*0x7928ee*/
          v44 = 0; /*0x7928f1*/
          v148 = v40; /*0x7928f5*/
          if ( v43 > 0 ) /*0x7928f9*/
          {
            do /*0x792926*/
            {
              v45 = LOWORD(v40) + LOWORD(v150); /*0x792902*/
              v39[v41] = LOWORD(v40) + LOWORD(v150) + LOWORD(selectedBranchInfo->crossSectionSegments) + 1; /*0x79290b*/
              v46 = v41 + 1; /*0x79290f*/
              v39[v46] = v45; /*0x792912*/
              ++v44; /*0x792918*/
              v41 = v46 + 1; /*0x79291e*/
              ++LODWORD(v40); /*0x792921*/
            }
            while ( v44 < selectedBranchInfo->crossSectionSegments + 1 ); /*0x792926*/
            v14 = currentBranch; /*0x792928*/
          }
          ++LODWORD(v158); /*0x792934*/
          v47 = LOWORD(v148) + LOWORD(v150); /*0x792939*/
          v39[v41] = LOWORD(v148) + LOWORD(v150) + LOWORD(selectedBranchInfo->crossSectionSegments) + 1; /*0x792945*/
          v48 = v41 + 1; /*0x79294f*/
          v39[v48] = v47 + LOWORD(selectedBranchInfo->crossSectionSegments) + 1; /*0x792956*/
          v41 = v48 + 1; /*0x792960*/
        }
        while ( SLODWORD(v158) < v14->branchVertexCount - 1 ); /*0x792967*/
      }
      OB_CIndexedGeometry_AddStrip_010201A0(branchGeometry, 0, v39, scratchFloatC8[0]); /*0x79297a*/
      ++branchGeometry->currentStripCounter; /*0x79297f*/
    }
    branchVertices = currentBranch->branchVertices; /*0x792993*/
    v50 = branchInfo; /*0x792996*/
    branchVertices->position[0] = *branchBasePosition; /*0x79299a*/
    branchVertices->position[1] = branchBasePosition[1]; /*0x7929a0*/
    branchVertices->position[2] = branchBasePosition[2]; /*0x7929a6*/
    v51 = OB_stBezierSpline_ScaledVariance_010201A0(v50->disturbanceProfile, 0.0); /*0x7929b0*/
    disturbanceProfile = v50->disturbanceProfile; /*0x7929b5*/
    v160 = v51; /*0x7929b8*/
    v164 = OB_stBezierSpline_ScaledVariance_010201A0(disturbanceProfile, 0.0); /*0x7929c7*/
    qmemcpy(branchVertices->transform3x3, parentTransform3x3, sizeof(branchVertices->transform3x3)); /*0x7929de*/
    v148 = parentTransform3x3[1] * parentDirection[1] /*0x7929fe*/
         + *parentDirection * *parentTransform3x3
         + parentTransform3x3[2] * parentDirection[2];
    *(float *)scratchFloatC8 = parentTransform3x3[3] * *parentDirection /*0x792a17*/
                             + parentTransform3x3[4] * parentDirection[1]
                             + parentTransform3x3[5] * parentDirection[2];
    v151 = parentTransform3x3[6] * *parentDirection /*0x792a32*/
         + parentTransform3x3[7] * parentDirection[1]
         + parentTransform3x3[8] * parentDirection[2];
    *(float *)outPlacement = v148; /*0x792a3a*/
    *(float *)&outPlacement[4] = *(float *)scratchFloatC8; /*0x792a48*/
    *(float *)&outPlacement[8] = v151; /*0x792a57*/
    OB_Mat3_AxisAngleInPlace_010201A0( /*0x792a6c*/
      branchVertices->transform3x3,
      v153,
      COERCE_DOUBLE(__PAIR64__(*(unsigned int *)scratchFloatC8, LODWORD(v148))),
      v151);
    v148 = v164 + v154; /*0x792a84*/
    OB_Mat3_RotateYZ_010201A0(branchVertices->transform3x3, v148, v160); /*0x792a91*/
    v54 = branchInfo; /*0x792a99*/
    v55 = flt_B2B71C; /*0x792a9d*/
    v56 = flt_B2B718; /*0x792ab4*/
    v57 = flt_B2B720; /*0x792ac5*/
    v148 = branchVertices->transform3x3[6] * v57 /*0x792ac9*/
         + branchVertices->transform3x3[0] * v56
         + branchVertices->transform3x3[3] * v55;
    *(float *)scratchFloatC8 = branchVertices->transform3x3[4] * v55 /*0x792ae0*/
                             + branchVertices->transform3x3[1] * v56
                             + branchVertices->transform3x3[7] * v57;
    v151 = v56 * branchVertices->transform3x3[2] /*0x792af7*/
         + v55 * branchVertices->transform3x3[5]
         + v57 * branchVertices->transform3x3[8];
    *(float *)outPlacement = v148; /*0x792aff*/
    v58 = *(float *)scratchFloatC8; /*0x792b07*/
    branchVertices->direction[0] = v148; /*0x792b0b*/
    *(float *)&outPlacement[4] = v58; /*0x792b0d*/
    v59 = v151; /*0x792b15*/
    branchVertices->direction[1] = *(float *)&outPlacement[4]; /*0x792b19*/
    *(float *)&outPlacement[8] = v59; /*0x792b1c*/
    branchVertices->direction[2] = *(float *)&outPlacement[8]; /*0x792b26*/
    branchVertices->radius = OB_stBezierSpline_Evaluate_010201A0(v54->radiusScaleProfile, 0.0) * branchRadius; /*0x792b39*/
    v159 = OB_stBezierSpline_Evaluate_010201A0(v54->flexibilityScaleProfile, 0.0) * branchFlexibility; /*0x792b58*/
    v154 = OB_Vec3_AngleClamped01_010201A0(branchVertices->direction, &referenceVector) * dbl_A8BA48; /*0x792b67*/
    v148 = dbl_A65A18 - v154; /*0x792b75*/
    v148 = fabs(v148); /*0x792b7f*/
    *(float *)scratchFloatC8 = 1.0 - v148 * dbl_A8C698; /*0x792b91*/
    v60 = flt_B2B72C; /*0x792b95*/
    v61 = flt_B2B728; /*0x792bad*/
    v150 = v60 * branchVertices->direction[1] - branchVertices->direction[2] * v61; /*0x792bb1*/
    v62 = branchVertices->direction[2] * referenceVector - v60 * branchVertices->direction[0]; /*0x792bca*/
    v63 = referenceVector; /*0x792bca*/
    v153 = v62; /*0x792bcc*/
    v158 = v61 * branchVertices->direction[0] - v63 * branchVertices->direction[1]; /*0x792bd9*/
    v148 = v153 * v153 + v150 * v150 + v158 * v158; /*0x792bf9*/
    v148 = sqrt(v148); /*0x792c06*/
    angleProfile = v54->angleProfile; /*0x792c0e*/
    v148 = 1.0 / v148; /*0x792c16*/
    *(float *)outPlacement = v150 * v148; /*0x792c28*/
    *(float *)&outPlacement[4] = v153 * v148; /*0x792c32*/
    *(float *)&outPlacement[8] = v148 * v158; /*0x792c3a*/
    v65 = OB_stBezierSpline_Evaluate_010201A0(angleProfile, 0.0); /*0x792c43*/
    v66 = v65 - dbl_A2FAA0 + v65 - dbl_A2FAA0; /*0x792c59*/
    *(_QWORD *)&v144[0x20] = *(_QWORD *)outPlacement; /*0x792c5d*/
    v148 = v66 * dbl_A3D360; /*0x792c65*/
    rhs.m[0] = 1.0; /*0x792c6b*/
    rhs.m[1] = 0.0; /*0x792c74*/
    rhs.m[2] = 0.0; /*0x792c7b*/
    rhs.m[3] = 0.0; /*0x792c82*/
    rhs.m[5] = 0.0; /*0x792c89*/
    rhs.m[6] = 0.0; /*0x792c90*/
    rhs.m[7] = 0.0; /*0x792c97*/
    rhs.m[4] = 1.0; /*0x792c9e*/
    rhs.m[8] = 1.0; /*0x792ca5*/
    v148 = v148 * branchGravity * v154 * *(float *)scratchFloatC8; /*0x792cd1*/
    OB_Mat3_AxisAngleBuild_010201A0(rhs.m, v148, *(double *)outPlacement, *(float *)&outPlacement[8]); /*0x792cdc*/
    qmemcpy( /*0x792d09*/
      branchVertices->transform3x3,
      OB_stRotTransform_MultiplyCopy_010201A0(
        (const OB_stRotTransform_010201A0 *)branchVertices->transform3x3,
        &outTransform,
        &rhs),
      sizeof(branchVertices->transform3x3));
    v67 = flt_B2B71C; /*0x792d0e*/
    v68 = flt_B2B718; /*0x792d25*/
    v69 = flt_B2B720; /*0x792d36*/
    v148 = branchVertices->transform3x3[6] * v69 /*0x792d3a*/
         + branchVertices->transform3x3[0] * v68
         + branchVertices->transform3x3[3] * v67;
    *(float *)scratchFloatC8 = branchVertices->transform3x3[4] * v67 /*0x792d51*/
                             + branchVertices->transform3x3[1] * v68
                             + branchVertices->transform3x3[7] * v69;
    v151 = v68 * branchVertices->transform3x3[2] /*0x792d68*/
         + v67 * branchVertices->transform3x3[5]
         + v69 * branchVertices->transform3x3[8];
    *(float *)outPlacement = v148; /*0x792d70*/
    v70 = *(float *)scratchFloatC8; /*0x792d78*/
    branchVertices->direction[0] = v148; /*0x792d7c*/
    *(float *)&outPlacement[4] = v70; /*0x792d7e*/
    v71 = v151; /*0x792d86*/
    branchVertices->direction[1] = *(float *)&outPlacement[4]; /*0x792d8a*/
    *(float *)&outPlacement[8] = v71; /*0x792d94*/
    branchVertices->direction[2] = *(float *)&outPlacement[8]; /*0x792d9c*/
    if ( branchGeometry ) /*0x792d9f*/
    {
      if ( *(float *)&branchLevel == 0.0 ) /*0x792da3*/
      {
        v72 = branchInfo; /*0x792daf*/
        v148 = branchVertices->radius + branchVertices->radius; /*0x792db5*/
        *(float *)branchGeometry->reserved_18 = v148; /*0x792dbd*/
        v148 = v72->firstBranch * branchLength; /*0x792dc7*/
        *(float *)&branchGeometry->reserved_18[4] = v148; /*0x792dcf*/
      }
    }
    v73 = branchLevel == dword_B2B708; /*0x792ddf*/
    v42 = branchLevel <= dword_B2B708; /*0x792ddf*/
    *(float *)&v157 = incomingWindWeight; /*0x792de1*/
    if ( v42 ) /*0x792de5*/
    {
      v150 = 1.0; /*0x792deb*/
      if ( v73 ) /*0x792def*/
        v150 = 1.0 - v159 * dbl_A2FC68; /*0x792dff*/
      v74 = v150; /*0x792e03*/
      branchVertices->primaryWindWeight = v150; // Stock branch vertex +0x44 receives the single cross-section/child wind weight used by Oblivion's branch pipeline. /*0x792e07*/
      *(float *)&v157 = v74; /*0x792e0a*/
    }
    else if ( unk_B429C8 ) /*0x792e10*/
    {
      v148 = incomingWindWeight + (0.0 - incomingWindWeight) * v159; /*0x792e25*/
      v75 = v148; /*0x792e29*/
      branchVertices->primaryWindWeight = v148; /*0x792e2d*/
      *(float *)&v157 = v75; /*0x792e30*/
    }
    if ( v147 ) /*0x792e3d*/
    {
      OB_CFrondEngine_StartGuide_010201A0((OB_CFrondEngine_010201A0 *)unk_B429C4); /*0x792ea4*/
      v78 = branchVertices->position[0]; /*0x792eb4*/
      childDistanceAlongBranch = windGroupIndex; /*0x792eb7*/
      *(float *)&v144[0x24] = *(float *)&v157; /*0x792ebb*/
      qmemcpy(v144, branchVertices->transform3x3, 0x24u); /*0x792ecd*/
      v142.x = v78; /*0x792ed2*/
      *(_QWORD *)&v142.y = *(_QWORD *)&branchVertices->position[1]; /*0x792ed7*/
      OB_CFrondEngine_AddGuideVertex_010201A0( /*0x792ee3*/
        (OB_CFrondEngine_010201A0 *)unk_B429C4,
        v142,
        *(OB_stRotTransform_010201A0 *)v144,
        *(float *)&v157,
        windGroupIndex);
      v76 = currentBranch; /*0x792ee8*/
    }
    else
    {
      v150 = 0.0; /*0x792e43*/
      if ( *(float *)&branchLevel != 0.0 ) /*0x792e47*/
        v150 = parentDimmingScalar; /*0x792e50*/
      v76 = currentBranch; /*0x792e58*/
      childDistanceAlongBranch = branchLevel; /*0x792e63*/
      *(float *)&v144[0x24] = v167; /*0x792e6c*/
      *(_DWORD *)&v144[0x20] = windGroupIndex; /*0x792e6f*/
      OB_CBranch_BuildCrossSection_010201A0( /*0x792e97*/
        currentBranch,
        branchVertices->direction,
        0.0,
        v150,
        currentBranch->crossSectionSegmentCount,
        (int)branchGeometry,
        &childBasePosition,
        v157,
        windGroupIndex,
        v167,
        branchLevel);
    }
    v79 = v76->branchVertices; /*0x792eee*/
    v158 = 0.0; /*0x792ef1*/
    v153 = *(float *)&branchVertices; /*0x792ef5*/
    v79->runningLength = 0.0;                   // First stock branch vertex running length at +0x40 is initialized to 0.0. /*0x792ef9*/
    v42 = v76->branchVertexCount <= 1; /*0x792f01*/
    v157 = 1; /*0x792f04*/
    if ( !v42 ) /*0x792f08*/
    {
      LODWORD(v150) = 0x48; /*0x792f0e*/
      do /*0x79350f*/
      {
        LODWORD(v148) = currentBranch->branchVertexCount - 1; /*0x792f2e*/
        v80 = branchInfo; /*0x792f36*/
        v81 = (OB_SIdvBranchVertex_010201A0 *)((char *)currentBranch->branchVertices + LODWORD(v150)); /*0x792f3d*/
        v148 = (double)v157 / (double)SLODWORD(v148); /*0x792f41*/
        *(float *)scratchFloatC8 = branchInfo->segmentPackingExponent; /*0x792f48*/
        v148 = pow(v148, *(float *)scratchFloatC8); /*0x792f59*/
        v82 = branchInfo->radiusScaleProfile; /*0x792f61*/
        v159 = v148; /*0x792f64*/
        v83 = v148; /*0x792f69*/
        v148 = v148 * branchLength - v158; /*0x792f77*/
        *(float *)&childDistanceAlongBranch = v83; /*0x792f7b*/
        v84 = OB_stBezierSpline_Evaluate_010201A0(v82, *(float *)&childDistanceAlongBranch); /*0x792f7e*/
        v81->radius = v84 * branchRadius; /*0x792f87*/
        v85 = OB_stBezierSpline_Evaluate_010201A0(v80->flexibilityScaleProfile, v159); /*0x792f95*/
        transform3x3 = (OB_stRotTransform_010201A0 *)v81->transform3x3; /*0x792fa5*/
        *(float *)scratchFloatC8 = v85 * branchFlexibility; /*0x792fab*/
        qmemcpy(v81->transform3x3, (const void *)(LODWORD(v153) + 0x1C), sizeof(v81->transform3x3)); /*0x792fb6*/
        v87 = flt_B2B71C; /*0x792fbb*/
        v88 = flt_B2B718; /*0x792fd1*/
        v89 = flt_B2B720; /*0x792fe2*/
        v151 = v81->transform3x3[6] * v89 + v81->transform3x3[0] * v88 + v81->transform3x3[3] * v87; /*0x792fe6*/
        v160 = v81->transform3x3[4] * v87 + v81->transform3x3[1] * v88 + v81->transform3x3[7] * v89; /*0x792ffd*/
        v164 = v88 * v81->transform3x3[2] + v87 * v81->transform3x3[5] + v89 * v81->transform3x3[8]; /*0x793014*/
        v178 = v151; /*0x79301c*/
        v179 = v160; /*0x793027*/
        v90 = v160; /*0x793039*/
        v180 = v164; /*0x793040*/
        v91 = v164; /*0x793047*/
        v81->direction[0] = v151; /*0x79304e*/
        v81->direction[1] = v90; /*0x793051*/
        v81->direction[2] = v91; /*0x793054*/
        v154 = v81->direction[1] * flt_B2B728 + v81->direction[0] * referenceVector + v81->direction[2] * flt_B2B72C; /*0x793076*/
        if ( v154 >= (double)flt_A30634 ) /*0x79308b*/
        {
          if ( v154 > 1.0 ) /*0x7930a2*/
            v154 = 1.0; /*0x7930a4*/
        }
        else
        {
          v154 = flt_A30634; /*0x79308f*/
        }
        v151 = acos(v154); /*0x7930b5*/
        v151 = v151 * dbl_A8BA48; /*0x7930cb*/
        v160 = dbl_A65A18 - v151; /*0x7930d9*/
        v160 = fabs(v160); /*0x7930e3*/
        v149 = 1.0 - v160 * dbl_A8C698; /*0x7930f5*/
        v92 = flt_B2B72C; /*0x7930fc*/
        v93 = flt_B2B728; /*0x793113*/
        v154 = v81->direction[1] * v92 - v81->direction[2] * v93; /*0x793117*/
        v94 = v81->direction[2] * referenceVector - v92 * v81->direction[0]; /*0x793131*/
        v95 = referenceVector; /*0x793131*/
        v164 = v94; /*0x793133*/
        v160 = v93 * v81->direction[0] - v95 * v81->direction[1]; /*0x793141*/
        v152 = v154 * v154 + v164 * v164 + v160 * v160; /*0x793161*/
        v152 = sqrt(v152); /*0x79316e*/
        v96 = branchInfo->angleProfile; /*0x79317c*/
        v152 = 1.0 / v152; /*0x793182*/
        *(float *)&v176 = v154 * v152; /*0x793194*/
        *((float *)&v176 + 1) = v164 * v152; /*0x7931a1*/
        v177 = v152 * v160; /*0x7931ac*/
        v97 = OB_stBezierSpline_Evaluate_010201A0(v96, v159); /*0x7931ba*/
        v98 = v97 - dbl_A2FAA0 + v97 - dbl_A2FAA0; /*0x7931d6*/
        *(double *)&v144[0x20] = v176; /*0x7931da*/
        v152 = v98 * dbl_A3D360; /*0x7931f0*/
        v149 = v152 * branchGravity * v151 * v149; /*0x79320e*/
        OB_Mat3_AxisAngleBuild_010201A0(rhs.m, v149, v176, v177); /*0x793219*/
        v99 = OB_stRotTransform_MultiplyCopy_010201A0( /*0x793230*/
                (const OB_stRotTransform_010201A0 *)v81->transform3x3,
                &outTransform,
                &rhs);
        v100 = v159; /*0x793235*/
        qmemcpy(transform3x3, v99, sizeof(OB_stRotTransform_010201A0)); /*0x793242*/
        v101 = branchInfo; /*0x793244*/
        v102 = branchInfo->disturbanceProfile; /*0x793248*/
        *(float *)&childDistanceAlongBranch = v100; /*0x79324c*/
        v103 = OB_stBezierSpline_ScaledVariance_010201A0(v102, *(float *)&childDistanceAlongBranch); /*0x79324f*/
        v104 = v101->disturbanceProfile; /*0x793254*/
        v149 = v103; /*0x793257*/
        v152 = OB_stBezierSpline_ScaledVariance_010201A0(v104, v159); /*0x793268*/
        OB_Mat3_RotateYZ_010201A0(v81->transform3x3, v152, v149); /*0x793280*/
        v105 = flt_B2B71C; /*0x793288*/
        v106 = flt_B2B718; /*0x79329e*/
        v107 = flt_B2B720; /*0x7932af*/
        v149 = v81->transform3x3[6] * v107 + v81->transform3x3[0] * v106 + v81->transform3x3[3] * v105; /*0x7932b3*/
        v152 = v81->transform3x3[4] * v105 + v81->transform3x3[1] * v106 + v81->transform3x3[7] * v107; /*0x7932ca*/
        v151 = v106 * v81->transform3x3[2] + v105 * v81->transform3x3[5] + v107 * v81->transform3x3[8]; /*0x7932e1*/
        v173 = v149; /*0x7932e9*/
        v108 = v152; /*0x7932f7*/
        v81->direction[0] = v149; /*0x7932fb*/
        v174 = v108; /*0x7932fe*/
        v109 = v151; /*0x79330c*/
        v81->direction[1] = v174; /*0x793310*/
        v175 = v109; /*0x793313*/
        v81->direction[2] = v175; /*0x793321*/
        v149 = *(float *)LODWORD(v153) * v148; /*0x793334*/
        v152 = *(float *)(LODWORD(v153) + 4) * v148; /*0x79333d*/
        v151 = v148 * *(float *)(LODWORD(v153) + 8); /*0x793344*/
        v149 = v149 + *(float *)(LODWORD(v153) + 0xC); /*0x79334f*/
        v152 = *(float *)(LODWORD(v153) + 0x10) + v152; /*0x79335a*/
        v151 = *(float *)(LODWORD(v153) + 0x14) + v151; /*0x793365*/
        *(float *)outPlacement = v149; /*0x79336d*/
        v110 = v149; /*0x793371*/
        v111 = v152; /*0x793375*/
        v81->position[0] = v149; /*0x793379*/
        *(float *)&outPlacement[4] = v111; /*0x79337c*/
        v112 = v151; /*0x793384*/
        v81->position[1] = *(float *)&outPlacement[4]; /*0x793388*/
        *(float *)&outPlacement[8] = v112; /*0x79338b*/
        v81->position[2] = *(float *)&outPlacement[8]; /*0x79339a*/
        v113 = dword_B2B708; /*0x79339d*/
        v154 = incomingWindWeight; /*0x7933a2*/
        if ( branchLevel > v113 ) /*0x7933ad*/
        {
          if ( unk_B429C8 ) /*0x7933d6*/
          {
            v149 = incomingWindWeight + (0.0 - incomingWindWeight) * *(float *)scratchFloatC8; /*0x7933eb*/
            v115 = v149; /*0x7933ef*/
            v81->primaryWindWeight = v149; /*0x7933f3*/
            v154 = v115; /*0x7933f6*/
          }
        }
        else
        {
          v151 = 1.0; /*0x7933b3*/
          if ( branchLevel == v113 ) /*0x7933b7*/
            v151 = 1.0 - *(float *)scratchFloatC8 * v159; /*0x7933c5*/
          v114 = v151; /*0x7933c9*/
          v81->primaryWindWeight = v151; /*0x7933cd*/
          v154 = v114; /*0x7933d0*/
        }
        if ( v147 ) /*0x793403*/
        {
          childDistanceAlongBranch = windGroupIndex; /*0x7934a4*/
          *(float *)&v144[0x24] = v154; /*0x7934a8*/
          qmemcpy(v144, transform3x3, 0x24u); /*0x7934ba*/
          v143.x = v110; /*0x7934c0*/
          *(_QWORD *)&v143.y = *(_QWORD *)&outPlacement[4]; /*0x7934c6*/
          OB_CFrondEngine_AddGuideVertex_010201A0( /*0x7934d2*/
            (OB_CFrondEngine_010201A0 *)unk_B429C4,
            v143,
            *(OB_stRotTransform_010201A0 *)v144,
            v154,
            windGroupIndex);
          v117 = currentBranch; /*0x7934d7*/
        }
        else
        {
          if ( *(float *)&branchLevel == 0.0 ) /*0x793412*/
          {
            if ( v159 >= (double)branchInfo->firstBranch ) /*0x793426*/
              v116 = branchInfo->firstBranch * dbl_A3D360 / (1.0 - branchInfo->firstBranch); /*0x79343c*/
            else
              v116 = 1.0; /*0x793428*/
          }
          else
          {
            v116 = parentDimmingScalar; /*0x793440*/
          }
          v117 = currentBranch; /*0x793447*/
          v153 = v116; /*0x79344b*/
          childDistanceAlongBranch = branchLevel; /*0x79345a*/
          *(float *)&v144[0x24] = v167; /*0x793463*/
          *(_DWORD *)&v144[0x20] = windGroupIndex; /*0x79346a*/
          *(_DWORD *)&v144[0x1C] = windGroupIndex; /*0x79346b*/
          OB_CBranch_BuildCrossSection_010201A0( /*0x793492*/
            currentBranch,
            v81->direction,
            v159,
            v153,
            currentBranch->crossSectionSegmentCount,
            (int)branchGeometry,
            &childBasePosition,
            SLODWORD(v154),
            windGroupIndex,
            v167,
            branchLevel);
        }
        v118 = v117->branchVertices; /*0x7934e7*/
        LODWORD(v77) = LODWORD(v150) + 0x48; /*0x7934ea*/
        v153 = *(float *)&v81; /*0x7934ed*/
        v158 = v158 + v148; /*0x7934f1*/
        v150 = v77; /*0x7934f5*/
        *(float *)((char *)&v118->direction[0xFFFFFFFE] + LODWORD(v77)) = v158;// Per-vertex running length write: next 0x48-byte vertex's +0x40 slot receives accumulated branch length. /*0x7934fd*/
        v42 = ++v157 < v117->branchVertexCount; /*0x793508*/
      }
      while ( v42 ); /*0x79350f*/
    }
    if ( v147 ) /*0x79351a*/
    {
      *(float *)&childDistanceAlongBranch = v77; /*0x793520*/
      OB_CFrondEngine_EndGuide_010201A0((OB_CFrondEngine_010201A0 *)unk_B429C4, v163); /*0x79352a*/
      v119 = currentBranch; /*0x79352f*/
    }
    else
    {
      v119 = currentBranch; /*0x793535*/
      branchGeometry->currentVertexWriteCounter = currentBranch->startVertexOffset; /*0x793544*/
      OB_CBranch_ComputeBranchNormals_010201A0(v119, branchGeometry, v119->crossSectionSegmentCount); /*0x793550*/
    }
    v120 = branchInfo; /*0x793555*/
    v121 = COERCE_FLOAT(Double_To_SInt32(branchInfo->frequency / treeSizeScalar * branchLength)); /*0x793567*/
    v122 = lastOwner.begin; /*0x793573*/
    v123 = LODWORD(v121); /*0x793579*/
    childBranchLevel = branchLevel + 1; /*0x79357b*/
    v73 = lastOwner.begin == 0; /*0x79357e*/
    v167 = v121; /*0x793580*/
    if ( v73 ) /*0x793584*/
      v125 = 0; /*0x793586*/
    else
      v125 = lastOwner.end - v122; /*0x793591*/
    v126 = childBranchLevel >= v125 - 1; /*0x793599*/
    v147 = v126; /*0x79359e*/
    if ( !v126 || byte_B2B704 ) /*0x7935a4*/
    {
      *(float *)&v157 = 0.0; /*0x7935b3*/
      if ( v123 > 0 ) /*0x7935bb*/
      {
        while ( 1 ) /*0x7935c9*/
        {
          v127 = rngSeed; /*0x7935c9*/
          *(float *)&outPlacement[4] = 0.0; /*0x7935d2*/
          *(_DWORD *)outPlacement = 0; /*0x7935d8*/
          *(_DWORD *)&outPlacement[8] = 0; /*0x7935dc*/
          if ( v126 /*0x7935fc*/
            || (v127 = rngSeed + 3,
                rngSeed += 3,
                OB_stRandom_Reseed_010201A0(&stru_B429C9, rngSeed),
                *(float *)&v157 != 0.0) )
          {
            childDistanceAlongBranch = SLODWORD(v120->lastBranch); /*0x793655*/
            firstBranch = v120->firstBranch; /*0x793659*/
          }
          else
          {
            v149 = v120->firstBranch; /*0x793604*/
            v152 = v149 + (v120->lastBranch - v149) * dbl_A77838; /*0x79361d*/
            v149 = v120->firstBranch; /*0x793624*/
            v149 = v149 + (v120->lastBranch - v149) * dbl_A563D8; /*0x79363d*/
            *(float *)&childDistanceAlongBranch = v152; /*0x793645*/
            firstBranch = v149; /*0x793649*/
          }
          *(float *)&v144[0x24] = firstBranch; /*0x793661*/
          v150 = OB_stRandom_GetUniform_010201A0( /*0x793669*/
                   &stru_B429C9,
                   *(float *)&v144[0x24],
                   *(float *)&childDistanceAlongBranch);
          v149 = v150 * branchLength; /*0x79367c*/
          OB_CBranch_FillBranch_010201A0(v119, (OB_CBranchFillResult_010201A0 *)outPlacement, v149); /*0x793688*/
          v129 = *(_DWORD *)outPlacement; /*0x793694*/
          v163 = incomingWindWeight; /*0x793698*/
          v130 = *(float *)&outPlacement[4]; /*0x79369c*/
          if ( branchLevel == dword_B2B708 || unk_B429C8 ) /*0x7936ab*/
          {
            v131 = (int)&v119->branchVertices[*(_DWORD *)outPlacement];// Child branch wind weight interpolation reads parent vertex +0x44 and next vertex +0x44 (+0x8C from current). /*0x7936be*/
            v149 = *(float *)(v131 + 0x44); /*0x7936c1*/
            v163 = (*(float *)(v131 + 0x8C) - v149) * v130 + v149; /*0x7936d9*/
          }
          if ( !v147 ) /*0x7936e2*/
          {
            OB_stRandom_Reseed_010201A0(&stru_B429C9, v127); /*0x7936ec*/
            OB_stRandom_GetUniform_010201A0(&stru_B429C9, 0.0, flt_A2FE7C); /*0x793708*/
            v130 = *(float *)&outPlacement[4]; /*0x79370f*/
          }
          v132 = v129; /*0x79371d*/
          direction = v119->branchVertices[v129].direction; /*0x793723*/
          v149 = direction[0x15] - direction[3]; /*0x79372d*/
          v152 = direction[0x16] - direction[4]; /*0x793737*/
          v148 = direction[0x17] - direction[5]; /*0x793741*/
          v149 = v149 * v130; /*0x79374b*/
          v152 = v152 * v130; /*0x793755*/
          v148 = v148 * v130; /*0x79375f*/
          v149 = v149 + direction[3]; /*0x79376a*/
          v152 = v152 + direction[4]; /*0x793775*/
          v148 = v148 + direction[5]; /*0x793780*/
          childBasePosition = v149; /*0x793788*/
          v169 = v152; /*0x793790*/
          v170 = v148; /*0x793798*/
          v153 = 1.0; /*0x79379e*/
          if ( branchInfo->firstBranch != branchInfo->lastBranch ) /*0x7937af*/
            v153 = (v150 - branchInfo->firstBranch) / (branchInfo->lastBranch - branchInfo->firstBranch); /*0x7937c0*/
          if ( v147 ) /*0x7937c9*/
          {
            OB_CBranch_ComputeBud_010201A0( /*0x793809*/
              v119,
              v132 * 0x48,
              v119,
              treeSizeScalar,
              childBranchLevel,
              &childBasePosition,
              v153,
              direction + 7,
              direction,
              (OB_stVectorBillboardLeafPtr_010201A0 *)generatedLeafVectorWrapper,
              v163,
              windGroupIndex);
          }
          else
          {
            v134 = direction[6]; /*0x793813*/
            childDistanceAlongBranch = 0x40; /*0x793816*/
            v149 = v134; /*0x793818*/
            v149 = v130 * (direction[0x18] - v149) + v149; /*0x79382d*/
            v135 = FormHeapAlloc(0x40u);        // Child CBranch allocation in recursive compute: allocates exactly 0x40 bytes and inlines the compact constructor fields. /*0x793831*/
            if ( v135 ) /*0x79383b*/
            {
              *(float *)(v135 + 4) = 0.0; /*0x793841*/
              *(_DWORD *)v135 = v119; /*0x793844*/
              *(_DWORD *)(v135 + 0xC) = 0; /*0x793846*/
              *(_DWORD *)(v135 + 0x10) = 0; /*0x793849*/
              *(_DWORD *)(v135 + 0x14) = 0; /*0x79384c*/
              *(float *)(v135 + 0x28) = 0.0; /*0x79384f*/
              *(float *)(v135 + 0x2C) = 0.0; /*0x793855*/
              *(_DWORD *)(v135 + 0x18) = 0; /*0x793858*/
              *(_DWORD *)(v135 + 0x1C) = 0xFFFFFFFF; /*0x79385b*/
              *(_WORD *)(v135 + 0x20) = 0; /*0x79385e*/
              *(_DWORD *)(v135 + 0x24) = 0xFFFFFFFF; /*0x793862*/
              *(_DWORD *)(v135 + 0x34) = 0; /*0x793865*/
              *(_DWORD *)(v135 + 0x38) = 0; /*0x793868*/
              *(_DWORD *)(v135 + 0x3C) = 0; /*0x79386b*/
              childBranch = (OB_CBranch_010201A0 *)v135; /*0x79386e*/
            }
            else
            {
              childBranch = 0; /*0x793872*/
            }
            v183 = 0xFFFFFFFF; /*0x793883*/
            *(_DWORD *)&outPlacement[8] = childBranch; /*0x79388c*/
            v150 = parentDimmingScalar + (1.0 - parentDimmingScalar) * v153; /*0x7938a0*/
            if ( childBranchLevel <= 1 ) /*0x7938a4*/
              v150 = v150 * v150; /*0x7938ac*/
            OB_CBranch_Compute_010201A0( /*0x79390f*/
              childBranch,
              rngSeed,
              treeSizeScalar,
              childBranchLevel,
              &childBasePosition,
              v153,
              v150,
              v119->branchVertices[v132].transform3x3,
              v119->branchVertices[v132].direction,
              branchGeometry,
              generatedLeafVectorWrapper,
              v163,
              windGroupIndex,
              v149);
            if ( OB_CFrondEngine_Enabled_010201A0((const OB_CFrondEngine_010201A0 *)unk_B429C4) /*0x793930*/
              && childBranchLevel >= (int)Shared_GetDwordAtOffset38((void *)unk_B429C4) )
            {
              if ( childBranch ) /*0x793934*/
              {
                OB_CBranch_cleanup_010201A0((unsigned int *)childBranch); /*0x793938*/
                FormHeapFree((unsigned int)childBranch); /*0x79393e*/
              }
              *(_DWORD *)&outPlacement[8] = 0; /*0x793946*/
            }
            else
            {
              OB_CBranch_childVectorPush_010201A0(&v119->children.allocatorState, (int *)outPlacement); /*0x793958*/
            }
          }
          v42 = ++v157 < SLODWORD(v167); /*0x793964*/
          v126 = v147; /*0x79396c*/
          if ( !v42 ) /*0x793970*/
            break; /*0x793970*/
          v120 = branchInfo; /*0x7935c3*/
        }
      }
    }
    if ( v126 ) /*0x793978*/
    {
      end = stru_B429FC.end; /*0x79397a*/
      v138 = stru_B429FC.begin; /*0x79397f*/
      v139 = stru_B429FC.end; /*0x793987*/
      if ( stru_B429FC.begin > stru_B429FC.end ) /*0x793989*/
      {
        _invalid_parameter_noinfo(); /*0x79398b*/
        end = stru_B429FC.end; /*0x793990*/
        v138 = stru_B429FC.begin; /*0x793995*/
        if ( stru_B429FC.begin > stru_B429FC.end ) /*0x79399d*/
        {
          _invalid_parameter_noinfo(); /*0x79399f*/
          end = stru_B429FC.end; /*0x7939a4*/
        }
      }
      if ( v138 != v139 ) /*0x7939ab*/
      {
        v140 = end - v139; /*0x7939af*/
        v141 = &v138[v140]; /*0x7939bb*/
        if ( v140 > 0 ) /*0x7939be*/
          memmove_s(v138, __PAIR64__((unsigned int)v139, 4 * v140), (const void *)(4 * v140), v146); /*0x7939c4*/
        stru_B429FC.end = v141; /*0x7939cc*/
      }
    }
    OB_CBranch_ComputeVolume_010201A0(v119); /*0x7939d4*/
  }
}
