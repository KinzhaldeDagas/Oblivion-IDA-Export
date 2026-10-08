void __thiscall bhkMultiSphereShape::~bhkMultiSphereShape(bhkShape *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkMultiSphereShape::`vftable'; /*0x8b7428*/
  sub_89D700(this); /*0x8b7436*/
  --unk_BA7FE8; /*0x8b743b*/
  bhkSphereRepShape::~bhkSphereRepShape(this); /*0x8b744c*/
}
