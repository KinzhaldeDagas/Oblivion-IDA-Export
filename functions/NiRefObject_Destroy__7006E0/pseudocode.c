_DWORD *__thiscall NiRefObject_Destroy(_DWORD *this, char a2)
{
  *this = &NiRefObject::`vftable'; /*0x7006e8*/
  InterlockedDecrement(&MEMORY[0xB3FD64]); /*0x7006ee*/
  if ( (a2 & 1) != 0 ) /*0x7006f9*/
    FormHeapFree((unsigned int)this); /*0x7006fc*/
  return this; /*0x700706*/
}
