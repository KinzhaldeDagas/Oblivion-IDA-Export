void __thiscall sub_5D9FE0(_DWORD *this, int arg0, int a3)
{
  float Float; // [esp+0h] [ebp-10h]
  float a2; // [esp+8h] [ebp-8h]

  if ( arg0 == 0x22 || arg0 == 0x18 || arg0 == 0xE )
  {
    Tile_SetFloat((Tile *)*(this + 0x15), (_DWORD *)0xFA1, 1.0);
    a2 = Tile_GetFloat((_DWORD *)*(this + 0x16), 0xFAF);
    Float = Tile_GetFloat((_DWORD *)*(this + 0x16), 0xFAE);
    sub_589980((_DWORD *)*(this + 0x16), 0xFAE, Float, 0.0, a2);
  }
}
