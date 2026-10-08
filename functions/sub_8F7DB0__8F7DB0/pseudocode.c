int *__thiscall sub_8F7DB0(int *this, char a2)
{
  int v3; // eax
  int v4; // ecx

  v3 = *(this + 5); /*0x8f7db3*/
  if ( v3 >= 0 ) /*0x8f7db8*/
  {
    v4 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8f7dca*/
    if ( !v4 ) /*0x8f7dd2*/
      v4 = unk_BA7D9C; /*0x8f7dd4*/
    sub_8A75D0(v4, (_DWORD *)*(this + 3), 2 * (v3 & 0x3FFFFFFF), 0x14); /*0x8f7de8*/
  }
  *this = (int)&hkBaseObject::`vftable'; /*0x8f7df2*/
  if ( (a2 & 1) != 0 ) /*0x8f7df8*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8f7e0a*/
      this,
      *((unsigned __int16 *)this + 2),
      0x1C);
  return this; /*0x8f7e0f*/
}
