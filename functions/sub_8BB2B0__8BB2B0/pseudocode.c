_WORD *__thiscall sub_8BB2B0(_WORD *this, char *Filename)
{
  *(this + 3) = 1;
  *(_DWORD *)this = &off_A982A0;
  *((_BYTE *)this + 0xC) = 1;
  *((_DWORD *)this + 2) = fopen(Filename, "wb");
  return this;
}
