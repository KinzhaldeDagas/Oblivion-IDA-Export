bool __cdecl sub_4B72C0(TESObjectREFR *a1, TESObjectREFR *a2, char a3, char a4)
{
  TESObjectREFR **TeleportExtraData; // ebx
  TESObjectCELL *v6; // ebp
  bool result; // al
  TESObjectCELL *ParentCell; // eax
  int v9; // eax
  TESObjectCELL *v10; // eax
  int v11; // eax
  int v12; // eax
  char v13; // al
  bool v14; // zf
  _BYTE v15[4]; // [esp+14h] [ebp-4h] BYREF
  BSExtraData *v16; // [esp+20h] [ebp+8h]

  if ( !a2 || !a1 )
    return 0;
  TeleportExtraData = (TESObjectREFR **)GetTeleportExtraData(a1);
  v6 = 0;
  v16 = sub_4D7740(a1);
  if ( !v16 && a4 )
    return 1;
  if ( TeleportExtraData )
  {
    v6 = sub_42B460(TeleportExtraData);
    if ( a2 != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    {
      if ( TESObjectREFR_GetParentCell(a2) )
      {
        ParentCell = TESObjectREFR_GetParentCell(a2);
        TESObjectCELL_GetOwner(ParentCell);
        if ( v9 )
        {
          v10 = TESObjectREFR_GetParentCell(a2);
          if ( sub_4CAAC0(v10, a2) )
          {
            if ( v6 )
            {
              TESObjectCELL_GetOwner(v6);
              if ( v11 )
                return sub_4CAAC0(v6, a2);
            }
            return 1;
          }
        }
      }
    }
  }
  if ( TESOBjectREFR_IsOwnedBy(a1, (PlayerCharacter *)a2, 1) )
  {
    if ( a2 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    {
      if ( a3 )
      {
        v12 = *(_DWORD *)&v16->members.type;
        if ( v12 )
        {
          sub_5E4A00(v12, 0, 1, 0, v15);
          if ( v13 )
            return 0;
        }
      }
    }
    return 1;
  }
  if ( sub_5E6C60((Actor *)a2) && sub_5E6BA0((Actor *)a2) )
    return 1;
  if ( a2 == (TESObjectREFR *)TESDataHandler_g_PlayerRef
    && TESDataHandler_g_PlayerRef->vtbl->super.IsTresspassing((Actor *)TESDataHandler_g_PlayerRef) )
  {
    return TeleportExtraData
        && v16
        && LOBYTE(v16->vtbl) != 0x64
        && (!v6 || !TESObjectCELL_IsInterior(v6) || sub_4C9830(v6));
  }
  if ( !sub_5E3220(a2) )
    return 0;
  if ( (PlayerCharacter *)(*((int (__thiscall **)(TESObjectREFRVtbl *))a2[1].vtbl->super.super.InitializeComponent + 0x33))(a2[1].vtbl) != TESDataHandler_g_PlayerRef )
    return 0;
  v14 = ((unsigned __int8 (__thiscall *)(TESObjectREFR *))a2->vtbl[2].super.super.ClearComponentReferences)(a2) == 0;
  result = 1;
  if ( v14 )
    return 0;
  return result;
}
