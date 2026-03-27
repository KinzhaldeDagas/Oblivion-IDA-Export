void __thiscall bhkTriSampledHeightFieldBvTreeShape::~bhkTriSampledHeightFieldBvTreeShape(bhkShape *this)
{
  this->__vftable = (NiObjectVtbl *)&bhkTriSampledHeightFieldBvTreeShape::`vftable';
  sub_89D700(this);
  --dword_BA7FA4;
  bhkBvTreeShape::~bhkBvTreeShape(this);
}
