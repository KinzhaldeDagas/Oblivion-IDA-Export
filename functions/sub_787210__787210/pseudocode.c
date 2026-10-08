// CSpeedTreeRT::FreeLeafLODDataArrays. If leaf geometry exists, delegates to CLeafGeometry::FreeLODDataArrays.
void __thiscall CSpeedTreeRT__FreeLeafLODDataArrays(OB_CSpeedTreeRT_010201A0 *this)
{
  int leafGeometry; // ecx

  leafGeometry = this->leafGeometry; /*0x787210*/
  if ( leafGeometry ) /*0x787215*/
    OB_CLeafGeometry_FreeLODDataArrays_010201A0(leafGeometry); /*0x787217*/
}
