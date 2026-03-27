bhkCharacterProxy *__thiscall sub_452A10(bhkCharacterProxy *this, NiPoint3 *a2)
{
  double v2; // rt0
  float v4[7]; // [esp+0h] [ebp-20h] BYREF

  v2 = hkFactor;
  v4[0] = a2->x * v2;
  v4[1] = a2->y * v2;
  v4[2] = v2 * a2->z;
  return sub_891560(this, v4);
}
