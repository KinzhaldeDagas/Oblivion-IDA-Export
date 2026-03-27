LockFreeMap *__thiscall LockFreeCaseInsensitiveStringMap<KFModel *>::`scalar deleting destructor'(
        LockFreeMap *this,
        char a2)
{
  LockFreeCaseInsensitiveStringMap<KFModel *>::~LockFreeCaseInsensitiveStringMap<KFModel *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
