// Verified default restore constructor for type ID 0: installs BSTempEffectDecal vtable and clears its decal object pointer.
BSTempEffectDecalLayout_t *__thiscall BSTempEffectDecal_DefaultInit(BSTempEffectDecalLayout_t *this)
{
  BSTempEffect_Constructor(&this->base, 0, 0.0); /*0x56bdeb*/
  this->base.vtable = &BSTempEffectDecal::`vftable'; /*0x56bdf0*/
  this->decalData_18 = 0; /*0x56bdf6*/
  return this; /*0x56bdff*/
}
