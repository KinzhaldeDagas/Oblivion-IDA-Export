char __thiscall TESTextureList_Clear(TESTextureList *this)
{
  void **archiveEntries; // ecx
  char result; // al

  archiveEntries = this->archiveEntries; /*0x46d453*/
  result = 0; /*0x46d456*/
  if ( archiveEntries ) /*0x46d45a*/
  {
    FormHeapFree((unsigned int)archiveEntries); /*0x46d45d*/
    this->archiveEntries = 0; /*0x46d465*/
    result = 1; /*0x46d46c*/
  }
  LOBYTE(this->count) = 0; /*0x46d46e*/
  return result; /*0x46d471*/
}
