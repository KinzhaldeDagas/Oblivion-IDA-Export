void __thiscall sub_5E0340(Actor *this, TESPackage **a2, int a3)
{
  float GameHour; // [esp+Ch] [ebp-4h]

  GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x5e034e*/
  sub_4686C0(this, a2, a3, GameHour); /*0x5e036a*/
  nullsub_3((int)a2, a3); /*0x5e0373*/
}
