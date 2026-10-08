// Oblivion CLAS DATA validator: requires primary attributes to be distinct and each in 0..7, and requires pairwise uniqueness across exactly seven majorSkills entries. It does not range-check major skill AVs and does not validate specialization.
bool __thiscall TESClass_ValidateData(TESClass *this)
{
  AttributeActorValue v1; // edx
  AttributeActorValue v2; // esi
  bool result; // al
  int v4; // esi
  SkillActorValue *majorSkills; // edi
  int v6; // ecx
  _DWORD *v7; // edx

  v1 = this->members.attributes[0]; /*0x51c030*/
  v2 = this->members.attributes[1]; /*0x51c035*/
  result = v1 != v2; /*0x51c03f*/
  if ( v1 > kAttribute_Luck || v2 > kAttribute_Luck )// Only the two favored attributes are range-checked here (Strength..Luck, 0..7). /*0x51c049*/
    result = 0; /*0x51c04b*/
  v4 = 1; /*0x51c04d*/
  majorSkills = this->members.majorSkills; /*0x51c052*/
  do /*0x51c086*/
  {
    if ( !result ) /*0x51c057*/
      break; /*0x51c057*/
    v6 = v4; /*0x51c05c*/
    if ( v4 < 7 ) /*0x51c05e*/
    {
      v7 = majorSkills + 1;                     // Pairwise duplicate scan over majorSkills[0..6]; stored values themselves are not checked against SkillActorValue 0x0C..0x20. /*0x51c060*/
      do /*0x51c078*/
      {
        if ( !result ) /*0x51c065*/
          break; /*0x51c065*/
        if ( *v7 == *majorSkills ) /*0x51c06b*/
          result = 0; /*0x51c06d*/
        ++v6; /*0x51c06f*/
        ++v7; /*0x51c072*/
      }
      while ( v6 < 7 ); /*0x51c078*/
    }
    ++v4; /*0x51c07a*/
    ++majorSkills; /*0x51c080*/
  }
  while ( v4 - 1 < 7 ); /*0x51c086*/
  return result; /*0x51c088*/
}
