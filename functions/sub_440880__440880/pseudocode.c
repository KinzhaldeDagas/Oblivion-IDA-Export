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
  TESObjectLAND *v12; // eax
  int v14; // [esp+14h] [ebp+4h]

  v14 = (int)*a2;
  v4 = v14;
  v5 = (int)a2[1];
  if ( !(v14 % 0x1000) && (double)v14 > *a2 )
    v4 = v14 - 1;
  if ( !(v5 % 0x1000) && (double)(int)a2[1] > a2[1] )
    --v5;
  currentExteriorCell = this->currentExteriorCell;
  v7 = v4 >> 0xC;
  v8 = v5 >> 0xC;
  if ( !currentExteriorCell
    || TESObjectCELL_GetXCoordinate(currentExteriorCell) != v7
    || TESObjectCELL_GetYCoordinate(this->currentExteriorCell) != v8 )
  {
    this->currentExteriorCell = (TESObjectCELL *)TES_GetCellFromCoords(this, v7, v8);
  }
  v9 = this->currentExteriorCell;
  if ( !v9 )
    return 0;
  if ( TESObjectCELL_IsInterior(v9) )
    return 0;
  v10 = this->currentExteriorCell;
  cellProcessLevel = v10->members.cellProcessLevel;
  if ( cellProcessLevel != 3 && cellProcessLevel != 6 )
    return 0;
  v12 = sub_4CE3C0(v10);
  return sub_4C5AF0(v12, a2);
}
