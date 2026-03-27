ExtraContainerChanges *__thiscall ExtraContainerChanges::`scalar deleting destructor'(
        ExtraContainerChanges *this,
        char a2)
{
  ExtraContainerChanges::~ExtraContainerChanges(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
