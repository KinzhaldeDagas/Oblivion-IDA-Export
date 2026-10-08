WaterShader *__thiscall WaterShader::`scalar deleting destructor'(WaterShader *this, char a2)
{
  WaterShader::~WaterShader(this); /*0x7dcbb3*/
  if ( (a2 & 1) != 0 ) /*0x7dcbbd*/
    FormHeapFree((unsigned int)this); /*0x7dcbc0*/
  return this; /*0x7dcbca*/
}
