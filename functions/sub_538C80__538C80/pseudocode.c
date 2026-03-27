int __thiscall sub_538C80(_DWORD *this)
{
  int result; // eax
  int v3; // ecx

  *this = &hkAllRayHitCollector::`vftable';
  result = *(this + 6);
  if ( result >= 0 )
  {
    v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v3 )
      v3 = dword_BA7D9C;
    result = sub_8A75D0(v3, (_DWORD *)*(this + 4), 0x30 * (result & 0x3FFFFFFF), 0x14);
  }
  *this = &hkRayHitCollector::`vftable';
  return result;
}
