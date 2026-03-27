_DWORD *__thiscall NiAlphaAccumulator_Constructor(_DWORD *this)
{
  NiBackToFrontAccumulator_Constructor(this);
  *this = &NiAlphaAccumulator::`vftable';
  *((_BYTE *)this + 0x34) = 1;
  *((_BYTE *)this + 0x35) = 0;
  return this;
}
