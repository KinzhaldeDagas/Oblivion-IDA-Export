ExtraContainerChanges *__thiscall ExtraContainerChanges::`scalar deleting destructor'(
        ExtraContainerChanges *this,
        char a2)
{
  ExtraContainerChanges::~ExtraContainerChanges(this); /*0x42ae13*/
  if ( (a2 & 1) != 0 ) /*0x42ae1d*/
    FormHeapFree((unsigned int)this); /*0x42ae20*/
  return this; /*0x42ae2a*/
}
