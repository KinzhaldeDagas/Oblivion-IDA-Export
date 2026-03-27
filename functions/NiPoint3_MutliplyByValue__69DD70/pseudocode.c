NiPoint3 *__thiscall NiPoint3::MutliplyByValue(NiPoint3 *this, float a2)
{
  this->x = this->x * a2;
  this->y = this->y * a2;
  this->z = a2 * this->z;
  return this;
}
