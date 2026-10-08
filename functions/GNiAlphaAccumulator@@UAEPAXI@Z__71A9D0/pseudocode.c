NiAlphaAccumulator *__thiscall NiAlphaAccumulator::`scalar deleting destructor'(NiAlphaAccumulator *this, char a2)
{
  *(_DWORD *)this = &NiAlphaAccumulator::`vftable'; /*0x71a9d3*/
  NiBackToFrontAccumulator::~NiBackToFrontAccumulator(this); /*0x71a9d9*/
  if ( (a2 & 1) != 0 ) /*0x71a9e3*/
    FormHeapFree((unsigned int)this); /*0x71a9e6*/
  return this; /*0x71a9f0*/
}
