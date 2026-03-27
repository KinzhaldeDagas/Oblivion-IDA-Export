_DWORD *__thiscall sub_432690(_DWORD *this, int a2, int a3, int *a4)
{
  int v5; // edi
  int v6; // eax
  bool v7; // zf

  *(this + 2) = 0;
  *(this + 3) = 0;
  *this = a2;
  *(this + 1) = a3;
  v5 = *(this + 2);
  if ( v5 != *a4 )
  {
    if ( v5 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 8)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
    v6 = *a4;
    v7 = *a4 == 0;
    *(this + 2) = *a4;
    if ( !v7 )
      InterlockedIncrement((volatile LONG *)(v6 + 8));
  }
  return this;
}
