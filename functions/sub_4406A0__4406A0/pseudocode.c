char __thiscall sub_4406A0(TES *this, float *a2, float *a3, _DWORD *a4)
{
  int v5; // ebx
  int v6; // ebp
  TESObjectCELL *currentExteriorCell; // ecx
  signed int v8; // ebx
  signed int v9; // ebp
  TESObjectCELL *v10; // ecx
  TESObjectLAND *v11; // eax

  v5 = (int)*a2;
  v6 = (int)a2[1];
  if ( !(v5 % 0x1000) && (double)(int)*a2 > *a2 )
    --v5;
  if ( !(v6 % 0x1000) && (double)(int)a2[1] > a2[1] )
    --v6;
  *a3 = Vector3_InitValue_;
  a3[1] = *(&Vector3_InitValue_ + 1);
  a3[2] = 1.0;
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
  v11 = sub_4CE3C0(v10);
  return sub_4C3C00(v11, a2, (int)a3, a4);
}
