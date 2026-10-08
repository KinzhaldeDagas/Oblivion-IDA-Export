void __thiscall sub_69F770(MobileObject *this, unsigned int Src)
{
  unsigned int source; // [esp+4h] [ebp-4h] BYREF

  MobileObject_SaveModifiedForm(this, Src); /*0x69f779*/
  Src = MagicCaster_GetFormID((void *)this[1].super.super.refID); /*0x69f78f*/
  TESForm_SaveFormIDToCurrentSaveGame((TESForm *)this, &Src, 4u); /*0x69f793*/
  source = MagicItem_GetFormID(this[1].super.super.modlist.data); /*0x69f7a9*/
  TESForm_SaveFormIDToCurrentSaveGame((TESForm *)this, &source, 4u); /*0x69f7ad*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, &this[1].super.baseForm, 4u); /*0x69f7ba*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x48u ) /*0x69f7c9*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)this, &this[1].super.super.flags, 4u); /*0x69f7d3*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x64u ) /*0x69f7e1*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)this, &this[1].super, 4u); /*0x69f7eb*/
}
