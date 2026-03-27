char __cdecl sub_626CC0(TESObjectREFR *a1, TESObjectREFR *a2)
{
  TESForm::FormFlags flags; // eax
  BSExtraData *v4; // eax
  BSExtraData *v5; // edi
  unsigned __int8 *v6; // eax
  signed int v8; // [esp+4h] [ebp-4h] BYREF
  int v9; // [esp+Ch] [ebp+4h]

  if ( !a1 )
    return 0;
  flags = a1->member.super.flags;
  if ( (flags & 0x20) != 0 || (flags & 0x4000) != 0 || (flags & 0x800) != 0 )
    return 0;
  v8 = 0;
  if ( !a2 )
    return 0;
  if ( a1->vtbl->GetBaseForm(a1) == (TESForm *)TESDataHandler_g_PrisonMarker )
    return 0;
  if ( !dword_B3B924 || (v9 = 0x80, !sub_4D8B90((TESObjectREFR *)dword_B3B924)) )
    v9 = 0x320;
  if ( !GetTeleportExtraData(a1) || (double)v9 >= TesObjectREF_GetDistance(a1, (TESObjectREFR *)dword_B3B924, 0) )
    return 0;
  v4 = sub_4D7740(a1);
  v5 = v4;
  if ( v4 )
  {
    if ( sub_428E70(v4) && !TESOBjectREFR_IsOwnedBy(a1, a2, 1) )
    {
      v6 = *(unsigned __int8 **)&v5->members.type;
      if ( !v6 || !sub_5E4A00((int)a2, v6, 0, 1, 0, &v8) )
        return 0;
    }
  }
  dword_B3B91C = (int)a1;
  return 1;
}
