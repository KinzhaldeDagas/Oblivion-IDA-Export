void __thiscall NiImageConverter::~NiImageConverter(_RTL_CRITICAL_SECTION_0 *this)
{
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG_0)&NiImageConverter::`vftable';
  if ( dword_B3FD24 )
    FormHeapFree((unsigned int)dword_B3FD24);
  dword_B3FD24 = 0;
  NiNIFImageReader::~NiNIFImageReader(this + 4);
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG_0)&NiRefObject::`vftable';
  InterlockedDecrement(&NiRefObject_objcount);
}
