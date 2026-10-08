// Oblivion 1.2.0.416: returns (end-begin)/0x18 for a compiler-folded 24-byte vector specialization; xrefs show both stVec and branch-flare records.
unsigned int __thiscall OB_stVector24_Size_010201A0(const OB_stVector24_010201A0 *this)
{
  unsigned int result; // eax

  result = (unsigned int)this->begin; /*0x783fe0*/
  if ( result ) /*0x783fe5*/
    return (int)&this->end[-result] / 0x18; /*0x783ffc*/
  return result; /*0x783fe7*/
}
