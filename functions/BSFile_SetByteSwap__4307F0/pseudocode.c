void __thiscall BSFile_SetByteSwap(_DWORD *this, char a2)
{
  if ( a2 ) /*0x4307f5*/
  {
    *(this + 1) = BSFile_ReadFuncSwapper; /*0x4307f7*/
    *(this + 2) = BSFile_WriteFuncSwapped; /*0x4307fe*/
  }
  else
  {
    *(this + 1) = BSFile_ReadFunc; /*0x430808*/
    *(this + 2) = BSFile_WriteFunc; /*0x43080f*/
  }
}
