char __thiscall sub_72EFF0(NiTriBasedGeomData *this, int a2)
{
  int v2; // edi
  NiTriBasedGeomData *v3; // esi
  int v5; // eax
  int v6; // ebp
  NiPoint3 *v7; // esi
  int v8; // edi
  unsigned __int16 x_low; // ax
  unsigned int v10; // edx
  float z; // esi
  int v12; // ecx
  float *v13; // edi
  int v14; // esi
  int v15; // [esp+8h] [ebp-8h]

  v2 = a2; /*0x72eff5*/
  v3 = this; /*0x72eff9*/
  if ( !sub_700670(this, a2) ) /*0x72f000*/
    return 0; /*0x72f000*/
  if ( sub_718B20(&v3->members.super.m_kBound.Center, (NiPoint3 *)(a2 + 0xC)) ) /*0x72f01a*/
    return 0; /*0x72f01a*/
  v5 = *(_DWORD *)&v3->members.m_usTriangles; /*0x72f023*/
  if ( v5 != *(_DWORD *)(a2 + 0x40) ) /*0x72f029*/
    return 0; /*0x72f00a*/
  v6 = 0; /*0x72f02d*/
  v15 = 0; /*0x72f031*/
  if ( !v5 ) /*0x72f035*/
    return 1; /*0x72f03a*/
  while ( 1 ) /*0x72f04f*/
  {
    v7 = (NiPoint3 *)((char *)v3[1].__vftable + v6); /*0x72f04f*/
    v8 = v6 + *(_DWORD *)(v2 + 0x44); /*0x72f051*/
    if ( sub_718B20(v7, (NiPoint3 *)v8) ) /*0x72f056*/
      return 0; /*0x72f009*/
    if ( !sub_72A0A0(&v7[4].y, (float *)(v8 + 0x34)) ) /*0x72f066*/
      return 0; /*0x72f009*/
    x_low = LOWORD(v7[6].x); /*0x72f06f*/
    if ( x_low != *(_WORD *)(v8 + 0x48) ) /*0x72f077*/
      return 0; /*0x72f009*/
    v10 = 0; /*0x72f07c*/
    if ( x_low ) /*0x72f080*/
    {
      z = v7[5].z; /*0x72f082*/
      v12 = *(_DWORD *)(v8 + 0x44); /*0x72f085*/
      v13 = (float *)(LODWORD(z) + 4); /*0x72f088*/
      v14 = LODWORD(z) - v12; /*0x72f08b*/
      while ( *(_WORD *)(v14 + v12) == *(_WORD *)v12 && *(float *)(v12 + 4) == *v13 ) /*0x72f0a5*/
      {
        ++v10; /*0x72f0a7*/
        v13 += 2; /*0x72f0aa*/
        v12 += 8; /*0x72f0ad*/
        if ( v10 >= x_low ) /*0x72f0b2*/
          goto LABEL_16; /*0x72f0b2*/
      }
      return 0; /*0x72f0a5*/
    }
LABEL_16:
    v6 += 0x4C; /*0x72f0b4*/
    if ( (unsigned int)++v15 >= *(_DWORD *)&this->members.m_usTriangles ) /*0x72f0c9*/
      return 1; /*0x72f0d8*/
    v2 = a2; /*0x72f043*/
    v3 = this; /*0x72f047*/
  }
}
