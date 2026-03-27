void __thiscall sub_405CE0(_DWORD *this)
{
  int v2; // esi
  int v3; // esi
  int v4; // eax

  v2 = *(this + 0x75);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *(this + 0x75) = 0;
  }
  v3 = *(this + 0x76);
  if ( v3 != *(this + 0x75) )
  {
    if ( v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    }
    v4 = *(this + 0x75);
    *(this + 0x76) = v4;
    if ( v4 )
      InterlockedIncrement((volatile LONG *)(v4 + 4));
  }
}
