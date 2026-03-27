LockFreeMap *__thiscall LockFreeCaseInsensitiveStringMap<Model *>::`scalar deleting destructor'(
        LockFreeMap *this,
        char a2)
{
  LockFreeCaseInsensitiveStringMap<Model *>::~LockFreeCaseInsensitiveStringMap<Model *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
