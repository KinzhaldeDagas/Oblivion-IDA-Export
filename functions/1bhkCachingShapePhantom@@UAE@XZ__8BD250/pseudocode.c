void __thiscall bhkCachingShapePhantom::~bhkCachingShapePhantom(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkCachingShapePhantom::`vftable'; /*0x8bd278*/
  sub_89D700(this); /*0x8bd286*/
  --unk_BA804C; /*0x8bd28b*/
  bhkShapePhantom::~bhkShapePhantom(this); /*0x8bd29c*/
}
