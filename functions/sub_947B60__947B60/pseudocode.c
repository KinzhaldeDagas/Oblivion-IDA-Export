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

  v2 = *(this + 6);
  *this = (_RTL_CRITICAL_SECTION_0 *)&off_AA2A0C;
  if ( v2 )
  {
    DeleteCriticalSection(v2);
    (*(void (__thiscall **)(int, _RTL_CRITICAL_SECTION_0 *, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      dword_BA7D98,
      v2,
      0x18,
      0x12);
  }
  if ( (int)*(this + 4) > 0 )
  {
    v3 = 0;
    v4 = (int)*(this + 4);
    do
    {
      v5 = *(int *)((char *)&(*(this + 3))->DebugInfo + v3);
      v6 = *(_DWORD *)(v5 - 4);
      v7 = (_DWORD *)(v5 - 0xC);
      v7[2] = --v6;
      if ( v6 < 0 )
        sub_8B1930(v7);
      v3 += 0xC;
      --v4;
    }
    while ( v4 );
  }
  result = (int)*(this + 5);
  if ( result >= 0 )
  {
    v9 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v9 )
      v9 = dword_BA7D9C;
    result = sub_8A75D0(v9, *(this + 3), 0xC * (result & 0x3FFFFFFF), 0x14);
  }
  *this = (_RTL_CRITICAL_SECTION_0 *)&hkBaseObject::`vftable';
  return result;
}
