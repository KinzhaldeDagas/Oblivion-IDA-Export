int __usercall ActiveEffect_Base_Save_::SaveEffectItemIndex@<eax>(
        int a1@<esi>,
        int a2,
        int a3,
        int a4,
        int Src,
        char source)
{
  char IndexOfItem; // al
  TESSaveLoadGame_SerializationView *v7; // ecx

  IndexOfItem = EffectItemList_GetIndexOfItem((_DWORD *)(*(_DWORD *)(a1 + 8) + 0xC), *(_DWORD *)(a1 + 0xC)); /*0x68dd93*/
  v7 = g_TESSaveLoadGame; /*0x68dd98*/
  source = IndexOfItem; /*0x68dda5*/
  SaveLoad_SaveData(v7, &source, 1u); /*0x68dda9*/
  return ActiveEffect_Base_Save_::SaveActiveEffect(a1);
}
