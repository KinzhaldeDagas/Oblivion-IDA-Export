unsigned int *__thiscall sub_496E70(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<DFALL<ObjectThreadLock::LOCK_DATA>,void *,ObjectThreadLock::LOCK_DATA>::`vftable'; /*0x496e73*/
  NiTMap_Clear(this); /*0x496e79*/
  FormHeapFree(*(this + 2)); /*0x496e82*/
  if ( (a2 & 1) != 0 ) /*0x496e8f*/
    FormHeapFree((unsigned int)this); /*0x496e92*/
  return this; /*0x496e9c*/
}
