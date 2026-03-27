void __thiscall BSFile_SetByteSwap(_DWORD *this, char a2)
{
  if ( a2 )
  {
    *(this + 1) = BSFile_ReadFuncSwapper;
    *(this + 2) = BSFile_WriteFuncSwapped;
  }
  else
  {
    *(this + 1) = BSFile_ReadFunc;
    *(this + 2) = BSFile_WriteFunc;
  }
}
