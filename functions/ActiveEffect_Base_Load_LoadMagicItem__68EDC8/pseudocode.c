int __usercall ActiveEffect_Base_Load_::LoadMagicItem@<eax>(
        TESSaveLoadGame_SerializationView *a1@<ecx>,
        int a2@<edi>,
        int a3,
        int Dst,
        int a5,
        UInt32 a6,
        int a7,
        int a8)
{
  SaveLoad_LoadFormID(a1, (unsigned int *)&Dst, 4u); /*0x68edd1*/
  return ActiveEffect_Base_Load_::LoadEffectItemIndex(g_TESSaveLoadGame, a2, a3, Dst, a5, a6, a7, a8);
}
