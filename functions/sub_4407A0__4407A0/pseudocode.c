char __thiscall sub_4407A0(TES *this, float *a2, _DWORD *a3)
{
  int v5; // edi
  int v6; // ebx
  TESObjectCELL *currentExteriorCell; // ecx
  signed int v8; // edi
  signed int v9; // ebx
  TESObjectCELL *v10; // ecx
  TESObjectLAND *v12; // eax
  int v13; // [esp+14h] [ebp+4h]

  v13 = (int)*a2;
  v5 = v13;
  v6 = (int)a2[1];
  if ( !(v13 % 0x1000) && (double)v13 > *a2 )
    v5 = v13 - 1;
  if ( !(v6 % 0x1000) && (double)(int)a2[1] > a2[1] )
    --v6;
  currentExteriorCell = this->currentExteriorCell;
  v8 = v5 >> 0xC;
  v9 = v6 >> 0xC;
  if ( !currentExteriorCell
    || TESObjectCELL_GetXCoordinate(currentExteriorCell) != v8
    || TESObjectCELL_GetYCoordinate(this->currentExteriorCell) != v9 )
  {
    this->currentExteriorCell = (TESObjectCELL *)TES_GetCellFromCoords(this, v8, v9);
  }
  v10 = this->currentExteriorCell;
  if ( !v10 )
    return 0;
  v12 = sub_4CE3C0(v10);
  return sub_4C4790(v12, a2, a3);
}
