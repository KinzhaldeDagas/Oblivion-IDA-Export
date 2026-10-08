BSShader *__thiscall GeometryDecalShader::`scalar deleting destructor'(BSShader *this, char a2)
{
  GeometryDecalShader::~GeometryDecalShader(this); /*0x805f03*/
  if ( (a2 & 1) != 0 ) /*0x805f0d*/
    FormHeapFree((unsigned int)this); /*0x805f10*/
  return this; /*0x805f1a*/
}
