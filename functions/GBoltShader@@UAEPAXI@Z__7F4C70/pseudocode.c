BoltShader *__thiscall BoltShader::`scalar deleting destructor'(BoltShader *this, char a2)
{
  BoltShader::~BoltShader(this); /*0x7f4c73*/
  if ( (a2 & 1) != 0 ) /*0x7f4c7d*/
    FormHeapFree((unsigned int)this); /*0x7f4c80*/
  return this; /*0x7f4c8a*/
}
