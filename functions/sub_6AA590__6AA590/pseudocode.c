_DWORD *__thiscall sub_6AA590(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // edi

  *(this + 4) = 0;
  *this = a2;
  *(this + 1) = a3;
  *(this + 2) = a4;
  *(this + 3) = a5;
  v7 = *(this + 4);
  if ( v7 != a6 )
  {
    if ( v7 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
        (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    }
    *(this + 4) = a6;
    if ( a6 )
      InterlockedIncrement((volatile LONG *)(a6 + 4));
  }
  if ( a6 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(a6 + 4)) )
      (**(void (__thiscall ***)(int, int))a6)(a6, 1);
  }
  return this;
}
