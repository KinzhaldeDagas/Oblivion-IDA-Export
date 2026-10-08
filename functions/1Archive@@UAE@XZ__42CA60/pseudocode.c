void __thiscall Archive::~Archive(_RTL_CRITICAL_SECTION_0 *this)
{
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG_0)&Archive::`vftable'{for `Archive'}; /*0x42ca88*/
  sub_42C080((int)this); /*0x42ca96*/
  Archive_DiscardRetainedFilenames((int)this, 0); /*0x42ca9f*/
  sub_42C160((int)this); /*0x42caa6*/
  NiDeleteCriticalSection(this + 0x10); /*0x42cab1*/
  BSFile::~BSFile((BSFile *)this); /*0x42cac0*/
}
