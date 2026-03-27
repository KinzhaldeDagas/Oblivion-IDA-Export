int __thiscall sub_5E0340(Actor *this, int a2, int a3)
{
  float GameHour; // [esp+Ch] [ebp-4h]

  GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
  sub_4686C0(this, a2, a3, GameHour);
  return nullsub_3(a2, a3);
}
