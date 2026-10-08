_DWORD *__thiscall sub_5B2190(_DWORD *this, int a2)
{
  float v4; // [esp+8h] [ebp+4h]

  *this = a2; /*0x5b2199*/
  if ( !a2 || (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 0xC) + 0x1C) + 0x58) & 0x100) != 0 ) /*0x5b21ac*/
  {
    *(this + 1) = Double_To_SInt32(kTerrainLODQuadRayDirectionZ); /*0x5b21e4*/
    return this; /*0x5b21e7*/
  }
  else
  {
    v4 = fabs(*(float *)(a2 + 0x18)); /*0x5b21b3*/
    *(this + 1) = Double_To_SInt32(v4); /*0x5b21c8*/
    return this; /*0x5b21cb*/
  }
}
