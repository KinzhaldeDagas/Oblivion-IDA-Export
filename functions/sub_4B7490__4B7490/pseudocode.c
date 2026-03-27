char __cdecl sub_4B7490(TESObjectREFR *a1, TESObjectREFR *a2, _BYTE *a3)
{
  TESObjectCELL *v4; // ebp
  TESObjectREFR **TeleportExtraData; // ebx
  TESObjectCELL *ParentCell; // eax
  int v7; // eax
  TESObjectCELL *v8; // eax
  int v9; // eax
  char v10; // al
  BSExtraData *v11; // eax
  BSExtraData *v12; // edi
  int v13; // eax
  char v14; // al
  int v15; // eax
  char v16; // al
  char v17; // al
  char v19; // [esp+Bh] [ebp-5h]
  int v20; // [esp+Ch] [ebp-4h] BYREF
  BSExtraData *v21; // [esp+14h] [ebp+4h]

  v4 = 0;
  v19 = 0;
  v20 = 0;
  *a3 = 0;
  if ( !a1 || a1->vtbl->GetBaseForm(a1)->member.type != kFormType_Door || !a2 )
    return v19;
  TeleportExtraData = (TESObjectREFR **)GetTeleportExtraData(a1);
  v21 = sub_4D7740(a1);
  if ( !v21 )
    return 1;
  if ( TeleportExtraData )
  {
    v4 = sub_42B460(TeleportExtraData);
    if ( a2 != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    {
      if ( TESObjectREFR_GetParentCell(a2) )
      {
        ParentCell = TESObjectREFR_GetParentCell(a2);
        TESObjectCELL_GetOwner(ParentCell);
        if ( v7 )
        {
          v8 = TESObjectREFR_GetParentCell(a2);
          if ( sub_4CAAC0(v8, a2) )
          {
            if ( !v4 )
              return 1;
            TESObjectCELL_GetOwner(v4);
            if ( !v9 )
              return 1;
            v10 = sub_4CAAC0(v4, a2);
LABEL_26:
            if ( !v10 )
              goto LABEL_27;
            return 1;
          }
        }
      }
    }
  }
  if ( TESOBjectREFR_IsOwnedBy(a1, (PlayerCharacter *)a2, 1) || sub_5E6C60((Actor *)a2) && sub_5E6BA0((Actor *)a2) )
    return 1;
  if ( a2 == (TESObjectREFR *)TESDataHandler_g_PlayerRef
    && TESDataHandler_g_PlayerRef->vtbl->super.IsTresspassing((Actor *)TESDataHandler_g_PlayerRef) )
  {
    if ( TeleportExtraData && LOBYTE(v21->vtbl) != 0x64 )
    {
      if ( !v4 || !TESObjectCELL_IsInterior(v4) )
        return 1;
      v10 = sub_4C9830(v4);
      goto LABEL_26;
    }
  }
  else if ( sub_5E3220(a2)
         && (PlayerCharacter *)(*((int (__thiscall **)(TESObjectREFRVtbl *))a2[1].vtbl->super.super.InitializeComponent
                                + 0x33))(a2[1].vtbl) == TESDataHandler_g_PlayerRef )
  {
    v10 = ((int (__thiscall *)(TESObjectREFR *))a2->vtbl[2].super.super.ClearComponentReferences)(a2);
    goto LABEL_26;
  }
LABEL_27:
  v11 = sub_4D7740(a1);
  v12 = v11;
  if ( !v11 )
    return 1;
  if ( !sub_428E70(v11) )
    return 1;
  v13 = *(_DWORD *)&v12->members.type;
  if ( v13 )
  {
    sub_5E4A00(v13, 0, 1, 0, &v20);
    if ( v14 )
      return 1;
  }
  sub_429990((char *)v12);
  if ( v15 < 0x64 )
  {
    sub_5E4A00(TESDataHandler_g_Lockpick, 0, 1, 0, &v20);
    if ( v16 || (sub_5E4A00(TESDataHandler_g_SkeletonKey, 0, 1, 0, &v20), v17) )
    {
      *a3 = 1;
      return 1;
    }
  }
  return v19;
}
