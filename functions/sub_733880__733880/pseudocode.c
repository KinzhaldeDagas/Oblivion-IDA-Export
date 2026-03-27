_RTL_CRITICAL_SECTION_0 *__thiscall sub_733880(_RTL_CRITICAL_SECTION_0 *this, char a2)
{
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG_0)&NiImageReader::`vftable';
  DeleteCriticalSection(this + 4);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
