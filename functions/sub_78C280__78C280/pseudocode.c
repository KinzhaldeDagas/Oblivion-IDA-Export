// CSpeedTreeRT::GetLeafBillboardTable. Returns the leaf-geometry billboard table and writes its entry count through the caller output pointer.
const float *__thiscall CSpeedTreeRT__GetLeafBillboardTable(
        const OB_CSpeedTreeRT_010201A0 *this,
        unsigned int *entryCount)
{
  int v2; // esi
  int leafGeometry; // ecx
  _DWORD v5[24]; // [esp+0h] [ebp-60h] BYREF

  v5[0x14] = v5; /*0x78c2a8*/
  leafGeometry = this->leafGeometry; /*0x78c2ab*/
  v5[0x13] = 0; /*0x78c2b0*/
  v5[0x17] = 0; /*0x78c2b3*/
  return (const float *)OB_CLeafGeometry_GetLeafBillboardTable_010201A0(leafGeometry, v2, (int *)entryCount); /*0x78c2c5*/
}
