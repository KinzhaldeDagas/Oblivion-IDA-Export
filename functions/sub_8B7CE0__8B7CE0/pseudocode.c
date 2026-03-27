void __thiscall sub_8B7CE0(unsigned int *this, char a2)
{
  unsigned int v3; // esi
  int v4; // eax
  int v5; // ecx

  if ( a2 )
  {
    v3 = *(this + 3);
    if ( v3 )
    {
      v4 = *(_DWORD *)(v3 + 0xC);
      if ( v4 >= 0 )
      {
        v5 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
        if ( !v5 )
          v5 = dword_BA7D9C;
        sub_8A75D0(v5, *(_DWORD **)(v3 + 4), 0x10 * v4, 0x14);
      }
      FormHeapFree(v3);
    }
    *(this + 3) = 0;
  }
}
