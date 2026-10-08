SkyObject *__thiscall Stars::`scalar deleting destructor'(SkyObject *this, char a2)
{
  Stars::~Stars(this); /*0x544403*/
  if ( (a2 & 1) != 0 ) /*0x54440d*/
    FormHeapFree((unsigned int)this); /*0x544410*/
  return this; /*0x54441a*/
}
