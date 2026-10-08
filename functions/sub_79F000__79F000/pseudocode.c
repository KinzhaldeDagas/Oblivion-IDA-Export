// Destroys one st_vector<SFrondGuide>: deep-destroys the initialized 0x30 guide range, frees its allocation, and clears begin/end/capacityEnd.
void __thiscall OB_stVector_SFrondGuide_Destroy_010201A0(OB_stVector_SFrondGuide_010201A0 *this)
{
  OB_SFrondGuide_010201A0 *begin; // eax

  begin = this->begin; /*0x79f004*/
  if ( begin ) /*0x79f009*/
  {
    OB_SFrondGuide_DestroyRange_010201A0(begin, this->end); /*0x79f016*/
    FormHeapFree((unsigned int)this->begin); /*0x79f01f*/
  }
  this->begin = 0; /*0x79f027*/
  this->end = 0; /*0x79f02e*/
  this->capacityEnd = 0; /*0x79f035*/
}
