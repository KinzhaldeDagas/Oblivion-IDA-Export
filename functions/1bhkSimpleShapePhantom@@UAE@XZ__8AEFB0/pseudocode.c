void __thiscall bhkSimpleShapePhantom::~bhkSimpleShapePhantom(bhkSerializable *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkSimpleShapePhantom::`vftable'; /*0x8aefd8*/
  sub_89D700(this); /*0x8aefe6*/
  --unk_BA7F74; /*0x8aefeb*/
  bhkShapePhantom::~bhkShapePhantom(this); /*0x8aeffc*/
}
