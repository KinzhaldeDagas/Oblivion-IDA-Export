float *__thiscall sub_537830(float *this)
{
  int v2; // eax

  sub_8B2170(this);
  *(this + 5) = 1.0;
  *(_DWORD *)this = &TESWaterListener::`vftable';
  v2 = uGridsToLoad;
  *((_DWORD *)this + 8) = uGridsToLoad;
  *((_DWORD *)this + 6) = FormHeapAlloc((unsigned __int64)(unsigned int)(v2 * v2) >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v2 * v2);
  return this;
}
