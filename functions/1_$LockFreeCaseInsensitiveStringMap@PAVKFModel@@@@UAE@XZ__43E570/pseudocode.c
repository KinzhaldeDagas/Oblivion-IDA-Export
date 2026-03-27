void __thiscall LockFreeCaseInsensitiveStringMap<KFModel *>::~LockFreeCaseInsensitiveStringMap<KFModel *>(
        LockFreeMap *this)
{
  this->vtbl = &LockFreeStringMap<KFModel *>::`vftable';
  sub_55F3C0(this, 1);
  this->vtbl = &LockFreeMap<char const *,KFModel *>::`vftable';
  sub_55F3C0(this, 1);
  FormHeapFree((unsigned int)this->members.buckets);
  FormHeapFree((unsigned int)this->members.unk04);
}
