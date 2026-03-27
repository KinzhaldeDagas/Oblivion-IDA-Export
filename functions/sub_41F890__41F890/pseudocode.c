BSExtraData *__thiscall sub_41F890(ExtraDataList *this, int a2)
{
  BSExtraData *result; // eax
  BSExtraData *v4; // edi
  ExtraHavok *v5; // eax
  BSExtraData *v6; // eax
  int v7; // esi

  result = BaseExtraList_GetExtraData(this, kExtraData_Havok);
  v4 = result;
  if ( a2 )
  {
    if ( !result )
    {
      v5 = (ExtraHavok *)FormHeapAlloc(0x14u);
      if ( v5 )
        v6 = (BSExtraData *)ExtraHavok::ExtraHavok(v5, 0);
      else
        v6 = 0;
      v4 = v6;
      result = (BSExtraData *)BaseExtraList_AddExtra(this, v6);
    }
  }
  v7 = *(_DWORD *)&v4[1].members.type;
  if ( v7 != a2 )
  {
    if ( v7 )
    {
      result = (BSExtraData *)InterlockedDecrement((volatile LONG *)(v7 + 4));
      if ( !result )
        result = (BSExtraData *)(**(int (__thiscall ***)(int, int))v7)(v7, 1);
    }
    *(_DWORD *)&v4[1].members.type = a2;
    if ( a2 )
      return (BSExtraData *)InterlockedIncrement((volatile LONG *)(a2 + 4));
  }
  return result;
}
