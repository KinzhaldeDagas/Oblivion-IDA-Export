_DWORD *__thiscall sub_4BD150(_DWORD *this, int a2, int *a3)
{
  int v4; // edi
  int v5; // eax
  bool v6; // zf

  *(this + 1) = 0;
  *(this + 2) = 0;
  *this = a2;
  v4 = *(this + 1);
  if ( v4 != *a3 )
  {
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 8)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
    v5 = *a3;
    v6 = *a3 == 0;
    *(this + 1) = *a3;
    if ( !v6 )
      InterlockedIncrement((volatile LONG *)(v5 + 8));
  }
  return this;
}
