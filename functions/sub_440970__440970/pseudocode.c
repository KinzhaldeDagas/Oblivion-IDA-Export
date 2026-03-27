int __thiscall sub_440970(TES *this, float *a2)
{
  int v4; // edx
  int v5; // ecx
  int result; // eax
  signed int v7; // ebx
  TESObjectCELL *currentExteriorCell; // ecx
  signed int v9; // edi
  TESObjectCELL *v10; // ecx
  TESObjectLAND *v11; // eax
  int v12; // [esp+Ch] [ebp-4h]
  int v13; // [esp+14h] [ebp+4h]
  int v14; // [esp+14h] [ebp+4h]

  v13 = (int)*a2;
  v4 = v13;
  v5 = (int)a2[1];
  if ( !(v13 % 0x1000) && (double)v13 > *a2 )
    v4 = v13 - 1;
  if ( !(v5 % 0x1000) && (double)(int)a2[1] > a2[1] )
    --v5;
  v14 = v4 - v4 % 0x80;
  v12 = v5 - v5 % 0x80;
  if ( v14 == dword_B05198 )
    return dword_B33A5C;
  v7 = v5 >> 0xC;
  currentExteriorCell = this->currentExteriorCell;
  v9 = v4 >> 0xC;
  if ( !currentExteriorCell
    || TESObjectCELL_GetXCoordinate(currentExteriorCell) != v9
    || TESObjectCELL_GetYCoordinate(this->currentExteriorCell) != v7 )
  {
    this->currentExteriorCell = (TESObjectCELL *)TES_GetCellFromCoords(this, v9, v7);
  }
  v10 = this->currentExteriorCell;
  if ( !v10 || TESObjectCELL_IsInterior(v10) )
    return 0;
  v11 = sub_4CE3C0(this->currentExteriorCell);
  result = sub_4C5AA0(v11, a2);
  if ( result )
  {
    dword_B33A5C = result;
    dword_B05198 = v14;
    dword_B05194 = v12;
  }
  return result;
}
