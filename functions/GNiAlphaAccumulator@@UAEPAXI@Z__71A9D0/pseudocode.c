NiAlphaAccumulator *__thiscall NiAlphaAccumulator::`scalar deleting destructor'(NiAlphaAccumulator *this, char a2)
{
  *(_DWORD *)this = &NiAlphaAccumulator::`vftable';
  NiBackToFrontAccumulator::~NiBackToFrontAccumulator(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
