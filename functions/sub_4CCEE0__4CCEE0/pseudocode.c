BSExtraDataVtbl *__thiscall sub_4CCEE0(ExtraDataList *this, int a2, int a3, char a4)
{
  BSExtraDataVtbl *result; // eax
  BSExtraDataVtbl *SeenData; // eax
  BSExtraDataVtbl *v7; // esi
  _DWORD *v8; // eax
  BSExtraDataVtbl *v9; // esi

  result = 0; /*0x4ccf06*/
  if ( (*((_BYTE *)this + 0x24) & 1) != 0 ) /*0x4ccf0c*/
  {
    SeenData = ExtraDataList_GetSeenData(this + 2); /*0x4ccf17*/
    result = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x4ccf2b*/
                                  SeenData,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&SeenData `RTTI Type Descriptor',
                                  &IntSeenData `RTTI Type Descriptor',
                                  0);
    v7 = 0; /*0x4ccf37*/
    if ( result ) /*0x4ccf3b*/
    {
      while ( SLOBYTE(result[4].CompareTo) != a2 || SBYTE1(result[4].CompareTo) != a3 ) /*0x4ccf50*/
      {
        v7 = result; /*0x4ccf56*/
        result = (BSExtraDataVtbl *)result[5].Destructor; /*0x4ccf58*/
        if ( !result ) /*0x4ccf5d*/
          goto LABEL_6; /*0x4ccf5d*/
      }
    }
    else
    {
LABEL_6:
      if ( a4 ) /*0x4ccf64*/
      {
        v8 = (_DWORD *)FormHeapAlloc(0x2Cu); /*0x4ccf68*/
        if ( v7 ) /*0x4ccf76*/
        {
          if ( v8 ) /*0x4ccf82*/
          {
            result = (BSExtraDataVtbl *)sub_411F60(v8, a2, a3); /*0x4ccf8c*/
            v7[5].Destructor = (void (__thiscall *)(BSExtraData *))result; /*0x4ccf91*/
          }
          else
          {
            v7[5].Destructor = 0; /*0x4ccf98*/
            return 0; /*0x4ccf96*/
          }
        }
        else
        {
          if ( v8 ) /*0x4ccfa7*/
            v9 = (BSExtraDataVtbl *)sub_411F60(v8, a2, a3); /*0x4ccfb6*/
          else
            v9 = 0; /*0x4ccfba*/
          ExtraDataList_SetSeenData(this + 2, v9); /*0x4ccfc7*/
          (*((void (__thiscall **)(ExtraDataList *, int))this->vtbl + 0x12))(this, 0x10000000); /*0x4ccfd8*/
          return v9; /*0x4ccfda*/
        }
      }
    }
  }
  return result; /*0x4ccfdc*/
}
