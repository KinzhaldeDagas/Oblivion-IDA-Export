BSImageSpaceShader *__thiscall WaterShaderDisplacement::`scalar deleting destructor'(BSImageSpaceShader *this, char a2)
{
  WaterShaderDisplacement::~WaterShaderDisplacement(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
