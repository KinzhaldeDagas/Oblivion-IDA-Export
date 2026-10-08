// Clear all 21 per-skill advance counters for both major and non-major skills. Raw skillExp[21], requiredSkillExp[21], lifetime skill-increase statistics, and majorSkillAdvances are separate and are not cleared here.
void __thiscall Player_ClearSkillAdvanceCounts(PlayerCharacter *this)
{
  this->skillAdv[0] = 0; /*0x65d562*/
  this->skillAdv[1] = 0; /*0x65d568*/
  this->skillAdv[2] = 0; /*0x65d56e*/
  this->skillAdv[3] = 0; /*0x65d574*/
  this->skillAdv[4] = 0; /*0x65d57a*/
  this->skillAdv[5] = 0; /*0x65d580*/
  this->skillAdv[6] = 0; /*0x65d586*/
  this->skillAdv[7] = 0; /*0x65d58c*/
  this->skillAdv[8] = 0; /*0x65d592*/
  this->skillAdv[9] = 0; /*0x65d598*/
  this->skillAdv[0xA] = 0; /*0x65d59e*/
  this->skillAdv[0xB] = 0; /*0x65d5a4*/
  this->skillAdv[0xC] = 0; /*0x65d5aa*/
  this->skillAdv[0xD] = 0; /*0x65d5b0*/
  this->skillAdv[0xE] = 0; /*0x65d5b6*/
  this->skillAdv[0xF] = 0; /*0x65d5bc*/
  this->skillAdv[0x10] = 0; /*0x65d5c2*/
  this->skillAdv[0x11] = 0; /*0x65d5c8*/
  this->skillAdv[0x12] = 0; /*0x65d5ce*/
  this->skillAdv[0x13] = 0; /*0x65d5d4*/
  this->skillAdv[0x14] = 0; /*0x65d5da*/
}
