char __thiscall sub_5D46C0(void **this, int a2)
{
  char *v3; // eax

  if ( !sub_57D2F0(*(this + 0x1D)) ) /*0x5d46c6*/
    return 0; /*0x5d46f8*/
  sub_57FF50((char *)*(this + 0x1D), a2); /*0x5d46d7*/
  v3 = sub_580120((char *)*(this + 0x1D)); /*0x5d46df*/
  Tile_SetString(*(this + 0xC), (_DWORD *)0xFDE, v3); /*0x5d46ed*/
  return 1; /*0x5d46f4*/
}
