// Oblivion CIdvCamera copy assignment. On non-self assignment copies only the three-float position at +0x04..+0x0F and returns this. The function occupies the inherited assignment slot in the CIdvCamera and derived vtables.
OB_CIdvCamera_010201A0 *__thiscall OB_CIdvCamera_copy_assign_010201A0(
        OB_CIdvCamera_010201A0 *this,
        const OB_CIdvCamera_010201A0 *source)
{
  OB_CIdvCamera_010201A0 *result; // eax

  result = this; /*0x78ed20*/
  if ( source != this ) /*0x78ed28*/
    this->position = source->position; /*0x78ed2f*/
  return result; /*0x78ed3e*/
}
