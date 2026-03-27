char __userpurge Actor_ConsumePotion_@<al>(
        PlayerCharacter *a1@<ecx>,
        char a2@<bpl>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        TESForm *a6,
        BaseExtraList *a7,
        char a8)
{
  char v10; // bl
  double v11; // st7

  if ( !a6 )
    return 0;
  v10 = 1;
  if ( a1 != TESDataHandler_g_PlayerRef || a8 )
  {
    v11 = ((double (__thiscall *)(MagicCaster *, UInt32 *))a1->super.super.magicCaster.vtbl->SetActiveMagicItem)(
            &a1->super.super.magicCaster,
            &a6[1].member.refID);
    MagicCaster_UseActiveMagicItem(&a1->super.super.magicCaster.vtbl, st5_0, v11, st6_0, 0);
    if ( a1 == TESDataHandler_g_PlayerRef )
    {
LABEL_10:
      sub_5C1900();
      return v10;
    }
  }
  else
  {
    v10 = Player_EquipPotion_(TESDataHandler_g_PlayerRef, a2, st5_0, st6_0, st7_0, &a6[1].member.refID);
    if ( !v10 )
      goto LABEL_9;
  }
  a1->vtbl->super.super.super.RemoveItem((TESObjectREFR *)a1, a6, a7, 1, 0, 0, 0, 0, 0, 1, 0);
LABEL_9:
  if ( a1 == TESDataHandler_g_PlayerRef )
    goto LABEL_10;
  return v10;
}
