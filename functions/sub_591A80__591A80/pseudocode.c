void __thiscall sub_591A80(_DWORD *this, int a2)
{
  int v3; // edi
  LONG (__stdcall *v4)(volatile LONG *); // ebp

  Tile_SetString(this, (_DWORD *)0xFE6, EmptyString);
  v3 = *(this + 0x11);
  v4 = InterlockedDecrement;
  if ( v3 != a2 )
  {
    if ( v3 )
    {
      if ( !v4((volatile LONG *)(v3 + 4)) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    }
    *(this + 0x11) = a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)(a2 + 4));
  }
  *(this + 0xB) |= 0x30u;
  if ( a2 )
  {
    if ( !v4((volatile LONG *)(a2 + 4)) )
      (**(void (__thiscall ***)(int, int))a2)(a2, 1);
  }
}
