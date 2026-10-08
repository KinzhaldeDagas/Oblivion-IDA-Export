_DWORD **__thiscall sub_8BC310(_DWORD *this, char a2)
{
  int v3; // eax
  int v4; // ecx

  v3 = *(this + 2); /*0x8bc313*/
  if ( v3 >= 0 ) /*0x8bc318*/
  {
    v4 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8bc32a*/
    if ( !v4 ) /*0x8bc332*/
      v4 = unk_BA7D9C; /*0x8bc334*/
    sub_8A75D0(v4, (_DWORD *)*this, v3 & 0x3FFFFFFF, 0x14); /*0x8bc345*/
  }
  if ( (a2 & 1) != 0 ) /*0x8bc34f*/
    (*(void (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)unk_BA7D98 + 0x14))(unk_BA7D98, this, 0xC, 0x14); /*0x8bc35e*/
  return (_DWORD **)this; /*0x8bc363*/
}
