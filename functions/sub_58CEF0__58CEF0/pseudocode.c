int __thiscall sub_58CEF0(_DWORD *this, _DWORD *a2, int a3, int a4)
{
  float *PropertyByCode; // eax

  PropertyByCode = (float *)Tile_GetPropertyByCode_(this, a2);
  return sub_58CB70(PropertyByCode, a3, a4);
}
