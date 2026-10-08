// Returns the number of 4-byte elements in an Oblivion vector as (end-begin)/4, or zero when begin is null. Callers use it for branch-pointer and leaf-pointer collections.
unsigned int __thiscall OB_stVector4_Size_010201A0(const OB_stVector4_010201A0 *this)
{
  unsigned int *begin; // edx

  begin = this->begin; /*0x78fa80*/
  if ( begin ) /*0x78fa85*/
    return this->end - begin; /*0x78fa8f*/
  else
    return 0; /*0x78fa87*/
}
