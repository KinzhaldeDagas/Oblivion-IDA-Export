float *__thiscall sub_58CF10(_DWORD *this, _DWORD *a2, _DWORD *a3, int a4, int a5)
{
  float *PropertyByCode; // eax

  PropertyByCode = (float *)Tile_GetPropertyByCode_(this, a2);
  return sub_58CC60(PropertyByCode, a3, a4, a5);
}
