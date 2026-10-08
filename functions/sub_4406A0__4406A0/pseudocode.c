char __thiscall sub_4406A0(TES *this, float *a2, float *a3, _DWORD *a4)
{
  int v5; // ebx
  int v6; // ebp
  TESObjectCELL *currentExteriorCell; // ecx
  signed int v8; // ebx
  signed int v9; // ebp
  TESObjectCELL *v10; // ecx
  TESObjectCELL **v11; // eax

  v5 = (int)*a2; /*0x4406be*/
  v6 = (int)a2[1]; /*0x4406ce*/
  if ( !(v5 % 0x1000) && (double)(int)*a2 > *a2 ) /*0x4406f1*/
    --v5; /*0x4406f3*/
  if ( !(v6 % 0x1000) && (double)(int)a2[1] > a2[1] ) /*0x440718*/
    --v6; /*0x44071a*/
  *a3 = g_zeroNiPoint3.x; /*0x440728*/
  a3[1] = g_zeroNiPoint3.y; /*0x440730*/
  a3[2] = 1.0; /*0x440733*/
  currentExteriorCell = this->currentExteriorCell; /*0x440736*/
  v8 = v5 >> 0xC; /*0x440739*/
  v9 = v6 >> 0xC; /*0x44073c*/
  if ( !currentExteriorCell /*0x440756*/
    || TESObjectCELL_GetXCoordinate(currentExteriorCell) != v8
    || TESObjectCELL_GetYCoordinate(this->currentExteriorCell) != v9 )
  {
    this->currentExteriorCell = (TESObjectCELL *)TES_GetCellFromCoords(this, v8, v9); /*0x440761*/
  }
  v10 = this->currentExteriorCell; /*0x440764*/
  if ( !v10 ) /*0x440769*/
    return 0; /*0x44078f*/
  v11 = (TESObjectCELL **)sub_4CE3C0(v10); /*0x440776*/
  return sub_4C3C00(v11, a2, (int)a3, a4); /*0x440782*/
}
