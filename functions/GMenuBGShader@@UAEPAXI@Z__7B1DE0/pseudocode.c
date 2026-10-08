BSImageSpaceShader *__thiscall MenuBGShader::`scalar deleting destructor'(BSImageSpaceShader *this, char a2)
{
  MenuBGShader::~MenuBGShader(this); /*0x7b1de3*/
  if ( (a2 & 1) != 0 ) /*0x7b1ded*/
    FormHeapFree((unsigned int)this); /*0x7b1df0*/
  return this; /*0x7b1dfa*/
}
