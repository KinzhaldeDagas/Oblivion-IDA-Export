//
// [2026-10-05 root buds] Root candidates at terminal normal branch level follow source bud path when ComputeLeaves is enabled; no root parameter override in that case. RootBud bridge reproduces caller793809 ECX parent, EDI preVertexIndex*48 and ten stack arguments (ret28). Executable ABI fixture verifies register/stack forwarding, not in-game leaf appearance.
// [Palmetto direction correction v137 2026-10-06] Caller793809 supplies current terminal branch as both this/a3. Native792492 walks depth parents; RT4.1 Branch.cpp ComputeBud walks depth-1, retaining the initial base if exhausted. Palmetto core3001=1, retained28004=1, all3 texture color variances4002=0. Thus source direction at depth1 is normalized(leafPos-currentBranchFirstVertexPos); stock uses trunk/ancestor origin and can compress the crown toward vertical. Plugin v137 reconstructs this source direction only for mesh-enabled leaves with positive depth and variance0 before applying hang/rotation. Uses leafPos+4, branch vertices+18/count+1C, first vertex position+C, compact texture stride54 variance+10. Other cases preserve original direction. Targeted tests and independent review pass; visual result pending.
// [24000 research 2026-10-07] Existing bud path evaluates the terminal branch length profile, scales by tree size and divides by segment count at7921B0..1D0; native floor applies before random azimuth and fixed Y rotation. It derives leaf position and normal from the parent transform, then calls MakeLeaf792598. No24000 placement distance/level storage was established in this compact native path; preserve card/mesh generation until historical semantics are verified.
// [24000 historical transfer trace 2026-10-07; reference addresses, not Oblivion ABI] In the approved Desktop/SpeedTree CAD4.2 executable, editor SPT serializer4BEAF0 is called at44CD78; its result and byte count pass via44CD94 to42A670. That wrapper calls runtime LoadTree4E2700 at42A73F and Compute4E1830 at42A7B9; Compute calls engine50C090 at4E1887. The editor serializer omits24000 and its dedicated writer4C1AD0 has no found direct call/pointer reference. Candidate bud4F78E0..4F7E18 reads leaf-info dimming depth+54 and calls MakeLeaf4F8F00 at4F7DDB, with no placement+20/+24 read. This closes the inspected preview transfer hypothesis but does not supply historical24000 generation semantics. No native consumer was invented or deployed. Evidence: out/leaf_placement_24000/cad42_transfer_conclusion.json; goal remains incomplete pending an active historical reference.
// [RT4.1 parity v146 2026-10-07] Source ComputeBud depth0 selects spine direction at int(percent*(count-1)); depth>0 uses origin after depth-1 parent hops and keeps immediate base when exhausted. Native uses leafInfo+2C blossom level and a different ancestor walk. MakeLeaf wrapper at792598 corrects parent direction for retained28000 models. Legacy missing28004 uses native blossom level after7A46DA installs current leafInfo. Native bud minimum segment length at7921B8..7921D0 remains an explicit full-parity gap; do not claim entire bud generation parity.
void __userpurge OB_CBranch_ComputeBud_010201A0(
        OB_CBranch_010201A0 *this@<ecx>,
        int a2@<edi>,
        _DWORD *a3,
        float a4,
        unsigned int a5,
        float *a6,
        float a7,
        float *a8,
        float *a9,
        OB_stVectorBillboardLeafPtr_010201A0 *a10,
        float a11,
        int a12)
{
  _BYTE *v13; // ecx
  int v14; // esi
  double v15; // st7
  double v16; // st6
  double v17; // st7
  double v18; // st6
  double v19; // st5
  double v20; // st4
  float v21; // edx
  float v22; // eax
  double v23; // st3
  double v24; // st7
  double v25; // st6
  double v26; // st7
  double v27; // st6
  double v28; // st5
  _DWORD *v29; // eax
  float *v30; // ecx
  float v31; // edx
  float v32; // edx
  float v33; // ecx
  int v34; // edx
  int v35; // ecx
  float *v36; // eax
  float v37; // ecx
  float v38; // edx
  float v39; // eax
  float v40; // ecx
  float v41; // edx
  float z; // eax
  float v43; // [esp+2Ch] [ebp-F0h]
  float v44; // [esp+2Ch] [ebp-F0h]
  float v45; // [esp+2Ch] [ebp-F0h]
  float v46; // [esp+2Ch] [ebp-F0h]
  float v47; // [esp+2Ch] [ebp-F0h]
  float v48; // [esp+2Ch] [ebp-F0h]
  float v49; // [esp+2Ch] [ebp-F0h]
  OB_stVec3_010201A0 normal; // [esp+30h] [ebp-ECh] BYREF
  OB_stVec3_010201A0 parentDirection; // [esp+3Ch] [ebp-E0h] BYREF
  OB_stVec3_010201A0 v52; // [esp+4Ch] [ebp-D0h]
  double x; // [esp+5Ch] [ebp-C0h]
  float v54; // [esp+64h] [ebp-B8h]
  double y; // [esp+6Ch] [ebp-B0h]
  float v56; // [esp+74h] [ebp-A8h]
  double v57; // [esp+7Ch] [ebp-A0h]
  OB_stVec3_010201A0 v58; // [esp+84h] [ebp-98h]
  float v59; // [esp+90h] [ebp-8Ch]
  float v60; // [esp+94h] [ebp-88h]
  float v61; // [esp+98h] [ebp-84h]
  float v62[14]; // [esp+A0h] [ebp-7Ch] BYREF
  OB_stVec3_010201A0 position; // [esp+D8h] [ebp-44h] BYREF
  float v64; // [esp+E8h] [ebp-34h]
  float v65; // [esp+ECh] [ebp-30h]
  float v66; // [esp+F0h] [ebp-2Ch]
  float v67; // [esp+F4h] [ebp-28h]
  float v68; // [esp+F8h] [ebp-24h]
  float v69; // [esp+FCh] [ebp-20h]
  float v70; // [esp+100h] [ebp-1Ch]
  float v71; // [esp+104h] [ebp-18h]
  float v72; // [esp+108h] [ebp-14h]
  double v73; // [esp+114h] [ebp-8h]

  v13 = MEMORY[0xB429E0]; /*0x7920af*/
  if ( !MEMORY[0xB429E0] || a5 >= ((_BYTE *)MEMORY[0xB429E4] - v13) >> 2 ) /*0x7920ca*/
  {
    _invalid_parameter_noinfo((int)this, a2, a5); /*0x7920cc*/
    v13 = MEMORY[0xB429E0]; /*0x7920d1*/
  }
  v14 = *(_DWORD *)&v13[4 * a5]; /*0x7920d7*/
  v58.z = 0.0; /*0x7920dc*/
  v58.y = 0.0; /*0x7920e0*/
  v58.x = 0.0; /*0x7920e4*/
  v61 = 0.0; /*0x7920e8*/
  v60 = 0.0; /*0x7920ec*/
  v59 = 0.0; /*0x7920f0*/
  v62[0] = 1.0; /*0x7920f6*/
  v62[4] = 1.0; /*0x7920fd*/
  v62[8] = 1.0; /*0x792104*/
  v64 = 1.0; /*0x79210b*/
  v68 = 1.0; /*0x792112*/
  v72 = 1.0; /*0x792119*/
  v62[1] = 0.0; /*0x792120*/
  v62[2] = 0.0; /*0x792127*/
  v62[3] = 0.0; /*0x79212e*/
  v62[5] = 0.0; /*0x792135*/
  v62[6] = 0.0; /*0x79213c*/
  v62[7] = 0.0; /*0x792143*/
  v62[0xD] = 0.0; /*0x79214a*/
  v62[0xC] = 0.0; /*0x792151*/
  v62[0xB] = 0.0; /*0x792158*/
  position.z = 0.0; /*0x79215f*/
  position.y = 0.0; /*0x792166*/
  position.x = 0.0; /*0x79216d*/
  v65 = 0.0; /*0x792174*/
  v66 = 0.0; /*0x79217b*/
  v67 = 0.0; /*0x792182*/
  v69 = 0.0; /*0x792189*/
  v70 = 0.0; /*0x792190*/
  v71 = 0.0; /*0x792197*/
  *(float *)&v57 = OB_stBezierSpline_Evaluate_010201A0((float *)*(_DWORD *)(v14 + 0x60), a7) * a4; /*0x7921b0*/
  v15 = *(float *)&v57 / (double)*(int *)(v14 + 4); /*0x7921b8*/
  v16 = dbl_A3D8E8; /*0x7921bb*/
  if ( v16 >= v15 ) /*0x7921c8*/
    v15 = v16; /*0x7921ce*/
  v43 = v15; /*0x7921d0*/
  *(float *)&v57 = OB_stRandom_GetUniform_010201A0(flt_A8C694, flt_A3F420); /*0x7921f7*/
  v17 = a9[1]; /*0x7921fe*/
  v18 = *a9; /*0x792204*/
  v19 = a9[2]; /*0x79220d*/
  v20 = a8[1] * v17; /*0x792218*/
  v21 = a6[1]; /*0x79221a*/
  v22 = a6[2]; /*0x79221f*/
  v23 = *a8 * v18; /*0x792222*/
  v59 = *a6; /*0x792224*/
  v60 = v21; /*0x79222b*/
  v61 = v22; /*0x792232*/
  normal.x = v20 + v23 + a8[2] * v19; /*0x792249*/
  normal.y = a8[3] * v18 + a8[4] * v17 + a8[5] * v19; /*0x792260*/
  v24 = v17 * a8[7] + v18 * a8[6]; /*0x792274*/
  v25 = v19 * a8[8]; /*0x792276*/
  qmemcpy(v62, a8, 0x24u); /*0x792279*/
  normal.z = v24 + v25; /*0x79227d*/
  OB_Mat3_AxisAngleInPlace_010201A0(v62, *(float *)&v57, *(double *)&normal.x, normal.z); /*0x7922a0*/
  OB_Mat3_RotateY_010201A0(v62, flt_A5793C); /*0x7922b6*/
  v26 = flt_B2B71C; /*0x7922bb*/
  v27 = flt_B2B718; /*0x7922c1*/
  v28 = flt_B2B720; /*0x7922c7*/
  normal.x = v62[0] * v27 + v62[3] * v26 + v62[6] * v28; /*0x7922ec*/
  normal.y = v62[1] * v27 + v62[4] * v26 + v62[7] * v28; /*0x792317*/
  normal.z = v26 * v62[5] + v27 * v62[2] + v28 * v62[8]; /*0x792342*/
  v58 = normal; /*0x79234e*/
  *(float *)&y = normal.x * v43; /*0x792358*/
  *((float *)&y + 1) = normal.y * v43; /*0x792362*/
  v56 = v43 * normal.z; /*0x79236a*/
  v52.x = *(float *)&y + v59; /*0x792378*/
  v52.y = *((float *)&y + 1) + v60; /*0x792391*/
  v52.z = v56 + v61; /*0x7923aa*/
  position = v52; /*0x7923b6*/
  x = v52.x; /*0x7923bd*/
  normal.x = v52.x - v59; /*0x7923c5*/
  y = v52.y; /*0x7923cd*/
  normal.y = v52.y - v60; /*0x7923d3*/
  *(double *)&v52.x = v52.z; /*0x7923db*/
  normal.z = v52.z - v61; /*0x7923e1*/
  v73 = normal.y; /*0x7923e9*/
  v57 = normal.x; /*0x7923f4*/
  *(double *)&parentDirection.x = normal.z; /*0x7923fc*/
  v44 = normal.y * normal.y + normal.x * normal.x + normal.z * normal.z; /*0x792410*/
  v45 = sqrt(v44); /*0x79241d*/
  v29 = a3; /*0x792421*/
  v46 = 1.0 / v45; /*0x79242e*/
  normal.x = normal.x * v46; /*0x79243c*/
  normal.y = normal.y * v46; /*0x792449*/
  normal.z = v46 * normal.z; /*0x792451*/
  if ( a3 && a3[7] ) /*0x79245b*/
  {
    v30 = (float *)a3[6]; /*0x792465*/
    v31 = v30[3]; /*0x792468*/
    v30 += 3; /*0x79246b*/
    parentDirection.x = v31; /*0x79246e*/
    v32 = v30[1]; /*0x792472*/
    v33 = v30[2]; /*0x792475*/
    parentDirection.y = v32; /*0x792478*/
    v34 = *(_DWORD *)(unk_B429B8 + 0x2C); /*0x792482*/
    parentDirection.z = v33; /*0x792487*/
    if ( v34 ) /*0x79248b*/
    {
      v35 = 0; /*0x79248d*/
      while ( v35 < v34 ) /*0x792492*/
      {
        v29 = (_DWORD *)*v29; /*0x792494*/
        ++v35; /*0x792496*/
        if ( !v29 ) /*0x79249b*/
          goto LABEL_15; /*0x79249b*/
      }
      if ( v29 ) /*0x7924a1*/
      {
        v36 = (float *)v29[6]; /*0x7924a3*/
        v37 = v36[3]; /*0x7924a6*/
        v38 = v36[4]; /*0x7924a9*/
        v39 = v36[5]; /*0x7924af*/
        parentDirection.x = v37; /*0x7924b2*/
        parentDirection.y = v38; /*0x7924b6*/
        parentDirection.z = v39; /*0x7924ba*/
      }
    }
LABEL_15:
    *(float *)&x = x - parentDirection.x; /*0x7924be*/
    v40 = *(float *)&x; /*0x7924ca*/
    *((float *)&x + 1) = y - parentDirection.y; /*0x7924d6*/
    v41 = *((float *)&x + 1); /*0x7924da*/
    v54 = *(double *)&v52.x - parentDirection.z; /*0x7924e6*/
    z = v54; /*0x7924ea*/
  }
  else
  {
    v40 = normal.x; /*0x7924f0*/
    v41 = normal.y; /*0x7924f4*/
    z = normal.z; /*0x7924f8*/
  }
  y = v41; /*0x792504*/
  *(double *)&v52.x = v40; /*0x792514*/
  x = z; /*0x79251c*/
  v47 = v41 * v41 + v40 * v40 + z * z; /*0x792530*/
  v48 = sqrt(v47); /*0x79253d*/
  v49 = 1.0 / v48; /*0x792561*/
  parentDirection.x = v40 * v49; /*0x79256f*/
  parentDirection.y = v41 * v49; /*0x792579*/
  parentDirection.z = v49 * z; /*0x792581*/
  OB_CBranch_MakeLeaf_010201A0(this, &position, a7, this, &normal, &parentDirection, a11, a12, a10);// Only direct MakeLeaf call. ComputeBud passes its a7/fPercentOfParent argument as percentAlongParent and the current CBranch (`this`) as parentBranch; these are the inputs to the recursive/cubic dimming formula. /*0x792598*/
}
