// positive sp value has been detected, the output may be wrong!
void __userpurge ActiveEffect_Base_ApplyScalingFactor_::ScaleDuration(int a1@<esi>, double a2@<st0>, int a3)
{
  *(float *)(a1 + 0x1C) = a2 * *(float *)(a1 + 0x1C);
}
