// OBLIVION AUTHORITY (2026-08-30): Full destructor for an outer vector of 0x10-byte vector owners. Destroys every inner owner, frees outer storage, and clears the triplet; structurally shared by multiple specializations.
void __thiscall OB_stVector_stVector4_DestroyThiscall_010201A0(OB_stVector16_010201A0 *this)
{
  OB_stVector4_010201A0 *begin; // eax

  begin = (OB_stVector4_010201A0 *)this->begin; /*0x7957e4*/
  if ( begin ) /*0x7957e9*/
  {
    OB_stVector4_DestroyRange_010201A0(begin, (OB_stVector4_010201A0 *)this->end); /*0x7957f6*/
    FormHeapFree((unsigned int)this->begin); /*0x7957ff*/
  }
  this->begin = 0; /*0x795807*/
  this->end = 0; /*0x79580e*/
  this->capacityEnd = 0; /*0x795815*/
}
