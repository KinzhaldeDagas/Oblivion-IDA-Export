NiBackToFrontAccumulator *__thiscall NiBackToFrontAccumulator::`scalar deleting destructor'(
        NiBackToFrontAccumulator *this,
        char a2)
{
  NiBackToFrontAccumulator::~NiBackToFrontAccumulator(this); /*0x733753*/
  if ( (a2 & 1) != 0 ) /*0x73375d*/
    FormHeapFree((unsigned int)this); /*0x733760*/
  return this; /*0x73376a*/
}
