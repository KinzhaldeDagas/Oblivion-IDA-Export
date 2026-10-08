// Shader property LOD/alpha helper: update float +0x20 and reset dword +0x24 when crossing 1.0 threshold.
void __thiscall sub_7E2430(int this, float a2)
{
  if ( *(float *)(this + 0x20) >= 1.0 && a2 < 1.0 ) /*0x7e2447*/
  {
    *(_DWORD *)(this + 0x24) = 0; /*0x7e246d*/
    *(float *)(this + 0x20) = a2; /*0x7e2474*/
  }
  else if ( *(float *)(this + 0x20) >= 1.0 || a2 < 1.0 ) /*0x7e245c*/
  {
    *(float *)(this + 0x20) = a2; /*0x7e247c*/
  }
  else
  {
    *(_DWORD *)(this + 0x24) = 0; /*0x7e245e*/
    *(float *)(this + 0x20) = a2; /*0x7e2465*/
  }
}
