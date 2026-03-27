int __thiscall sub_8A7130(void *this, int a2, int a3)
{
  int v3; // eax

  v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
  if ( !v3 )
    v3 = dword_BA7D9C;
  return (*(int (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)this + 0x10))(
           this,
           *(_DWORD *)(v3 + 4 * a2 + 0xBC),
           a3);
}
