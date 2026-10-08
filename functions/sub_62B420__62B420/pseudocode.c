void __thiscall sub_62B420(int *this, PlayerCharacter *a2)
{
  int v3; // ebx
  TargetData *v4; // ecx
  char *v5; // edi
  ObjectType v6; // eax
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // eax
  MagicTarget *p_magicTarget; // eax
  PlayerCharacter *v11; // [esp+20h] [ebp-1Ch]
  unsigned __int8 v12[12]; // [esp+24h] [ebp-18h] BYREF
  unsigned int v13; // [esp+38h] [ebp-4h]

  v3 = (*(int (__thiscall **)(int *))(*this + 0x184))(this); /*0x62b454*/
  v4 = *(TargetData **)(v3 + 0x28); /*0x62b456*/
  v5 = 0; /*0x62b45b*/
  if ( v4 ) /*0x62b45f*/
  {
    v6.form = sub_569E70(v4).form; /*0x62b46d*/
    v5 = (char *)OblivionDynamicCast( /*0x62b47b*/
                   v6.form,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                   &MagicItem `RTTI Type Descriptor',
                   0);
  }
  v11 = 0; /*0x62b47f*/
  if ( !v5 ) /*0x62b483*/
  {
    v5 = (char *)*(this + 0x52); /*0x62b485*/
    if ( !v5 ) /*0x62b48d*/
    {
      (*(void (__thiscall **)(int *, PlayerCharacter *, int))(*this + 0x188))(this, a2, 1); /*0x62b52e*/
      return; /*0x62b52e*/
    }
    *(this + 0x52) = 0; /*0x62b497*/
    TESPackage_TargetData_constr(v12); /*0x62b49d*/
    v13 = 0; /*0x62b4a4*/
    TESPackage_TargetData_SetTargetForm(v12, (int)(v5 + 0xFFFFFFE8)); /*0x62b4b6*/
    TESPackage_SetTarget((_DWORD *)v3, v12); /*0x62b4c2*/
    v13 = 0xFFFFFFFF; /*0x62b4cb*/
    Shared_NoOpVirtual_60D0A0(v12); /*0x62b4d3*/
  }
  v7 = *(this + 0xC); /*0x62b4d8*/
  if ( v7 ) /*0x62b4dd*/
    goto LABEL_9; /*0x62b4dd*/
  v8 = *(_DWORD **)(v3 + 0x24); /*0x62b4df*/
  if ( v8 ) /*0x62b4e4*/
  {
    v7 = sub_5697E0(v8); /*0x62b4e6*/
LABEL_9:
    v11 = (PlayerCharacter *)v7; /*0x62b4eb*/
  }
  if ( Actor_GetCurrentAction(a2) != 0xFFFFFFFF /*0x62b50f*/
    || *(_BYTE *)(v3 + 0x20) != 0x1C && (EffectItemList_GetItemByIndex2(v5 + 0xC, 0), *(_DWORD *)(v9 + 0x10)) )
  {
    if ( Actor_GetCurrentAction(a2) != 0xFFFFFFFF ) /*0x62b563*/
      return; /*0x62b563*/
    if ( v11 ) /*0x62b56b*/
    {
      if ( v11->vtbl->super.super.super.IsActor((TESObjectREFR *)v11) && v11 != a2 ) /*0x62b57f*/
        v11->super.super.super.process->SetCurrentPackage(v11->super.super.super.process, 0); /*0x62b58e*/
    }
    goto LABEL_24; /*0x62b58e*/
  }
  if ( a2 ) /*0x62b517*/
    p_magicTarget = &a2->super.super.magicTarget; /*0x62b519*/
  else
    p_magicTarget = 0; /*0x62b530*/
  MagicCaster_CastMagicItem(&a2->super.super.magicCaster.vtbl, (int)v5, (int)p_magicTarget, 0); /*0x62b539*/
  sub_5F25F0(a2, v3, (int)v5, SLODWORD(kHeadBodyNormalMatchRadius), 1); /*0x62b54c*/
  if ( *(_BYTE *)(v3 + 0x20) == 0x1C ) /*0x62b555*/
LABEL_24:
    (*(void (__thiscall **)(int *, PlayerCharacter *, int))(*this + 0x188))(this, a2, 1); /*0x62b590*/
}
