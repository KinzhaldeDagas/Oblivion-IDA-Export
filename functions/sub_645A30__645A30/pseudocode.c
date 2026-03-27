char __cdecl sub_645A30(TESObjectREFR *a1, TESObjectREFR *a2)
{
  TESObjectREFR **TeleportExtraData; // eax
  TESObjectCELL *ParentCell; // eax
  TESObjectREFR **v5; // eax
  char v7; // [esp+Ch] [ebp+8h]

  if ( a2 )
  {
    if ( !a2->vtbl->IsDead(a2, 0) )
    {
      if ( a1 )
      {
        if ( a1->vtbl->GetBaseForm(a1)->member.type == kFormType_Door )
        {
          v7 = 0;
          TeleportExtraData = (TESObjectREFR **)GetTeleportExtraData(a1);
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
              sub_4DBE40(a1);
              v5 = (TESObjectREFR **)GetTeleportExtraData(a1);
              if ( v5 )
                sub_42B5F0(v5, a1, 0);
            }
          }
        }
      }
    }
  }
  return 0;
}
