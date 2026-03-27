char __thiscall sub_5D46C0(void **this, int a2)
{
  char *v3; // eax

  if ( !sub_57D2F0(*(this + 0x1D)) )
    return 0;
  sub_57FF50((char *)*(this + 0x1D), a2);
  v3 = sub_580120((char *)*(this + 0x1D));
  Tile_SetString(*(this + 0xC), (_DWORD *)0xFDE, v3);
  return 1;
}
