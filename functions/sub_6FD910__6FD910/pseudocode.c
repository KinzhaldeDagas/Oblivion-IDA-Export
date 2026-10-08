char __thiscall sub_6FD910(NiTriBasedGeomData *this, int *a2)
{
  NiTriBasedGeomData *v2; // esi
  _DWORD *v3; // ecx
  unsigned int i; // ebp
  _DWORD *v5; // ebx
  unsigned int *v6; // eax
  unsigned int *v7; // esi
  unsigned int v8; // edx
  NiTArray_NiTexturingPropertyMap *v9; // edi
  unsigned int j; // edi
  int v11; // eax
  _DWORD *v12; // ecx
  bool v13; // zf
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  int v19; // ecx
  unsigned int v21; // ecx
  NiTArray_NiTexturingPropertyMap *v22; // ebx
  int v23; // [esp-4h] [ebp-34h]
  int v24; // [esp+18h] [ebp-18h] BYREF
  unsigned int *v25; // [esp+1Ch] [ebp-14h] BYREF
  NiTriBasedGeomData *v26; // [esp+20h] [ebp-10h]
  unsigned int v27; // [esp+2Ch] [ebp-4h]

  v2 = this; /*0x6fd937*/
  v26 = this; /*0x6fd939*/
  sub_715E40(this, (int)a2); /*0x6fd942*/
  v3 = (_DWORD *)*a2; /*0x6fd947*/
  v24 = 0; /*0x6fd951*/
  NiTMap_GetAt(v3, (int)v2, &v24); /*0x6fd955*/
  for ( i = 0; i < v2[1].members.super.serial; ++i ) /*0x6fd95c*/
  {
    v5 = *(_DWORD **)(v2[1].members.super.super.m_uiRefCount + 4 * i); /*0x6fd969*/
    if ( v5 ) /*0x6fd96e*/
    {
      v6 = (unsigned int *)FormHeapAlloc(0xCu); /*0x6fd976*/
      if ( v6 ) /*0x6fd980*/
      {
        *v6 = 0; /*0x6fd982*/
        v6[1] = 0; /*0x6fd984*/
        v6[2] = 0; /*0x6fd987*/
        v7 = v6; /*0x6fd98a*/
      }
      else
      {
        v7 = 0; /*0x6fd98e*/
      }
      v8 = *(unsigned __int16 *)(v24 + 0x4C); /*0x6fd994*/
      v9 = (NiTArray_NiTexturingPropertyMap *)(v24 + 0x44); /*0x6fd998*/
      v27 = 0xFFFFFFFF; /*0x6fd99d*/
      v25 = v7; /*0x6fd9a5*/
      if ( i >= v8 ) /*0x6fd9a9*/
        NiTArray_SetSize((unsigned __int16 *)(v24 + 0x44), i + *(unsigned __int16 *)(v24 + 0x52)); /*0x6fd9b4*/
      NiTArray_SetAt(v9, i, &v25); /*0x6fd9c1*/
      for ( j = 0; j < v5[2]; ++j ) /*0x6fd9c8*/
      {
        v11 = *(_DWORD *)(*v5 + 4 * j); /*0x6fd9d3*/
        if ( v11 ) /*0x6fd9d8*/
        {
          v12 = (_DWORD *)*a2; /*0x6fd9e3*/
          v25 = 0; /*0x6fd9e6*/
          v13 = NiTMap_GetAt(v12, v11, &v25) == 0; /*0x6fd9f3*/
          v14 = v7[1]; /*0x6fd9f5*/
          if ( v13 ) /*0x6fd9f8*/
          {
            if ( v7[2] == v14 ) /*0x6fda25*/
            {
              if ( v14 ) /*0x6fda29*/
                v16 = 2 * v14; /*0x6fda2b*/
              else
                v16 = 1; /*0x6fda2f*/
              sub_6E8CA0(v7, v16); /*0x6fda37*/
            }
            *(_DWORD *)(*v7 + 4 * v7[2]) = 0; /*0x6fda41*/
          }
          else
          {
            if ( v7[2] == v14 ) /*0x6fd9fd*/
            {
              if ( v14 ) /*0x6fda01*/
                v15 = 2 * v14; /*0x6fda03*/
              else
                v15 = 1; /*0x6fda07*/
              sub_6E8CA0(v7, v15); /*0x6fda0f*/
            }
            *(_DWORD *)(*v7 + 4 * v7[2]) = v25; /*0x6fda1d*/
          }
        }
        else
        {
          v17 = v7[1]; /*0x6fda4a*/
          if ( v7[2] == v17 ) /*0x6fda50*/
          {
            if ( v17 ) /*0x6fda54*/
              v18 = 2 * v17; /*0x6fda56*/
            else
              v18 = 1; /*0x6fda5a*/
            sub_6E8CA0(v7, v18); /*0x6fda62*/
          }
          *(_DWORD *)(*v7 + 4 * v7[2]) = 0; /*0x6fda6c*/
        }
        ++v7[2]; /*0x6fda73*/
      }
      v2 = v26; /*0x6fda83*/
    }
    else
    {
      v21 = *(unsigned __int16 *)(v24 + 0x4C); /*0x6fdac6*/
      v22 = (NiTArray_NiTexturingPropertyMap *)(v24 + 0x44); /*0x6fdaca*/
      v25 = 0; /*0x6fdacf*/
      if ( i >= v21 ) /*0x6fdad3*/
        NiTArray_SetSize((unsigned __int16 *)(v24 + 0x44), i + *(unsigned __int16 *)(v24 + 0x52)); /*0x6fdade*/
      NiTArray_SetAt(v22, i, &v25); /*0x6fdaeb*/
    }
  }
  v19 = v24; /*0x6fda98*/
  v23 = *(_DWORD *)(v24 + 0x3C); /*0x6fda9f*/
  *(_DWORD *)(v24 + 0x3C) = 0xFFFFFFFF; /*0x6fdaa0*/
  return sub_6FD5D0(v19, v23); /*0x6fdaac*/
}
