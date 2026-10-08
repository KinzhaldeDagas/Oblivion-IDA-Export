void __thiscall bhkTriSampledHeightFieldBvTreeShape::~bhkTriSampledHeightFieldBvTreeShape(bhkShape *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkTriSampledHeightFieldBvTreeShape::`vftable'; /*0x8b0588*/
  sub_89D700(this); /*0x8b0596*/
  --unk_BA7FA4; /*0x8b059b*/
  bhkBvTreeShape::~bhkBvTreeShape(this); /*0x8b05ac*/
}
