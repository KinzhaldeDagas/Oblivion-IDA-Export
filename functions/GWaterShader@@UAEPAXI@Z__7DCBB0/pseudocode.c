WaterShader *__thiscall WaterShader::`scalar deleting destructor'(WaterShader *this, char a2)
{
  WaterShader::~WaterShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
