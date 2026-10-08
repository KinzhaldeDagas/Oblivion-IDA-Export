BSShader *__thiscall SkinShader::`scalar deleting destructor'(BSShader *this, char a2)
{
  SkinShader::~SkinShader(this); /*0x80ae73*/
  if ( (a2 & 1) != 0 ) /*0x80ae7d*/
    FormHeapFree((unsigned int)this); /*0x80ae80*/
  return this; /*0x80ae8a*/
}
