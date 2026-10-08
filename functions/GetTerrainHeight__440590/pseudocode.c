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

  v13 = (int)*a2; /*0x4405a8*/
  v5 = v13; /*0x4405af*/
  v6 = (int)a2[1]; /*0x4405bf*/
  if ( !(v13 % 0x1000) && (double)v13 > *a2 ) /*0x4405e3*/
    v5 = v13 - 1; /*0x4405e5*/
  if ( !(v6 % 0x1000) && (double)(int)a2[1] > a2[1] ) /*0x44060a*/
    --v6; /*0x44060c*/
  *a3 = flt_A37448; /*0x440619*/
  currentExteriorCell = this->currentExteriorCell; /*0x44061b*/
  v8 = v5 >> 0xC; /*0x44061e*/
  v9 = v6 >> 0xC; /*0x440621*/
  if ( !currentExteriorCell /*0x44063b*/
    || TESObjectCELL_GetXCoordinate(currentExteriorCell) != v8
    || TESObjectCELL_GetYCoordinate(this->currentExteriorCell) != v9 )
  {
    this->currentExteriorCell = (TESObjectCELL *)TES_GetCellFromCoords(this, v8, v9); /*0x440646*/
  }
  v10 = this->currentExteriorCell; /*0x440649*/
  if ( v10 ) /*0x44064e*/
  {
    switch ( v10->members.cellProcessLevel ) /*0x44065c*/
    {
      case 2u: /*0x44065c*/
      case 3u: /*0x44065c*/
      case 4u: /*0x44065c*/
      case 5u: /*0x44065c*/
      case 6u: /*0x44065c*/
        v11 = sub_4CE3C0(v10); /*0x440669*/
        return sub_4C5B50(v11, a2, a3);
      default:
        break;
    }
  }
  JUMPOUT(0x44067F); /*0x44067f*/
}
