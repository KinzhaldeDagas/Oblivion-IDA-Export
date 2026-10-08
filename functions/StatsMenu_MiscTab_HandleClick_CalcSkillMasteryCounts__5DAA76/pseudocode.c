// Count all 21 native player skills into five SkillMasteryLevel buckets for the Stats menu. Major/non-major membership is not consulted.
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
  SkillActorValue AVFromGroupOffset; // eax
  SkillMasteryLevel SkillMasteryLevel; // eax
  char v16; // [esp+0h] [ebp-4h]

  do /*0x5daa9c*/
  {
    AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(2, v16); /*0x5daa79*/
    SkillMasteryLevel = Actor_GetSkillMasteryLevel((Actor *)reference, AVFromGroupOffset); /*0x5daa88*/
    ++*(&a13 + SkillMasteryLevel); /*0x5daa8d*/
    ++a1; /*0x5daa96*/
  }
  while ( a1 < 0x15 );                          // Finish counting the fixed 21 native skills into the five mastery buckets used by the Stats menu. /*0x5daa9c*/
  JUMPOUT(0x5DAAB2); /*0x5daab2*/
}
