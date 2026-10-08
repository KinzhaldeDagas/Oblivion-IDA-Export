BSShader *__thiscall DistantLODShader::`scalar deleting destructor'(BSShader *this, char a2)
{
  DistantLODShader::~DistantLODShader(this); /*0x811eb3*/
  if ( (a2 & 1) != 0 ) /*0x811ebd*/
    FormHeapFree((unsigned int)this); /*0x811ec0*/
  return this; /*0x811eca*/
}
