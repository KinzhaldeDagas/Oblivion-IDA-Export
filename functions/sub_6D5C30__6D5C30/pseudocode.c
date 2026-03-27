float *__thiscall sub_6D5C30(float *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  sub_6EC220(this);
  qmemcpy(this + 3, &a2, 0x20u);
  *(_DWORD *)this = &NiTransformInterpolator::`vftable';
  *(this + 0xB) = 0.0;
  *((_WORD *)this + 0x18) = 0;
  *((_WORD *)this + 0x19) = 0;
  *((_WORD *)this + 0x1A) = 0;
  return this;
}
