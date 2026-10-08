int __thiscall sub_8A7170(void *this, int a2, int a3, int a4)
{
  int v4; // eax

  v4 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8a717f*/
  if ( !v4 ) /*0x8a7187*/
    v4 = unk_BA7D9C; /*0x8a7189*/
  return (*(int (__thiscall **)(void *, int, _DWORD, int))(*(_DWORD *)this + 0x14))( /*0x8a71ab*/
           this,
           a2,
           *(_DWORD *)(v4 + 4 * a3 + 0xBC),
           a4);
}
