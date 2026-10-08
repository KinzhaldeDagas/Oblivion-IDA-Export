bhkShape *__thiscall bhkTriSampledHeightFieldBvTreeShape::`scalar deleting destructor'(bhkShape *this, char a2)
{
  bhkTriSampledHeightFieldBvTreeShape::~bhkTriSampledHeightFieldBvTreeShape(this); /*0x532d83*/
  if ( (a2 & 1) != 0 ) /*0x532d8d*/
    FormHeapFree((unsigned int)this); /*0x532d90*/
  return this; /*0x532d9a*/
}
