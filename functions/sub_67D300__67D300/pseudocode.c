// Verified: TESPackage-derived TrespassPackage constructor via concrete vtable store and factory type11 allocation58 bytes. Initializes3C/40/44/48,4C=-1,50=1;54 is not initialized by this constructor.
TrespassPackage *__thiscall TrespassPackage_Constructor(TrespassPackage *self)
{
  TESPackage::TESPackage(&self->base); /*0x67d303*/
  self->unknown3C = 0.0; /*0x67d30c*/
  self->unknown40 = 0; /*0x67d30f*/
  self->form44 = 0; /*0x67d312*/
  self->form48 = 0; /*0x67d315*/
  self->base.__vftable = &TrespassPackage::`vftable'; /*0x67d318*/
  self->unknown4C = 0xFFFFFFFF; /*0x67d31e*/
  self->unknown50 = 1; /*0x67d325*/
  return self; /*0x67d32e*/
}
