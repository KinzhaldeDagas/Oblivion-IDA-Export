BSExtraData *__thiscall BaseExtraList_GetExtraData(ExtraDataList *this, ExtraDataType a2)
{
  unsigned int v2; // eax
  ExtraDataList *v5; // ebx
  BSExtraData *v6; // edi
  BSExtraData *i; // esi

  v2 = a2 >> 3;
  if ( v2 >= 0xC || ((unsigned __int8)(1 << (a2 & 7)) & this->members.m_presenceBitfield[v2]) == 0 )
    return 0;
  v5 = *((ExtraDataList **)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v6 = 0;
  if ( this == *(ExtraDataList **)v5->members.m_presenceBitfield )
  {
    sub_41DEA0();
    if ( a2 <= kExtraData_HaggleAmount )
      v6 = *(BSExtraData **)&v5->members.m_presenceBitfield[4 * (unsigned __int8)a2 + 8];
  }
  if ( !v6 )
  {
    NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&BSExtraDataCS, (int)&aBaseextralistG);
    for ( i = this->members.m_data; i; i = i->members.next )
    {
      if ( v6 )
        break;
      if ( i->members.type == a2 )
      {
        sub_41DF90(this, i);
        v6 = i;
      }
    }
    NiLeaveCriticalSection_0(&BSExtraDataCS);
  }
  return v6;
}
