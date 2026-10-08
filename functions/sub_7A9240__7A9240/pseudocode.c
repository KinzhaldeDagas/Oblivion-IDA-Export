// OBLIVION AUTHORITY 2026-08-27: CLeafLodEngine::FindPairs accepts a 16-byte leaf-vector value. For each primary leaf in source order, it scans a contiguous following prefix only until end or the first already-marked candidate, chooses the nearest position within spacing tolerance, and marks only that chosen match. A leaf already used as a match may later be a primary. It never compares textureIndexByte, colorScaleByte, packedColor, or texture record, so pairs may cross leaf textures/layers.
// bad sp value at call has been detected, the output may be wrong!
void __thiscall OB_CLeafLodEngine_FindPairs_010201A0(
        OB_CLeafLodEngine_010201A0 *this,
        OB_stVectorBillboardLeafPtr_010201A0 originalLeaves)
{
  OB_CBillboardLeaf_010201A0 **begin; // ebx
  OB_CBillboardLeaf_010201A0 **end; // ebp
  unsigned int v4; // esi
  unsigned int *v5; // edi
  unsigned int *v6; // edi
  OB_CBillboardLeaf_010201A0 **v7; // esi
  const OB_CBillboardLeaf_010201A0 *v8; // edx
  unsigned int *v9; // esi
  OB_stVectorBool_010201A0 *owner; // esi
  unsigned int *word; // ebp
  unsigned int v12; // ebx
  int v13; // ecx
  unsigned int bitOffset; // ebx
  unsigned int *v15; // esi
  OB_stVectorBool_010201A0 *v16; // esi
  unsigned int *v17; // ebx
  unsigned int *v18; // ebp
  int v19; // ecx
  char v20; // bp
  int v21; // esi
  const OB_CBillboardLeaf_010201A0 **v22; // ebx
  OB_CBillboardLeaf_010201A0 **v23; // ebp
  float *p_x; // esi
  double v25; // st4
  double v26; // st6
  double v27; // st4
  double v28; // st5
  double v29; // st6
  int v30; // esi
  unsigned int *v31; // edi
  OB_stVectorBool_010201A0 *v32; // ebx
  unsigned int v33; // eax
  bool v34; // cc
  OB_stVectorLeafLodEntry_010201A0 *v35; // ecx
  OB_stVectorBoolIterator_010201A0 v36; // [esp-1Ch] [ebp-B0h] BYREF
  OB_stVectorBoolIterator_010201A0 v37; // [esp-10h] [ebp-A4h] BYREF
  const bool *v38; // [esp-4h] [ebp-98h]
  bool v39; // [esp+17h] [ebp-7Dh] BYREF
  float v40; // [esp+18h] [ebp-7Ch]
  int delta; // [esp+1Ch] [ebp-78h]
  OB_stVectorLeafLodEntry_010201A0 *p_m_vPairs; // [esp+20h] [ebp-74h]
  unsigned int value; // [esp+24h] [ebp-70h] BYREF
  int v44; // [esp+28h] [ebp-6Ch]
  float v45; // [esp+2Ch] [ebp-68h]
  OB_stVectorBillboardLeafPtr_010201A0 *v46; // [esp+30h] [ebp-64h]
  unsigned int v47; // [esp+34h] [ebp-60h]
  OB_CBillboardLeaf_010201A0 **v48; // [esp+3Ch] [ebp-58h]
  OB_CLeafLodEngine_SLodEntry_010201A0 v49; // [esp+40h] [ebp-54h] BYREF
  OB_stVectorBillboardLeafPtr_010201A0 *p_originalLeaves; // [esp+48h] [ebp-4Ch]
  OB_CBillboardLeaf_010201A0 **v51; // [esp+4Ch] [ebp-48h]
  OB_stVectorBoolIterator_010201A0 v52; // [esp+50h] [ebp-44h] BYREF
  OB_stVectorBoolIterator_010201A0 v53; // [esp+5Ch] [ebp-38h] BYREF
  OB_stVectorBoolIterator_010201A0 v54; // [esp+68h] [ebp-2Ch] BYREF
  OB_stVectorBool_010201A0 v55; // [esp+74h] [ebp-20h] BYREF
  int v56; // [esp+90h] [ebp-4h]

  p_m_vPairs = &this->m_vPairs; /*0x7a926a*/
  begin = originalLeaves.begin; /*0x7a926e*/
  end = originalLeaves.end; /*0x7a9275*/
  v56 = 0; /*0x7a9280*/
  if ( originalLeaves.begin ) /*0x7a9287*/
    v4 = originalLeaves.end - originalLeaves.begin; /*0x7a9291*/
  else
    v4 = 0; /*0x7a9289*/
  v55.logicalSize = 0; /*0x7a9294*/
  value = 0; /*0x7a9298*/
  OB_stVectorUInt32_ctor_fill_010201A0(&v55.words, (v4 + 0x1F) >> 5, &value); /*0x7a92af*/
  LOBYTE(v56) = 1; /*0x7a92b9*/
  OB_stVectorBool_Resize_010201A0(&v55, v4); /*0x7a92c1*/
  v38 = &v39; /*0x7a92ce*/
  LOBYTE(v56) = 2; /*0x7a92d9*/
  v39 = 0; /*0x7a92e1*/
  v45 = COERCE_FLOAT(&v37); /*0x7a92e6*/
  v5 = v55.words.begin; /*0x7a92ec*/
  if ( v55.words.begin > v55.words.end ) /*0x7a92ee*/
    _invalid_parameter_noinfo((int)begin, (int)v55.words.begin, (int)&v37); /*0x7a92f0*/
  v37.word = v5; /*0x7a9302*/
  v37.bitOffset = 0; /*0x7a9305*/
  v37.owner = &v55; /*0x7a930c*/
  if ( v55.logicalSize ) /*0x7a9317*/
    OB_stVectorBoolIterator_Advance_010201A0(&v37, v55.logicalSize); /*0x7a931c*/
  v6 = v55.words.begin; /*0x7a9321*/
  v45 = COERCE_FLOAT(&v36); /*0x7a9332*/
  if ( v55.words.begin > v55.words.end ) /*0x7a9338*/
    _invalid_parameter_noinfo((int)begin, (int)v55.words.begin, (int)&v36); /*0x7a933a*/
  v36.word = v6; /*0x7a934c*/
  v36.bitOffset = 0; /*0x7a934f*/
  v36.owner = &v55; /*0x7a9356*/
  OB_stVectorBool_FillRangeChecked_010201A0(v36, v37, v38); /*0x7a9358*/
  if ( begin > end ) /*0x7a9362*/
    _invalid_parameter_noinfo((int)begin, (int)v6, (int)&v36); /*0x7a9364*/
  v7 = begin; /*0x7a9369*/
  v48 = begin; /*0x7a936b*/
  while ( 1 ) /*0x7a9370*/
  {
    if ( begin > end ) /*0x7a9372*/
      _invalid_parameter_noinfo((int)begin, (int)v6, (int)v7); /*0x7a9374*/
    if ( v7 == end ) /*0x7a937b*/
      break; /*0x7a937b*/
    if ( v7 >= end ) /*0x7a9381*/
      _invalid_parameter_noinfo((int)begin, (int)v6, (int)v7); /*0x7a9383*/
    v8 = *v7; /*0x7a9390*/
    v40 = flt_A32048; /*0x7a9392*/
    v49.m_pLeaf = v8; /*0x7a9396*/
    v49.m_pLeafMatch = 0; /*0x7a939a*/
    delta = 0xFFFFFFFF; /*0x7a93a2*/
    if ( begin > end ) /*0x7a93aa*/
      _invalid_parameter_noinfo((int)begin, (int)v6, (int)v7); /*0x7a93ac*/
    p_originalLeaves = &originalLeaves; /*0x7a93bf*/
    v6 = (unsigned int *)(v7 - begin + 1); /*0x7a93c6*/
    v51 = v7; /*0x7a93cb*/
    value = (unsigned int)(v7 + 1); /*0x7a93cf*/
    if ( v7 + 1 > end || v7 + 1 < begin ) /*0x7a93d7*/
      _invalid_parameter_noinfo((int)begin, (int)v6, (int)v7); /*0x7a93d9*/
    v46 = p_originalLeaves; /*0x7a93e6*/
    v47 = value; /*0x7a93ea*/
    while ( 1 ) /*0x7a93f0*/
    {
      if ( begin > end ) /*0x7a93f2*/
        _invalid_parameter_noinfo((int)begin, (int)v6, (int)v7); /*0x7a93f4*/
      if ( !v46 || v46 != &originalLeaves ) /*0x7a940a*/
        _invalid_parameter_noinfo((int)begin, (int)v6, (int)v7); /*0x7a940c*/
      if ( (OB_CBillboardLeaf_010201A0 **)v47 == end ) /*0x7a9415*/
        break; /*0x7a9415*/
      v9 = v55.words.begin; /*0x7a941b*/
      if ( v55.words.begin > v55.words.end ) /*0x7a9426*/
        _invalid_parameter_noinfo((int)begin, (int)v6, (int)v55.words.begin); /*0x7a9428*/
      v53.word = v9; /*0x7a9436*/
      v53.bitOffset = 0; /*0x7a943a*/
      v53.owner = &v55; /*0x7a9442*/
      OB_stVectorBoolIterator_Advance_010201A0(&v53, (int)v6); /*0x7a9446*/
      owner = v53.owner; /*0x7a944b*/
      word = v53.word; /*0x7a9451*/
      if ( v53.owner ) /*0x7a9455*/
      {
        if ( v53.word ) /*0x7a9465*/
          goto LABEL_36; /*0x7a9465*/
      }
      else
      {
        _invalid_parameter_noinfo((int)begin, (int)v6, 0); /*0x7a9457*/
        _invalid_parameter_noinfo((int)begin, (int)v6, 0); /*0x7a945c*/
      }
      _invalid_parameter_noinfo((int)begin, (int)v6, (int)owner); /*0x7a9467*/
LABEL_36:
      v12 = (unsigned int)owner->words.begin; /*0x7a946c*/
      if ( (unsigned int *)v12 > owner->words.end ) /*0x7a9472*/
        _invalid_parameter_noinfo(v12, (int)v6, (int)owner); /*0x7a9474*/
      v13 = (int)word - v12; /*0x7a947b*/
      bitOffset = v53.bitOffset; /*0x7a947d*/
      if ( v53.bitOffset + 0x20 * (v13 >> 2) >= owner->logicalSize ) /*0x7a948b*/
        _invalid_parameter_noinfo(v53.bitOffset, (int)v6, (int)owner); /*0x7a948d*/
      if ( ((1 << bitOffset) & *word) != 0 )    // If the current candidate's match bit is already set, breaks the candidate loop. This truncates the scan at the first prior match; it does not skip that entry and continue to later unpaired leaves. /*0x7a949e*/
      {
        v7 = v48; /*0x7a9616*/
        end = originalLeaves.end; /*0x7a961a*/
        begin = originalLeaves.begin; /*0x7a9621*/
        break; /*0x7a9621*/
      }
      v15 = v55.words.begin; /*0x7a94a4*/
      if ( v55.words.begin > v55.words.end ) /*0x7a94af*/
        _invalid_parameter_noinfo(bitOffset, (int)v6, (int)v55.words.begin); /*0x7a94b1*/
      v54.word = v15; /*0x7a94bf*/
      v54.bitOffset = 0; /*0x7a94c3*/
      v54.owner = &v55; /*0x7a94cb*/
      OB_stVectorBoolIterator_Advance_010201A0(&v54, (int)v6); /*0x7a94cf*/
      v16 = v54.owner; /*0x7a94d4*/
      v17 = v54.word; /*0x7a94da*/
      if ( v54.owner ) /*0x7a94de*/
      {
        if ( v54.word ) /*0x7a94ee*/
          goto LABEL_47; /*0x7a94ee*/
      }
      else
      {
        _invalid_parameter_noinfo((int)v54.word, (int)v6, 0); /*0x7a94e0*/
        _invalid_parameter_noinfo((int)v17, (int)v6, 0); /*0x7a94e5*/
      }
      _invalid_parameter_noinfo((int)v17, (int)v6, (int)v16); /*0x7a94f0*/
LABEL_47:
      v18 = v16->words.begin; /*0x7a94f5*/
      if ( v18 > v16->words.end ) /*0x7a94fb*/
        _invalid_parameter_noinfo((int)v17, (int)v6, (int)v16); /*0x7a94fd*/
      v19 = (char *)v17 - (char *)v18; /*0x7a9504*/
      v20 = v54.bitOffset; /*0x7a9506*/
      if ( v54.bitOffset + 0x20 * (v19 >> 2) >= v16->logicalSize ) /*0x7a9514*/
        _invalid_parameter_noinfo((int)v17, (int)v6, (int)v16); /*0x7a9516*/
      if ( ((1 << v20) & *v17) != 0 ) /*0x7a9526*/
      {
        v22 = (const OB_CBillboardLeaf_010201A0 **)v47; /*0x7a95d6*/
      }
      else
      {
        v21 = (int)v46; /*0x7a952c*/
        if ( !v46 ) /*0x7a9532*/
          _invalid_parameter_noinfo((int)v17, (int)v6, 0); /*0x7a9534*/
        v22 = (const OB_CBillboardLeaf_010201A0 **)v47; /*0x7a9539*/
        if ( v47 >= *(_DWORD *)(v21 + 8) ) /*0x7a9540*/
          _invalid_parameter_noinfo(v47, (int)v6, v21); /*0x7a9542*/
        v23 = v48; /*0x7a9549*/
        p_x = &(*v22)->position.x;              // Candidate pairing input is only the candidate leaf position at +4; no texture-index compatibility test precedes it. /*0x7a954d*/
        if ( v48 >= originalLeaves.end ) /*0x7a9557*/
          _invalid_parameter_noinfo((int)v22, (int)v6, (int)p_x); /*0x7a9559*/
        v25 = *p_x - (*v23)->position.x;        // Computes Euclidean distance between current and candidate leaf positions. Pair eligibility is geometric, not per-texture. /*0x7a9578*/
        v26 = v25 * v25; /*0x7a957a*/
        v27 = p_x[1] - (*v23)->position.y; /*0x7a957c*/
        v28 = v26; /*0x7a9580*/
        v29 = p_x[2] - (*v23)->position.z; /*0x7a9580*/
        *(float *)&v44 = v27 * v27 + v28 + v29 * v29; /*0x7a9588*/
        LODWORD(v45) = (v44 >> 1) + 0x1FC00000; /*0x7a9597*/
        if ( *(float *)&p_m_vPairs[1].allocatorState > (double)v45 && v40 > (double)v45 )// Within the still-unmarked contiguous candidate prefix, accepts a candidate only when Euclidean position distance is below both spacing tolerance and the current shortest distance. No leaf-texture equality condition exists. /*0x7a95b6*/
        {
          v40 = v45; /*0x7a95bc*/
          if ( (OB_CBillboardLeaf_010201A0 **)v22 >= v46->end ) /*0x7a95c3*/
            _invalid_parameter_noinfo((int)v22, (int)v6, (int)p_x); /*0x7a95c5*/
          v49.m_pLeafMatch = *v22; /*0x7a95cc*/
          delta = (int)v6; /*0x7a95d0*/
        }
      }
      v30 = (int)v46; /*0x7a95de*/
      v6 = (unsigned int *)((char *)v6 + 1); /*0x7a95e2*/
      if ( !v46 ) /*0x7a95e7*/
        _invalid_parameter_noinfo((int)v22, (int)v6, 0); /*0x7a95e9*/
      if ( (unsigned int)v22 >= *(_DWORD *)(v30 + 8) ) /*0x7a95f1*/
        _invalid_parameter_noinfo((int)v22, (int)v6, v30); /*0x7a95f3*/
      v7 = v48; /*0x7a95f8*/
      end = originalLeaves.end; /*0x7a95fc*/
      v47 = (unsigned int)(v22 + 1); /*0x7a9606*/
      begin = originalLeaves.begin; /*0x7a960a*/
    }
    if ( v49.m_pLeafMatch ) /*0x7a962d*/
    {
      v31 = v55.words.begin; /*0x7a9633*/
      if ( v55.words.begin > v55.words.end ) /*0x7a963e*/
        _invalid_parameter_noinfo((int)begin, (int)v55.words.begin, (int)v7); /*0x7a9640*/
      v52.owner = &v55; /*0x7a964d*/
      v52.word = v31; /*0x7a9656*/
      v52.bitOffset = 0; /*0x7a965a*/
      OB_stVectorBoolIterator_Advance_010201A0(&v52, delta); /*0x7a9662*/
      v32 = v52.owner; /*0x7a9667*/
      v6 = v52.word; /*0x7a966d*/
      if ( !v52.owner ) /*0x7a9671*/
      {
        _invalid_parameter_noinfo(0, (int)v52.word, (int)v7); /*0x7a9673*/
        _invalid_parameter_noinfo(0, (int)v6, (int)v7); /*0x7a9678*/
        goto LABEL_76; /*0x7a967d*/
      }
      if ( !v52.word ) /*0x7a9681*/
LABEL_76:
        _invalid_parameter_noinfo((int)v32, (int)v6, (int)v7); /*0x7a9683*/
      v33 = (unsigned int)v32->words.begin; /*0x7a9688*/
      v34 = (unsigned int *)v33 <= v32->words.end; /*0x7a968b*/
      v44 = v33; /*0x7a968e*/
      if ( !v34 ) /*0x7a9692*/
      {
        _invalid_parameter_noinfo((int)v32, (int)v6, (int)v7); /*0x7a9694*/
        v33 = v44; /*0x7a9699*/
      }
      if ( v52.bitOffset + 0x20 * ((int)((int)v6 - v33) >> 2) >= v32->logicalSize ) /*0x7a96ad*/
        _invalid_parameter_noinfo((int)v32, (int)v6, (int)v7); /*0x7a96af*/
      v35 = p_m_vPairs; /*0x7a96bf*/
      v38 = (const bool *)&v49; /*0x7a96c7*/
      *v6 |= 1 << SLOBYTE(v52.bitOffset);       // Marks only the selected matching candidate. The current primary leaf is not marked, so a leaf used earlier as a match can later act as a primary. /*0x7a96c8*/
      OB_stVectorLeafLodEntry_PushBack_010201A0(v35, (const OB_CLeafLodEngine_SLodEntry_010201A0 *)v38);// Pushes {primaryLeaf, nearestLeaf} pair. Because selection never reads +0x40 textureIndexByte, the pair may cross leaf texture/layer records. /*0x7a96ca*/
      begin = originalLeaves.begin; /*0x7a96cf*/
    }
    if ( v7 >= end ) /*0x7a96d8*/
      _invalid_parameter_noinfo((int)begin, (int)v6, (int)v7); /*0x7a96da*/
    v48 = (OB_CBillboardLeaf_010201A0 **)value; /*0x7a96e3*/
    v7 = (OB_CBillboardLeaf_010201A0 **)value; /*0x7a96e7*/
  }
  v55.logicalSize = 0; /*0x7a96f6*/
  if ( v55.words.begin ) /*0x7a96fa*/
    FormHeapFree((unsigned int)v55.words.begin); /*0x7a96fd*/
  memset(&v55.words.begin, 0, 0xC); /*0x7a9707*/
  if ( begin ) /*0x7a9719*/
    FormHeapFree((unsigned int)begin); /*0x7a971c*/
}
