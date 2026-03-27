void __thiscall sub_6CE210(_DWORD *this, int a2, int a3)
{
  int v4; // esi

  v4 = *(this + 0xF);
  if ( v4 != a2 )
  {
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
    *(this + 0xF) = a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)(a2 + 4));
  }
}
