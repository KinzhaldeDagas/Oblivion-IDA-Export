void __thiscall NiNIFImageReader::~NiNIFImageReader(_RTL_CRITICAL_SECTION_0 *this)
{
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG_0)&NiNIFImageReader::`vftable';
  NiStream::~NiStream((NiStream *)(this + 8));
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG_0)&NiImageReader::`vftable';
  DeleteCriticalSection(this + 4);
}
