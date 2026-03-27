void __userpurge Actor_EquipIngredient_(
        PlayerCharacter *a1@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        TESForm *a5,
        BaseExtraList *a6,
        char a7)
{
  UInt32 *p_refID; // ebp
  double v10; // st7

  if ( a5 )
  {
    if ( ((unsigned __int8 (__thiscall *)(TESForm *))a5->vtbl->Unk_1E)(a5) )
    {
      GameUI_QueueMessage((const char *)sNoEatQuestItem, 0, 1u, flt_A30634);
    }
    else
    {
      if ( !sub_45A500(SaveLoad_CurrentSavegame) )
      {
        Script_AddEventToExtraScript(a1, a6, 2);
        st7_0 = Script_AddEventToExtraScript(a5, &a1->super.super.super.super.baseExtraList, 2);
      }
      p_refID = 0;
      if ( a5->vtbl->Unk_2B(a5) )
        p_refID = &a5[1].member.refID;
      if ( a1 != TESDataHandler_g_PlayerRef || a7 )
      {
        v10 = ((double (__thiscall *)(MagicCaster *, UInt32 *))a1->super.super.magicCaster.vtbl->SetActiveMagicItem)(
                &a1->super.super.magicCaster,
                p_refID);
        MagicCaster_UseActiveMagicItem(&a1->super.super.magicCaster.vtbl, st5_0, v10, st6_0, 0);
        if ( a1 == TESDataHandler_g_PlayerRef
          || (a1->vtbl->super.super.super.RemoveItem((TESObjectREFR *)a1, a5, a6, 1, 0, 0, 0, 0, 0, 1, 0),
              a1 == TESDataHandler_g_PlayerRef) )
        {
          sub_5C1900();
        }
      }
      else
      {
        ++TESDataHandler_g_PlayerRef->miscStats[0xB];
        if ( Player_EquipPotion_(TESDataHandler_g_PlayerRef, (char)p_refID, st5_0, st6_0, st7_0, p_refID) )
          a1->vtbl->super.super.super.RemoveItem((TESObjectREFR *)a1, a5, a6, 1, 0, 0, 0, 0, 0, 1, 0);
      }
    }
  }
}
