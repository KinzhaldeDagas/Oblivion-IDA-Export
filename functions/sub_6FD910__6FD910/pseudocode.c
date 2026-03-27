char __thiscall sub_6FD910(_DWORD *this, int *a2)
{
  _DWORD *v2; // esi
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
  unsigned int v23; // [esp-4h] [ebp-34h]
  int v24; // [esp+18h] [ebp-18h] BYREF
  unsigned int *v25; // [esp+1Ch] [ebp-14h] BYREF
  _DWORD *v26; // [esp+20h] [ebp-10h]
  unsigned int v27; // [esp+2Ch] [ebp-4h]

  v2 = this;
  v26 = this;
  sub_715E40(this, (int)a2);
  v3 = (_DWORD *)*a2;
  v24 = 0;
  NiTMap_GetAt(v3, (int)v2, &v24);
  for ( i = 0; i < *((unsigned __int16 *)v2 + 0x27); ++i )
  {
    v5 = *(_DWORD **)(v2[0x12] + 4 * i);
    if ( v5 )
    {
      v6 = (unsigned int *)FormHeapAlloc(0xCu);
      if ( v6 )
      {
        *v6 = 0;
        v6[1] = 0;
        v6[2] = 0;
        v7 = v6;
      }
      else
      {
        v7 = 0;
      }
      v8 = *(unsigned __int16 *)(v24 + 0x4C);
      v9 = (NiTArray_NiTexturingPropertyMap *)(v24 + 0x44);
      v27 = 0xFFFFFFFF;
      v25 = v7;
      if ( i >= v8 )
        NiTArray_SetSize((unsigned __int16 *)(v24 + 0x44), i + *(unsigned __int16 *)(v24 + 0x52));
      NiTArray_SetAt(v9, i, &v25);
      for ( j = 0; j < v5[2]; ++j )
      {
        v11 = *(_DWORD *)(*v5 + 4 * j);
        if ( v11 )
        {
          v12 = (_DWORD *)*a2;
          v25 = 0;
          v13 = NiTMap_GetAt(v12, v11, &v25) == 0;
          v14 = v7[1];
          if ( v13 )
          {
            if ( v7[2] == v14 )
            {
              if ( v14 )
                v16 = 2 * v14;
              else
                v16 = 1;
              sub_6E8CA0(v7, v16);
            }
            *(_DWORD *)(*v7 + 4 * v7[2]) = 0;
          }
          else
          {
            if ( v7[2] == v14 )
            {
              if ( v14 )
                v15 = 2 * v14;
              else
                v15 = 1;
              sub_6E8CA0(v7, v15);
            }
            *(_DWORD *)(*v7 + 4 * v7[2]) = v25;
          }
        }
        else
        {
          v17 = v7[1];
          if ( v7[2] == v17 )
          {
            if ( v17 )
              v18 = 2 * v17;
            else
              v18 = 1;
            sub_6E8CA0(v7, v18);
          }
          *(_DWORD *)(*v7 + 4 * v7[2]) = 0;
        }
        ++v7[2];
      }
      v2 = v26;
    }
    else
    {
      v21 = *(unsigned __int16 *)(v24 + 0x4C);
      v22 = (NiTArray_NiTexturingPropertyMap *)(v24 + 0x44);
      v25 = 0;
      if ( i >= v21 )
        NiTArray_SetSize((unsigned __int16 *)(v24 + 0x44), i + *(unsigned __int16 *)(v24 + 0x52));
      NiTArray_SetAt(v22, i, &v25);
    }
  }
  v19 = v24;
  v23 = *(_DWORD *)(v24 + 0x3C);
  *(_DWORD *)(v24 + 0x3C) = 0xFFFFFFFF;
  return sub_6FD5D0(v19, v23);
}
