int __usercall ActiveEffect_Base_Save_::SaveMagicItem@<eax>(int a1@<esi>, int a2, int a3, int a4, int a5, char a6)
{
  int FormID; // eax
  TESSaveLoad *v7; // ecx

  FormID = MagicItem_GetFormID(*(void **)(a1 + 8));
  v7 = SaveLoad_CurrentSavegame;
  a4 = FormID;
  SaveLoad_SaveFormID(v7, (int)&a4, 4u);
  return ActiveEffect_Base_Save_::SaveEffectItemIndex(a1, a2, a3, a4, a5, a6);
}
