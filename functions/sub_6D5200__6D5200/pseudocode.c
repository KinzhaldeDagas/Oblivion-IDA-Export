void __thiscall sub_6D5200(NiTimeController *this, NiObjectNET *a2)
{
  float *v2; // eax

  v2 = *((float **)this + 0x14); /*0x6d5200*/
  v2[0xE] = 0.0; /*0x6d5205*/
  v2[0xF] = 0.0; /*0x6d5208*/
  v2[0x10] = 1.0; /*0x6d520d*/
  v2[0x11] = 1.0; /*0x6d5210*/
  NiTimeController::SetTarget(this, a2); /*0x6d5213*/
}
