_WORD *__thiscall sub_948D00(_WORD *this, signed int a2)
{
  int v3; // edx
  int v4; // eax

  v3 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  *(this + 3) = 1;
  *((_DWORD *)this + 2) = off_AA2B5C;
  *(_DWORD *)this = &off_AA2B8C;
  *((_DWORD *)this + 2) = &off_AA2B74;
  v4 = *(_DWORD *)(v3 + 0x19C);
  if ( !v4 )
    v4 = dword_BA7D9C;
  *((_DWORD *)this + 3) = sub_8A7560(v4, a2, 0x14);
  *((_DWORD *)this + 4) = a2;
  *((_DWORD *)this + 5) = a2;
  sub_8B0E10((char **)this + 6, a2);
  *((_DWORD *)this + 4) = 0;
  return this;
}
