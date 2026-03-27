ExtraEnableStateChildren *__thiscall ExtraEnableStateChildren::`scalar deleting destructor'(
        ExtraEnableStateChildren *this,
        char a2)
{
  ExtraEnableStateChildren::~ExtraEnableStateChildren(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
