// Verified default restore constructor for type ID 1: installs BSTempEffectGeometryDecal vtable and initializes its geometry/decal pointers and state.
BSTempEffectGeometryDecalLayout_t *__thiscall BSTempEffectGeometryDecal_DefaultInit(
        BSTempEffectGeometryDecalLayout_t *this)
{
  NiAVObject *generatedGeometry_1C; // edi

  BSTempEffect_Constructor(&this->base, 0, 0.0);// Verified default restore constructor installs BSTempEffectGeometryDecal vtable and zeros decal data/output/source refs, failure byte, and initializeCallbackDone through BSTempEffect base construction. /*0x56ce13*/
  this->base.vtable = &BSTempEffectGeometryDecal::`vftable'; /*0x56ce18*/
  this->generatedGeometry_1C = 0; /*0x56ce22*/
  this->sourceGeometry_2C = 0; /*0x56ce25*/
  this->sourceParentNode_30 = 0; /*0x56ce28*/
  this->creationFailed_28 = 0; /*0x56ce2b*/
  this->decalCreationData_18 = 0; /*0x56ce2e*/
  generatedGeometry_1C = this->generatedGeometry_1C; /*0x56ce31*/
  if ( generatedGeometry_1C ) /*0x56ce3b*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&generatedGeometry_1C->members) ) /*0x56ce41*/
      generatedGeometry_1C->vtbl->super.super.Destructor((NiRefObject *)generatedGeometry_1C, 1); /*0x56ce57*/
    this->generatedGeometry_1C = 0; /*0x56ce59*/
  }
  this->unknown24 = 0; /*0x56ce5c*/
  this->targetGeometry_20 = 0; /*0x56ce5f*/
  return this; /*0x56ce64*/
}
