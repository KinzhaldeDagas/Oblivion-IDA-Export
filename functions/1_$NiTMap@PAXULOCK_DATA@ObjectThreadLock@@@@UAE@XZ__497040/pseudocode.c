void __thiscall NiTMap<void *,ObjectThreadLock::LOCK_DATA>::~NiTMap<void *,ObjectThreadLock::LOCK_DATA>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTMap<void *,ObjectThreadLock::LOCK_DATA>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<DFALL<ObjectThreadLock::LOCK_DATA>,void *,ObjectThreadLock::LOCK_DATA>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
