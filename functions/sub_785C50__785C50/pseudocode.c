char **__thiscall sub_785C50(char **this, char **a2)
{
  *this = *a2;
  *(this + 1) = a2[1];
  *(this + 2) = a2[2];
  sub_785400(this + 3, a2 + 3);
  sub_785400(this + 7, a2 + 7);
  sub_785580(this + 0xB, (int)(a2 + 0xB));
  sub_785400(this + 0xF, a2 + 0xF);
  sub_785400(this + 0x13, a2 + 0x13);
  return this;
}
