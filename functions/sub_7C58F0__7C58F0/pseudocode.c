_DWORD *__thiscall sub_7C58F0(_DWORD *this, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax
  _DWORD *v4; // ecx
  _DWORD *v5; // ecx

  result = a2;
  if ( a2 != a3 )
  {
    if ( (_DWORD *)*(this + 1) == a2 )
      *(this + 1) = *a2;
    if ( (_DWORD *)*(this + 1) == a3 )
      *(this + 1) = a2;
    if ( (_DWORD *)*(this + 2) == a2 )
      *(this + 2) = a2[1];
    if ( *a2 )
      *(_DWORD *)(*a2 + 4) = a2[1];
    v4 = (_DWORD *)a2[1];
    if ( v4 )
      *v4 = *a2;
    v5 = (_DWORD *)a3[1];
    a2[1] = v5;
    *a2 = a3;
    if ( v5 )
      *v5 = a2;
    a3[1] = a2;
  }
  return result;
}
