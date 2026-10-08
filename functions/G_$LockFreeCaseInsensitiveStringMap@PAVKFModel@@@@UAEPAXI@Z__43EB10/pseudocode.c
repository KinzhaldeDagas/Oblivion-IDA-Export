LockFreeMap *__thiscall LockFreeCaseInsensitiveStringMap<KFModel *>::`scalar deleting destructor'(
        LockFreeMap *this,
        char a2)
{
  LockFreeCaseInsensitiveStringMap<KFModel *>::~LockFreeCaseInsensitiveStringMap<KFModel *>(this); /*0x43eb13*/
  if ( (a2 & 1) != 0 ) /*0x43eb1d*/
    FormHeapFree((unsigned int)this); /*0x43eb20*/
  return this; /*0x43eb2a*/
}
