int sub_8BB020()
{
  int v0; // ecx

  sub_8BAA10();
  v0 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
  if ( !v0 )
    v0 = dword_BA7D9C;
  (*(void (__thiscall **)(int))(*(_DWORD *)v0 + 4))(v0);
  sub_8A7260(0);
  return 0;
}
