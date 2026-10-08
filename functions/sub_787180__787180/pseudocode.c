// CSpeedTreeRT::SetMaximumBudAngle. Writes CTreeEngine leaf-info field +0xB8 when the engine exists.
void __thiscall CSpeedTreeRT__SetMaximumBudAngle(OB_CSpeedTreeRT_010201A0 *this, float angle)
{
  if ( this->treeEngine ) /*0x787180*/
    *(float *)(this->treeEngine + 0xB8) = angle; /*0x78718a*/
}
