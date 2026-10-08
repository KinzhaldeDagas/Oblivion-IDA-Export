void __thiscall LockFreeCaseInsensitiveStringMap<KFModel *>::~LockFreeCaseInsensitiveStringMap<KFModel *>(
        LockFreeMap *this)
{
  this->vtbl = &LockFreeStringMap<KFModel *>::`vftable'; /*0x43e598*/
  sub_55F3C0(this, 1); /*0x43e5a8*/
  this->vtbl = &LockFreeMap<char const *,KFModel *>::`vftable'; /*0x43e5b9*/
  sub_55F3C0(this, 1); /*0x43e5bf*/
  FormHeapFree((unsigned int)this->members.buckets); /*0x43e5c8*/
  FormHeapFree((unsigned int)this->members.unk04); /*0x43e5d9*/
}
