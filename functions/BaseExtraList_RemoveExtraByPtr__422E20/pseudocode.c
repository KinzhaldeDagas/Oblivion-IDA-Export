void __thiscall BaseExtraList_RemoveExtraByPtr(ExtraDataList *this, int a2, char a3)
{
  unsigned int v4; // ebx
  BSExtraData *PrevExtraData; // eax
  unsigned int v6; // eax
  int v7; // eax

  if ( a2 ) /*0x422e2a*/
  {
    NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&MEMORY[0xB33800], (int)&aBaseextralistR); /*0x422e3b*/
    v4 = *(unsigned __int8 *)(a2 + 4); /*0x422e40*/
    PrevExtraData = BaseExtraList_GetPrevExtraData(this, *(_BYTE *)(a2 + 4)); /*0x422e47*/
    if ( PrevExtraData ) /*0x422e4e*/
      PrevExtraData->members.next = *(BSExtraData **)(a2 + 8); /*0x422e53*/
    else
      this->members.m_data = *(BSExtraData **)(a2 + 8); /*0x422e5b*/
    if ( a3 ) /*0x422e63*/
      (**(void (__thiscall ***)(int, int))a2)(a2, 1); /*0x422e6d*/
    else
      *(_DWORD *)(a2 + 8) = 0; /*0x422e71*/
    v6 = (unsigned __int8)v4 >> 3; /*0x422e7d*/
    if ( v6 < 0xC ) /*0x422e83*/
      this->members.m_presenceBitfield[v6] &= ~(1 << (v4 & 7)); /*0x422e98*/
    v7 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x422ea8*/
    if ( this == *(ExtraDataList **)(v7 + 8) && v4 <= 0x5C ) /*0x422eb6*/
      *(_DWORD *)(v7 + 4 * v4 + 0x10) = 0; /*0x422eb8*/
    NiLeaveCriticalSection_0(&MEMORY[0xB33800]); /*0x422ec8*/
  }
}
