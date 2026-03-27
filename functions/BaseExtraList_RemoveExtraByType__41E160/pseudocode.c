int __thiscall BaseExtraList_RemoveExtraByType(_DWORD *this, unsigned __int8 a2)
{
  int v3; // ecx
  int v4; // eax
  unsigned int v5; // eax
  int v6; // eax

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&BSExtraDataCS, (int)&aBaseextralistR);
  v3 = *(this + 1);
  v4 = 0;
  if ( v3 )
  {
    while ( *(_BYTE *)(v3 + 4) != a2 )
    {
      v4 = v3;
      v3 = *(_DWORD *)(v3 + 8);
      if ( !v3 )
        goto LABEL_9;
    }
    if ( v4 )
      *(_DWORD *)(v4 + 8) = *(_DWORD *)(v3 + 8);
    else
      *(this + 1) = *(_DWORD *)(v3 + 8);
    (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
LABEL_9:
  v5 = a2 >> 3;
  if ( v5 < 0xC )
    *((_BYTE *)this + v5 + 8) &= ~(1 << (a2 & 7));
  v6 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( this == *(_DWORD **)(v6 + 8) && a2 <= 0x5Cu )
    *(_DWORD *)(v6 + 4 * a2 + 0x10) = 0;
  return NiLeaveCriticalSection_0(&BSExtraDataCS);
}
