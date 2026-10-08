// Skill-use requirement recalculation evaluates the curve with the raw skill level, including level 0; only an exactly-zero computed result is replaced with 1.
int __thiscall Player_RecalculateRequiredSkillExperience(PlayerCharacter *this, SkillActorValue actorValue)
{
  int result; // eax
  signed __int8 GroupOffsetFromAV; // al
  TESSkill_RecordView *skill; // esi
  UInt32 BaseCalcAVi; // ebp
  SkillSpecialization specialization; // ebx
  TESForm::ModReferenceList *BaseClass; // eax
  UInt32 DwordAtOffset40; // eax
  TESClass *v10; // eax
  SkillActorValue v11; // [esp-10h] [ebp-1Ch]
  bool specializationSkill; // [esp+4h] [ebp-8h]
  int v13; // [esp+8h] [ebp-4h]
  bool actorValuea; // [esp+10h] [ebp+4h]
  float actorValueb; // [esp+10h] [ebp+4h]

  result = actorValue; /*0x663c50*/
  if ( (unsigned int)(actorValue - 0xC) <= 0x14 ) /*0x663c60*/
  {
    GroupOffsetFromAV = ActorValue_GetGroupOffsetFromAV(2, actorValue); /*0x663c6b*/
    v13 = GroupOffsetFromAV; /*0x663c7d*/
    result = (int)TESDataHandler_GetTESSkillByCode((void *)g_TESDataHandler, GroupOffsetFromAV); /*0x663c81*/
    skill = (TESSkill_RecordView *)result; /*0x663c86*/
    if ( result ) /*0x663c8c*/
    {
      BaseCalcAVi = Actor_GetBaseCalcAVi((int *)this, 0, (int)this, result, *(_DWORD *)(result + 0x2C)); /*0x663ca0*/
      specializationSkill = 0; /*0x663ca2*/
      actorValuea = 0; /*0x663ca6*/
      if ( Actor_GetBaseClass((Actor *)this)[1].next != (TESForm::ModReferenceList *)g_iClassCharactergenClass.value ) /*0x663cb8*/
      {
        specialization = skill->data.specialization;// Read TESSkill_Data::specialization at TESSkill+0x34 for the independent specialization-speed comparison. /*0x663cba*/
        BaseClass = Actor_GetBaseClass((Actor *)this); /*0x663cbf*/
        DwordAtOffset40 = Shared_GetDwordAtOffset40(BaseClass);// TESClass call context: read TESClass::specialization at +0x40 through the linker-shared dword accessor, then compare it with TESSkill::specialization at +0x34. /*0x663cc6*/
        v11 = skill->data.actorValue; /*0x663cd3*/
        specializationSkill = DwordAtOffset40 == specialization; /*0x663cd6*/
        v10 = (TESClass *)Actor_GetBaseClass((Actor *)this); /*0x663cda*/
        actorValuea = TESClass_IsMajorSkillAV(v10, v11);// The sole required-use membership split is TESClass_IsMajorSkillAV: true selects g_fSkillUseMajorMult, false selects g_fSkillUseMinorMult. The chargen placeholder class bypass also leaves both flags false. /*0x663ce6*/
      }
      actorValueb = Calc_RequiredSkillUseExperience(BaseCalcAVi, specializationSkill, actorValuea);// Required use = pow(baseSkillValue * g_fSkillUseFactor, g_fSkillUseExp) * (specializationMatch ? g_fSkillUseSpecMult : 1) * (majorMatch ? g_fSkillUseMajorMult : g_fSkillUseMinorMult). Native defaults: 1.0, 1.0, 0.75, 0.75, 1.25. /*0x663cfa*/
      if ( 0.0 == actorValueb ) /*0x663d0d*/
        actorValueb = 1.0; /*0x663d11*/
      this->requiredSkillExp[v13] = actorValueb; /*0x663d1d*/
      return v13; /*0x663d19*/
    }
  }
  return result; /*0x663d26*/
}
