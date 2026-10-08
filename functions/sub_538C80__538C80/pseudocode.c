int __thiscall sub_538C80(_DWORD *this)
{
  int result; // eax
  int v3; // ecx

  *this = &hkAllRayHitCollector::`vftable'; /*0x538ca8*/
  result = *(this + 6); /*0x538cae*/
  if ( result >= 0 ) /*0x538cbb*/
  {
    v3 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x538ccd*/
    if ( !v3 ) /*0x538cd5*/
      v3 = unk_BA7D9C; /*0x538cd7*/
    result = sub_8A75D0(v3, (_DWORD *)*(this + 4), 0x30 * (result & 0x3FFFFFFF), 0x14); /*0x538cef*/
  }
  *this = &hkRayHitCollector::`vftable'; /*0x538cf4*/
  return result; /*0x538cfa*/
}
