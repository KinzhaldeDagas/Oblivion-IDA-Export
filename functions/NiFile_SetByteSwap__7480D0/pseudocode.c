void __thiscall NiFile_SetByteSwap(_DWORD *this, char a2)
{
  if ( a2 ) /*0x7480d5*/
  {
    *(this + 1) = NiFile_ReadFuncSwapped; /*0x7480d7*/
    *(this + 2) = NiFile_WriteFuncSwapped; /*0x7480de*/
  }
  else
  {
    *(this + 1) = NiFile_ReadFunc; /*0x7480e8*/
    *(this + 2) = NiFile_WriteFunc; /*0x7480ef*/
  }
}
