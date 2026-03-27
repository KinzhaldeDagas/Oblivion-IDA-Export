hkVector4 *__thiscall bhkWorldRayCastData::SetCastInputTo(bhkWorldRayCastData *this, NiPoint3 *a2)
{
  double v3; // rt0
  double v4; // st7
  hkVector4 v5; // [esp+0h] [ebp-20h]

  v3 = hkFactor;
  v5.x = a2->x * v3;
  v5.y = a2->y * v3;
  v4 = v3 * a2->z;
  this->unk60 = stru_BA7A40;
  v5.z = v4;
  this->WorldRayCastInput.To = v5;
  return &this->WorldRayCastInput.From;
}
