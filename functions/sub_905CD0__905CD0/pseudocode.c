int *__thiscall sub_905CD0(int *this, char a2)
{
  int v3; // eax
  int v4; // ecx

  v3 = *(this + 5); /*0x905cd3*/
  if ( v3 >= 0 ) /*0x905cd8*/
  {
    v4 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x905cea*/
    if ( !v4 ) /*0x905cf2*/
      v4 = unk_BA7D9C; /*0x905cf4*/
    sub_8A75D0(v4, (_DWORD *)*(this + 3), 8 * v3, 0x14); /*0x905d09*/
  }
  *this = (int)&hkBaseObject::`vftable'; /*0x905d13*/
  if ( (a2 & 1) != 0 ) /*0x905d19*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x905d2b*/
      this,
      *((unsigned __int16 *)this + 2),
      0x1C);
  return this; /*0x905d30*/
}
