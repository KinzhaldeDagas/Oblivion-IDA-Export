float *__thiscall sub_710190(float *this, float *a2, float a3)
{
  *a2 = *this * a3;
  a2[1] = *(this + 1) * a3;
  a2[2] = *(this + 2) * a3;
  a2[3] = *(this + 3) * a3;
  a2[4] = *(this + 4) * a3;
  a2[5] = *(this + 5) * a3;
  a2[6] = *(this + 6) * a3;
  a2[7] = *(this + 7) * a3;
  a2[8] = a3 * *(this + 8);
  return a2;
}
