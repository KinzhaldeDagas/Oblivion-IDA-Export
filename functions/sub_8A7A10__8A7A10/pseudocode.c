int __thiscall sub_8A7A10(_RTL_CRITICAL_SECTION_0 **this)
{
  _RTL_CRITICAL_SECTION_0 *v2; // edi
  int result; // eax
  int v4; // ecx

  v2 = *(this + 5); /*0x8a7a14*/
  *this = (_RTL_CRITICAL_SECTION_0 *)&off_A975F0; /*0x8a7a19*/
  if ( v2 ) /*0x8a7a1f*/
  {
    DeleteCriticalSection(v2); /*0x8a7a22*/
    (*(void (__thiscall **)(int, _RTL_CRITICAL_SECTION_0 *, int, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8a7a35*/
      unk_BA7D98,
      v2,
      0x18,
      0x12);
  }
  result = (int)*(this + 4); /*0x8a7a38*/
  if ( result >= 0 ) /*0x8a7a3d*/
  {
    v4 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8a7a4f*/
    if ( !v4 ) /*0x8a7a57*/
      v4 = unk_BA7D9C; /*0x8a7a59*/
    result = sub_8A75D0(v4, *(this + 2), 4 * result, 0x14); /*0x8a7a6e*/
  }
  *this = (_RTL_CRITICAL_SECTION_0 *)&hkBaseObject::`vftable'; /*0x8a7a74*/
  return result; /*0x8a7a73*/
}
