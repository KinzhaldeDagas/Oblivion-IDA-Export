// Oblivion-authoritative CFrondEngine::BuildGuideLods. Computes total/largest surface area, writes fuzzySurfaceArea at SFrondGuide+0x24, preserves large fronds, invokes the typed descending introsort twice, reinserts retained guides first, and builds per-LOD vectors of 0x30 guide copies. Unlike RT 4.1 source, this executable sorts/moves complete compact SFrondGuide records rather than a vector of SFrondGuide* pointers; no later segment-override/prohibit-reduction field participates.
void __thiscall OB_CFrondEngine_BuildGuideLods_010201A0(OB_CFrondEngine_010201A0 *this)
{
  OB_CFrondEngine_010201A0 *v1; // ebp
  unsigned int v2; // edi
  OB_stVector_SFrondGuide_010201A0 *p_guideVectorWrapper; // esi
  int i; // ebx
  OB_SFrondGuide_010201A0 *begin; // eax
  OB_SFrondGuide_010201A0 *v6; // eax
  OB_SFrondGuide_010201A0 *v7; // eax
  OB_SFrondGuide_010201A0 *v8; // ecx
  double v9; // st7
  unsigned int v10; // ebx
  int v11; // edi
  OB_SFrondGuide_010201A0 *v12; // eax
  OB_SFrondGuide_010201A0 *v13; // eax
  OB_SFrondGuide_010201A0 *v14; // eax
  OB_SFrondGuide_010201A0 *v15; // ebp
  OB_SFrondGuide_010201A0 *v16; // edi
  const OB_SFrondGuide_010201A0 *end; // edx
  OB_SFrondGuide_010201A0 *v18; // ebp
  unsigned int *p_allocatorState; // edi
  double v20; // st7
  OB_SFrondGuide_010201A0 *v21; // eax
  OB_SFrondGuide_010201A0 *v22; // eax
  OB_SFrondGuide_010201A0 *v23; // edi
  bool v24; // cc
  OB_SFrondGuide_010201A0 *v25; // ebx
  OB_SFrondGuide_010201A0 *v26; // ebx
  OB_SFrondGuide_010201A0 *v27; // edi
  unsigned int v28; // ebx
  OB_SFrondGuide_010201A0 *v29; // edi
  OB_SFrondGuide_010201A0 *v30; // ebp
  const OB_SFrondGuide_010201A0 *v31; // ebp
  OB_SFrondGuide_010201A0 *v32; // edi
  unsigned int frondLodCount; // eax
  double maxSurfaceAreaPercent; // st7
  double v35; // st7
  double v36; // st6
  unsigned int v37; // edi
  int k; // ebp
  OB_SFrondGuide_010201A0 *v39; // eax
  OB_SFrondGuide_010201A0 *v40; // eax
  OB_SFrondGuide_010201A0 *v41; // eax
  OB_SFrondGuide_010201A0 *v42; // edi
  OB_SFrondGuide_010201A0 *v43; // ebp
  unsigned int *p_begin; // edi
  bool v45; // cf
  unsigned int *v46; // esi
  OB_stRandom_010201A0 v47; // [esp+1Fh] [ebp-59h] BYREF
  OB_CFrondEngine_010201A0 *v48; // [esp+20h] [ebp-58h]
  float v49; // [esp+24h] [ebp-54h]
  int surfaceArea_low; // [esp+28h] [ebp-50h]
  float j; // [esp+2Ch] [ebp-4Ch]
  float v52; // [esp+30h] [ebp-48h]
  float v53; // [esp+34h] [ebp-44h]
  int v54; // [esp+38h] [ebp-40h]
  OB_stVector_stVector_SFrondGuide_010201A0 *guideLodVector; // [esp+3Ch] [ebp-3Ch]
  float Uniform_010201A0; // [esp+40h] [ebp-38h]
  OB_stVectorIterator_SFrondGuide_010201A0 sorterState; // [esp+44h] [ebp-34h] BYREF
  OB_stVector_SFrondGuide_010201A0 savedLargeGuides; // [esp+4Ch] [ebp-2Ch] BYREF
  OB_stVector_SFrondGuide_010201A0 lodLevelGuides; // [esp+5Ch] [ebp-1Ch] BYREF
  int v60; // [esp+74h] [ebp-4h]

  v1 = this; /*0x7a1687*/
  v48 = this; /*0x7a1689*/
  v2 = 0; /*0x7a168f*/
  v52 = 0.0; /*0x7a1691*/
  p_guideVectorWrapper = &this->guideVectorWrapper; /*0x7a1695*/
  *(float *)&surfaceArea_low = 0.0; /*0x7a1698*/
  for ( i = 0; ; ++i ) /*0x7a169c*/
  {
    begin = p_guideVectorWrapper->begin; /*0x7a16a0*/
    if ( !begin || v2 >= p_guideVectorWrapper->end - begin ) /*0x7a16c3*/
      break; /*0x7a16c3*/
    v6 = p_guideVectorWrapper->begin; /*0x7a16c9*/
    if ( !v6 || v2 >= p_guideVectorWrapper->end - v6 ) /*0x7a16e8*/
      _invalid_parameter_noinfo(i * 0x30, v2, (int)p_guideVectorWrapper); /*0x7a16ea*/
    v7 = p_guideVectorWrapper->begin; /*0x7a16ef*/
    v52 = v7[i].surfaceArea + v52; /*0x7a16fc*/
    if ( !v7 || v2 >= p_guideVectorWrapper->end - v7 ) /*0x7a171a*/
      _invalid_parameter_noinfo(i * 0x30, v2, (int)p_guideVectorWrapper); /*0x7a171c*/
    v8 = p_guideVectorWrapper->begin; /*0x7a1721*/
    if ( *(float *)&surfaceArea_low < (double)v8[i].surfaceArea ) /*0x7a1733*/
    {
      if ( !v8 || v2 >= p_guideVectorWrapper->end - v8 ) /*0x7a1753*/
        _invalid_parameter_noinfo(i * 0x30, v2, (int)p_guideVectorWrapper); /*0x7a1755*/
      surfaceArea_low = SLODWORD(p_guideVectorWrapper->begin[i].surfaceArea); /*0x7a1761*/
    }
    ++v2; /*0x7a1765*/
  }
  *(float *)&sorterState.owner = *(float *)&surfaceArea_low * *(float *)&surfaceArea_low; /*0x7a177a*/
  OB_stRandom_ctor_010201A0(&v47); /*0x7a177e*/
  v9 = 1.0 - v1->largeFrondRetentionPercent; /*0x7a178a*/
  v60 = 1; /*0x7a178c*/
  memset(&savedLargeGuides.begin, 0, 0xC); /*0x7a1790*/
  v53 = v9; /*0x7a179c*/
  v10 = 0; /*0x7a17a0*/
  v11 = 0; /*0x7a17a2*/
  v49 = 0.0; /*0x7a17a9*/
  while ( 1 ) /*0x7a17b0*/
  {
    v12 = p_guideVectorWrapper->begin; /*0x7a17b0*/
    if ( !v12 || v10 >= p_guideVectorWrapper->end - v12 ) /*0x7a17d3*/
      break; /*0x7a17d3*/
    v13 = p_guideVectorWrapper->begin; /*0x7a17d9*/
    if ( !v13 || v10 >= p_guideVectorWrapper->end - v13 ) /*0x7a17f8*/
      _invalid_parameter_noinfo(v10, v11, (int)p_guideVectorWrapper); /*0x7a17fa*/
    j = *(float *)((char *)&p_guideVectorWrapper->begin->surfaceArea + v11); /*0x7a1806*/
    if ( v53 * *(float *)&surfaceArea_low >= j ) /*0x7a181d*/
    {
      Uniform_010201A0 = OB_stRandom_GetUniform_010201A0(&v47, 0.0, v1->reductionFuzziness); /*0x7a190d*/
      v20 = Uniform_010201A0; /*0x7a1911*/
      v21 = p_guideVectorWrapper->begin; /*0x7a1915*/
      Uniform_010201A0 = 1.0 - Uniform_010201A0; /*0x7a1920*/
      j = v20 * *(float *)&sorterState.owner + Uniform_010201A0 * j; /*0x7a1934*/
      if ( !v21 || v10 >= p_guideVectorWrapper->end - v21 ) /*0x7a1952*/
        _invalid_parameter_noinfo(v10, v11, (int)p_guideVectorWrapper); /*0x7a1954*/
      v22 = p_guideVectorWrapper->begin; /*0x7a1959*/
      LODWORD(v49) += 0x30; /*0x7a1960*/
      *(float *)((char *)&v22->fuzzySurfaceArea + v11) = j; /*0x7a1965*/
      v11 = LODWORD(v49); /*0x7a1969*/
      v1 = v48; /*0x7a196d*/
      ++v10; /*0x7a1971*/
    }
    else
    {
      v14 = p_guideVectorWrapper->begin; /*0x7a1823*/
      if ( !v14 || v10 >= p_guideVectorWrapper->end - v14 ) /*0x7a1842*/
        _invalid_parameter_noinfo(v10, v11, (int)p_guideVectorWrapper); /*0x7a1844*/
      OB_stVector_SFrondGuide_PushBack_010201A0( /*0x7a1853*/
        &savedLargeGuides,
        (const OB_SFrondGuide_010201A0 *)((char *)p_guideVectorWrapper->begin + v11));
      v15 = p_guideVectorWrapper->begin; /*0x7a1858*/
      if ( v15 > p_guideVectorWrapper->end ) /*0x7a185e*/
        _invalid_parameter_noinfo(v10, v11, (int)p_guideVectorWrapper); /*0x7a1860*/
      v16 = (OB_SFrondGuide_010201A0 *)((char *)v15 + v11); /*0x7a1865*/
      if ( v16 > p_guideVectorWrapper->end || v16 < p_guideVectorWrapper->begin ) /*0x7a186f*/
        _invalid_parameter_noinfo(v10, (int)v16, (int)p_guideVectorWrapper); /*0x7a1871*/
      LOBYTE(v54) = 0; /*0x7a187a*/
      end = p_guideVectorWrapper->end; /*0x7a1884*/
      LOBYTE(guideLodVector) = 0; /*0x7a1887*/
      OB_SFrondGuide_CopyAssignRangeForward_010201A0(v16 + 1, end, v16); /*0x7a1898*/
      v18 = p_guideVectorWrapper->end; /*0x7a189d*/
      p_allocatorState = &v18[0xFFFFFFFF].vertexVector.allocatorState; /*0x7a18a0*/
      do /*0x7a18d0*/
      {
        if ( p_allocatorState[1] ) /*0x7a18b0*/
          FormHeapFree(p_allocatorState[1]); /*0x7a18b8*/
        p_allocatorState[1] = 0; /*0x7a18c2*/
        p_allocatorState[2] = 0; /*0x7a18c5*/
        p_allocatorState[3] = 0; /*0x7a18c8*/
        p_allocatorState += 0xC; /*0x7a18cb*/
      }
      while ( p_allocatorState != (unsigned int *)v18 ); /*0x7a18d0*/
      LODWORD(v49) -= 0x30; /*0x7a18d2*/
      LODWORD(v49) += 0x30; /*0x7a18d7*/
      p_guideVectorWrapper->end += 0xFFFFFFFF; /*0x7a18dc*/
      v11 = LODWORD(v49); /*0x7a18e0*/
      v1 = v48; /*0x7a18e4*/
    }
  }
  v23 = p_guideVectorWrapper->end; /*0x7a197b*/
  v24 = p_guideVectorWrapper->begin <= v23; /*0x7a197e*/
  LOBYTE(sorterState.owner) = 0; /*0x7a1981*/
  if ( !v24 ) /*0x7a1986*/
    _invalid_parameter_noinfo(v10, (int)v23, (int)p_guideVectorWrapper); /*0x7a1988*/
  v25 = p_guideVectorWrapper->begin; /*0x7a198d*/
  if ( v25 > p_guideVectorWrapper->end ) /*0x7a1993*/
    _invalid_parameter_noinfo((int)v25, (int)v23, (int)p_guideVectorWrapper); /*0x7a1995*/
  OB_CFrondEngine_SortGuidesByFuzzyArea_010201A0(v25, v23, v23 - v25, (unsigned __int8)sorterState.owner); /*0x7a19c0*/
  v26 = savedLargeGuides.begin; /*0x7a19c9*/
  LOBYTE(sorterState.owner) = 0; /*0x7a19d2*/
  v27 = savedLargeGuides.end; /*0x7a19d7*/
  if ( savedLargeGuides.begin > savedLargeGuides.end ) /*0x7a19d9*/
  {
    _invalid_parameter_noinfo((int)savedLargeGuides.begin, (int)savedLargeGuides.end, (int)p_guideVectorWrapper); /*0x7a19db*/
    v26 = savedLargeGuides.begin; /*0x7a19e4*/
    if ( savedLargeGuides.begin > savedLargeGuides.end ) /*0x7a19ea*/
      _invalid_parameter_noinfo((int)savedLargeGuides.begin, (int)v27, (int)p_guideVectorWrapper); /*0x7a19ec*/
  }
  OB_CFrondEngine_SortGuidesByFuzzyArea_010201A0(v26, v27, v27 - v26, (unsigned __int8)sorterState.owner); /*0x7a1a0e*/
  v28 = 0; /*0x7a1a16*/
  for ( j = 0.0; ; LODWORD(j) += 0x30 ) /*0x7a1a18*/
  {
    v29 = savedLargeGuides.begin; /*0x7a1a20*/
    v30 = savedLargeGuides.end; /*0x7a1a26*/
    if ( !savedLargeGuides.begin || v28 >= savedLargeGuides.end - savedLargeGuides.begin ) /*0x7a1a43*/
      break; /*0x7a1a43*/
    v31 = (OB_SFrondGuide_010201A0 *)((char *)savedLargeGuides.begin + LODWORD(j)); /*0x7a1a49*/
    v32 = p_guideVectorWrapper->begin; /*0x7a1a4c*/
    if ( v32 > p_guideVectorWrapper->end ) /*0x7a1a52*/
      _invalid_parameter_noinfo(v28, (int)v32, (int)p_guideVectorWrapper); /*0x7a1a54*/
    OB_stVector_SFrondGuide_InsertOne_010201A0(p_guideVectorWrapper, &sorterState, p_guideVectorWrapper, v32, v31); /*0x7a1a63*/
    ++v28; /*0x7a1a68*/
  }
  frondLodCount = v48->frondLodCount; /*0x7a1a76*/
  *(float *)&surfaceArea_low = 0.0; /*0x7a1a7b*/
  if ( frondLodCount ) /*0x7a1a83*/
  {
    guideLodVector = &v48->guideLodVectorWrapper; /*0x7a1a90*/
    do /*0x7a1c4e*/
    {
      if ( frondLodCount == 1 ) /*0x7a1a99*/
      {
        maxSurfaceAreaPercent = v48->maxSurfaceAreaPercent; /*0x7a1a9f*/
      }
      else
      {
        Uniform_010201A0 = v48->maxSurfaceAreaPercent; /*0x7a1ab1*/
        v35 = (double)surfaceArea_low; /*0x7a1ab5*/
        if ( surfaceArea_low < 0 ) /*0x7a1ab9*/
          v35 = v35 + flt_A2FC78; /*0x7a1abb*/
        sorterState.owner = (OB_stVector_SFrondGuide_010201A0 *)(frondLodCount - 1); /*0x7a1ac6*/
        v36 = (double)(int)(frondLodCount - 1); /*0x7a1aca*/
        if ( (int)(frondLodCount - 1) < 0 ) /*0x7a1ace*/
          v36 = v36 + flt_A2FC78; /*0x7a1ad0*/
        *(float *)&sorterState.owner = v35 / v36; /*0x7a1ad8*/
        maxSurfaceAreaPercent = Uniform_010201A0 /*0x7a1aed*/
                              + (v48->minSurfaceAreaPercent - Uniform_010201A0) * *(float *)&sorterState.owner;
      }
      j = maxSurfaceAreaPercent; /*0x7a1aef*/
      memset(&lodLevelGuides.begin, 0, 0xC); /*0x7a1af3*/
      v49 = j * v52; /*0x7a1b07*/
      j = 0.0; /*0x7a1b0d*/
      LOBYTE(v60) = 2; /*0x7a1b15*/
      if ( v49 > 0.0 ) /*0x7a1b1f*/
      {
        v37 = 0; /*0x7a1b25*/
        for ( k = 0; ; ++k ) /*0x7a1b27*/
        {
          v39 = p_guideVectorWrapper->begin; /*0x7a1b30*/
          if ( !v39 || v37 >= p_guideVectorWrapper->end - v39 || v49 < (double)j ) /*0x7a1b68*/
            break; /*0x7a1b68*/
          v40 = p_guideVectorWrapper->begin; /*0x7a1b6a*/
          if ( !v40 || v37 >= p_guideVectorWrapper->end - v40 ) /*0x7a1b89*/
            _invalid_parameter_noinfo(0, v37, (int)p_guideVectorWrapper); /*0x7a1b8b*/
          v41 = p_guideVectorWrapper->begin; /*0x7a1b90*/
          j = v41[k].surfaceArea + j; /*0x7a1b9d*/
          if ( !v41 || v37 >= p_guideVectorWrapper->end - v41 ) /*0x7a1bbb*/
            _invalid_parameter_noinfo(0, v37, (int)p_guideVectorWrapper); /*0x7a1bbd*/
          OB_stVector_SFrondGuide_PushBack_010201A0(&lodLevelGuides, &p_guideVectorWrapper->begin[k]); /*0x7a1bcc*/
          ++v37; /*0x7a1bd1*/
        }
      }
      OB_stVector_stVector_SFrondGuide_PushBack_010201A0(guideLodVector, &lodLevelGuides); /*0x7a1be5*/
      v42 = lodLevelGuides.begin; /*0x7a1bea*/
      if ( lodLevelGuides.begin ) /*0x7a1bf0*/
      {
        v43 = lodLevelGuides.end; /*0x7a1bf8*/
        if ( lodLevelGuides.begin != lodLevelGuides.end ) /*0x7a1bfa*/
        {
          p_begin = (unsigned int *)&lodLevelGuides.begin->vertexVector.begin; /*0x7a1bfc*/
          do /*0x7a1c1f*/
          {
            if ( *p_begin ) /*0x7a1c00*/
              FormHeapFree(*p_begin); /*0x7a1c07*/
            *p_begin = 0; /*0x7a1c0f*/
            p_begin[1] = 0; /*0x7a1c11*/
            p_begin[2] = 0; /*0x7a1c14*/
            p_begin += 0xC; /*0x7a1c17*/
          }
          while ( p_begin + 0xFFFFFFFF != (unsigned int *)v43 ); /*0x7a1c1f*/
          v42 = lodLevelGuides.begin; /*0x7a1c21*/
        }
        FormHeapFree((unsigned int)v42); /*0x7a1c26*/
      }
      frondLodCount = v48->frondLodCount; /*0x7a1c36*/
      v45 = surfaceArea_low + 1 < frondLodCount; /*0x7a1c3c*/
      memset(&lodLevelGuides.begin, 0, 0xC); /*0x7a1c3e*/
      ++surfaceArea_low; /*0x7a1c4a*/
    }
    while ( v45 ); /*0x7a1c4e*/
    v30 = savedLargeGuides.end; /*0x7a1c54*/
    v29 = savedLargeGuides.begin; /*0x7a1c58*/
  }
  if ( v29 ) /*0x7a1c60*/
  {
    if ( v29 != v30 ) /*0x7a1c64*/
    {
      v46 = (unsigned int *)&v29->vertexVector.begin; /*0x7a1c66*/
      do /*0x7a1c8f*/
      {
        if ( *v46 ) /*0x7a1c70*/
          FormHeapFree(*v46); /*0x7a1c77*/
        *v46 = 0; /*0x7a1c7f*/
        v46[1] = 0; /*0x7a1c81*/
        v46[2] = 0; /*0x7a1c84*/
        v46 += 0xC; /*0x7a1c87*/
      }
      while ( v46 + 0xFFFFFFFF != (unsigned int *)v30 ); /*0x7a1c8f*/
      v29 = savedLargeGuides.begin; /*0x7a1c91*/
    }
    FormHeapFree((unsigned int)v29); /*0x7a1c96*/
  }
  memset(&savedLargeGuides.begin, 0, 0xC); /*0x7a1ca2*/
  v60 = 0xFFFFFFFF; /*0x7a1cae*/
  Shared_NoOpVirtual_60D0A0(&v47); /*0x7a1cb6*/
}
