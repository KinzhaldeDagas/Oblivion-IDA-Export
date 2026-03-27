_DWORD *__thiscall sub_8A7650(_DWORD *this, int a2)
{
  int v2; // edi
  int v4; // ecx
  _DWORD *v5; // ecx

  v2 = a2 + 0x400;
  if ( a2 + 0x400 <= 0x1000 )
    v2 = 0x1000;
  v4 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
  if ( !v4 )
    v4 = dword_BA7D9C;
  v5 = sub_8A7560(v4, v2 + 0x10, 0x14);
  *v5 = *(this + 8);
  v5[1] = *(this + 9);
  v5[2] = *(this + 0xA);
  v5[3] = *(this + 0xB);
  *(this + 8) = (char *)v5 + a2 + 0x10;
  *(this + 0xA) = v5 + 4;
  *(this + 0xB) = (char *)v5 + v2 + 0x10;
  *(this + 9) = v5;
  return v5 + 4;
}
