int *__thiscall sub_7C5950(_DWORD *this, int *a2, int *a3)
{
  int *result; // eax
  _DWORD *v4; // ecx
  int v5; // ecx
  bool v6; // zf

  result = a2;
  if ( a2 != a3 )
  {
    if ( (int *)*(this + 1) == a2 )
      *(this + 1) = *a2;
    if ( (int *)*(this + 2) == a2 )
      *(this + 2) = a2[1];
    if ( (int *)*(this + 2) == a3 )
      *(this + 2) = a2;
    if ( *a2 )
      *(_DWORD *)(*a2 + 4) = a2[1];
    v4 = (_DWORD *)a2[1];
    if ( v4 )
      *v4 = *a2;
    v5 = *a3;
    v6 = *a3 == 0;
    *a2 = *a3;
    a2[1] = (int)a3;
    if ( !v6 )
      *(_DWORD *)(v5 + 4) = a2;
    *a3 = (int)a2;
  }
  return result;
}
