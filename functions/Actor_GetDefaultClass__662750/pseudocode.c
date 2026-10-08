// Resolve Oblivion's default/recommended class. If the actor already has a non-sentinel class, return it. Otherwise classify all 21 deferred chargen skill-use totals by TESSkill specialization, normalize the three shares to seven implied major slots, and select/cache a preset class.
TESClass *__thiscall Player_GetDefaultClassRecommendation(PlayerCharacter *this)
{
  int i; // esi
  TESSkill_RecordView *skill; // ecx
  double v4; // st7
  SkillSpecialization specialization; // eax
  __int32 v6; // eax
  double v7; // st5
  double v8; // st2
  int combatMajorSlots; // edi
  int magicMajorSlots; // ebp
  int v11; // ecx
  int v12; // eax
  int stealthMajorSlots; // esi
  TESClass *v14; // eax
  float v15; // edx
  TESClass *result; // eax
  float magicUse; // [esp+4h] [ebp-10h]
  float combatUse; // [esp+8h] [ebp-Ch]
  float stealthUse; // [esp+Ch] [ebp-8h]
  float v20; // [esp+10h] [ebp-4h]
  float v21; // [esp+10h] [ebp-4h]
  float v22; // [esp+10h] [ebp-4h]

  if ( (TESForm::ModReferenceList *)g_iClassCharactergenClass.value != Actor_GetBaseClass((Actor *)this)[1].next ) /*0x662764*/
    return (TESClass *)Actor_GetDefaultClass_::Return_CurrentClass((int)this);// A non-sentinel current class is already authoritative; skip recommendation scoring and return that TESClass. /*0x662764*/
  combatUse = 0.0; /*0x66276d*/
  magicUse = 0.0; /*0x662772*/
  stealthUse = 0.0; /*0x662777*/
  for ( i = 0; i < 0x15; ++i )                  // Scan exactly 21 deferred chargen skill-use floats at PlayerCharacter+0x5B0, one per native TESSkill index. /*0x66277b*/
  {
    skill = TESDataHandler_GetTESSkillByCode(g_TESDataHandler, i); /*0x662795*/
    v20 = this->deferredCharGenSkillUsage->progress[i]; /*0x662799*/
    if ( skill ) /*0x66279d*/
    {
      v4 = v20; /*0x6627a9*/
      if ( v20 > 0.0 ) /*0x6627ae*/
      {
        specialization = skill->data.specialization;// Bucket each positive deferred use value by TESSkill_Data::specialization: 0 Combat, 1 Magic, 2 Stealth. Major membership is unavailable and is not consulted here. /*0x6627b0*/
        if ( specialization ) /*0x6627b6*/
        {
          v6 = specialization - 1; /*0x6627b8*/
          if ( v6 ) /*0x6627bb*/
          {
            if ( v6 == 1 ) /*0x6627c0*/
              stealthUse = v4 + stealthUse; /*0x6627c6*/
          }
          else
          {
            magicUse = v4 + magicUse; /*0x6627d0*/
          }
        }
        else
        {
          combatUse = v4 + combatUse; /*0x6627da*/
        }
      }
    }
  }
  v7 = dbl_A49318; /*0x662816*/
  Double_To_SInt32(magicUse); /*0x662822*/
  v8 = dbl_A2FAA0; /*0x662831*/
  combatMajorSlots = Double_To_SInt32(magicUse); /*0x66285e*/
  Double_To_SInt32(v8); /*0x66286e*/
  magicMajorSlots = Double_To_SInt32(v8); /*0x6628a0*/
  v11 = Double_To_SInt32(v8); /*0x6628b3*/
  v21 = magicUse + combatUse + stealthUse;      // Normalize Combat/Magic/Stealth usage shares to a total of seven slots (the TESClass major count) and round each share to the nearest integer using 0.5. /*0x662802*/
  v22 = stealthUse / v21 * v7; /*0x6628a4*/
  v12 = Double_To_SInt32((double)((v22 - (double)v11 >= v8) + v11)); /*0x6628d9*/
  stealthMajorSlots = v12;                      // Pure 7-slot distributions select the corresponding specialization-pure preset; mixed distributions continue through the native preset-class decision table. /*0x6628e1*/
  if ( combatMajorSlots >= 7 || magicMajorSlots >= 7 ) /*0x6628f3*/
    JUMPOUT(0x662A2D); /*0x662a2d*/
  if ( v12 >= 7 ) /*0x662904*/
    JUMPOUT(0x662A2C); /*0x662a2c*/
  switch ( combatMajorSlots ) /*0x662919*/
  {                                             // Select a preset TESClass from the rounded seven-slot Combat/Magic/Stealth distribution. This is recommendation logic, not construction of a new majorSkills array.
    case 3: /*0x662919*/
      if ( magicMajorSlots != 2 || v12 != 2 ) /*0x66295b*/
        goto Actor_GetDefaultClass___def_662919; /*0x66295b*/
      v15 = MEMORY[0xB37A58][0x9A]; /*0x66295d*/
      goto LABEL_26; /*0x66295d*/
    case 4: /*0x662919*/
      if ( v12 == 2 ) /*0x662941*/
        v14 = (TESClass *)TESDataHandler_LookupTESClassByFormID((void *)LODWORD(MEMORY[0xB37A58][0x96])); /*0x662949*/
      else
        v14 = (TESClass *)TESDataHandler_LookupTESClassByFormID((void *)LODWORD(MEMORY[0xB37A58][0x98])); /*0x662952*/
      goto LABEL_27; /*0x662949*/
    case 5: /*0x662919*/
      if ( magicMajorSlots == 2 ) /*0x66292b*/
      {
        v14 = (TESClass *)TESDataHandler_LookupTESClassByFormID((void *)LODWORD(MEMORY[0xB37A58][0x94])); /*0x662934*/
      }
      else
      {
        v15 = MEMORY[0xB37A58][0x84]; /*0x662936*/
LABEL_26:
        v14 = (TESClass *)TESDataHandler_LookupTESClassByFormID((void *)LODWORD(v15)); /*0x662963*/
      }
LABEL_27:
      this->recommendedClass = v14;             // Cache the selected recommended TESClass at PlayerCharacter+0x650. /*0x66296f*/
      result = (TESClass *)Actor_GetDefaultClass_::def_662919( /*0x662970*/
                             (int)this,
                             magicMajorSlots,
                             combatMajorSlots,
                             stealthMajorSlots);
      break; /*0x662970*/
    case 6: /*0x662919*/
      v14 = (TESClass *)TESDataHandler_LookupTESClassByFormID((void *)LODWORD(MEMORY[0xB37A58][0x92])); /*0x662926*/
      goto LABEL_27; /*0x662926*/
    default:
Actor_GetDefaultClass___def_662919:
      JUMPOUT(0x662975); /*0x662975*/
  }
  return result;
}
