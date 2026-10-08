int __thiscall sub_8AA7F0(float *this)
{
  int result; // eax
  double v3; // st7

  result = sub_8AA660((_DWORD *)this + 0x10); /*0x8aa7f6*/
  v3 = kTerrainLODQuadRayDirectionZ; /*0x8aa7fb*/
  *(this + 0x17) = kTerrainLODQuadRayDirectionZ; /*0x8aa801*/
  *(this + 0x18) = 0.0; /*0x8aa804*/
  *(this + 0x16) = v3; /*0x8aa80b*/
  return result; /*0x8aa80e*/
}
