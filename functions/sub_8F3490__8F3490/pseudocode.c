_DWORD *__thiscall sub_8F3490(_DWORD *this, _OWORD *a2, _OWORD *a3, int a4)
{
  *(this + 3) = a4;
  *((_WORD *)this + 3) = 1;
  *(this + 2) = 0;
  *this = &off_A9B2A0;
  *((_OWORD *)this + 1) = *a2;
  *((_OWORD *)this + 2) = *a3;
  *(this + 7) = a4;
  *(this + 0xB) = a4;
  return this;
}
