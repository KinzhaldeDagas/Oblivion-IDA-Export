void __thiscall LockFreeCaseInsensitiveStringMap<Model *>::~LockFreeCaseInsensitiveStringMap<Model *>(
        LockFreeMap *this)
{
  this->vtbl = &LockFreeStringMap<Model *>::`vftable'; /*0x43e508*/
  sub_55F3C0(this, 1); /*0x43e518*/
  this->vtbl = &LockFreeMap<char const *,Model *>::`vftable'; /*0x43e529*/
  sub_55F3C0(this, 1); /*0x43e52f*/
  FormHeapFree((unsigned int)this->members.buckets); /*0x43e538*/
  FormHeapFree((unsigned int)this->members.unk04); /*0x43e549*/
}
