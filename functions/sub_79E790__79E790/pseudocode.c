// Three-way partition of 0x30-byte SFrondGuide records around a sampled fuzzySurfaceArea pivot, descending. Groups values greater than, equal to, and less than the pivot and returns the lower/upper bounds of the equal partition.
OB_SFrondGuidePartitionBounds_010201A0 *__cdecl OB_SFrondGuide_PartitionByFuzzyArea_010201A0(
        OB_SFrondGuidePartitionBounds_010201A0 *result,
        OB_SFrondGuide_010201A0 *first,
        OB_SFrondGuide_010201A0 *last)
{
  OB_SFrondGuide_010201A0 *v3; // ebx
  OB_SFrondGuide_010201A0 *i; // esi
  double fuzzySurfaceArea; // st7
  double v6; // st6
  double v7; // st7
  double v8; // st6
  double v9; // st6
  double v10; // st6
  double v11; // st6
  double v12; // st7
  double v13; // st6
  OB_SFrondGuide_010201A0 *v14; // edi
  OB_SFrondGuide_010201A0 *v15; // ebp
  double v16; // st7
  double v17; // st6
  OB_SFrondGuide_010201A0 *v18; // ecx
  bool v19; // zf
  double v20; // st7
  double v21; // st6
  OB_SFrondGuide_010201A0 *v23; // [esp-8h] [ebp-18h]
  OB_SFrondGuide_010201A0 *v24; // [esp-8h] [ebp-18h]
  OB_SFrondGuide_010201A0 *v25; // [esp-4h] [ebp-14h]

  OB_SFrondGuide_SelectPivotByFuzzyArea_010201A0(first, &first[(last - first) / 2], last + 0xFFFFFFFF); /*0x79e7c9*/
  v3 = &first[(last - first) / 2]; /*0x79e7d3*/
  for ( i = v3 + 1; first < v3; v3 += 0xFFFFFFFF ) /*0x79e7d8*/
  {
    fuzzySurfaceArea = v3[0xFFFFFFFF].fuzzySurfaceArea; /*0x79e7e0*/
    v6 = v3->fuzzySurfaceArea; /*0x79e7e3*/
    if ( v6 < fuzzySurfaceArea ) /*0x79e7ed*/
      break; /*0x79e7ed*/
    if ( v6 > fuzzySurfaceArea ) /*0x79e7f6*/
      break; /*0x79e7f6*/
  }
  if ( ((char *)last - (char *)i + 0x2F) / 0x30 < 4 ) /*0x79e824*/
  {
LABEL_16:
    if ( i < last ) /*0x79e89f*/
    {
      v12 = v3->fuzzySurfaceArea; /*0x79e8a1*/
      do /*0x79e8be*/
      {
        v13 = i->fuzzySurfaceArea; /*0x79e8a4*/
        if ( v13 > v12 ) /*0x79e8ae*/
          break; /*0x79e8ae*/
        if ( v13 < v12 ) /*0x79e8b7*/
          break; /*0x79e8b7*/
        ++i; /*0x79e8b9*/
      }
      while ( i < last ); /*0x79e8be*/
    }
  }
  else
  {
    v7 = v3->fuzzySurfaceArea; /*0x79e826*/
    while ( 1 ) /*0x79e829*/
    {
      v8 = i->fuzzySurfaceArea; /*0x79e829*/
      if ( v8 > v7 || v8 < v7 ) /*0x79e840*/
        break; /*0x79e840*/
      v9 = i[1].fuzzySurfaceArea; /*0x79e846*/
      if ( v9 > v7 || v9 < v7 ) /*0x79e859*/
      {
        ++i; /*0x79e8c4*/
        break; /*0x79e8c7*/
      }
      v10 = i[2].fuzzySurfaceArea; /*0x79e85b*/
      if ( v10 > v7 || v10 < v7 ) /*0x79e871*/
      {
        i += 2; /*0x79e8cb*/
        break; /*0x79e8ce*/
      }
      v11 = i[3].fuzzySurfaceArea; /*0x79e873*/
      if ( v11 > v7 || v11 < v7 ) /*0x79e889*/
      {
        i += 3; /*0x79e8d2*/
        break; /*0x79e8d2*/
      }
      i += 4; /*0x79e88b*/
      if ( (int)i >= (int)&last[0xFFFFFFFD] ) /*0x79e899*/
        goto LABEL_16; /*0x79e899*/
    }
  }
  v14 = i; /*0x79e8e2*/
  v15 = v3; /*0x79e8e4*/
  while ( 1 ) /*0x79e96b*/
  {
    while ( 1 ) /*0x79e8e6*/
    {
      for ( ; v14 < last; ++v14 ) /*0x79e8ea*/
      {
        v16 = v3->fuzzySurfaceArea; /*0x79e8f0*/
        v17 = v14->fuzzySurfaceArea; /*0x79e8f3*/
        if ( v17 >= v16 ) /*0x79e8fd*/
        {
          if ( v17 > v16 ) /*0x79e906*/
            break; /*0x79e906*/
          v23 = i++; /*0x79e90b*/
          OB_SFrondGuide_Swap_010201A0(v23, v14); /*0x79e90f*/
        }
      }
      v18 = first; /*0x79e926*/
      v19 = v15 == first; /*0x79e92a*/
      if ( v15 > first ) /*0x79e92c*/
      {
        do /*0x79e967*/
        {
          v20 = v15[0xFFFFFFFF].fuzzySurfaceArea; /*0x79e930*/
          v21 = v3->fuzzySurfaceArea; /*0x79e933*/
          if ( v21 >= v20 ) /*0x79e93d*/
          {
            if ( v21 > v20 ) /*0x79e946*/
              break; /*0x79e946*/
            v3 += 0xFFFFFFFF; /*0x79e94c*/
            OB_SFrondGuide_Swap_010201A0(v3, v15 + 0xFFFFFFFF); /*0x79e950*/
            v18 = first; /*0x79e955*/
          }
          v15 += 0xFFFFFFFF; /*0x79e962*/
        }
        while ( v18 < v15 ); /*0x79e967*/
        v19 = v15 == v18; /*0x79e969*/
      }
      if ( v19 ) /*0x79e96b*/
        break; /*0x79e96b*/
      v15 += 0xFFFFFFFF; /*0x79e99d*/
      if ( v14 == last ) /*0x79e9a4*/
      {
        v3 += 0xFFFFFFFF; /*0x79e9a6*/
        if ( v15 != v3 ) /*0x79e9ab*/
          OB_SFrondGuide_Swap_010201A0(v15, v3); /*0x79e9af*/
        i += 0xFFFFFFFF; /*0x79e9b7*/
        OB_SFrondGuide_Swap_010201A0(v3, i); /*0x79e9bc*/
      }
      else
      {
        OB_SFrondGuide_Swap_010201A0(v14++, v15); /*0x79e9cb*/
      }
    }
    if ( v14 == last ) /*0x79e971*/
      break; /*0x79e971*/
    if ( i != v14 ) /*0x79e975*/
      OB_SFrondGuide_Swap_010201A0(v3, i); /*0x79e979*/
    v25 = v14; /*0x79e985*/
    v24 = v3; /*0x79e986*/
    ++i; /*0x79e987*/
    ++v3; /*0x79e98a*/
    ++v14; /*0x79e98d*/
    OB_SFrondGuide_Swap_010201A0(v24, v25); /*0x79e990*/
  }
  result->upper = i; /*0x79e9e0*/
  result->lower = v3; /*0x79e9e5*/
  return result; /*0x79e9df*/
}
