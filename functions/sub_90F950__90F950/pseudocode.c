unsigned int __thiscall sub_90F950(int *this)
{
  int v2; // eax
  int v3; // ecx
  unsigned int v4; // eax

  if ( !*(this + 0x49) )
  {
    v2 = *(this + 0x4A);
    if ( v2 >= 0 )
    {
      v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
      if ( !v3 )
        v3 = dword_BA7D9C;
      sub_8A75D0(v3, (_DWORD *)*(this + 0x48), 8 * v2, 0x14);
    }
    v4 = *(this + 0x4A) & 0x40000000 | 0x80000000;
    *(this + 0x48) = 0;
    *(this + 0x49) = 0;
    *(this + 0x4A) = v4;
  }
  return sub_8ABA30(this);
}
