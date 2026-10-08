// CSpeedTreeRT::GetGeometry bit-vector dispatcher. Live Oblivion xrefs call it only at 0x5617D2/0x561A52 with branch bit 0x01 and 0x562744 with leaf bit 0x04; no stock caller requests frond bit 0x02 or billboard bit 0x08.
void __userpurge CSpeedTreeRT__GetGeometry(
        OB_CSpeedTreeRT_010201A0 *this@<ecx>,
        OB_SpeedTreeGeometryOutput_010201A0 *Src,
        unsigned int geometryFlags,
        rsize_t MaxCount,
        rsize_t leafLod,
        int a6)
{
  _DWORD v7[23]; // [esp+0h] [ebp-5Ch] BYREF

  v7[0x13] = v7; /*0x78c718*/
  v7[0x16] = 0; /*0x78c726*/
  if ( (geometryFlags & 1) != 0 ) /*0x78c72d*/
    CSpeedTreeRT__GetBranchGeometry(this, Src, MaxCount); /*0x78c734*/
  if ( (geometryFlags & 2) != 0 ) /*0x78c73c*/
    CSpeedTreeRT__GetFrondGeometry(this, Src, SWORD2(MaxCount)); /*0x78c745*/
  if ( (geometryFlags & 4) != 0 ) /*0x78c74d*/
    CSpeedTreeRT__GetLeafGeometry(this, Src, leafLod);// Leaf dispatcher forwards the caller's leafLod unchanged to OB_CSpeedTreeRT_ExportLeafGeometry. Stock 0x562744 and plugin fallback both pass explicit 0..lodCount-1 indices. /*0x78c756*/
  if ( (geometryFlags & 8) != 0 ) /*0x78c75e*/
  {
    if ( !this->flag360Billboard || (geometryFlags & 0x10) != 0 ) /*0x78c771*/
      CSpeedTreeRT__GetSimpleBillboardGeometry(this, Src); /*0x78c846*/
    else
      CSpeedTreeRT__Get360BillboardGeometry(this, Src, geometryFlags); /*0x78c77b*/
  }
}
