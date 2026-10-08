_RTL_CRITICAL_SECTION_0 *__thiscall NiNIFImageReader::`scalar deleting destructor'(
        _RTL_CRITICAL_SECTION_0 *this,
        char a2)
{
  NiNIFImageReader::~NiNIFImageReader(this); /*0x7339c3*/
  if ( (a2 & 1) != 0 ) /*0x7339cd*/
    FormHeapFree((unsigned int)this); /*0x7339d0*/
  return this; /*0x7339da*/
}
