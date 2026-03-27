LONG __thiscall sub_6C4790(int **this, LONG *a2)
{
  int *v3; // eax
  unsigned int v4; // eax
  int v5; // eax
  int *v6; // edi
  LONG result; // eax
  int v8; // esi
  bool v9; // zf

  v3 = *(this + 1);
  if ( *(this + 2) == v3 )
  {
    if ( v3 )
      v4 = 2 * (_DWORD)v3;
    else
      v4 = 1;
    sub_6C40A0(this, v4);
  }
  v5 = (int)*(this + 2);
  v6 = &(*this)[v5];
  result = v5 + 1;
  *(this + 2) = (int *)result;
  v8 = *v6;
  if ( *v6 != *a2 )
  {
    if ( v8 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
        (**(void (__thiscall ***)(int, int))v8)(v8, 1);
    }
    result = *a2;
    v9 = *a2 == 0;
    *v6 = *a2;
    if ( !v9 )
      return InterlockedIncrement((volatile LONG *)(result + 4));
  }
  return result;
}
