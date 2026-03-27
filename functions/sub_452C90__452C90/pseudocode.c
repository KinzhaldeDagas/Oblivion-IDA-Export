_DWORD *__thiscall sub_452C90(_DWORD *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // ebx
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  _DWORD *result; // eax

  v3 = a2;
  if ( NiTMap_GetAt(this, (int)a2, &a2) )
  {
    result = a2;
    *a2 = a3;
  }
  else
  {
    v5 = (_DWORD *)FormHeapAlloc(8u);
    v6 = 0;
    if ( v5 )
    {
      *v5 = 0;
      v5[1] = 0;
      v6 = v5;
    }
    NiTMap_SetAt(this, (int)v3, (int)v6);
    *v6 = a3;
    return v6;
  }
  return result;
}
