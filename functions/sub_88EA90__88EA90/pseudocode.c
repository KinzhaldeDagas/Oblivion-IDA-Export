int __thiscall sub_88EA90(float *this, float *a2, int a3)
{
  int result; // eax

  result = sub_89E930(a2, a3);
  a2[6] = *(this + 6);
  a2[5] = *(this + 5);
  a2[8] = *(this + 8);
  return result;
}
