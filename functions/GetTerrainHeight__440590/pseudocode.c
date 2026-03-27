char __thiscall GetTerrainHeight(TES *this, float *a2, float *a3)
{
  int v5; // edi
  int v6; // ebx
  TESObjectCELL *currentExteriorCell; // ecx
  signed int v8; // edi
  signed int v9; // ebx
  TESObjectCELL *v10; // ecx
  TESObjectLAND *v11; // eax
  int v13; // [esp+14h] [ebp+4h]

  v13 = (int)*a2;
  v5 = v13;
  v6 = (int)a2[1];
  if ( !(v13 % 0x1000) && (double)v13 > *a2 )
    v5 = v13 - 1;
  if ( !(v6 % 0x1000) && (double)(int)a2[1] > a2[1] )
    --v6;
  *a3 = flt_A37448;
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
  if ( v10 )
  {
    switch ( v10->members.cellProcessLevel )
    {
      case 2u:
      case 3u:
      case 4u:
      case 5u:
      case 6u:
        v11 = sub_4CE3C0(v10);
        return sub_4C5B50(v11, a2, a3);
      default:
        break;
    }
  }
  JUMPOUT(0x44067F);
}
