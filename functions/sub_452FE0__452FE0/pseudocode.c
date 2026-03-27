_DWORD *__thiscall sub_452FE0(_DWORD *this, _DWORD *a2, int a3, int a4, _DWORD *a5)
{
  int v5; // ebx
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  int v9; // eax
  int v10; // edx
  _DWORD *v11; // edi
  _DWORD *result; // eax

  v5 = (int)a2;
  if ( NiTMap_GetAt(this, (int)a2, &a2) )
  {
    v8 = a2;
  }
  else
  {
    v7 = (_DWORD *)FormHeapAlloc(8u);
    if ( v7 )
    {
      *v7 = 0;
      v7[1] = 0;
      v8 = v7;
      NiTMap_SetAt(this, v5, (int)v7);
    }
    else
    {
      v8 = 0;
      NiTMap_SetAt(this, v5, 0);
    }
  }
  v9 = FormHeapAlloc(0xCu);
  v10 = a4;
  v11 = (_DWORD *)v9;
  result = a5;
  *v11 = a3;
  v11[1] = v10;
  v11[2] = result;
  if ( *v8 )
  {
    result = (_DWORD *)FormHeapAlloc(8u);
    if ( result )
    {
      *result = *v8;
      result[1] = 0;
      result[1] = v8[1];
      *v8 = v11;
      v8[1] = result;
      return result;
    }
    result = 0;
    *(_DWORD *)4 = v8[1];
    v8[1] = 0;
  }
  *v8 = v11;
  return result;
}
