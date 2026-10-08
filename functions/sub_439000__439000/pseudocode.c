_DWORD *__thiscall sub_439000(_DWORD *this, char a2)
{
  *this = &BSTask<__int64>::`vftable'; /*0x439008*/
  InterlockedDecrement(&MEMORY[0xB33A20]); /*0x43900e*/
  if ( (a2 & 1) != 0 ) /*0x439019*/
    FormHeapFree((unsigned int)this); /*0x43901c*/
  return this; /*0x439026*/
}
