char __thiscall sub_4407A0(TES *this, float *a2, _DWORD *a3)
{
  int v5; // edi
  int v6; // ebx
  TESObjectCELL *currentExteriorCell; // ecx
  signed int v8; // edi
  signed int v9; // ebx
  TESObjectCELL *v10; // ecx
  TESObjectCELL **v12; // eax
  int v13; // [esp+14h] [ebp+4h]

  v13 = (int)*a2; /*0x4407b8*/
  v5 = v13; /*0x4407bf*/
  v6 = (int)a2[1]; /*0x4407cf*/
  if ( !(v13 % 0x1000) && (double)v13 > *a2 ) /*0x4407f3*/
    v5 = v13 - 1; /*0x4407f5*/
  if ( !(v6 % 0x1000) && (double)(int)a2[1] > a2[1] ) /*0x44081a*/
    --v6; /*0x44081c*/
  currentExteriorCell = this->currentExteriorCell; /*0x44081f*/
  v8 = v5 >> 0xC; /*0x440822*/
  v9 = v6 >> 0xC; /*0x440825*/
  if ( !currentExteriorCell /*0x44083f*/
    || TESObjectCELL_GetXCoordinate(currentExteriorCell) != v8
    || TESObjectCELL_GetYCoordinate(this->currentExteriorCell) != v9 )
  {
    this->currentExteriorCell = (TESObjectCELL *)TES_GetCellFromCoords(this, v8, v9); /*0x44084a*/
  }
  v10 = this->currentExteriorCell; /*0x44084d*/
  if ( !v10 ) /*0x440852*/
    return 0; /*0x440857*/
  v12 = (TESObjectCELL **)sub_4CE3C0(v10); /*0x440866*/
  return sub_4C4790(v12, a2, a3); /*0x440856*/
}
