void __thiscall bhkShapePhantom::~bhkShapePhantom(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkShapePhantom::`vftable'; /*0x8aed78*/
  sub_89D700(this); /*0x8aed86*/
  --unk_BA7F68; /*0x8aed8b*/
  bhkPhantom::~bhkPhantom(this); /*0x8aed9c*/
}
