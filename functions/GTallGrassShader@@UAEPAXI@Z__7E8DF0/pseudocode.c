BSShader *__thiscall TallGrassShader::`scalar deleting destructor'(BSShader *this, char a2)
{
  TallGrassShader::~TallGrassShader(this); /*0x7e8df3*/
  if ( (a2 & 1) != 0 ) /*0x7e8dfd*/
    FormHeapFree((unsigned int)this); /*0x7e8e00*/
  return this; /*0x7e8e0a*/
}
