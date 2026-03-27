char __thiscall sub_73F270(NiTriBasedGeomData *this, int a2)
{
  int v2; // ebx
  int v5; // edx
  UInt16 m_usVertices; // si
  unsigned __int16 v7; // cx
  int v8; // edx
  UInt16 v9; // si
  unsigned __int16 v10; // cx
  float *v11; // ecx
  unsigned int v12; // esi
  int v13; // eax
  float *v14; // edx
  int v15; // ebx
  int v16; // eax
  unsigned int v17; // edx
  float *v18; // ecx
  int v19; // edi
  float *v20; // ecx
  unsigned int v21; // esi
  int v22; // eax
  float *v23; // edx
  int v24; // ebx

  v2 = a2;
  if ( !sub_728F90(this, a2) )
    return 0;
  v5 = *((_DWORD *)this + 0x11);
  if ( v5 )
  {
    if ( *(_DWORD *)(a2 + 0x44) )
      goto LABEL_7;
    return 0;
  }
  if ( *(_DWORD *)(a2 + 0x44) )
    return 0;
LABEL_7:
  if ( v5 )
  {
    m_usVertices = this->members.super.m_usVertices;
    v7 = 0;
    if ( m_usVertices )
    {
      while ( *(float *)(*(_DWORD *)(a2 + 0x44) + 4 * v7) == *(float *)(4 * v7 + v5) )
      {
        if ( ++v7 >= m_usVertices )
          goto LABEL_11;
      }
      return 0;
    }
  }
LABEL_11:
  if ( *((_WORD *)this + 0x24) == *(_WORD *)(a2 + 0x48) )
  {
    v8 = *((_DWORD *)this + 0x13);
    if ( v8 )
    {
      if ( !*(_DWORD *)(a2 + 0x4C) )
        return 0;
      v9 = this->members.super.m_usVertices;
      v10 = 0;
      if ( v9 )
      {
        while ( *(float *)(*(_DWORD *)(a2 + 0x4C) + 4 * v10) == *(float *)(4 * v10 + v8) )
        {
          if ( ++v10 >= v9 )
            goto LABEL_20;
        }
        return 0;
      }
    }
    else if ( *(_DWORD *)(a2 + 0x4C) )
    {
      return 0;
    }
LABEL_20:
    v11 = *((float **)this + 0x14);
    if ( v11 )
    {
      if ( !*(_DWORD *)(a2 + 0x50) )
        return 0;
      v12 = 0;
      if ( this->members.super.m_usVertices )
      {
        v13 = *(_DWORD *)(a2 + 0x50);
        v14 = (float *)(v13 + 8);
        v15 = v13 - (_DWORD)v11;
        while ( *(float *)((char *)v11 + v15) == *v11 && v14[0xFFFFFFFF] == v11[1] && *v14 == v11[2] && v14[1] == v11[3] )
        {
          ++v12;
          v14 += 4;
          v11 += 4;
          if ( v12 >= this->members.super.m_usVertices )
          {
            v2 = a2;
            goto LABEL_33;
          }
        }
        return 0;
      }
    }
    else if ( *(_DWORD *)(a2 + 0x50) )
    {
      return 0;
    }
LABEL_33:
    v16 = *((_DWORD *)this + 0x15);
    if ( v16 && (v17 = 0, this->members.super.m_usVertices) )
    {
      v18 = *(float **)(v2 + 0x54);
      v19 = v16 - (_DWORD)v18;
      while ( *v18 == *(float *)((char *)v18 + v19) )
      {
        ++v17;
        ++v18;
        if ( v17 >= this->members.super.m_usVertices )
          goto LABEL_38;
      }
    }
    else
    {
LABEL_38:
      v20 = *((float **)this + 0x16);
      if ( !v20 )
        return 1;
      v21 = 0;
      if ( !this->members.super.m_usVertices )
        return 1;
      v22 = *(_DWORD *)(v2 + 0x58);
      v23 = (float *)(v22 + 8);
      v24 = v22 - (_DWORD)v20;
      while ( *(float *)((char *)v20 + v24) == *v20 && v23[0xFFFFFFFF] == v20[1] && *v23 == v20[2] )
      {
        ++v21;
        v23 += 3;
        v20 += 3;
        if ( v21 >= this->members.super.m_usVertices )
          return 1;
      }
    }
  }
  return 0;
}
