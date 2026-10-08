// Verified ownership setter used by serialized ROAD loading: releases the existing WorldSpace road, then assigns the replacement TESRoad*. The ROAD loader writes the reciprocal TESRoad+0x2C owner pointer immediately afterward.
TESRoad *__thiscall TESWorldSpace_SetRoad(TESWorldSpace *this, TESRoad *road)
{
  int v3; // ecx
  TESRoad *result; // eax

  v3 = this->road; /*0x4ef103*/
  if ( v3 ) /*0x4ef108*/
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 0x10))(v3, 1); /*0x4ef111*/
    result = road; /*0x4ef113*/
  }
  this->road = (int)road; /*0x4ef117*/
  return result; /*0x4ef11a*/
}
