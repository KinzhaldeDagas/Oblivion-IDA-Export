// 3DTheft: GetCurrentPackProcedure returns currentPackProcedure when currentPackage exists, otherwise editorPackProcedure.
eProcedure __thiscall LowProcess_GetCurrentPackProcedur(HighProcess *this)
{
  if ( this->currentPackage ) /*0x64b020*/
    return this->currentPackProcedure; /*0x64b029*/
  else
    return this->editorPackProcedure; /*0x64b030*/
}
