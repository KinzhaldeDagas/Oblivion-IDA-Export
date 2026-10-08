int *__thiscall sub_901620(int *this, char a2)
{
  int v3; // eax
  int v4; // ecx

  *this = (int)&off_A9BB10; /*0x901623*/
  v3 = *(this + 5); /*0x901629*/
  if ( v3 >= 0 ) /*0x90162e*/
  {
    v4 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x901640*/
    if ( !v4 ) /*0x901648*/
      v4 = unk_BA7D9C; /*0x90164a*/
    sub_8A75D0(v4, (_DWORD *)*(this + 3), 2 * (v3 & 0x3FFFFFFF), 0x14); /*0x90165e*/
  }
  *this = (int)&hkBaseObject::`vftable'; /*0x901668*/
  if ( (a2 & 1) != 0 ) /*0x90166e*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x901680*/
      this,
      *((unsigned __int16 *)this + 2),
      0x1C);
  return this; /*0x901685*/
}
