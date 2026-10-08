void __thiscall NiNIFImageReader::~NiNIFImageReader(_RTL_CRITICAL_SECTION_0 *this)
{
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG_0)&NiNIFImageReader::`vftable'; /*0x7338d8*/
  NiStream::~NiStream((NiStream *)(this + 8)); /*0x7338ec*/
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG_0)&NiImageReader::`vftable'; /*0x7338f1*/
  DeleteCriticalSection(this + 4); /*0x7338fe*/
}
