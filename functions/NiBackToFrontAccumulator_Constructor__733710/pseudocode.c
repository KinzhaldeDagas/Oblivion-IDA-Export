_DWORD *__thiscall NiBackToFrontAccumulator_Constructor(_DWORD *this)
{
  NiAccumulator_Constructor(this);
  *this = &NiBackToFrontAccumulator::`vftable';
  *(this + 6) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 3) = &NiTPointerList<NiGeometry *>::`vftable';
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 0xA) = 0;
  *(this + 0xB) = 0;
  return this;
}
