// Oblivion 28-byte SSO copy constructor for a by-value temporary: initializes destination, copies the source substring, and releases heap-backed source storage. Used after ParseString.
OB_stString28_010201A0 *__thiscall OB_stString28_CopyCtorConsumeTemporary_010201A0(
        OB_stString28_010201A0 *this,
        OB_stString28_010201A0 source)
{
  this->size = 0; /*0x789147*/
  this->capacity = 0xF; /*0x78914a*/
  this->storage.inlineData[0] = 0; /*0x789156*/
  OB_stString28_AssignSubstring_010201A0(this, &source, 0, 0xFFFFFFFF); /*0x78915e*/
  if ( source.capacity >= 0x10 ) /*0x789168*/
    FormHeapFree((unsigned int)source.storage.heapData); /*0x78916f*/
  return this; /*0x789179*/
}
