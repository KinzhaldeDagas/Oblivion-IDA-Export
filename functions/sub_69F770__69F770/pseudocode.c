void __userpurge sub_69F770(TESObjectREFR *a1@<ecx>, double a2@<st0>, int Src)
{
  size_t v4; // [esp-4h] [ebp-Ch]
  size_t v5; // [esp-4h] [ebp-Ch]
  int FormID; // [esp+4h] [ebp-4h] BYREF

  MobileObject_SaveModifiedForm(a1, a2, Src);
  Src = MagicCaster_GetFormID(a1[1].member.super.modlist.data);
  TESForm_SaveFormIDToCurrentSaveGame((int)&Src, 4u);
  FormID = MagicItem_GetFormID(a1[1].member.super.modlist.next);
  TESForm_SaveFormIDToCurrentSaveGame((int)&FormID, 4u);
  LODWORD(v4) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)&a1[1].member.rot, v4);
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x48u )
  {
    LODWORD(v5) = 4;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)&a1[1].member.super.refID, v5);
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x64u )
  {
    LODWORD(v5) = 4;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)&a1[1].member.super.flags, v5);
  }
}
