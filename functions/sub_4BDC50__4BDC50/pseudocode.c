void __thiscall DistantLODLoaderTaskMap_dtor(LockFreeMap *this)
{
  sub_4BD8C0(this); /*0x4bdc80*/
  this->vtbl = &LockFreeMap<unsigned int,NiPointer<DistantLODLoaderTask>>::`vftable'; /*0x4bdc91*/
  sub_642E50((unsigned int **)this, 1); /*0x4bdc97*/
  FormHeapFree((unsigned int)this->members.buckets); /*0x4bdca0*/
  FormHeapFree((unsigned int)this->members.unk04); /*0x4bdcb1*/
}
