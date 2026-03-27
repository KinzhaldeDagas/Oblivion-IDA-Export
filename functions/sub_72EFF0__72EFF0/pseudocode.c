char __thiscall sub_72EFF0(NiTriBasedGeomData *this, int a2)
{
  int v2; // edi
  NiTriBasedGeomData *v3; // esi
  int v5; // eax
  int v6; // ebp
  float *v7; // esi
  int v8; // edi
  unsigned __int16 v9; // ax
  unsigned int v10; // edx
  int v11; // esi
  int v12; // ecx
  float *v13; // edi
  int v14; // esi
  int v15; // [esp+8h] [ebp-8h]

  v2 = a2;
  v3 = this;
  if ( !sub_700670(this, a2) )
    return 0;
  if ( sub_718B20(&v3->members.super.m_kBound.Center.x, (float *)(a2 + 0xC)) )
    return 0;
  v5 = *(_DWORD *)&v3->members.m_usTriangles;
  if ( v5 != *(_DWORD *)(a2 + 0x40) )
    return 0;
  v6 = 0;
  v15 = 0;
  if ( !v5 )
    return 1;
  while ( 1 )
  {
    v7 = (float *)((char *)v3[1].__vftable + v6);
    v8 = v6 + *(_DWORD *)(v2 + 0x44);
    if ( sub_718B20(v7, (float *)v8) )
      return 0;
    if ( !sub_72A0A0(v7 + 0xD, (float *)(v8 + 0x34)) )
      return 0;
    v9 = *((_WORD *)v7 + 0x24);
    if ( v9 != *(_WORD *)(v8 + 0x48) )
      return 0;
    v10 = 0;
    if ( v9 )
    {
      v11 = *((_DWORD *)v7 + 0x11);
      v12 = *(_DWORD *)(v8 + 0x44);
      v13 = (float *)(v11 + 4);
      v14 = v11 - v12;
      while ( *(_WORD *)(v14 + v12) == *(_WORD *)v12 && *(float *)(v12 + 4) == *v13 )
      {
        ++v10;
        v13 += 2;
        v12 += 8;
        if ( v10 >= v9 )
          goto LABEL_16;
      }
      return 0;
    }
LABEL_16:
    v6 += 0x4C;
    if ( (unsigned int)++v15 >= *(_DWORD *)&this->members.m_usTriangles )
      return 1;
    v2 = a2;
    v3 = this;
  }
}
