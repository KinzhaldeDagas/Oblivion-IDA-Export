BSShader *__thiscall SpeedTreeBranchShader::`scalar deleting destructor'(BSShader *this, char a2)
{
  SpeedTreeBranchShader::~SpeedTreeBranchShader(this); /*0x810b73*/
  if ( (a2 & 1) != 0 ) /*0x810b7d*/
    FormHeapFree((unsigned int)this); /*0x810b80*/
  return this; /*0x810b8a*/
}
