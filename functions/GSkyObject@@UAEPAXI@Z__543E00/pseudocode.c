SkyObject *__thiscall SkyObject::`scalar deleting destructor'(SkyObject *this, char a2)
{
  SkyObject::~SkyObject(this); /*0x543e03*/
  if ( (a2 & 1) != 0 ) /*0x543e0d*/
    FormHeapFree((unsigned int)this); /*0x543e10*/
  return this; /*0x543e1a*/
}
