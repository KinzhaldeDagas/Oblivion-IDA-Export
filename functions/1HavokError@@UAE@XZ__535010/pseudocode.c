void __thiscall HavokError::~HavokError(HavokError *this)
{
  char *v2; // edi
  int v3; // eax
  int v4; // ecx

  *(_DWORD *)this = &HavokError::`vftable';
  v2 = (char *)this + 8;
  sub_534D30((_DWORD *)this + 2);
  sub_8B0E60((_DWORD *)this + 5);
  v3 = *((_DWORD *)v2 + 2);
  if ( v3 >= 0 )
  {
    v4 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v4 )
      v4 = dword_BA7D9C;
    sub_8A75D0(v4, *(_DWORD **)v2, 8 * v3, 0x14);
  }
  *(_DWORD *)this = &hkBaseObject::`vftable';
}
