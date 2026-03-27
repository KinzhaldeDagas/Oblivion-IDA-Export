int __thiscall sub_452F10(_DWORD *this, int a2, int a3, float a4, float a5, int a6)
{
  int v6; // ebx
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  _DWORD *v10; // edi
  int result; // eax

  v6 = a2;
  if ( NiTMap_GetAt(this, a2, &a2) )
  {
    v9 = (_DWORD *)a2;
  }
  else
  {
    v8 = (_DWORD *)FormHeapAlloc(8u);
    if ( v8 )
    {
      *v8 = 0;
      v8[1] = 0;
      v9 = v8;
      NiTMap_SetAt(this, v6, (int)v8);
    }
    else
    {
      v9 = 0;
      NiTMap_SetAt(this, v6, 0);
    }
  }
  v10 = (_DWORD *)FormHeapAlloc(0xCu);
  *v10 = a3;
  v10[1] = (int)a4 >> 0xC;
  a2 = (int)a5;
  result = a2 >> 0xC;
  v10[2] = a2 >> 0xC;
  if ( *v9 )
  {
    result = FormHeapAlloc(8u);
    if ( result )
    {
      *(_DWORD *)result = *v9;
      *(_DWORD *)(result + 4) = 0;
      *(_DWORD *)(result + 4) = v9[1];
      *v9 = v10;
      v9[1] = result;
      return result;
    }
    result = 0;
    *(_DWORD *)4 = v9[1];
    v9[1] = 0;
  }
  *v9 = v10;
  return result;
}
