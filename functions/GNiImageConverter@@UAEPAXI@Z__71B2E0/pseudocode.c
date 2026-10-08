_RTL_CRITICAL_SECTION_0 *__thiscall NiImageConverter::`scalar deleting destructor'(
        _RTL_CRITICAL_SECTION_0 *this,
        char a2)
{
  NiImageConverter::~NiImageConverter(this); /*0x71b2e3*/
  if ( (a2 & 1) != 0 ) /*0x71b2ed*/
    FormHeapFree((unsigned int)this); /*0x71b2f0*/
  return this; /*0x71b2fa*/
}
