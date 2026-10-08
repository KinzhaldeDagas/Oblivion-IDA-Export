Clouds *__thiscall Clouds::`scalar deleting destructor'(Clouds *this, char a2)
{
  Clouds::~Clouds(this); /*0x53c013*/
  if ( (a2 & 1) != 0 ) /*0x53c01d*/
    FormHeapFree((unsigned int)this); /*0x53c020*/
  return this; /*0x53c02a*/
}
