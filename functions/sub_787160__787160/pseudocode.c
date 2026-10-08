// CSpeedTreeRT::SetMinimumBudAngle. Writes CTreeEngine leaf-info field +0xB4 when the engine exists.
void __thiscall CSpeedTreeRT__SetMinimumBudAngle(OB_CSpeedTreeRT_010201A0 *this, float angle)
{
  if ( this->treeEngine ) /*0x787160*/
    *(float *)(this->treeEngine + 0xB4) = angle; /*0x78716a*/
}
