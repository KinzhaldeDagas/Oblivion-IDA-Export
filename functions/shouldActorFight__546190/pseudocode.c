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

  if ( aggressionStat > 0 ) /*0x546198*/
  {
    v9 = (double)aggressionStat * flt_B36778[0x38] + flt_B36778[0x36]; /*0x5461c4*/
    *(float *)&aggressionStata = flt_B36778[0x3C] * distanceToTarget + flt_B36778[0x3A]; /*0x5461d8*/
    if ( *(float *)&aggressionStata > 0.0 ) /*0x5461e7*/
      *(float *)&aggressionStata = 0.0; /*0x5461e9*/
    v8 = 0.0; /*0x5461f2*/
    if ( (!a7 || (double)responsibility * MEMORY[0xB36A58] < (double)friendlyFight?) /*0x54621d*/
      && a5
      && disposition < friendlyFight? )
    {
      v8 = (double)friendlyFight? * flt_B36778[0x40] + flt_B36778[0x3E]; /*0x54622f*/
    }
    v10 = (double)disposition * flt_B36778[0x34] + flt_B36778[0x32]; /*0x5461b0*/
    Double_To_SInt32(v9 + v10 + *(float *)&aggressionStata + v8); /*0x546241*/
  }
}
