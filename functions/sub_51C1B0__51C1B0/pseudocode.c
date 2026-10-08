// Initialize the fixed 0x34-byte CLAS DATA payload. Defaults: favored attributes Strength and Intelligence; specialization Combat (zeroed); majors Armorer, Athletics, Blade, Block, Blunt, HandToHand, and HeavyArmor. There is no minorSkills field.
void __thiscall TESClass_InitializeData(TESClass *this)
{
  AttributeActorValue *attributes; // ebp
  int v3; // esi
  SkillActorValue *majorSkills; // edi
  int AVFromGroupOffset; // eax

  attributes = this->members.attributes; /*0x51c1b8*/
  _memset((int)this->members.attributes, 0, 0x34u); /*0x51c1be*/
  v3 = 0; /*0x51c1c6*/
  majorSkills = this->members.majorSkills; /*0x51c1c8*/
  do /*0x51c1ee*/
  {
    AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(2, v3);// Seed majorSkills[0..6] by converting native skill offsets 0..6 to SkillActorValue 0x0C..0x12. /*0x51c1d3*/
    if ( (unsigned int)(AVFromGroupOffset - 0xC) <= 0x14 ) /*0x51c1e1*/
      *majorSkills = AVFromGroupOffset; /*0x51c1e3*/
    ++v3; /*0x51c1e5*/
    ++majorSkills; /*0x51c1e8*/
  }
  while ( v3 < 7 ); /*0x51c1ee*/
  *attributes = kAttribute_Strength;            // Default favored attribute 1 is Strength. /*0x51c1f2*/
  this->members.attributes[1] = kAttribute_Intelligence;// Default favored attribute 2 is Intelligence. /*0x51c1fa*/
  j_TESForm_InitializeComponents((TESForm *)this); /*0x51c204*/
}
