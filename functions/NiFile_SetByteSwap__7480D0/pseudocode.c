void __thiscall NiFile_SetByteSwap(_DWORD *this, char a2)
{
  if ( a2 )
  {
    *(this + 1) = NiFile_ReadFuncSwapped;
    *(this + 2) = NiFile_WriteFuncSwapped;
  }
  else
  {
    *(this + 1) = NiFile_ReadFunc;
    *(this + 2) = NiFile_WriteFunc;
  }
}
