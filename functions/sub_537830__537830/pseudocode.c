float *__thiscall sub_537830(float *this)
{
  int v2; // eax

  sub_8B2170(this); /*0x537858*/
  *(this + 5) = 1.0; /*0x53785f*/
  *(_DWORD *)this = &TESWaterListener::`vftable'; /*0x537862*/
  v2 = uGridsToLoad; /*0x537868*/
  *((_DWORD *)this + 8) = uGridsToLoad; /*0x53786d*/
  *((_DWORD *)this + 6) = FormHeapAlloc((unsigned __int64)(unsigned int)(v2 * v2) >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v2 * v2);
  return this; /*0x537899*/
}
