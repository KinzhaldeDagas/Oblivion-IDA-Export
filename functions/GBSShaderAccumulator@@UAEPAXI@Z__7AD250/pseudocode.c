BSShaderAccumulator *__thiscall BSShaderAccumulator::`scalar deleting destructor'(BSShaderAccumulator *this, char a2)
{
  BSShaderAccumulator::~BSShaderAccumulator(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
