BOOL __thiscall sub_4011B0(unsigned int *this, unsigned int a2)
{
  unsigned int v2; // eax

  v2 = *(this + 0x10);
  return a2 >= v2 && a2 < v2 + *(this + 0x44);
}
