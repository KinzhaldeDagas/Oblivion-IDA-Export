int __thiscall sub_947B60(_RTL_CRITICAL_SECTION_0 **this)
{
  _RTL_CRITICAL_SECTION_0 *v2; // edi
  int v3; // edi
  int v4; // ebx
  int v5; // ecx
  int v6; // eax
  _DWORD *v7; // ecx
  int result; // eax
  int v9; // ecx

  v2 = *(this + 6); /*0x947b64*/
  *this = (_RTL_CRITICAL_SECTION_0 *)&off_AA2A0C; /*0x947b69*/
  if ( v2 ) /*0x947b6f*/
  {
    DeleteCriticalSection(v2); /*0x947b72*/
    (*(void (__thiscall **)(int, _RTL_CRITICAL_SECTION_0 *, int, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x947b85*/
      unk_BA7D98,
      v2,
      0x18,
      0x12);
  }
  if ( (int)*(this + 4) > 0 ) /*0x947b8d*/
  {
    v3 = 0; /*0x947b90*/
    v4 = (int)*(this + 4); /*0x947b92*/
    do /*0x947baf*/
    {
      v5 = *(int *)((char *)&(*(this + 3))->DebugInfo + v3); /*0x947b97*/
      v6 = *(_DWORD *)(v5 - 4); /*0x947b9a*/
      v7 = (_DWORD *)(v5 - 0xC); /*0x947b9d*/
      v7[2] = --v6; /*0x947ba1*/
      if ( v6 < 0 ) /*0x947ba4*/
        sub_8B1930(v7); /*0x947ba6*/
      v3 += 0xC; /*0x947bab*/
      --v4; /*0x947bae*/
    }
    while ( v4 ); /*0x947baf*/
  }
  result = (int)*(this + 5); /*0x947bb2*/
  if ( result >= 0 ) /*0x947bb7*/
  {
    v9 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x947bc9*/
    if ( !v9 ) /*0x947bd1*/
      v9 = unk_BA7D9C; /*0x947bd3*/
    result = sub_8A75D0(v9, *(this + 3), 0xC * (result & 0x3FFFFFFF), 0x14); /*0x947beb*/
  }
  *this = (_RTL_CRITICAL_SECTION_0 *)&hkBaseObject::`vftable'; /*0x947bf1*/
  return result; /*0x947bf0*/
}
