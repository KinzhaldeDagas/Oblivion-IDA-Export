int *__thiscall sub_8F66B0(int *this, char a2)
{
  int v3; // eax
  int v4; // ecx

  *this = (int)&off_A9B510; /*0x8f66b3*/
  v3 = *(this + 0xE); /*0x8f66b9*/
  if ( v3 >= 0 ) /*0x8f66be*/
  {
    v4 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8f66d0*/
    if ( !v4 ) /*0x8f66d8*/
      v4 = unk_BA7D9C; /*0x8f66da*/
    sub_8A75D0(v4, (_DWORD *)*(this + 0xC), 4 * v3, 0x14); /*0x8f66ef*/
  }
  *this = (int)&hkBaseObject::`vftable'; /*0x8f66f9*/
  if ( (a2 & 1) != 0 ) /*0x8f66ff*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8f6711*/
      this,
      *((unsigned __int16 *)this + 2),
      0x1C);
  return this; /*0x8f6716*/
}
