// Samples a BSAnimGroupSequence only while native controller state +0x44 is 1, 2, or 3. Passes sequence +0x48 plus ActorAnimData scheduler time +0x94 to NiControllerSequence_AdvanceTime with commit enabled.
double __thiscall BSAnimGroupSequence_SampleUpdate(int this, float a2)
{
  float v3; // [esp+Ch] [ebp+4h]

  if ( (unsigned int)(*(_DWORD *)(this + 0x44) - 1) > 2 ) /*0x49f4a9*/
    return 0.0; /*0x49f4c8*/
  v3 = *(float *)(this + 0x48) + a2; /*0x49f4b5*/
  return NiControllerSequence_AdvanceTime(this, v3, 1); /*0x49f4c5*/
}
