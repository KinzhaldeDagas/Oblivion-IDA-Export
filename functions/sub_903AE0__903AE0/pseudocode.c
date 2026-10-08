int *__thiscall sub_903AE0(int *this, char a2)
{
  int v3; // eax
  int v4; // ecx

  v3 = *(this + 5); /*0x903ae3*/
  if ( v3 >= 0 ) /*0x903ae8*/
  {
    v4 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x903afa*/
    if ( !v4 ) /*0x903b02*/
      v4 = unk_BA7D9C; /*0x903b04*/
    sub_8A75D0(v4, (_DWORD *)*(this + 3), 4 * v3, 0x14); /*0x903b19*/
  }
  *this = (int)&hkBaseObject::`vftable'; /*0x903b23*/
  if ( (a2 & 1) != 0 ) /*0x903b29*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x903b3b*/
      this,
      *((unsigned __int16 *)this + 2),
      0x1C);
  return this; /*0x903b40*/
}
