volatile LONG **__thiscall LowProcess_GetCharProxy(HighProcess *this, volatile LONG **a2)
{
  volatile LONG *charProxy; // eax

  charProxy = (volatile LONG *)this->charProxy;
  *a2 = charProxy;
  if ( charProxy )
    InterlockedIncrement(charProxy + 1);
  return a2;
}
