_RTL_CRITICAL_SECTION_0 *__thiscall NiImageConverter::`scalar deleting destructor'(
        _RTL_CRITICAL_SECTION_0 *this,
        char a2)
{
  NiImageConverter::~NiImageConverter(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
