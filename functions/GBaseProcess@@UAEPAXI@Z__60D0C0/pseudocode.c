#239 *__thiscall BaseProcess::`scalar deleting destructor'(#239 *this, char a2)
{
  *(_DWORD *)this = &BaseProcess::`vftable'; /*0x60d0c8*/
  if ( (a2 & 1) != 0 ) /*0x60d0ce*/
    FormHeapFree((unsigned int)this); /*0x60d0d1*/
  return this; /*0x60d0db*/
}
