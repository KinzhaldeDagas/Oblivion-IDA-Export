void __thiscall bhkPhantom::~bhkPhantom(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkPhantom::`vftable'; /*0x8aec58*/
  sub_89D700(this); /*0x8aec66*/
  --unk_BA7F5C; /*0x8aec6b*/
  bhkWorldObject::~bhkWorldObject(this); /*0x8aec7c*/
}
