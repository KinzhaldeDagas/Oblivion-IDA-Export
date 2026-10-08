RefractionShader *__thiscall RefractionShader::`scalar deleting destructor'(RefractionShader *this, char a2)
{
  RefractionShader::~RefractionShader(this); /*0x800cd3*/
  if ( (a2 & 1) != 0 ) /*0x800cdd*/
    FormHeapFree((unsigned int)this); /*0x800ce0*/
  return this; /*0x800cea*/
}
