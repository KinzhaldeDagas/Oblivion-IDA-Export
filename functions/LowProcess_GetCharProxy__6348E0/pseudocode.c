volatile LONG **__thiscall LowProcess_GetCharProxy(HighProcess *this, volatile LONG **a2)
{
  volatile LONG *charProxy; // eax

  charProxy = (volatile LONG *)this->charProxy; /*0x6348e1*/
  *a2 = charProxy; /*0x6348f6*/
  if ( charProxy ) /*0x6348f8*/
    InterlockedIncrement(charProxy + 1); /*0x6348fe*/
  return a2; /*0x634906*/
}
