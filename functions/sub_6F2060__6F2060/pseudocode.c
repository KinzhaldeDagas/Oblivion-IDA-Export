unsigned int __thiscall sub_6F2060(
        float **this,
        int a2,
        OB_CLeafLodEngine_SLodEntry_010201A0 *first,
        unsigned int last,
        const OB_CBillboardLeaf_010201A0 **a5)
{
  int v6; // ecx
  unsigned int result; // eax
  int v8; // edi
  int v9; // edi
  unsigned int v10; // eax
  int v11; // edi
  int v12; // eax
  float *v13; // edi
  float *v14; // eax
  float *v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ebx
  float *v19; // ebx
  float *v20; // [esp-1Ch] [ebp-4Ch]
  float *v21; // [esp-Ch] [ebp-3Ch]
  int v22; // [esp-8h] [ebp-38h]
  int v23; // [esp+0h] [ebp-30h] BYREF
  OB_CLeafLodEngine_SLodEntry_010201A0 value; // [esp+10h] [ebp-20h] BYREF
  float *v25; // [esp+18h] [ebp-18h]
  int v26; // [esp+1Ch] [ebp-14h]
  int *v27; // [esp+20h] [ebp-10h]
  int v28; // [esp+2Ch] [ebp-4h]
  float *lasta; // [esp+40h] [ebp+10h]
  unsigned int v30; // [esp+44h] [ebp+14h]

  v27 = &v23; /*0x6f2088*/
  v6 = (int)*(this + 1); /*0x6f2092*/
  value.m_pLeaf = *a5; /*0x6f2097*/
  value.m_pLeafMatch = a5[1]; /*0x6f209d*/
  if ( v6 ) /*0x6f20a0*/
    result = ((int)*(this + 3) - v6) >> 3; /*0x6f20ab*/
  else
    result = 0; /*0x6f20a2*/
  if ( last ) /*0x6f20b3*/
  {
    if ( v6 ) /*0x6f20bb*/
      v8 = ((int)*(this + 2) - v6) >> 3; /*0x6f20c6*/
    else
      v8 = 0; /*0x6f20bd*/
    if ( 0xFFFFFFFF - v8 < last ) /*0x6f20d0*/
      OB_stVector_ThrowLengthError_010201A0(v8); /*0x6f20d2*/
    if ( v6 ) /*0x6f20d9*/
      v9 = ((int)*(this + 2) - v6) >> 3; /*0x6f20e4*/
    else
      v9 = 0; /*0x6f20db*/
    if ( result >= last + v9 ) /*0x6f20eb*/
    {
      v19 = *(this + 2); /*0x6f21ef*/
      if ( ((char *)v19 - (char *)first) >> 3 >= last ) /*0x6f21fe*/
      {
        v30 = last; /*0x6f2273*/
        lasta = &v19[0xFFFFFFFE * last]; /*0x6f2279*/
        *(this + 2) = sub_6F1600(lasta, v19, *(this + 2)); /*0x6f2287*/
        OB_LeafLodEntry_CopyBackwardRange_010201A0( /*0x6f228a*/
          first,
          (OB_CLeafLodEngine_SLodEntry_010201A0 *)lasta,
          (OB_CLeafLodEngine_SLodEntry_010201A0 *)v19);
        return (unsigned int)OB_LeafLodEntry_CopyFillRange_010201A0(first, &first[v30], &value); /*0x6f229a*/
      }
      else
      {
        sub_6F1600((float *)first, v19, (float *)&first[last]); /*0x6f2211*/
        v22 = last - (((char *)*(this + 2) - (char *)first) >> 3); /*0x6f2229*/
        v21 = *(this + 2); /*0x6f222a*/
        v28 = 2; /*0x6f222d*/
        sub_6F1400(v21, v22, (float *)&value); /*0x6f2234*/
        *(this + 2) += 2 * last; /*0x6f223c*/
        return (unsigned int)OB_LeafLodEntry_CopyFillRange_010201A0( /*0x6f224a*/
                               first,
                               (OB_CLeafLodEngine_SLodEntry_010201A0 *)&(*(this + 2))[0xFFFFFFFE * last],
                               &value);
      }
    }
    else
    {
      if ( 0xFFFFFFFF - (result >> 1) >= result ) /*0x6f20fc*/
        v10 = (result >> 1) + result; /*0x6f2102*/
      else
        v10 = 0; /*0x6f20fe*/
      if ( v6 ) /*0x6f2106*/
        v11 = ((int)*(this + 2) - v6) >> 3; /*0x6f2111*/
      else
        v11 = 0; /*0x6f2108*/
      if ( v10 < last + v11 ) /*0x6f2118*/
      {
        if ( v6 ) /*0x6f211c*/
          v12 = ((int)*(this + 2) - v6) >> 3; /*0x6f2127*/
        else
          v12 = 0; /*0x6f211e*/
        v10 = last + v12; /*0x6f212a*/
      }
      v26 = 8 * v10; /*0x6f2133*/
      v13 = (float *)FormHeapAlloc(8 * v10); /*0x6f214a*/
      v20 = *(this + 1); /*0x6f2152*/
      v25 = v13; /*0x6f2153*/
      v28 = 0; /*0x6f2156*/
      v14 = sub_6F11E0(v20, (float *)first, v13); /*0x6f215d*/
      v15 = sub_6F1400(v14, last, (float *)&value); /*0x6f2170*/
      sub_6F11E0((float *)first, *(this + 2), v15); /*0x6f2188*/
      v16 = (int)*(this + 1); /*0x6f218d*/
      if ( v16 ) /*0x6f2195*/
        v17 = ((int)*(this + 2) - v16) >> 3; /*0x6f21a0*/
      else
        v17 = 0; /*0x6f2197*/
      v18 = v17 + last; /*0x6f21a6*/
      if ( v16 ) /*0x6f21aa*/
        FormHeapFree((unsigned int)*(this + 1)); /*0x6f21ad*/
      result = (unsigned int)&v13[v26 / 4u]; /*0x6f21b8*/
      *(this + 3) = &v13[v26 / 4u]; /*0x6f21bd*/
      *(this + 2) = &v13[2 * v18]; /*0x6f21c0*/
      *(this + 1) = v13; /*0x6f21c3*/
    }
  }
  return result; /*0x6f21c6*/
}
