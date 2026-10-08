void __thiscall bhkWorldObject::~bhkWorldObject(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkWorldObject::`vftable'; /*0x89f308*/
  sub_89D700(this); /*0x89f316*/
  --unk_BA7D34; /*0x89f31b*/
  bhkSerializable::~bhkSerializable(this); /*0x89f32c*/
}
