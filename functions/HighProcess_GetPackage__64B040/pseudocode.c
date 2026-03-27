TESPackage *__thiscall HighProcess_GetPackage(HighProcess *this)
{
  TESPackage *result; // eax

  result = this->currentPackage;
  if ( !result )
    return this->editorPackage;
  return result;
}
