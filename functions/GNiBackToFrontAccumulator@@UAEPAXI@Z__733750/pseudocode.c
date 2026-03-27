NiBackToFrontAccumulator *__thiscall NiBackToFrontAccumulator::`scalar deleting destructor'(
        NiBackToFrontAccumulator *this,
        char a2)
{
  NiBackToFrontAccumulator::~NiBackToFrontAccumulator(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
