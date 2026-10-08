// Fog interior decode: reads TESObjectCELL::LightingData fogFar at lighting+0x10 when cell lighting is valid.
double __thiscall sub_4C9A40(int this)
{
  int v1; // eax

  if ( (*(_BYTE *)(this + 0x24) & 1) != 0 && (v1 = *(_DWORD *)(this + 0x3C)) != 0 ) /*0x4c9a4b*/
    return *(float *)(v1 + 0x10);               // Fog interior decode: load LightingData fogFar (+0x10). /*0x4c9a4d*/
  else
    return 0.0; /*0x4c9a51*/
}
