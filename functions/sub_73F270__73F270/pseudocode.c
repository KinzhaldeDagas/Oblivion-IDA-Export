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

  v2 = a2; /*0x73f271*/
  if ( !sub_728F90(this, a2) ) /*0x73f279*/
    return 0; /*0x73f280*/
  v5 = *((_DWORD *)this + 0x11); /*0x73f289*/
  if ( v5 ) /*0x73f28e*/
  {
    if ( *(_DWORD *)(a2 + 0x44) ) /*0x73f290*/
      goto LABEL_7; /*0x73f294*/
    return 0; /*0x73f286*/
  }
  if ( *(_DWORD *)(a2 + 0x44) ) /*0x73f29a*/
    return 0; /*0x73f29e*/
LABEL_7:
  if ( v5 ) /*0x73f2a4*/
  {
    m_usVertices = this->members.super.m_usVertices; /*0x73f2a6*/
    v7 = 0; /*0x73f2aa*/
    if ( m_usVertices ) /*0x73f2af*/
    {
      while ( *(float *)(*(_DWORD *)(a2 + 0x44) + 4 * v7) == *(float *)(4 * v7 + v5) ) /*0x73f2c8*/
      {
        if ( ++v7 >= m_usVertices ) /*0x73f2d4*/
          goto LABEL_11; /*0x73f2d4*/
      }
      return 0; /*0x73f2c8*/
    }
  }
LABEL_11:
  if ( *((_WORD *)this + 0x24) == *(_WORD *)(a2 + 0x48) ) /*0x73f2de*/
  {
    v8 = *((_DWORD *)this + 0x13); /*0x73f2e4*/
    if ( v8 ) /*0x73f2e9*/
    {
      if ( !*(_DWORD *)(a2 + 0x4C) ) /*0x73f2ef*/
        return 0; /*0x73f2ef*/
      v9 = this->members.super.m_usVertices; /*0x73f307*/
      v10 = 0; /*0x73f30b*/
      if ( v9 ) /*0x73f310*/
      {
        while ( *(float *)(*(_DWORD *)(a2 + 0x4C) + 4 * v10) == *(float *)(4 * v10 + v8) ) /*0x73f329*/
        {
          if ( ++v10 >= v9 ) /*0x73f335*/
            goto LABEL_20; /*0x73f335*/
        }
        return 0; /*0x73f329*/
      }
    }
    else if ( *(_DWORD *)(a2 + 0x4C) ) /*0x73f2f9*/
    {
      return 0; /*0x73f2fd*/
    }
LABEL_20:
    v11 = *((float **)this + 0x14); /*0x73f337*/
    if ( v11 ) /*0x73f33c*/
    {
      if ( !*(_DWORD *)(a2 + 0x50) ) /*0x73f342*/
        return 0; /*0x73f342*/
      v12 = 0; /*0x73f35e*/
      if ( this->members.super.m_usVertices ) /*0x73f35a*/
      {
        v13 = *(_DWORD *)(a2 + 0x50); /*0x73f364*/
        v14 = (float *)(v13 + 8); /*0x73f369*/
        v15 = v13 - (_DWORD)v11; /*0x73f36c*/
        while ( *(float *)((char *)v11 + v15) == *v11 && v14[0xFFFFFFFF] == v11[1] && *v14 == v11[2] && v14[1] == v11[3] ) /*0x73f3b4*/
        {
          ++v12; /*0x73f3ba*/
          v14 += 4; /*0x73f3bd*/
          v11 += 4; /*0x73f3c0*/
          if ( v12 >= this->members.super.m_usVertices ) /*0x73f3c5*/
          {
            v2 = a2; /*0x73f3c7*/
            goto LABEL_33; /*0x73f3c7*/
          }
        }
        return 0; /*0x73f3b4*/
      }
    }
    else if ( *(_DWORD *)(a2 + 0x50) ) /*0x73f34c*/
    {
      return 0; /*0x73f350*/
    }
LABEL_33:
    v16 = *((_DWORD *)this + 0x15); /*0x73f3cb*/
    if ( v16 && (v17 = 0, this->members.super.m_usVertices) ) /*0x73f3d2*/
    {
      v18 = *(float **)(v2 + 0x54); /*0x73f3dc*/
      v19 = v16 - (_DWORD)v18; /*0x73f3e1*/
      while ( *v18 == *(float *)((char *)v18 + v19) ) /*0x73f3ef*/
      {
        ++v17; /*0x73f3f1*/
        ++v18; /*0x73f3f4*/
        if ( v17 >= this->members.super.m_usVertices ) /*0x73f3f9*/
          goto LABEL_38; /*0x73f3f9*/
      }
    }
    else
    {
LABEL_38:
      v20 = *((float **)this + 0x16); /*0x73f3fb*/
      if ( !v20 ) /*0x73f400*/
        return 1; /*0x73f400*/
      v21 = 0; /*0x73f406*/
      if ( !this->members.super.m_usVertices ) /*0x73f402*/
        return 1; /*0x73f454*/
      v22 = *(_DWORD *)(v2 + 0x58); /*0x73f40c*/
      v23 = (float *)(v22 + 8); /*0x73f411*/
      v24 = v22 - (_DWORD)v20; /*0x73f414*/
      while ( *(float *)((char *)v20 + v24) == *v20 && v23[0xFFFFFFFF] == v20[1] && *v23 == v20[2] ) /*0x73f43f*/
      {
        ++v21; /*0x73f441*/
        v23 += 3; /*0x73f444*/
        v20 += 3; /*0x73f447*/
        if ( v21 >= this->members.super.m_usVertices ) /*0x73f44c*/
          return 1; /*0x73f44c*/
      }
    }
  }
  return 0; /*0x73f282*/
}
