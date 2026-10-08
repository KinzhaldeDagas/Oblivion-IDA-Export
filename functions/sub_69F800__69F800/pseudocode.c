TESSaveLoadGame_SerializationView *__userpurge sub_69F800@<eax>(
        MobileObject *ecx0@<ecx>,
        unsigned int changeMask,
        TESForm a1)
{
  TESSaveLoadGame_SerializationView *result; // eax
  Data *v5; // [esp+0h] [ebp-Ch]
  unsigned int destination; // [esp+8h] [ebp-4h] BYREF
  UInt32 retaddr; // [esp+Ch] [ebp+0h]

  MobileObject_LoadModifiedForm(ecx0, changeMask, (unsigned int)a1.vtbl); /*0x69f80f*/
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)ecx0, (unsigned int *)&a1, 4u); /*0x69f81d*/
  ecx0[1].super.super.refID = retaddr; /*0x69f82f*/
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)ecx0, &destination, 4u); /*0x69f832*/
  ecx0[1].super.super.modlist.data = v5; /*0x69f843*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, &ecx0[1].super.baseForm, 4u); /*0x69f846*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x48u ) /*0x69f855*/
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, &ecx0[1].super.super.flags, 4u); /*0x69f85f*/
  result = g_TESSaveLoadGame; /*0x69f864*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x64u ) /*0x69f86d*/
    return (TESSaveLoadGame_SerializationView *)TESForm_LoadDataFromCurrentSaveGame((TESForm *)ecx0, &ecx0[1].super, 4u); /*0x69f877*/
  return result; /*0x69f87c*/
}
