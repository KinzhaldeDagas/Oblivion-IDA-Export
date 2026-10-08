// Oblivion CIdvCamera scalar deleting destructor. Restores the base vftable and frees the object through FormHeap only when flags bit 0 is set.
OB_CIdvCamera_010201A0 *__thiscall OB_CIdvCamera_scalar_deleting_dtor_010201A0(
        OB_CIdvCamera_010201A0 *this,
        unsigned int flags)
{
  this->vftable = &CIdvCamera::`vftable'; /*0x78ed58*/
  if ( (flags & 1) != 0 ) /*0x78ed5e*/
    FormHeapFree((unsigned int)this); /*0x78ed61*/
  return this; /*0x78ed6b*/
}
