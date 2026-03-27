void __cdecl shouldActorFight(
        int disposition,
        int friendlyFight?,
        int aggressionStat,
        float distanceToTarget,
        bool a5,
        int a6,
        bool a7,
        int responsibility)
{
  float v8; // [esp+0h] [ebp-Ch]
  float v9; // [esp+4h] [ebp-8h]
  float v10; // [esp+8h] [ebp-4h]
  int aggressionStata; // [esp+18h] [ebp+Ch]

  if ( aggressionStat > 0 )
  {
    v9 = (double)aggressionStat * fFightAggrMult + fFightAggrBase;
    *(float *)&aggressionStata = fFightDistanceMult * distanceToTarget + fFightDistanceBase;
    if ( *(float *)&aggressionStata > 0.0 )
      *(float *)&aggressionStata = 0.0;
    v8 = 0.0;
    if ( (!a7 || (double)responsibility * fCrimeAlarmRespMult < (double)friendlyFight?)
      && a5
      && disposition < friendlyFight? )
    {
      v8 = (double)friendlyFight? * fFightFriendDispMult + fFightFriendDispBase;
    }
    v10 = (double)disposition * fFightDispMult + fFightDispBase;
    Double_To_SInt32(v9 + v10 + *(float *)&aggressionStata + v8);
  }
}
