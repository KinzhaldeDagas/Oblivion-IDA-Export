_RTL_CRITICAL_SECTION_0 *__thiscall Archive::`scalar deleting destructor'(_RTL_CRITICAL_SECTION_0 *this, char a2)
{
  Archive::~Archive(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
