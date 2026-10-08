void __thiscall bhkAabbPhantom::~bhkAabbPhantom(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkAabbPhantom::`vftable'; /*0x8ba608*/
  sub_89D700(this); /*0x8ba616*/
  --unk_BA802C; /*0x8ba61b*/
  bhkPhantom::~bhkPhantom(this); /*0x8ba62c*/
}
