void __thiscall BaseExtraList_RemoveExtraByPtr(ExtraDataList *this, int a2, char a3)
{
  unsigned int v4; // ebx
  BSExtraData *PrevExtraData; // eax
  unsigned int v6; // eax
  int v7; // eax

  if ( a2 )
  {
    NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&BSExtraDataCS, (int)&aBaseextralistR);
    v4 = *(unsigned __int8 *)(a2 + 4);
    PrevExtraData = BaseExtraList_GetPrevExtraData(this, *(_BYTE *)(a2 + 4));
    if ( PrevExtraData )
      PrevExtraData->members.next = *(BSExtraData **)(a2 + 8);
    else
      this->members.m_data = *(BSExtraData **)(a2 + 8);
    if ( a3 )
      (**(void (__thiscall ***)(int, int))a2)(a2, 1);
    else
      *(_DWORD *)(a2 + 8) = 0;
    v6 = (unsigned __int8)v4 >> 3;
    if ( v6 < 0xC )
      this->members.m_presenceBitfield[v6] &= ~(1 << (v4 & 7));
    v7 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
    if ( this == *(ExtraDataList **)(v7 + 8) && v4 <= 0x5C )
      *(_DWORD *)(v7 + 4 * v4 + 0x10) = 0;
    NiLeaveCriticalSection_0(&BSExtraDataCS);
  }
}
