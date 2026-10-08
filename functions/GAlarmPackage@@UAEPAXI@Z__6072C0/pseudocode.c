AlarmPackage *__thiscall AlarmPackage::`scalar deleting destructor'(AlarmPackage *this, char a2)
{
  AlarmPackage::~AlarmPackage(this); /*0x6072c3*/
  if ( (a2 & 1) != 0 ) /*0x6072cd*/
    FormHeapFree((unsigned int)this); /*0x6072d0*/
  return this; /*0x6072da*/
}
