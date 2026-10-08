double __thiscall sub_4A6D20(float *this, float *a2)
{
  float v3; // [esp+0h] [ebp-4h]
  float v4; // [esp+8h] [ebp+4h]
  float v5; // [esp+8h] [ebp+4h]

  if ( !a2 ) /*0x4a6d27*/
    return kTerrainLODQuadRayDirectionZ; /*0x4a6d29*/
  v3 = *this - *a2; /*0x4a6d37*/
  v4 = *(this + 1) - a2[1]; /*0x4a6d40*/
  v5 = v4 * v4 + v3 * v3; /*0x4a6d53*/
  return (float)sqrt(v5); /*0x4a6d30*/
}
