void __thiscall sub_88A790(_DWORD *this)
{
  int i; // esi

  if ( *(this + 5) )
  {
    for ( i = *(this + 0x1C);
          i;
          sub_8A7830(
            (LPCRITICAL_SECTION *)dword_BA7DA0,
            *(_DWORD *)(*(this + 0x1B) + 8 * i + 4),
            *(_DWORD *)(*(this + 0x1B) + 8 * i),
            0) )
    {
      --i;
    }
  }
  *(this + 0x1C) = 0;
}
