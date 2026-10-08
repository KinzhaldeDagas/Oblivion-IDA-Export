void __thiscall bhkBvTreeShape::~bhkBvTreeShape(bhkShape *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkBvTreeShape::`vftable'; /*0x8b0238*/
  sub_89D700(this); /*0x8b0246*/
  --unk_BA7F98; /*0x8b024b*/
  bhkShape::~bhkShape(this); /*0x8b025c*/
}
