_RTL_CRITICAL_SECTION_0 *__thiscall NiTMap<void *,ObjectThreadLock::LOCK_DATA>::NiTMap<void *,ObjectThreadLock::LOCK_DATA>(
        _RTL_CRITICAL_SECTION_0 *this)
{
  int v2; // eax
  int v4; // [esp-8h] [ebp-20h]

  this->LockCount = 0x25;
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG_0)&NiTMapBase<DFALL<ObjectThreadLock::LOCK_DATA>,void *,ObjectThreadLock::LOCK_DATA>::`vftable';
  this->OwningThread = 0;
  v2 = FormHeapAlloc(0x94u);
  v4 = 4 * this->LockCount;
  this->RecursionCount = v2;
  _memset(v2, 0, v4);
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG_0)&NiTMap<void *,ObjectThreadLock::LOCK_DATA>::`vftable';
  NiInitalizeCriticalSection(this + 4);
  *((_DWORD *)this + 0x40) = 0xA;
  return this;
}
