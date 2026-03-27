char __cdecl sub_645AF0(TESObjectREFR *a1, TESObjectREFR *a2)
{
  TESObjectREFR **TeleportExtraData; // eax
  TESObjectREFR **v4; // edi
  TESObjectCELL *ParentCell; // eax
  char v7; // [esp+Ch] [ebp+8h]

  if ( !a2 || a2->vtbl->IsDead(a2, 0) )
    return 0;
  if ( !a1 || a1->vtbl->GetBaseForm(a1)->member.type != kFormType_Door )
    return 0;
  v7 = 0;
  TeleportExtraData = (TESObjectREFR **)GetTeleportExtraData(a1);
  v4 = TeleportExtraData;
  if ( TeleportExtraData )
  {
    if ( sub_42B470(TeleportExtraData)
      || !TESObjectREFR_GetParentCell(a2)
      || (ParentCell = TESObjectREFR_GetParentCell(a2), !TESObjectCELL_IsInterior(ParentCell)) )
    {
      v7 = 1;
    }
  }
  if ( TESOBjectREFR_IsOwnedBy(a1, a2, v7) )
  {
    if ( sub_4D7740(a1) )
    {
      sub_4DBEA0(a1);
      if ( v4 )
        sub_42B5F0(v4, a1, 1);
    }
  }
  return 0;
}
