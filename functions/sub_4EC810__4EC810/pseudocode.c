void __thiscall sub_4EC810(_DWORD *this)
{
  int v2; // eax
  int v3; // edi

  v2 = *(this + 2);
  if ( v2 != 5 )
  {
    if ( v2 != 4 )
      *(this + 2) = 4;
    nullsub_returnTrue_0arg();
    v3 = *(this + 0xB);
    if ( v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
      *(this + 0xB) = 0;
    }
    nullsub_returnTrue_0arg();
    *(this + 2) = 5;
  }
}
