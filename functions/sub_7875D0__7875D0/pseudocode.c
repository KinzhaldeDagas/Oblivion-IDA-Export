// Sets up stock horizontal billboard coordinates after Compute updates extents/tree sizes.
void __thiscall CSpeedTreeRT__SetupHorizontalBillboard(OB_CSpeedTreeRT_010201A0 *this)
{
  OB_STreeExtents_010201A0 *treeSizeBounds; // eax
  float v2; // [esp+0h] [ebp-1Ch]
  float v3; // [esp+4h] [ebp-18h]
  float v4; // [esp+8h] [ebp-14h]
  float x; // [esp+10h] [ebp-Ch]
  float y; // [esp+14h] [ebp-8h]

  if ( this->flagHorizontalBillboard ) /*0x7875d3*/
  {
    treeSizeBounds = this->treeSizeBounds; /*0x7875dd*/
    x = treeSizeBounds->min.x; /*0x7875e2*/
    y = treeSizeBounds->min.y; /*0x7875e9*/
    v3 = treeSizeBounds->max.x; /*0x7875f7*/
    v4 = treeSizeBounds->max.y; /*0x7875fe*/
    v2 = (treeSizeBounds->max.z + treeSizeBounds->min.z) * dbl_A2FAA0; /*0x787617*/
    this->horizontalBillboardCoords12[0] = v3; /*0x78761e*/
    this->horizontalBillboardCoords12[1] = v4; /*0x787625*/
    this->horizontalBillboardCoords12[2] = v2; /*0x78762b*/
    this->horizontalBillboardCoords12[3] = x; /*0x787632*/
    this->horizontalBillboardCoords12[4] = v4; /*0x787637*/
    this->horizontalBillboardCoords12[5] = v2; /*0x78763d*/
    this->horizontalBillboardCoords12[6] = x; /*0x787645*/
    this->horizontalBillboardCoords12[7] = y; /*0x78764f*/
    this->horizontalBillboardCoords12[8] = v2; /*0x787657*/
    this->horizontalBillboardCoords12[9] = v3; /*0x78765f*/
    this->horizontalBillboardCoords12[0xA] = y; /*0x787665*/
    this->horizontalBillboardCoords12[0xB] = v2; /*0x78766b*/
  }
}
