int __thiscall sub_440880(TES *this, float *a2)
{
  int v4; // edi
  int v5; // ebx
  TESObjectCELL *currentExteriorCell; // ecx
  signed int v7; // edi
  signed int v8; // ebx
  TESObjectCELL *v9; // ecx
  TESObjectCELL *v10; // ecx
  UInt8 cellProcessLevel; // al
  TESObjectCELL **v12; // eax
  int v14; // [esp+14h] [ebp+4h]

  v14 = (int)*a2; /*0x440898*/
  v4 = v14; /*0x44089f*/
  v5 = (int)a2[1]; /*0x4408af*/
  if ( !(v14 % 0x1000) && (double)v14 > *a2 ) /*0x4408d3*/
    v4 = v14 - 1; /*0x4408d5*/
  if ( !(v5 % 0x1000) && (double)(int)a2[1] > a2[1] ) /*0x4408fa*/
    --v5; /*0x4408fc*/
  currentExteriorCell = this->currentExteriorCell; /*0x4408ff*/
  v7 = v4 >> 0xC; /*0x440902*/
  v8 = v5 >> 0xC; /*0x440905*/
  if ( !currentExteriorCell /*0x44091f*/
    || TESObjectCELL_GetXCoordinate(currentExteriorCell) != v7
    || TESObjectCELL_GetYCoordinate(this->currentExteriorCell) != v8 )
  {
    this->currentExteriorCell = (TESObjectCELL *)TES_GetCellFromCoords(this, v7, v8); /*0x44092a*/
  }
  v9 = this->currentExteriorCell; /*0x44092d*/
  if ( !v9 ) /*0x440932*/
    return 0; /*0x440932*/
  if ( TESObjectCELL_IsInterior(v9) ) /*0x440934*/
    return 0; /*0x440934*/
  v10 = this->currentExteriorCell; /*0x44093d*/
  cellProcessLevel = v10->members.cellProcessLevel; /*0x440940*/
  if ( cellProcessLevel != 3 && cellProcessLevel != 6 ) /*0x440949*/
    return 0; /*0x440965*/
  v12 = (TESObjectCELL **)sub_4CE3C0(v10); /*0x44094c*/
  return sub_4C5AF0(v12, a2); /*0x44095a*/
}
