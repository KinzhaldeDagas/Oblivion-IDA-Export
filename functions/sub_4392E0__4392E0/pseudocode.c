void __thiscall sub_4392E0(_DWORD *this, int a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int i; // esi
  volatile LONG *v6; // eax
  int v7; // esi

  v3 = *(this + 7);
  if ( v3 )
  {
    v4 = *(unsigned __int16 *)(v3 + 0xA);
    for ( i = 0; i < v4; ++i )
    {
      v6 = *(volatile LONG **)(*(_DWORD *)(*(this + 7) + 4) + 4 * i);
      if ( v6 )
        sub_432130(v6);
    }
  }
  v7 = *(this + 6);
  if ( v7 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 8)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    *(this + 6) = 0;
  }
}
