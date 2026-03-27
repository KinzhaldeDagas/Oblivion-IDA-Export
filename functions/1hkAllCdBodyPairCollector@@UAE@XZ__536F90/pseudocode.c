void __thiscall hkAllCdBodyPairCollector::~hkAllCdBodyPairCollector(hkAllCdBodyPairCollector *this)
{
  int v2; // eax
  int v3; // ecx

  *(_DWORD *)this = &hkAllCdBodyPairCollector::`vftable';
  v2 = *((_DWORD *)this + 4);
  if ( v2 >= 0 )
  {
    v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v3 )
      v3 = dword_BA7D9C;
    sub_8A75D0(v3, *((_DWORD **)this + 2), 0x10 * v2, 0x14);
  }
  *(_DWORD *)this = &hkCdBodyPairCollector::`vftable';
}
