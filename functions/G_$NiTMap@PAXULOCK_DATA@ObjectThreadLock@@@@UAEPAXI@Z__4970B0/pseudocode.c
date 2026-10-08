unsigned int *__thiscall NiTMap<void *,ObjectThreadLock::LOCK_DATA>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTMap<void *,ObjectThreadLock::LOCK_DATA>::~NiTMap<void *,ObjectThreadLock::LOCK_DATA>(this); /*0x4970b3*/
  if ( (a2 & 1) != 0 ) /*0x4970bd*/
    FormHeapFree((unsigned int)this); /*0x4970c0*/
  return this; /*0x4970ca*/
}
