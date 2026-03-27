void __thiscall Player_ModExperience(int *this, int a2, int a3, float a4)
{
  char GroupOffsetFromAV; // al
  float *TESSkillByCode; // esi
  int v8; // [esp+1Ch] [ebp+4h]

  GroupOffsetFromAV = ActorValue_GetGroupOffsetFromAV(2, a2);
  TESSkillByCode = (float *)TESDataHandler_GetTESSkillByCode((char *)TESDataHandler, GroupOffsetFromAV);
  v8 = SLODWORD(TESSkillByCode[a3 + 0xE]);
  if ( Actor_GetBaseCalcAVi(this, a2, (int)this, (int)TESSkillByCode, a2) < 0x64 )
  {
    if ( a4 != 0.0 )
      *(float *)&v8 = a4 * *(float *)&v8;
    if ( TESSkillByCode )
    {
      if ( *(float *)&v8 > 0.0 )
        Player_IncreaseSkillExperience_(
          (int)this,
          a2,
          (int)this,
          a4,
          *(float *)&v8,
          a2,
          *(float *)&v8,
          TESSkillByCode,
          0);
    }
  }
}
