double __thiscall sub_4A6A60(float *this, float *a2)
{
  float v3; // [esp+0h] [ebp-4h]
  float v4; // [esp+8h] [ebp+4h]

  if ( !a2 ) /*0x4a6a67*/
    return kTerrainLODQuadRayDirectionZ; /*0x4a6a69*/
  v3 = *this - *a2; /*0x4a6a77*/
  v4 = *(this + 1) - a2[1]; /*0x4a6a80*/
  return (float)(v4 * v4 + v3 * v3); /*0x4a6a70*/
}
