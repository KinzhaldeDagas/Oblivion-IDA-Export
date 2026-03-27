void __thiscall hkMoppCode::~hkMoppCode(hkMoppCode *this)
{
  int v2; // eax
  int v3; // ecx

  *(_DWORD *)this = &hkMoppCode::`vftable';
  v2 = *((_DWORD *)this + 0xA);
  if ( v2 >= 0 )
  {
    v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v3 )
      v3 = dword_BA7D9C;
    sub_8A75D0(v3, *((_DWORD **)this + 8), v2 & 0x3FFFFFFF, 0x14);
  }
  *(_DWORD *)this = &hkBaseObject::`vftable';
}
