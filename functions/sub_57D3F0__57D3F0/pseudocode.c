BOOL __thiscall sub_57D3F0(_DWORD *this)
{
  _DWORD *v1; // ecx

  v1 = (_DWORD *)*(this + 0xA);
  return v1 && Tile_GetFloat(v1, 0xFA1) == fConstant_2;
}
