int __usercall ActiveEffect_Base_Save_::SaveMagicItem@<eax>(
        int a1@<esi>,
        int a2,
        int a3,
        unsigned int source,
        int a5,
        char a6)
{
  int FormID; // eax
  TESSaveLoadGame_SerializationView *v7; // ecx

  FormID = MagicItem_GetFormID(*(void **)(a1 + 8)); /*0x68dd6e*/
  v7 = g_TESSaveLoadGame; /*0x68dd73*/
  source = FormID; /*0x68dd79*/
  SaveLoad_SaveFormID(v7, &source, 4u); /*0x68dd84*/
  return ActiveEffect_Base_Save_::SaveEffectItemIndex(a1, a2, a3, source, a5, a6);
}
