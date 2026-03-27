_DWORD *__thiscall sub_8F6720(_DWORD *this, int a2, int a3, _DWORD *a4, int a5)
{
  *(this + 2) = a5;
  *((_WORD *)this + 3) = 1;
  *this = &off_A9B510;
  *(this + 0xC) = this + 0xF;
  *(this + 0xD) = 0;
  *(this + 0xE) = 0x80000001;
  *(this + 3) = *a4;
  *((_OWORD *)this + 1) = 0;
  *((_OWORD *)this + 2) = 0;
  sub_934270((int)(this + 0xC));
  return this;
}
