BOOL __thiscall sub_6CE450(float *this, float *a2)
{
  return *a2 == *this
      && a2[1] == *(this + 1)
      && a2[2] == *(this + 2)
      && sub_73B770(this + 3, a2 + 3)
      && a2[7] == *(this + 7);
}
