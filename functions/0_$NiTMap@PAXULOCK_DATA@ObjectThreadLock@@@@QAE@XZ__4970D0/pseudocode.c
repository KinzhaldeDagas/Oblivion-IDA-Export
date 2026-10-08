_RTL_CRITICAL_SECTION_0 *__thiscall NiTMap<void *,ObjectThreadLock::LOCK_DATA>::NiTMap<void *,ObjectThreadLock::LOCK_DATA>(
        _RTL_CRITICAL_SECTION_0 *this)
{
  LONG v2; // eax
  unsigned int v4; // [esp-8h] [ebp-20h]

  this->LockCount = 0x25; /*0x4970ff*/
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG_0)&NiTMapBase<DFALL<ObjectThreadLock::LOCK_DATA>,void *,ObjectThreadLock::LOCK_DATA>::`vftable'; /*0x49710c*/
  this->OwningThread = 0; /*0x497112*/
  v2 = FormHeapAlloc(0x94u); /*0x49711e*/
  v4 = 4 * this->LockCount; /*0x49712a*/
  this->RecursionCount = v2; /*0x49712e*/
  _memset(v2, 0, v4); /*0x497131*/
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG_0)&NiTMap<void *,ObjectThreadLock::LOCK_DATA>::`vftable'; /*0x497139*/
  NiInitalizeCriticalSection(this + 4); /*0x49714d*/
  *((_DWORD *)this + 0x40) = 0xA; /*0x497152*/
  return this; /*0x49715e*/
}
