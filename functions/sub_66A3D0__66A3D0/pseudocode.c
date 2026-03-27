void __userpurge sub_66A3D0(
        PlayerCharacter *a1@<ecx>,
        int a2@<ebx>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        float *a6)
{
  Player_SkillLevelIncrease(a1, a2, a3, a4, a5, a6, 1, 1);
  ++a1->trainingSessionsUsed;
  ++a1->miscStats[3];
}
