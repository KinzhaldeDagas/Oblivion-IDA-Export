// Oblivion CIdvCamera base destructor. Restores the CIdvCamera vftable; both CTreeEngine and CBillboardLeaf destructors call this shared base cleanup.
void __thiscall OB_CIdvCamera_dtor_010201A0(OB_CIdvCamera_010201A0 *this)
{
  this->vftable = &CIdvCamera::`vftable'; /*0x78ed10*/
}
