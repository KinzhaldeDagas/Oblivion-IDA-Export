BSShaderAccumulator *__thiscall BSShaderAccumulator::`scalar deleting destructor'(BSShaderAccumulator *this, char a2)
{
  BSShaderAccumulator::~BSShaderAccumulator(this); /*0x7ad253*/
  if ( (a2 & 1) != 0 ) /*0x7ad25d*/
    FormHeapFree((unsigned int)this); /*0x7ad260*/
  return this; /*0x7ad26a*/
}
