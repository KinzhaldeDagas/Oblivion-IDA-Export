BOOL __thiscall sub_976AA0(float *this, float *a2)
{
  return *a2 == *this
      && a2[1] == *(this + 1)
      && a2[2] == *(this + 2)
      && a2[3] == *(this + 3)
      && a2[4] == *(this + 4)
      && a2[5] == *(this + 5);
}
