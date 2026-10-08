bhkShape *__thiscall sub_8C4450(bhkShape *this, char a2)
{
  this->__vftable = (NiObjectVtbl *)&bhkPlaneShape::`vftable'; /*0x8c4453*/
  --unk_BA810C; /*0x8c4459*/
  bhkHeightFieldShape::~bhkHeightFieldShape(this); /*0x8c4460*/
  if ( (a2 & 1) != 0 ) /*0x8c446a*/
    FormHeapFree((unsigned int)this); /*0x8c446d*/
  return this; /*0x8c4477*/
}
