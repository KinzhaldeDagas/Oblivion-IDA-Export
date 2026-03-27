BSExtraDataVtbl *__thiscall sub_4CCEE0(ExtraDataList *this, int a2, int a3, char a4)
{
  BSExtraDataVtbl *result; // eax
  BSExtraDataVtbl *v6; // eax
  BSExtraDataVtbl *v7; // esi
  _DWORD *v8; // eax
  BSExtraDataVtbl *v9; // esi

  result = 0;
  if ( (*((_BYTE *)this + 0x24) & 1) != 0 )
  {
    v6 = sub_420B50(this + 2);
    result = (BSExtraDataVtbl *)OblivionDynamicCast(
                                  v6,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&SeenData `RTTI Type Descriptor',
                                  &IntSeenData `RTTI Type Descriptor',
                                  0);
    v7 = 0;
    if ( result )
    {
      while ( SLOBYTE(result[4].CompareTo) != a2 || SBYTE1(result[4].CompareTo) != a3 )
      {
        v7 = result;
        result = (BSExtraDataVtbl *)result[5].Destructor;
        if ( !result )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      if ( a4 )
      {
        v8 = (_DWORD *)FormHeapAlloc(0x2Cu);
        if ( v7 )
        {
          if ( v8 )
          {
            result = (BSExtraDataVtbl *)sub_411F60(v8, a2, a3);
            v7[5].Destructor = (void (__thiscall *)(BSExtraData *))result;
          }
          else
          {
            v7[5].Destructor = 0;
            return 0;
          }
        }
        else
        {
          if ( v8 )
            v9 = (BSExtraDataVtbl *)sub_411F60(v8, a2, a3);
          else
            v9 = 0;
          sub_420B70(this + 2, v9);
          (*((void (__thiscall **)(ExtraDataList *, int))this->vtbl + 0x12))(this, 0x10000000);
          return v9;
        }
      }
    }
  }
  return result;
}
