bool __thiscall sub_4CABC0(ExtraDataList *this, Actor *a2)
{
  BSExtraDataVtbl *Owner; // edi
  TESForm *v5; // ebp
  void *v6; // eax
  int v7; // edi
  signed int v8; // ebp
  TESForm *v9; // eax
  char *v10; // eax
  int v11; // ecx
  char v12; // [esp+Bh] [ebp-1h]

  v12 = 0;
  if ( sub_5E6C60(a2) )
    return 0;
  Owner = ExtraDataList_GetOwner(this + 2);
  if ( !Owner || (*((_BYTE *)this + 0x24) & 0x20) != 0 || (*((_BYTE *)this + 0x24) & 0x40) != 0 )
    return v12;
  if ( sub_41E7D0(this + 2) || !Actor_IsNPC(a2) )
    return 0;
  v5 = (TESForm *)OblivionDynamicCast(
                    Owner,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESNPC `RTTI Type Descriptor',
                    0);
  v6 = OblivionDynamicCast(
         Owner,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESFaction `RTTI Type Descriptor',
         0);
  v7 = (int)v6;
  if ( v5 )
    return v5 != a2->vtbl->super.super.GetBaseForm(a2);
  if ( !v6 )
    return v12;
  v8 = sub_4CA990(this);
  v9 = a2->vtbl->super.super.GetBaseForm(a2);
  v10 = (char *)OblivionDynamicCast(
                  v9,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESNPC `RTTI Type Descriptor',
                  0);
  LOBYTE(v11) = a2 == (Actor *)TESDataHandler_g_PlayerRef;
  if ( TESActorBaseData_GetFactionRank(v10 + 0x24, v7, v11) >= v8 )
    return v12;
  return 1;
}
