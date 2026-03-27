int __thiscall BaseExtraList_Copy(ExtraDataList *this, ExtraDataList *a2)
{
  BSExtraData *i; // esi

  ExtraDataList_RemoveAllCopyableExtraData(this, 1);
  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&BSExtraDataCS, (int)&aExtradatalis_2);
  if ( a2 )
  {
    for ( i = a2->members.m_data; i; i = i->members.next )
      ExtraDataList_CopyBSExtraData(this, i);
  }
  return NiLeaveCriticalSection_0(&BSExtraDataCS);
}
