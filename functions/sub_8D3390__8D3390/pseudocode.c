int __thiscall sub_8D3390(_DWORD *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = (void (__thiscall ***)(_DWORD, int))*(this + 8); /*0x8d3393*/
  *this = &off_A9A030; /*0x8d3398*/
  if ( v2 ) /*0x8d339e*/
    (**v2)(v2, 1); /*0x8d33a4*/
  result = *(this + 7); /*0x8d33a6*/
  if ( result >= 0 ) /*0x8d33ab*/
    result = sub_8A75D0( /*0x8d33d1*/
               *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
               (_DWORD *)*(this + 5),
               result << 6,
               0x14);
  *this = &hkBaseObject::`vftable'; /*0x8d33d6*/
  return result; /*0x8d33dc*/
}
