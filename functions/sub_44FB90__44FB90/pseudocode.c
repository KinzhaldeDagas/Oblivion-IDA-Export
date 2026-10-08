// Returns the topmost thread-safe parent of this TESFile, or null when this file has no parent. Behavior matches the later engine API name after being verified here.
Data *__thiscall TESFile_GetThreadSafeParent(Data *this)
{
  Data *result; // eax

  result = this->ghostFileParent; /*0x44fb90*/
  if ( result ) /*0x44fb95*/
  {
    while ( result->ghostFileParent ) /*0x44fb9c*/
      result = result->ghostFileParent; /*0x44fb9e*/
  }
  return result; /*0x44fba4*/
}
