// Oblivion-authoritative size query for the compact SFrondGuide vector. Computes (end-begin)/0x30; returns zero when begin is null.
unsigned int __thiscall OB_stVector_SFrondGuide_Size_010201A0(const OB_stVector16_010201A0 *this)
{
  unsigned int result; // eax

  result = (unsigned int)this->begin; /*0x799f10*/
  if ( result ) /*0x799f15*/
    return (int)((int)this->end - result) / 0x30; /*0x799f2c*/
  return result; /*0x799f17*/
}
