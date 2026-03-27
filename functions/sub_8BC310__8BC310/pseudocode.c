_DWORD **__thiscall sub_8BC310(_DWORD *this, char a2)
{
  int v3; // eax
  int v4; // ecx

  v3 = *(this + 2);
  if ( v3 >= 0 )
  {
    v4 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v4 )
      v4 = dword_BA7D9C;
    sub_8A75D0(v4, (_DWORD *)*this, v3 & 0x3FFFFFFF, 0x14);
  }
  if ( (a2 & 1) != 0 )
    (*(void (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(dword_BA7D98, this, 0xC, 0x14);
  return (_DWORD **)this;
}
