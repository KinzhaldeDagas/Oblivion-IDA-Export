// 3DTheft: GetCurrentPackage returns currentPackage if non-null, otherwise editorPackage; dynamic packages assigned with Actor_AddPackage_(...,0,1) are still visible through this accessor.
TESPackage *__thiscall HighProcess_GetPackage(HighProcess *this)
{
  TESPackage *result; // eax

  result = this->currentPackage; /*0x64b040*/
  if ( !result ) /*0x64b048*/
    return this->editorPackage; /*0x64b04a*/
  return result; /*0x64b04d*/
}
