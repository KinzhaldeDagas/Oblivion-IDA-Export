void __thiscall NiTMap<void *,ObjectThreadLock::LOCK_DATA>::~NiTMap<void *,ObjectThreadLock::LOCK_DATA>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTMap<void *,ObjectThreadLock::LOCK_DATA>::`vftable'; /*0x497068*/
  NiTMap_Clear(this); /*0x497076*/
  *this = (unsigned int)&NiTMapBase<DFALL<ObjectThreadLock::LOCK_DATA>,void *,ObjectThreadLock::LOCK_DATA>::`vftable'; /*0x497085*/
  NiTMap_Clear(this); /*0x49708b*/
  FormHeapFree(*(this + 2)); /*0x497094*/
}
