PathBuilder *__thiscall PathBuilder::`scalar deleting destructor'(PathBuilder *this, char a2)
{
  PathBuilder::~PathBuilder(this); /*0x683a13*/
  if ( (a2 & 1) != 0 ) /*0x683a1d*/
    FormHeapFree((unsigned int)this); /*0x683a20*/
  return this; /*0x683a2a*/
}
