_DWORD *__thiscall sub_452C20(_DWORD *this, _DWORD *a2, int a3)
{
  int v3; // ebx
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  _DWORD *result; // eax

  v3 = a2[3];
  if ( NiTMap_GetAt(this, v3, &a2) )
  {
    v6 = a2;
  }
  else
  {
    v5 = (_DWORD *)FormHeapAlloc(8u);
    if ( v5 )
    {
      *v5 = 0;
      v5[1] = 0;
      v6 = v5;
      NiTMap_SetAt(this, v3, (int)v5);
    }
    else
    {
      v6 = 0;
      NiTMap_SetAt(this, v3, 0);
    }
  }
  result = v6;
  if ( !v6[1] )
    *v6 |= a3;
  return result;
}
