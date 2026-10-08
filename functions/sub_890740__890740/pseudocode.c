// Fall timer update: +0x324 always accumulates frame time; +0x320 accumulates only while downward velocity exceeds threshold and flags 0x100/0x200 are clear. Slowfall must suppress +0x320 for softened falls.
void __thiscall sub_890740(int this)
{
  int v1; // eax

  *(float *)(this + 0x324) = *(float *)(this + 0x324) + *(float *)(this + 0x2D8); /*0x89074c*/
  if ( flt_B2E778 > -*(float *)(this + 0x2E8) /*0x89077e*/
    || (v1 = *(_DWORD *)(this + 0x1F4), (v1 & 0x100) != 0)
    || (v1 & 0x200) != 0 )                      // Downward-speed threshold for accumulating fall timer uses flt_B2E778 (0x442F0000 = 700.0), not the registered fJumpFallVelocityMin global at flt_B37470. Treat B2E778 as the observed authoritative timer threshold.
  {
    *(float *)(this + 0x320) = 0.0; /*0x890795*/
  }
  else
  {
    *(float *)(this + 0x320) = *(float *)(this + 0x320) + *(float *)(this + 0x2D8); /*0x89078c*/
  }
}
