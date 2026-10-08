bhkMemory *__thiscall bhkMemory::`scalar deleting destructor'(bhkMemory *this, char a2)
{
  *(_DWORD *)this = &hkMemory::`vftable'; /*0x889458*/
  if ( (a2 & 1) != 0 ) /*0x88945e*/
    FormHeapFree((unsigned int)this); /*0x889461*/
  return this; /*0x88946b*/
}
