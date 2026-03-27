bool __thiscall sub_704300(float *this, float *a2)
{
  return sub_704290(this, (int)a2)
      && a2[4] == *(this + 4)
      && a2[5] == *(this + 5)
      && a2[6] == *(this + 6)
      && a2[7] == *(this + 7)
      && a2[8] == *(this + 8)
      && a2[9] == *(this + 9);
}
