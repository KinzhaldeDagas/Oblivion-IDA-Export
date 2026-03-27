void __thiscall LockFreeCaseInsensitiveStringMap<Model *>::~LockFreeCaseInsensitiveStringMap<Model *>(
        LockFreeMap *this)
{
  this->vtbl = &LockFreeStringMap<Model *>::`vftable';
  sub_55F3C0(this, 1);
  this->vtbl = &LockFreeMap<char const *,Model *>::`vftable';
  sub_55F3C0(this, 1);
  FormHeapFree((unsigned int)this->members.buckets);
  FormHeapFree((unsigned int)this->members.unk04);
}
