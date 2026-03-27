int *__thiscall sub_903AE0(int *this, char a2)
{
  int v3; // eax
  int v4; // ecx

  v3 = *(this + 5);
  if ( v3 >= 0 )
  {
    v4 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v4 )
      v4 = dword_BA7D9C;
    sub_8A75D0(v4, (_DWORD *)*(this + 3), 4 * v3, 0x14);
  }
  *this = (int)&hkBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x1C);
  return this;
}
