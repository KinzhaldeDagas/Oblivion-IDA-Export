int __thiscall sub_6DA440(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // esi

  v5 = *(this + 6);
  if ( v5 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *(this + 6) = 0;
  }
  *(this + 3) = a2;
  *(this + 4) = a3;
  *(this + 5) = a4;
  return a4;
}
