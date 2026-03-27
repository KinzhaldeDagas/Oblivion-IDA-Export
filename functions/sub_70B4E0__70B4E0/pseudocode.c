_DWORD *__thiscall sub_70B4E0(_DWORD *this, _DWORD *a2, int *a3)
{
  _DWORD *result; // eax
  int v4; // esi
  int *v6; // ebp
  int v7; // edi

  result = a2;
  v4 = a2[2];
  if ( v4 )
  {
    v6 = a3;
    do
    {
      v7 = *(_DWORD *)(v4 + 8);
      v4 = *(_DWORD *)(v4 + 4);
      if ( !NiTMap_GetAt((_DWORD *)*v6, v7, &a2) )
        a2 = (_DWORD *)v7;
      result = sub_708E40(this, a2);
    }
    while ( v4 );
  }
  return result;
}
