int __cdecl ActiveEffect_Base_SaveAEList_::ReserveEffectCount(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  size_t v11; // [esp-4h] [ebp-10h]
  _UNKNOWN *retaddr; // [esp+Ch] [ebp+0h] BYREF

  LODWORD(v11) = 2;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &retaddr, v11);
  return ActiveEffect_Base_SaveAEList_::ProcessActvEffList(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}
