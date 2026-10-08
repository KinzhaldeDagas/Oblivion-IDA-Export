int __usercall ActiveEffect_Base_SaveAEList_::ReserveEffectCount@<eax>(
        double a1@<st0>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        _DWORD *a10,
        int a11)
{
  unsigned __int8 *bufferCursor; // ebp
  _UNKNOWN *retaddr; // [esp+Ch] [ebp+0h] BYREF

  bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x68df30*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &retaddr, 2u); /*0x68df34*/
  return ActiveEffect_Base_SaveAEList_::ProcessActvEffList(bufferCursor, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}
