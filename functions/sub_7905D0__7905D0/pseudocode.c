// Compiler/container partition helper used only by the branch-pointer introsort at 0x790C10. Partitions OB_CBranch* iterators into less/equal/greater regions by OB_CBranch+0x2C fuzzyBranchVolume and returns equal-range boundaries through equalRangeOut.
OB_CBranch_010201A0 ***__cdecl OB_BranchPtrVector_PartitionByFuzzyVolume_010201A0(
        OB_CBranch_010201A0 ***equalRangeOut,
        OB_CBranch_010201A0 **begin,
        OB_CBranch_010201A0 **end)
{
  OB_CBranch_010201A0 **v3; // ebx
  int *v4; // edi
  OB_CBranch_010201A0 **i; // esi
  double v6; // st7
  double v7; // st6
  double v8; // st7
  double v9; // st6
  double v10; // st6
  double v11; // st6
  double v12; // st6
  double v13; // st7
  double fuzzyBranchVolume; // st6
  OB_CBranch_010201A0 **v15; // ebp
  OB_CBranch_010201A0 **v16; // ecx
  double v17; // st7
  double v18; // st6
  OB_CBranch_010201A0 *v19; // edx
  double v20; // st7
  OB_CBranch_010201A0 *v21; // ebx
  double v22; // st6
  OB_CBranch_010201A0 *v23; // edx
  double v24; // st7
  OB_CBranch_010201A0 *v25; // ebx
  double v26; // st6
  OB_CBranch_010201A0 *v27; // edx
  double v28; // st7
  OB_CBranch_010201A0 *v29; // ebx
  double v30; // st6
  OB_CBranch_010201A0 *v31; // edx
  double v32; // st7
  double v33; // st6
  OB_CBranch_010201A0 *v34; // edx
  OB_CBranch_010201A0 **v35; // edx
  bool v36; // zf
  double v37; // st7
  double v38; // st6
  OB_CBranch_010201A0 *v39; // eax
  int v40; // eax
  int v41; // ebx
  OB_CBranch_010201A0 *v42; // eax
  OB_CBranch_010201A0 *v43; // edx
  int v44; // eax
  OB_CBranch_010201A0 *v45; // eax
  OB_CBranch_010201A0 **v47; // [esp+10h] [ebp-4h]

  v3 = end; /*0x7905d2*/
  v4 = (int *)&begin[(end - begin) / 2]; /*0x7905e9*/
  OB_BranchPtrVector_MedianGuessByFuzzyVolume_010201A0((int *)begin, v4, (int *)end + 0xFFFFFFFF); /*0x7905f8*/
  for ( i = (OB_CBranch_010201A0 **)(v4 + 1); begin < (OB_CBranch_010201A0 **)v4; v4 += 0xFFFFFFFF ) /*0x790605*/
  {
    v6 = *(float *)(v4[0xFFFFFFFF] + 0x2C); /*0x79060c*/
    v7 = *(float *)(*v4 + 0x2C); /*0x79060f*/
    if ( v7 < v6 ) /*0x790619*/
      break; /*0x790619*/
    if ( v7 > v6 ) /*0x790622*/
      break; /*0x790622*/
  }
  if ( ((char *)end - (char *)i + 3) / 4 < 4 ) /*0x790644*/
  {
LABEL_16:
    if ( i < end ) /*0x7906c0*/
    {
      v13 = *(float *)(*v4 + 0x2C); /*0x7906c4*/
      do /*0x7906e3*/
      {
        fuzzyBranchVolume = (*i)->fuzzyBranchVolume; /*0x7906c9*/
        if ( fuzzyBranchVolume > v13 ) /*0x7906d3*/
          break; /*0x7906d3*/
        if ( fuzzyBranchVolume < v13 ) /*0x7906dc*/
          break; /*0x7906dc*/
        ++i; /*0x7906de*/
      }
      while ( i < end ); /*0x7906e3*/
    }
  }
  else
  {
    v8 = *(float *)(*v4 + 0x2C); /*0x790648*/
    while ( 1 ) /*0x79064d*/
    {
      v9 = (*i)->fuzzyBranchVolume; /*0x79064d*/
      if ( v9 > v8 || v9 < v8 ) /*0x790664*/
        break; /*0x790664*/
      v10 = i[1]->fuzzyBranchVolume; /*0x79066d*/
      if ( v10 > v8 || v10 < v8 ) /*0x790680*/
      {
        ++i; /*0x7906e9*/
        break; /*0x7906ec*/
      }
      v11 = i[2]->fuzzyBranchVolume; /*0x790685*/
      if ( v11 > v8 || v11 < v8 ) /*0x790698*/
      {
        i += 2; /*0x7906f0*/
        break; /*0x7906f3*/
      }
      v12 = i[3]->fuzzyBranchVolume; /*0x79069d*/
      if ( v12 > v8 || v12 < v8 ) /*0x7906b0*/
      {
        i += 3; /*0x7906f7*/
        break; /*0x7906f7*/
      }
      i += 4; /*0x7906b2*/
      if ( (int)i >= (int)(end + 0xFFFFFFFD) ) /*0x7906ba*/
        goto LABEL_16; /*0x7906ba*/
    }
  }
  v15 = (OB_CBranch_010201A0 **)v4; /*0x790704*/
  v16 = i; /*0x790706*/
  v47 = (OB_CBranch_010201A0 **)v4; /*0x790708*/
  while ( 1 ) /*0x7908a3*/
  {
    while ( 1 ) /*0x790710*/
    {
      if ( ((char *)v3 - (char *)v16 + 3) / 4 >= 4 ) /*0x790723*/
      {
        while ( 1 ) /*0x790732*/
        {
          v17 = *(float *)(*v4 + 0x2C); /*0x790732*/
          v18 = (*v16)->fuzzyBranchVolume; /*0x790737*/
          if ( v18 >= v17 ) /*0x790741*/
          {
            if ( v18 > v17 ) /*0x79074a*/
              goto LABEL_50; /*0x79074a*/
            v19 = *i; /*0x790752*/
            *i++ = *v16; /*0x790754*/
            *v16 = v19; /*0x790759*/
          }
          v20 = *(float *)(*v4 + 0x2C); /*0x790763*/
          v21 = v16[1]; /*0x790766*/
          v22 = v21->fuzzyBranchVolume; /*0x790769*/
          if ( v22 >= v20 ) /*0x790773*/
          {
            if ( v22 > v20 ) /*0x79077c*/
            {
              ++v16; /*0x790848*/
              goto LABEL_50; /*0x79084b*/
            }
            v23 = *i; /*0x790784*/
            *i++ = v21; /*0x790786*/
            v16[1] = v23; /*0x79078b*/
          }
          v24 = *(float *)(*v4 + 0x2C); /*0x790796*/
          v25 = v16[2]; /*0x790799*/
          v26 = v25->fuzzyBranchVolume; /*0x79079c*/
          if ( v26 >= v24 ) /*0x7907a6*/
          {
            if ( v26 > v24 ) /*0x7907af*/
            {
              v16 += 2; /*0x79084d*/
              goto LABEL_50; /*0x790850*/
            }
            v27 = *i; /*0x7907b7*/
            *i++ = v25; /*0x7907b9*/
            v16[2] = v27; /*0x7907be*/
          }
          v28 = *(float *)(*v4 + 0x2C); /*0x7907c9*/
          v29 = v16[3]; /*0x7907cc*/
          v30 = v29->fuzzyBranchVolume; /*0x7907cf*/
          if ( v30 >= v28 ) /*0x7907d9*/
          {
            if ( v30 > v28 ) /*0x7907e2*/
            {
              v16 += 3; /*0x790852*/
              goto LABEL_50; /*0x790852*/
            }
            v31 = *i; /*0x7907e6*/
            *i++ = v29; /*0x7907e8*/
            v16[3] = v31; /*0x7907ed*/
          }
          v16 += 4; /*0x7907fa*/
          if ( (int)v16 >= (int)(end + 0xFFFFFFFD) ) /*0x790802*/
          {
            v3 = end; /*0x790808*/
            break; /*0x790808*/
          }
        }
      }
      if ( v16 < v3 ) /*0x79080e*/
      {
        do /*0x790844*/
        {
          v32 = *(float *)(*v4 + 0x2C); /*0x790812*/
          v33 = (*v16)->fuzzyBranchVolume; /*0x790817*/
          if ( v33 >= v32 ) /*0x790821*/
          {
            if ( v33 > v32 ) /*0x79082a*/
              break; /*0x79082a*/
            v34 = *i; /*0x79082e*/
            *i++ = *v16; /*0x790830*/
            *v16 = v34; /*0x790835*/
          }
          ++v16; /*0x79083d*/
        }
        while ( v16 < end ); /*0x790844*/
LABEL_50:
        v3 = end; /*0x790855*/
      }
      v35 = begin; /*0x790859*/
      v36 = v15 == begin; /*0x79085d*/
      if ( v15 > begin ) /*0x79085f*/
      {
        do /*0x79089b*/
        {
          v37 = v15[0xFFFFFFFF]->fuzzyBranchVolume; /*0x790864*/
          v38 = *(float *)(*v4 + 0x2C); /*0x790869*/
          if ( v38 >= v37 ) /*0x790873*/
          {
            if ( v38 > v37 ) /*0x79087c*/
              break; /*0x79087c*/
            v39 = (OB_CBranch_010201A0 *)v4[0xFFFFFFFF]; /*0x790881*/
            v4 += 0xFFFFFFFF; /*0x790884*/
            *v4 = (int)v15[0xFFFFFFFF]; /*0x790887*/
            v35 = begin; /*0x790889*/
            v15[0xFFFFFFFF] = v39; /*0x79088d*/
          }
          v15 += 0xFFFFFFFF; /*0x790896*/
        }
        while ( v35 < v15 ); /*0x79089b*/
        v47 = v15; /*0x79089d*/
        v36 = v15 == v35; /*0x7908a1*/
      }
      if ( v36 ) /*0x7908a3*/
        break; /*0x7908a3*/
      v15 += 0xFFFFFFFF; /*0x7908d7*/
      v47 = v15; /*0x7908dc*/
      if ( v16 == v3 ) /*0x7908e0*/
      {
        v4 += 0xFFFFFFFF; /*0x7908e2*/
        if ( v15 != (OB_CBranch_010201A0 **)v4 ) /*0x7908e7*/
        {
          v42 = *v15; /*0x7908eb*/
          *v15 = (OB_CBranch_010201A0 *)*v4; /*0x7908ee*/
          *v4 = (int)v42; /*0x7908f1*/
        }
        v43 = i[0xFFFFFFFF]; /*0x7908f3*/
        v44 = *v4; /*0x7908f6*/
        i += 0xFFFFFFFF; /*0x7908f8*/
        *v4 = (int)v43; /*0x7908fb*/
        *i = (OB_CBranch_010201A0 *)v44; /*0x7908fd*/
      }
      else
      {
        v45 = *v16; /*0x790904*/
        *v16 = *v15; /*0x790909*/
        *v15 = v45; /*0x79090b*/
        ++v16; /*0x79090e*/
      }
    }
    if ( v16 == v3 ) /*0x7908a7*/
      break; /*0x7908a7*/
    if ( i != v16 ) /*0x7908ab*/
    {
      v40 = *v4; /*0x7908af*/
      *v4 = (int)*i; /*0x7908b1*/
      *i = (OB_CBranch_010201A0 *)v40; /*0x7908b3*/
    }
    v41 = *v4; /*0x7908bb*/
    *v4 = (int)*v16; /*0x7908bd*/
    v15 = v47; /*0x7908bf*/
    ++i; /*0x7908c3*/
    ++v4; /*0x7908c6*/
    *v16 = (OB_CBranch_010201A0 *)v41; /*0x7908c9*/
    v3 = end; /*0x7908cb*/
    ++v16; /*0x7908cf*/
  }
  *equalRangeOut = (OB_CBranch_010201A0 **)v4; /*0x79091a*/
  equalRangeOut[1] = i; /*0x79091d*/
  return equalRangeOut; /*0x79091c*/
}
