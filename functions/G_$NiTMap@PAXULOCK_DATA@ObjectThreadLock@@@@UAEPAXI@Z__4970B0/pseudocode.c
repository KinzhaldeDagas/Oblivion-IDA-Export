unsigned int *__thiscall NiTMap<void *,ObjectThreadLock::LOCK_DATA>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTMap<void *,ObjectThreadLock::LOCK_DATA>::~NiTMap<void *,ObjectThreadLock::LOCK_DATA>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
