void __thiscall bhkMoppBvTreeShape::~bhkMoppBvTreeShape(bhkShape *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkMoppBvTreeShape::`vftable'; /*0x8c3378*/
  sub_89D700(this); /*0x8c3386*/
  --unk_BA80F4; /*0x8c338b*/
  bhkBvTreeShape::~bhkBvTreeShape(this); /*0x8c339c*/
}
