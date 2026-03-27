void __thiscall sub_6D5200(NiTimeController *this, NiObjectNET *a2)
{
  float *v2; // eax

  v2 = *((float **)this + 0x14);
  v2[0xE] = 0.0;
  v2[0xF] = 0.0;
  v2[0x10] = 1.0;
  v2[0x11] = 1.0;
  NiTimeController::SetTarget(this, a2);
}
