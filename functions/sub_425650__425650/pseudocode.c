TESForm::ModReferenceList *__thiscall sub_425650(ExtraDataList *this, int a2, _DWORD *a3)
{
  bool v4; // bl
  BSExtraData *ExtraData; // eax
  char **v6; // eax
  int v7; // edi
  BSExtraData *v8; // eax
  BSExtraData *vtbl; // eax
  bool (__thiscall *v10)(BSExtraData *, BSExtraData *); // edi
  BSExtraData *v11; // eax
  BSExtraData *v12; // eax
  TESForm::ModReferenceList *result; // eax
  BSExtraData *v14; // eax

  v4 = 0;
  if ( a3 )
    v4 = (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a3 + 0x190))(a3) != 0;
  if ( (a2 & 0x4000020) != 0 )
  {
    ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Script);
    if ( ExtraData )
    {
      v6 = *(char ***)&ExtraData[1].members.type;
      if ( v6 )
        ScriptEventList_Preload_(v6);
    }
  }
  if ( (a2 & 0x40000) != 0 && v4 )
    sub_4246F0(this);
  v7 = a2 & 0x400000;
  if ( (a2 & 0x400000) != 0 && !v4 )
    BaseExtraList_RemoveExtraByType(this, 0x17u);
  if ( (a2 & 0x10000000) != 0 )
    BaseExtraList_RemoveExtraByType(this, 0x35u);
  if ( (a2 & 0x200000) != 0 && !v4 )
  {
    BaseExtraList_RemoveExtraByType(this, 0x39u);
    BaseExtraList_RemoveExtraByType(this, 0x3Au);
  }
  if ( (a2 & 0x100000) != 0 && !v4 )
  {
    v8 = BaseExtraList_GetExtraData(this, kExtraData_Teleport);
    if ( v8 )
    {
      vtbl = (BSExtraData *)v8[1].vtbl;
      if ( vtbl )
      {
        v10 = (bool (__thiscall *)(BSExtraData *, BSExtraData *))a3[3];
        if ( (char *)v10 < (char *)sub_42B410(vtbl)[1].CompareTo )
          sub_67F340(a3);
        BaseExtraList_RemoveExtraByType(this, 0x32u);
        v7 = a2 & 0x400000;
      }
    }
  }
  if ( (char)a2 < 0 && v4 )
  {
    v11 = BaseExtraList_GetExtraData(this, kExtraData_CrimeGold);
    if ( v11 )
      BaseExtraList_RemoveExtraByPtr(this, (int)v11, 1);
  }
  if ( (a2 & 0x4000) != 0 && v4 )
    BaseExtraList_RemoveExtraByType(this, 0x3Eu);
  if ( (a2 & 0x2000) != 0 && v4 )
    BaseExtraList_RemoveExtraByType(this, 0x52u);
  if ( (a2 & 0x1000) != 0 && v4 )
  {
    v12 = BaseExtraList_GetExtraData(this, kExtraData_PersuasionPercent);
    if ( v12 )
      BaseExtraList_RemoveExtraByPtr(this, (int)v12, 1);
  }
  if ( (a2 & 0x2000000) != 0 )
    BaseExtraList_RemoveExtraByType(this, 0x4Au);
  if ( (a2 & 0x1000000) != 0 )
    BaseExtraList_RemoveExtraByType(this, 0x4Bu);
  if ( (a2 & 0x40000) != 0 && v4 )
    sub_4246F0(this);
  if ( v7 )
  {
    if ( !v4 )
      BaseExtraList_RemoveExtraByType(this, 0x17u);
  }
  if ( (a2 & 0x10000000) != 0 )
    BaseExtraList_RemoveExtraByType(this, 0x35u);
  result = (TESForm::ModReferenceList *)SaveLoad_CurrentSavegame->unk030[5];
  if ( result == (TESForm::ModReferenceList *)0x1FFFF000 || result == (TESForm::ModReferenceList *)0x7FFFF000 )
  {
    if ( v4 )
    {
      v14 = BaseExtraList_GetExtraData(this, kExtraData_Package);
      if ( v14 )
        BaseExtraList_RemoveExtraByPtr(this, (int)v14, 1);
      BaseExtraList_RemoveExtraByType(this, 0x21u);
      BaseExtraList_RemoveExtraByType(this, 0x1Eu);
      if ( BaseExtraList_GetExtraData(this, kExtraData_Follower) )
        BaseExtraList_RemoveExtraByType(this, 0x23u);
      if ( BaseExtraList_GetExtraData(this, kExtraData_FriendHitList) )
        BaseExtraList_RemoveExtraByType(this, 0x4Eu);
      BaseExtraList_RemoveExtraByType(this, 0x42u);
      sub_423970(this, 0);
      BaseExtraList_RemoveExtraByType(this, 0x25u);
      BaseExtraList_RemoveExtraByType(this, 0x59u);
      return (TESForm::ModReferenceList *)BaseExtraList_RemoveExtraByType(this, 0x5Au);
    }
    else
    {
      result = (TESForm::ModReferenceList *)BaseExtraList_GetExtraData(this, kExtraData_ItemDropper);
      if ( result )
      {
        result = result[1].next;
        if ( result )
        {
          sub_424C00((ExtraDataList *)&result[8].next, (int)a3);
          return (TESForm::ModReferenceList *)BaseExtraList_RemoveExtraByType(this, 0x41u);
        }
      }
    }
  }
  return result;
}
