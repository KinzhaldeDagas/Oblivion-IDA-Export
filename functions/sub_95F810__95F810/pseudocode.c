_WORD *__thiscall sub_95F810(_WORD *this)
{
  *(_DWORD *)this = &NiUnionBV::`vftable';
  *(this + 6) = 2;
  *((_DWORD *)this + 1) = &NiTArray<NiBoundingVolume *>::`vftable';
  *(this + 9) = 1;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *((_DWORD *)this + 2) = FormHeapAlloc(8u);
  *((_DWORD *)this + 5) = 0;
  return this;
}
