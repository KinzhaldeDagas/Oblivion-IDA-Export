SkyObject *__thiscall Moon::`scalar deleting destructor'(SkyObject *this, char a2)
{
  Moon::~Moon(this); /*0x53d443*/
  if ( (a2 & 1) != 0 ) /*0x53d44d*/
    FormHeapFree((unsigned int)this); /*0x53d450*/
  return this; /*0x53d45a*/
}
