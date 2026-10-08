// Oblivion CBillboardLeaf scalar deleting destructor. The 0x4C-byte leaf has no derived-owned allocation, so this wrapper invokes the shared CIdvCamera base destructor and frees through FormHeap only when flags bit 0 is set.
OB_CBillboardLeaf_010201A0 *__thiscall OB_CBillboardLeaf_scalar_deleting_dtor_010201A0(
        OB_CBillboardLeaf_010201A0 *this,
        unsigned int flags)
{
  OB_CIdvCamera_dtor_010201A0((OB_CIdvCamera_010201A0 *)this); /*0x7a8073*/
  if ( (flags & 1) != 0 ) /*0x7a807d*/
    FormHeapFree((unsigned int)this); /*0x7a8080*/
  return this; /*0x7a808a*/
}
