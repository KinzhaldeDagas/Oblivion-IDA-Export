bool __thiscall sub_709830(float *this, float *a2)
{
  return sub_6D7E00(this, (int)a2)
      && !sub_8AA390(this + 7, a2 + 7)
      && !sub_8AA390(this + 0xA, a2 + 0xA)
      && !sub_8AA390(this + 0xD, a2 + 0xD)
      && !sub_8AA390(this + 0x10, a2 + 0x10)
      && a2[0x13] == *(this + 0x13)
      && a2[0x14] == *(this + 0x14);
}
