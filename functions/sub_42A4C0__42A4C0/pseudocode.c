// Verified 0x18-byte Oblivion ExtraDistantData: EType byte +4 is 0x18, next pointer +8, and normal_00C occupies +0x0C..+0x17. The constructor's default normal is (0,0,0.97); this matches Fallout's LandNormal offset +0x0C and default vector, while the EType differs (Oblivion 0x18, Fallout 0x13).
ExtraDistantData_Oblivion_018Verified *__thiscall ExtraDistantData_ctor(ExtraDistantData_Oblivion_018Verified *this)
{
  this->extraType_004 = 0x18; /*0x42a4ca*/
  this->normal_00C.x = 0.0; /*0x42a4df*/
  this->normal_00C.y = 0.0; /*0x42a4ea*/
  this->next_008 = 0; /*0x42a4ed*/
  this->vtable = &ExtraDistantData::`vftable'; /*0x42a4f4*/
  this->normal_00C.z = 0.97000003;              // Verified initializes ExtraDistantData.normal_00C.z at +0x14 to 0.97; this is the default +Z normal component, not a separate unknown scalar. /*0x42a4fa*/
  return this; /*0x42a4fd*/
}
