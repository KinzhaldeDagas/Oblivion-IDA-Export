// Oblivion 1.2.0.416: stVec3 distance using squared component deltas followed by the IEEE bit approximation (bits>>1)+0x1FC00000. RT4.1 stVec3::Distance and _idv_sqrt1 corroborate the exact formula.
float __thiscall OB_stVec3_DistanceApprox_010201A0(const OB_stVec3_010201A0 *this, const OB_stVec3_010201A0 *other)
{
  double v2; // st4
  double v3; // st6
  double v4; // st4
  double v5; // st5
  double v6; // st6
  int othera; // [esp+4h] [ebp+4h]

  v2 = other->x - this->x; /*0x786e64*/
  v3 = v2 * v2; /*0x786e66*/
  v4 = other->y - this->y; /*0x786e68*/
  v5 = v3; /*0x786e6c*/
  v6 = other->z - this->z; /*0x786e6c*/
  *(float *)&othera = v4 * v4 + v5 + v6 * v6; /*0x786e74*/
  return COERCE_FLOAT((othera >> 1) + 0x1FC00000); /*0x786e8b*/
}
