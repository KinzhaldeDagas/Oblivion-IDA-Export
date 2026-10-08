int __thiscall sub_8A7130(void *this, int a2, int a3)
{
  int v3; // eax

  v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8a713f*/
  if ( !v3 ) /*0x8a7147*/
    v3 = unk_BA7D9C; /*0x8a7149*/
  return (*(int (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)this + 0x10))( /*0x8a7166*/
           this,
           *(_DWORD *)(v3 + 4 * a2 + 0xBC),
           a3);
}
