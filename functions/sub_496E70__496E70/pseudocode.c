unsigned int *__thiscall sub_496E70(unsigned int *this, char a2)
{
  *this = (unsigned int)&NiTMapBase<DFALL<ObjectThreadLock::LOCK_DATA>,void *,ObjectThreadLock::LOCK_DATA>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
