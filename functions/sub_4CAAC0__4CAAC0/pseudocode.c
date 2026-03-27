char __thiscall sub_4CAAC0(ExtraDataList *this, Actor *a2)
{
  BSExtraDataVtbl *Owner; // esi
  char result; // al
  TESForm *v4; // ebx
  void *v5; // eax
  int v6; // ebp
  unsigned int v7; // eax
  int v8; // esi
  TESForm *v9; // eax
  char *v10; // eax
  int v11; // ecx
  char v12; // [esp+Bh] [ebp-5h]
  ExtraDataList *v13; // [esp+Ch] [ebp-4h]

  v12 = 0;
  v13 = this + 2;
  Owner = ExtraDataList_GetOwner(this + 2);
  if ( Owner )
  {
    result = Actor_IsNPC(a2);
    if ( !result )
      return result;
    v4 = (TESForm *)OblivionDynamicCast(
                      Owner,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                      &TESNPC `RTTI Type Descriptor',
                      0);
    v5 = OblivionDynamicCast(
           Owner,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESFaction `RTTI Type Descriptor',
           0);
    v6 = (int)v5;
    if ( v4 )
    {
      if ( v4 == a2->vtbl->super.super.GetBaseForm(a2) )
        return 1;
    }
    else if ( v5 )
    {
      v7 = sub_41E7F0(v13);
      v8 = v7 != 0xFFFFFFFF ? v7 : 0;
      v9 = a2->vtbl->super.super.GetBaseForm(a2);
      v10 = (char *)OblivionDynamicCast(
                      v9,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                      &TESNPC `RTTI Type Descriptor',
                      0);
      LOBYTE(v11) = a2 == (Actor *)TESDataHandler_g_PlayerRef;
      return TESActorBaseData_GetFactionRank(v10 + 0x24, v6, v11) >= v8;
    }
  }
  return v12;
}
