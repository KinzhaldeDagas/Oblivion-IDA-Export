int __thiscall sub_8ED000(int *this)
{
  int v2; // eax
  int v3; // ecx

  *this = (int)&off_A9AFFC;
  v2 = *(this + 0x4A);
  if ( v2 >= 0 )
  {
    v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v3 )
      v3 = dword_BA7D9C;
    sub_8A75D0(v3, (_DWORD *)*(this + 0x48), 4 * v2, 0x14);
  }
  return sub_8DE8B0(this);
}
