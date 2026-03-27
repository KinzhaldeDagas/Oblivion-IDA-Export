int __thiscall sub_6E3AA0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v6; // esi

  v6 = *(this + 7);
  if ( v6 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    *(this + 7) = 0;
  }
  *(this + 3) = a2;
  *(this + 4) = a3;
  *(this + 5) = a4;
  *(this + 6) = a5;
  return a4;
}
