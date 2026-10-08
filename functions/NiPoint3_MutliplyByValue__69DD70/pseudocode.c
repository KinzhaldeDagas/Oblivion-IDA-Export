NiPoint3 *__thiscall NiPoint3::MutliplyByValue(NiPoint3 *this, float a2)
{
  this->x = this->x * a2; /*0x69dd7e*/
  this->y = this->y * a2; /*0x69dd85*/
  this->z = a2 * this->z; /*0x69dd8b*/
  return this; /*0x69dd8e*/
}
