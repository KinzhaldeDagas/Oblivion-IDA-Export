BSImageSpaceShader *__thiscall WaterShaderDisplacement::`scalar deleting destructor'(BSImageSpaceShader *this, char a2)
{
  WaterShaderDisplacement::~WaterShaderDisplacement(this); /*0x7de393*/
  if ( (a2 & 1) != 0 ) /*0x7de39d*/
    FormHeapFree((unsigned int)this); /*0x7de3a0*/
  return this; /*0x7de3aa*/
}
