unsigned int *__thiscall sub_77BD50(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 2); /*0x77bd56*/
  *this = (unsigned int)&NiD3DShaderProgramCreatorAsm::`vftable'; /*0x77bd57*/
  FormHeapFree(v4); /*0x77bd5d*/
  *this = (unsigned int)&NiD3DShaderProgramCreator::`vftable'; /*0x77bd6a*/
  if ( (a2 & 1) != 0 ) /*0x77bd70*/
    FormHeapFree((unsigned int)this); /*0x77bd73*/
  return this; /*0x77bd7d*/
}
