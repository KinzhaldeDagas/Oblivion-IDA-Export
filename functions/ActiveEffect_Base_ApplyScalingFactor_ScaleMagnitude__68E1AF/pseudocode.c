// positive sp value has been detected, the output may be wrong!
void __userpurge ActiveEffect_Base_ApplyScalingFactor_::ScaleMagnitude(int a1@<esi>, double a2@<st0>, int a3)
{
  float v3; // [esp+8h] [ebp+4h]
  float v4; // [esp+8h] [ebp+4h]

  v3 = a2 * *(float *)(a1 + 0x18);
  v4 = FloatFloor(v3);
  if ( v4 < 1.0 )
    v4 = 1.0;
  *(float *)(a1 + 0x18) = v4;
}
