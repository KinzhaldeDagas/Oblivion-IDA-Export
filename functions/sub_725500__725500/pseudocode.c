bool __thiscall sub_725500(float *this, float *a2)
{
  return sub_71A650(this, (int)a2)
      && a2[0x42] == *(this + 0x42)
      && a2[0x43] == *(this + 0x43)
      && a2[0x44] == *(this + 0x44);
}
