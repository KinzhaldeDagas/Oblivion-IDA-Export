_RTL_CRITICAL_SECTION_0 *__thiscall sub_733880(_RTL_CRITICAL_SECTION_0 *this, char a2)
{
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG_0)&NiImageReader::`vftable'; /*0x73388a*/
  DeleteCriticalSection(this + 4); /*0x733890*/
  if ( (a2 & 1) != 0 ) /*0x73389b*/
    FormHeapFree((unsigned int)this); /*0x73389e*/
  return this; /*0x7338a8*/
}
