void __usercall StatsMenu_MiscTab_HandleClick_::CalcSkillMasteryCounts(
        int a1@<ebx>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  int AVFromGroupOffset; // eax
  int SkillMasteryLevel; // eax
  char v16; // [esp+0h] [ebp-4h]

  do
  {
    AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(2, v16);
    SkillMasteryLevel = Actor_GetSkillMasteryLevel(AVFromGroupOffset);
    ++*(&a13 + SkillMasteryLevel);
    ++a1;
  }
  while ( a1 < 0x15 );
  JUMPOUT(0x5DAAB2);
}
