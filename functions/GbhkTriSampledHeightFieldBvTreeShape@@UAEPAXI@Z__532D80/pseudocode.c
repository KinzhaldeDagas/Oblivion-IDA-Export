bhkTriSampledHeightFieldBvTreeShape *__thiscall bhkTriSampledHeightFieldBvTreeShape::`scalar deleting destructor'(
        bhkTriSampledHeightFieldBvTreeShape *this,
        char a2)
{
  bhkTriSampledHeightFieldBvTreeShape::~bhkTriSampledHeightFieldBvTreeShape(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
