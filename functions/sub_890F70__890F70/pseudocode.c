void __thiscall sub_890F70(_DWORD *this)
{
  int v2; // ecx
  int v3; // esi

  v2 = *(this + 0x24);
  if ( v2 )
  {
    if ( *(_WORD *)(v2 + 4) )
    {
      if ( !--*(_WORD *)(v2 + 6) )
        (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    }
    *(this + 0x24) = 0;
  }
  v3 = *(this + 0x23);
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
}
