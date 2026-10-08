_RTL_CRITICAL_SECTION_0 *__thiscall Archive::`scalar deleting destructor'(_RTL_CRITICAL_SECTION_0 *this, char a2)
{
  Archive::~Archive(this); /*0x42e003*/
  if ( (a2 & 1) != 0 ) /*0x42e00d*/
    FormHeapFree((unsigned int)this); /*0x42e010*/
  return this; /*0x42e01a*/
}
