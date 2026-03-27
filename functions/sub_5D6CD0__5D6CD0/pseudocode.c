void __thiscall sub_5D6CD0(Tile **this, int a2, int a3)
{
  Tile *v3; // ecx

  if ( a2 == 6 )
  {
    v3 = *(this + 0xD);
  }
  else
  {
    if ( a2 != 5 )
      return;
    v3 = *(this + 0xC);
  }
  Tile_SetFloat(v3, (_DWORD *)0xFA7, flt_A40098);
}
