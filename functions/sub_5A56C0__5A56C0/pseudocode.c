bool __thiscall sub_5A56C0(_DWORD *this)
{
  _DWORD *v1; // ecx

  v1 = (_DWORD *)*(this + 0x15);
  return v1 && Tile_GetFloat(v1, 0xFA1) == fConstant_2;
}
