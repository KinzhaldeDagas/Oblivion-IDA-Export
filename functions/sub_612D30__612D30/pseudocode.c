// Clears blocking-ally flag +0x15A when elapsed controller time exceeds duration +0x168.
void __thiscall CombatController_UpdateBlockingAllyTimer(int this)
{
  if ( *(_BYTE *)(this + 0x15A) ) /*0x612d30*/
  {
    if ( *(float *)(this + 0x168) < *(float *)(this + 0x44) - *(float *)(this + 0x164) ) /*0x612d4f*/
      *(_BYTE *)(this + 0x15A) = 0; /*0x612d51*/
  }
}
