ExtraSound *__thiscall ExtraSound::`scalar deleting destructor'(ExtraSound *this, char a2)
{
  ExtraSound::~ExtraSound(this); /*0x42b133*/
  if ( (a2 & 1) != 0 ) /*0x42b13d*/
    FormHeapFree((unsigned int)this); /*0x42b140*/
  return this; /*0x42b14a*/
}
