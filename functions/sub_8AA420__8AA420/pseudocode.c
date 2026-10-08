void __thiscall sub_8AA420(int this, int a2)
{
  double v2; // st7

  if ( (*(_BYTE *)(this + 9) & 1) != 0 && *(float *)(this + 0x58) >= 0.0 ) /*0x8aa430*/
  {
    *(float *)(a2 + 0x14) = *(float *)(this + 0x58); /*0x8aa439*/
    *(float *)(a2 + 0x18) = *(float *)(this + 0x5C); /*0x8aa43f*/
    v2 = kTerrainLODQuadRayDirectionZ; /*0x8aa442*/
    *(float *)(this + 0x5C) = kTerrainLODQuadRayDirectionZ; /*0x8aa448*/
    *(float *)(this + 0x58) = v2; /*0x8aa44b*/
  }
}
