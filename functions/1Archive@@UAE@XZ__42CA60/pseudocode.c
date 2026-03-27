void __thiscall Archive::~Archive(_RTL_CRITICAL_SECTION_0 *this)
{
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG_0)&Archive::`vftable'{for `Archive'};
  sub_42C080((int)this);
  Archive_DiscardRetainedFilenames((int)this, 0);
  sub_42C160((int)this);
  NiDeleteCriticalSection(this + 0x10);
  BSFile::~BSFile((BSFile *)this);
}
