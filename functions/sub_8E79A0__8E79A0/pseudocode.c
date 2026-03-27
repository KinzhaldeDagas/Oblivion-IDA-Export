_OWORD *__thiscall sub_8E79A0(_OWORD *this, _OWORD *a2, _OWORD *a3)
{
  *this = *a2;
  *(this + 1) = *a2;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 7) = 0;
  *(this + 2) = *a3;
  *(this + 3) = *a3;
  *(this + 4) = 0;
  return a3;
}
