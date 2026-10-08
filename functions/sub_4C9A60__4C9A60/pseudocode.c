// Fog interior decode: reads LightingData fogClipDistance at lighting+0x20; also feeds GetFarPlane interior far-plane selection.
double __thiscall sub_4C9A60(int this)
{
  int v1; // eax

  if ( (*(_BYTE *)(this + 0x24) & 1) != 0 && (v1 = *(_DWORD *)(this + 0x3C)) != 0 ) /*0x4c9a6b*/
    return *(float *)(v1 + 0x20);               // Fog interior decode: load LightingData fogClipDistance (+0x20). /*0x4c9a6d*/
  else
    return 0.0; /*0x4c9a71*/
}
