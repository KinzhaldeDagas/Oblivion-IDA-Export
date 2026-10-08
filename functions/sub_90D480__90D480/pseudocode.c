int __thiscall sub_90D480(_DWORD *this)
{
  int result; // eax

  sub_8B0E60(this + 9); /*0x90d486*/
  result = *(this + 4); /*0x90d48b*/
  if ( result >= 0 ) /*0x90d490*/
    result = sub_8A75D0( /*0x90d4b4*/
               *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
               (_DWORD *)*(this + 2),
               result & 0x3FFFFFFF,
               0x14);
  *this = &hkBaseObject::`vftable'; /*0x90d4b9*/
  return result; /*0x90d4bf*/
}
