LockFreeMap *__thiscall LockFreeCaseInsensitiveStringMap<Model *>::`scalar deleting destructor'(
        LockFreeMap *this,
        char a2)
{
  LockFreeCaseInsensitiveStringMap<Model *>::~LockFreeCaseInsensitiveStringMap<Model *>(this); /*0x43e603*/
  if ( (a2 & 1) != 0 ) /*0x43e60d*/
    FormHeapFree((unsigned int)this); /*0x43e610*/
  return this; /*0x43e61a*/
}
