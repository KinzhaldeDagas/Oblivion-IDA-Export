void __usercall sub_66C200(PlayerCharacter *a1@<ecx>, unsigned int a2@<ebx>)
{
  int i; // edi
  int AVFromGroupOffset; // eax
  int j; // edi
  double v6; // st7
  double v7; // st6
  char GroupOffsetFromAV; // al
  char *TESSkillByCode; // ebp
  double v10; // st7
  int v11; // eax
  float v12; // [esp+10h] [ebp-Ch]
  float v13; // [esp+14h] [ebp-8h]
  float v14; // [esp+14h] [ebp-8h]
  float v15; // [esp+18h] [ebp-4h]
  float v16; // [esp+18h] [ebp-4h]
  float v17; // [esp+18h] [ebp-4h]

  a1->miscStats[2] = 0;
  sub_65FBB0((unsigned int **)a1);
  for ( i = 0; i < 0x15; ++i )
  {
    AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(2, i);
    sub_663C50((Actor *)a1, *(float *)&AVFromGroupOffset);
  }
  sub_668030(a1);
  a1->unk5B8 = 0;
  a1->unk5BA = 0;
  for ( j = 0xC; j < 0x21; ++j )
  {
    v6 = 0.0;
    v7 = a1->unk5B0->unk[ActorValue_GetGroupOffsetFromAV(2, j)];
    if ( v7 > 0.0 )
    {
      do
      {
        if ( v7 <= 1.0 )
        {
          v15 = v7;
        }
        else
        {
          v15 = 1.0;
          v6 = v7 - dbl_A2F928;
        }
        v12 = v6;
        if ( Actor_GetBaseCalcAVi((int *)a1, a2, j, (int)a1, j) < 0x64 )
        {
          GroupOffsetFromAV = ActorValue_GetGroupOffsetFromAV(2, j);
          TESSkillByCode = TESDataHandler_GetTESSkillByCode((char *)TESDataHandler, GroupOffsetFromAV);
          if ( TESSkillByCode )
          {
            v10 = 0.0;
            a2 = j - 0xC;
            v13 = 0.0;
            if ( (unsigned int)(j - 0xC) <= 0x14 )
            {
              v13 = a1->skillExp[ActorValue_GetGroupOffsetFromAV(2, j)];
              v10 = 0.0;
            }
            v14 = v13 + v15;
            v16 = v14;
            if ( v14 < v10 )
              v16 = v10;
            if ( a2 <= 0x14 )
              a1->skillExp[ActorValue_GetGroupOffsetFromAV(2, j)] = v16;
            v17 = 1.0;
            if ( Actor_GetBaseClass((Actor *)a1) )
            {
              v11 = *((_DWORD *)TESSkillByCode + 0xB);
              v17 = 1.0;
              if ( (unsigned int)(v11 - 0xC) <= 0x14 )
                v17 = a1->requiredSkillExp[ActorValue_GetGroupOffsetFromAV(2, v11)];
            }
            if ( v17 < (double)v14 )
              Player_SkillLevelIncrease(a1, a2, 1.0, v17, v14, (float *)TESSkillByCode, 0, 0);
          }
          sub_57A6F0(j);
        }
        v6 = 0.0;
        v7 = v12;
      }
      while ( v12 > 0.0 );
    }
  }
}
