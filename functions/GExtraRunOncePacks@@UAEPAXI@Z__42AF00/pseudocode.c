ExtraRunOncePacks *__thiscall ExtraRunOncePacks::`scalar deleting destructor'(ExtraRunOncePacks *this, char a2)
{
  ExtraRunOncePacks::~ExtraRunOncePacks(this); /*0x42af03*/
  if ( (a2 & 1) != 0 ) /*0x42af0d*/
    FormHeapFree((unsigned int)this); /*0x42af10*/
  return this; /*0x42af1a*/
}
