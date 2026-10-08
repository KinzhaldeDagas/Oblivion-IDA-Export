int __thiscall sub_8AA660(_DWORD *this)
{
  unsigned int v1; // edx
  float v2; // ebp
  int v3; // esi
  float *v4; // eax
  int result; // eax
  float v6; // [esp+8h] [ebp-4h]

  v1 = 0; /*0x8aa660*/
  if ( *(this + 3) ) /*0x8aa665*/
  {
    v2 = kTerrainLODQuadRayDirectionZ; /*0x8aa678*/
    v3 = 0; /*0x8aa684*/
    v6 = 0.0 / fCostant_100; /*0x8aa686*/
    do /*0x8aa6b6*/
    {
      v4 = (float *)(v3 + *(this + 1)); /*0x8aa6a3*/
      *v4 = v2; /*0x8aa6a5*/
      v4[1] = v6; /*0x8aa6a7*/
      ++v1; /*0x8aa6aa*/
      v4[2] = v6; /*0x8aa6ad*/
      v3 += 0xC; /*0x8aa6b0*/
    }
    while ( v1 < *(this + 3) ); /*0x8aa6b6*/
    *(this + 3) = 0; /*0x8aa6bd*/
    *(this + 4) = 0; /*0x8aa6c0*/
    return 0; /*0x8aa6ba*/
  }
  else
  {
    *(this + 3) = 0; /*0x8aa6c8*/
    *(this + 4) = 0; /*0x8aa6cb*/
  }
  return result; /*0x8aa6c4*/
}
