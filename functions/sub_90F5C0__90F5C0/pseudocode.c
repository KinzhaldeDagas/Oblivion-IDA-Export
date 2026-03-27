int __thiscall sub_90F5C0(int *this)
{
  int v2; // esi
  int v3; // ecx
  int v4; // eax
  int v5; // ecx

  v2 = *(this + 0x49) - 1;
  for ( *this = (int)&off_A9CAB8; v2 >= 0; --v2 )
  {
    v3 = *(_DWORD *)(*(this + 0x48) + 8 * v2);
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 0x18))(v3);
  }
  *(this + 0x49) = 0;
  v4 = *(this + 0x4A);
  if ( v4 >= 0 )
  {
    v5 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v5 )
      v5 = dword_BA7D9C;
    sub_8A75D0(v5, (_DWORD *)*(this + 0x48), 8 * v4, 0x14);
  }
  return sub_8DE8B0(this);
}
