// Fog interior decode: reads TESObjectCELL::LightingData fogNear at lighting+0x0C when cell lighting is valid.
double __thiscall sub_4C9A20(int this)
{
  int v1; // eax

  if ( (*(_BYTE *)(this + 0x24) & 1) != 0 && (v1 = *(_DWORD *)(this + 0x3C)) != 0 ) /*0x4c9a2b*/
    return *(float *)(v1 + 0xC);                // Fog interior decode: load LightingData fogNear (+0x0C). /*0x4c9a2d*/
  else
    return 0.0; /*0x4c9a31*/
}
