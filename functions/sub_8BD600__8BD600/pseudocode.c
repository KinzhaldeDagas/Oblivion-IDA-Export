int *__thiscall sub_8BD600(int *this, char a2)
{
  int v3; // eax
  int v4; // ecx

  v3 = *(this + 5);
  if ( v3 >= 0 )
  {
    v4 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v4 )
      v4 = dword_BA7D9C;
    sub_8A75D0(v4, (_DWORD *)*(this + 3), 8 * v3, 0x14);
  }
  if ( (a2 & 1) != 0 )
  {
    if ( this )
      MemoryHeap_Free_checked((char *)this - *((unsigned __int8 *)this + 0xFFFFFFFF));
  }
  return this;
}
