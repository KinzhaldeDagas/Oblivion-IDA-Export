_DWORD *__thiscall sub_9A8B70(_DWORD *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 3); /*0x9a8b76*/
  *this = &NiD3DShaderConstantMapEntry::`vftable'; /*0x9a8b77*/
  FormHeapFree(v4); /*0x9a8b7d*/
  FormHeapFree(*(this + 9)); /*0x9a8b86*/
  if ( *((_BYTE *)this + 0x34) ) /*0x9a8b8e*/
    FormHeapFree(*(this + 0xC)); /*0x9a8b98*/
  *this = &NiRefObject::`vftable'; /*0x9a8ba5*/
  InterlockedDecrement(&MEMORY[0xB3FD64]); /*0x9a8bab*/
  if ( (a2 & 1) != 0 ) /*0x9a8bb6*/
    FormHeapFree((unsigned int)this); /*0x9a8bb9*/
  return this; /*0x9a8bc3*/
}
