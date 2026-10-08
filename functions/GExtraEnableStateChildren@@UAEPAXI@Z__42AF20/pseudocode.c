ExtraEnableStateChildren *__thiscall ExtraEnableStateChildren::`scalar deleting destructor'(
        ExtraEnableStateChildren *this,
        char a2)
{
  ExtraEnableStateChildren::~ExtraEnableStateChildren(this); /*0x42af23*/
  if ( (a2 & 1) != 0 ) /*0x42af2d*/
    FormHeapFree((unsigned int)this); /*0x42af30*/
  return this; /*0x42af3a*/
}
