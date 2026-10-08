ExtraFollower *__thiscall ExtraFollower::`scalar deleting destructor'(ExtraFollower *this, char a2)
{
  ExtraFollower::~ExtraFollower(this); /*0x42adb3*/
  if ( (a2 & 1) != 0 ) /*0x42adbd*/
    FormHeapFree((unsigned int)this); /*0x42adc0*/
  return this; /*0x42adca*/
}
