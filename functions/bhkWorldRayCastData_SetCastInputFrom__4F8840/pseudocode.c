NiPoint3 *__thiscall bhkWorldRayCastData::SetCastInputFrom(bhkWorldRayCastData *this, NiPoint3 *a2)
{
  double v3; // rt0
  hkVector4 v4; // [esp+0h] [ebp-20h]

  v3 = hkFactor;
  v4.x = a2->x * v3;
  v4.y = a2->y * v3;
  v4.z = v3 * a2->z;
  this->WorldRayCastInput.From = v4;
  return a2;
}
