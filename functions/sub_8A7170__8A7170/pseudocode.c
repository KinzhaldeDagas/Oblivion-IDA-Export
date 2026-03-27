int __thiscall sub_8A7170(void *this, int a2, int a3, int a4)
{
  int v4; // eax

  v4 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
  if ( !v4 )
    v4 = dword_BA7D9C;
  return (*(int (__thiscall **)(void *, int, _DWORD, int))(*(_DWORD *)this + 0x14))(
           this,
           a2,
           *(_DWORD *)(v4 + 4 * a3 + 0xBC),
           a4);
}
