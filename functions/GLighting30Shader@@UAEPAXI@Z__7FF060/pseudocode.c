BSShader *__thiscall Lighting30Shader::`scalar deleting destructor'(BSShader *this, char a2)
{
  Lighting30Shader::~Lighting30Shader(this); /*0x7ff063*/
  if ( (a2 & 1) != 0 ) /*0x7ff06d*/
    FormHeapFree((unsigned int)this); /*0x7ff070*/
  return this; /*0x7ff07a*/
}
