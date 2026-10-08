// Oblivion-authoritative size query for the SFrondVertex vector. Computes (end-begin)/0x38; returns zero when begin is null.
unsigned int __thiscall OB_stVector_SFrondVertex_Size_010201A0(const OB_stVector16_010201A0 *this)
{
  unsigned int result; // eax

  result = (unsigned int)this->begin; /*0x799ee0*/
  if ( result ) /*0x799ee5*/
    return (int)((int)this->end - result) / 0x38; /*0x799efe*/
  return result; /*0x799ee7*/
}
