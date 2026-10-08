unsigned int *__thiscall sub_77C220(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 2); /*0x77c226*/
  *this = (unsigned int)&NiD3DGlobalConstantEntry::`vftable'; /*0x77c227*/
  FormHeapFree(v4); /*0x77c22d*/
  FormHeapFree(*(this + 6)); /*0x77c236*/
  *this = (unsigned int)&NiRefObject::`vftable'; /*0x77c243*/
  InterlockedDecrement(&MEMORY[0xB3FD64]); /*0x77c249*/
  if ( (a2 & 1) != 0 ) /*0x77c254*/
    FormHeapFree((unsigned int)this); /*0x77c257*/
  return this; /*0x77c261*/
}
