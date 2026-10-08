// Verified conditional ExtraTeleport cleanup branch: when the matching cleanup flag is present and the reference is not in the protected state, it removes low-path world indexing when the door-link reference-ID ordering condition holds, then removes the ExtraTeleport entry.
TESForm::ModReferenceList *__thiscall sub_425650(ExtraDataList *this, int a2, TESObjectCELL **a3)
{
  bool v4; // bl
  BSExtraData *ExtraData; // eax
  ScriptEventList *v6; // eax
  int v7; // edi
  BSExtraData *v8; // eax
  TeleportData *vtbl; // eax
  UInt32 v10; // edi
  BSExtraData *v11; // eax
  BSExtraData *v12; // eax
  TESForm::ModReferenceList *result; // eax
  BSExtraData *v14; // eax

  v4 = 0; /*0x42565b*/
  if ( a3 ) /*0x42565f*/
    v4 = (*(unsigned __int8 (__thiscall **)(TESObjectCELL **))(*a3)[4].members.extraData.members.m_presenceBitfield)(a3) != 0; /*0x42566f*/
  if ( (a2 & 0x4000020) != 0 ) /*0x425679*/
  {
    ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Script); /*0x42567f*/
    if ( ExtraData ) /*0x425686*/
    {
      v6 = *(ScriptEventList **)&ExtraData[1].members.type; /*0x425688*/
      if ( v6 ) /*0x42568d*/
        ScriptEventList_Preload_(v6); /*0x425691*/
    }
  }
  if ( (a2 & 0x40000) != 0 && v4 ) /*0x4256a7*/
    sub_4246F0(this); /*0x4256ab*/
  v7 = a2 & 0x400000; /*0x4256b6*/
  if ( (a2 & 0x400000) != 0 && !v4 ) /*0x4256c4*/
    BaseExtraList_RemoveExtraByType(this, 0x17u); /*0x4256ca*/
  if ( (a2 & 0x10000000) != 0 ) /*0x4256d9*/
    BaseExtraList_RemoveExtraByType(this, 0x35u); /*0x4256df*/
  if ( (a2 & 0x200000) != 0 && !v4 ) /*0x4256f0*/
  {
    BaseExtraList_RemoveExtraByType(this, 0x39u); /*0x4256f6*/
    BaseExtraList_RemoveExtraByType(this, 0x3Au); /*0x4256ff*/
  }
  if ( (a2 & 0x100000) != 0 && !v4 ) /*0x425710*/
  {
    v8 = BaseExtraList_GetExtraData(this, kExtraData_Teleport); /*0x425716*/
    if ( v8 ) /*0x42571d*/
    {
      vtbl = (TeleportData *)v8[1].vtbl; /*0x42571f*/
      if ( vtbl ) /*0x425724*/
      {
        v10 = (UInt32)a3[3]; /*0x42572a*/
        if ( v10 < TeleportData_GetLinkedDoor(vtbl)->member.super.refID ) /*0x425737*/
          TravelPath_RemoveAStarWorldNodeFromSpaceMaps(a3); /*0x42573e*/
        BaseExtraList_RemoveExtraByType(this, 0x32u); /*0x42574a*/
        v7 = a2 & 0x400000; /*0x42574f*/
      }
    }
  }
  if ( (char)a2 < 0 && v4 ) /*0x42575c*/
  {
    v11 = BaseExtraList_GetExtraData(this, kExtraData_CrimeGold); /*0x425762*/
    if ( v11 ) /*0x425769*/
      BaseExtraList_RemoveExtraByPtr(this, (int)v11, 1); /*0x425770*/
  }
  if ( (a2 & 0x4000) != 0 && v4 ) /*0x425781*/
    BaseExtraList_RemoveExtraByType(this, 0x3Eu); /*0x425787*/
  if ( (a2 & 0x2000) != 0 && v4 ) /*0x425798*/
    BaseExtraList_RemoveExtraByType(this, 0x52u); /*0x42579e*/
  if ( (a2 & 0x1000) != 0 && v4 ) /*0x4257af*/
  {
    v12 = BaseExtraList_GetExtraData(this, kExtraData_PersuasionPercent); /*0x4257b5*/
    if ( v12 ) /*0x4257bc*/
      BaseExtraList_RemoveExtraByPtr(this, (int)v12, 1); /*0x4257c3*/
  }
  if ( (a2 & 0x2000000) != 0 ) /*0x4257d0*/
    BaseExtraList_RemoveExtraByType(this, 0x4Au); /*0x4257d6*/
  if ( (a2 & 0x1000000) != 0 ) /*0x4257e3*/
    BaseExtraList_RemoveExtraByType(this, 0x4Bu); /*0x4257e9*/
  if ( (a2 & 0x40000) != 0 && v4 ) /*0x4257f7*/
    sub_4246F0(this); /*0x4257fb*/
  if ( v7 ) /*0x425802*/
  {
    if ( !v4 ) /*0x425806*/
      BaseExtraList_RemoveExtraByType(this, 0x17u); /*0x42580c*/
  }
  if ( (a2 & 0x10000000) != 0 ) /*0x425815*/
    BaseExtraList_RemoveExtraByType(this, 0x35u); /*0x42581b*/
  result = (TESForm::ModReferenceList *)g_TESSaveLoadGame->resetSelector; /*0x425825*/
  if ( result == (TESForm::ModReferenceList *)0x1FFFF000 || result == (TESForm::ModReferenceList *)0x7FFFF000 ) /*0x425834*/
  {
    if ( v4 ) /*0x42583e*/
    {
      v14 = BaseExtraList_GetExtraData(this, kExtraData_Package); /*0x425846*/
      if ( v14 ) /*0x42584d*/
        BaseExtraList_RemoveExtraByPtr(this, (int)v14, 1); /*0x425854*/
      BaseExtraList_RemoveExtraByType(this, 0x21u); /*0x42585d*/
      BaseExtraList_RemoveExtraByType(this, 0x1Eu); /*0x425866*/
      if ( BaseExtraList_GetExtraData(this, kExtraData_Follower) ) /*0x42586f*/
        BaseExtraList_RemoveExtraByType(this, 0x23u); /*0x42587c*/
      if ( BaseExtraList_GetExtraData(this, kExtraData_FriendHitList) ) /*0x425885*/
        BaseExtraList_RemoveExtraByType(this, 0x4Eu); /*0x425892*/
      BaseExtraList_RemoveExtraByType(this, 0x42u); /*0x42589b*/
      sub_423970(this, 0); /*0x4258a4*/
      BaseExtraList_RemoveExtraByType(this, 0x25u); /*0x4258ad*/
      BaseExtraList_RemoveExtraByType(this, 0x59u); /*0x4258b6*/
      return (TESForm::ModReferenceList *)BaseExtraList_RemoveExtraByType(this, 0x5Au); /*0x4258bf*/
    }
    else
    {
      result = (TESForm::ModReferenceList *)BaseExtraList_GetExtraData(this, kExtraData_ItemDropper); /*0x4258ce*/
      if ( result ) /*0x4258d5*/
      {
        result = result[1].next; /*0x4258d7*/
        if ( result ) /*0x4258dc*/
        {
          sub_424C00((ExtraDataList *)&result[8].next, (int)a3); /*0x4258e6*/
          return (TESForm::ModReferenceList *)BaseExtraList_RemoveExtraByType(this, 0x41u); /*0x4258ef*/
        }
      }
    }
  }
  return result; /*0x4258c4*/
}
