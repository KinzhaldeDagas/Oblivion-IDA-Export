int __thiscall BaseExtraList_Copy(ExtraDataList *this, ExtraDataList *a2)
{
  BSExtraData *i; // esi

  ExtraDataList_RemoveAllCopyableExtraData(this, 1); /*0x428925*/
  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&MEMORY[0xB33800], (int)&aExtradatalis_2); /*0x428934*/
  if ( a2 ) /*0x42893f*/
  {
    for ( i = a2->members.m_data; i; i = i->members.next ) /*0x428947*/
      ExtraDataList_CopyBSExtraData(this, i); /*0x428953*/
  }
  return NiLeaveCriticalSection_0(&MEMORY[0xB33800]); /*0x42896a*/
}
