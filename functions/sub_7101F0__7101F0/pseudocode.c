NiTransform *__thiscall sub_7101F0(NiTransform *this, NiTransform *a2, NiPoint3 *a3)
{
  a2->rot.data[0][0] = this->rot.data[0][1] * a3->y + a3->x * this->rot.data[0][0] + this->rot.data[0][2] * a3->z;
  a2->rot.data[0][1] = this->rot.data[1][0] * a3->x + this->rot.data[1][1] * a3->y + this->rot.data[1][2] * a3->z;
  a2->rot.data[0][2] = this->rot.data[2][0] * a3->x + this->rot.data[2][1] * a3->y + this->rot.data[2][2] * a3->z;
  return a2;
}
