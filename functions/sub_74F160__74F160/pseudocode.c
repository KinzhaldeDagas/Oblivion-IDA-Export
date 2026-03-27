bool __thiscall sub_74F160(float *this, float *a2)
{
  return sub_752CD0(this, (int)a2)
      && *(this + 6) == a2[6]
      && *(this + 7) == a2[7]
      && *(this + 8) == a2[8]
      && *(this + 9) == a2[9]
      && *(this + 0xA) == a2[0xA]
      && *(this + 0xB) == a2[0xB]
      && !sub_632310(a2 + 0xC, this + 0xC)
      && *(this + 0x10) == a2[0x10]
      && *(this + 0x11) == a2[0x11]
      && *(this + 0x12) == a2[0x12]
      && *(this + 0x13) == a2[0x13];
}
