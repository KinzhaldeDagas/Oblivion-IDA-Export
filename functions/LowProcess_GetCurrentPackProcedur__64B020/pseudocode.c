eProcedure __thiscall LowProcess_GetCurrentPackProcedur(HighProcess *this)
{
  if ( this->currentPackage )
    return this->currentPackProcedure;
  else
    return this->editorPackProcedure;
}
