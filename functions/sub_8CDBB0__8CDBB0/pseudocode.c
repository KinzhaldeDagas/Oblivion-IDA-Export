unsigned int __thiscall sub_8CDBB0(int *this)
{
  int v2; // eax
  int v3; // ecx
  unsigned int v4; // eax

  if ( !*(this + 0x25) )
  {
    v2 = *(this + 0x26);
    if ( v2 >= 0 )
    {
      v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
      if ( !v3 )
        v3 = dword_BA7D9C;
      sub_8A75D0(v3, (_DWORD *)*(this + 0x24), 4 * v2, 0x14);
    }
    v4 = *(this + 0x26) & 0x40000000 | 0x80000000;
    *(this + 0x24) = 0;
    *(this + 0x25) = 0;
    *(this + 0x26) = v4;
  }
  return sub_8DE800(this);
}
