int *__thiscall sub_4BA2D0(int *this, int a2, int a3, int a4, int a5, int a6, void *Src, void *a8)
{
  void *v9; // eax
  void *v10; // eax
  size_t v12; // [esp-18h] [ebp-1Ch]
  size_t v13; // [esp-8h] [ebp-Ch]

  *this = a2;
  *(this + 1) = a3;
  *(this + 3) = a5;
  *(this + 2) = a4;
  *(this + 4) = a6;
  v9 = (void *)FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)a6) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * a6);
  LODWORD(v13) = 0xC * *(this + 4);
  *(this + 5) = (int)v9;
  memcpy(v9, Src, v13);
  v10 = (void *)FormHeapAlloc((unsigned __int64)(unsigned int)*(this + 4) >> 0x1E != 0 ? 0xFFFFFFFF : 4 * *(this + 4));
  LODWORD(v12) = 4 * *(this + 4);
  *(this + 6) = (int)v10;
  memcpy(v10, a8, v12);
  return this;
}
