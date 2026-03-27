int __userpurge Player_IncreaseSkillExperience_@<eax>(
        int a1@<ecx>,
        char bl0@<bl>,
        int a3@<edi>,
        double a4@<st2>,
        double a5@<st1>,
        int a2,
        float a7,
        float *a8,
        char a9)
{
  int result; // eax
  float *TESSkillByCode; // edi
  char v13; // al
  double v14; // st7
  char GroupOffsetFromAV; // al
  int a2a; // [esp+20h] [ebp+4h]
  float a2b; // [esp+20h] [ebp+4h]

  result = Actor_GetBaseCalcAVi((int *)a1, bl0, a3, a1, a2);
  if ( result < 0x64 )
  {
    TESSkillByCode = a8;
    if ( a8
      || (v13 = ActorValue_GetGroupOffsetFromAV(2, a2),
          (TESSkillByCode = (float *)TESDataHandler_GetTESSkillByCode((char *)TESDataHandler, v13)) != 0) )
    {
      *(float *)&a2a = 0.0;
      if ( (unsigned int)(a2 - 0xC) <= 0x14 )
        a2a = *(int *)(a1 + 4 * ActorValue_GetGroupOffsetFromAV(2, a2) + 0x130);
      a2b = *(float *)&a2a + a7;
      sub_65FA40((float *)a1, a2, a2b);
      v14 = sub_65FAD0((Actor *)a1, (int)TESSkillByCode);
      if ( v14 < a2b )
        Player_SkillLevelIncrease((PlayerCharacter *)a1, a9, a4, a5, v14, TESSkillByCode, 0, a9 == 0);
      if ( *(_BYTE *)(a1 + 0x6E5) )
      {
        if ( !a9 )
        {
          GroupOffsetFromAV = ActorValue_GetGroupOffsetFromAV(2, a2);
          *(float *)(*(_DWORD *)(a1 + 0x5B0) + 4 * GroupOffsetFromAV) = *(float *)(*(_DWORD *)(a1 + 0x5B0)
                                                                                 + 4 * GroupOffsetFromAV)
                                                                      + a7;
        }
      }
    }
    return sub_57A6F0(a2);
  }
  return result;
}
