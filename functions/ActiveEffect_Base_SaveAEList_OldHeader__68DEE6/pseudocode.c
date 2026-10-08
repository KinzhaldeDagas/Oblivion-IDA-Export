int __cdecl ActiveEffect_Base_SaveAEList_::OldHeader(
        int a1,
        int a2,
        int Src,
        int source,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  TESSaveLoadGame_SerializationView *v10; // ecx
  unsigned __int8 *bufferCursor; // [esp+8h] [ebp+8h]

  v10 = g_TESSaveLoadGame; /*0x68dee6*/
  Src = 0x4B4F4C42; /*0x68def3*/
  SaveLoad_SaveData(v10, &Src, 4u); /*0x68defb*/
  bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x68df10*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &source, 2u); /*0x68df14*/
  return ActiveEffect_Base_SaveAEList_::ReserveEffectCount(a1, (int)bufferCursor, Src, source, a5, a6, a7, a8, a9, a10);
}
