int *__thiscall sub_71FAC0(int *this, unsigned int a2)
{
  int v3; // eax

  v3 = FormHeapAlloc((unsigned __int64)a2 >> 0x1F != 0 ? 0xFFFFFFFF : 2 * a2);
  *(this + 2) = a2;
  *(this + 3) = a2;
  *this = v3;
  *(this + 1) = v3;
  *(this + 4) = 0;
  return this;
}
