int __thiscall sub_440970(TES *this, float *a2)
{
  int v4; // edx
  int v5; // ecx
  int result; // eax
  signed int v7; // ebx
  TESObjectCELL *currentExteriorCell; // ecx
  signed int v9; // edi
  TESObjectCELL *v10; // ecx
  TESObjectCELL **v11; // eax
  int v12; // [esp+Ch] [ebp-4h]
  int v13; // [esp+14h] [ebp+4h]
  int v14; // [esp+14h] [ebp+4h]

  v13 = (int)*a2; /*0x440988*/
  v4 = v13; /*0x44098f*/
  v5 = (int)a2[1]; /*0x44099f*/
  if ( !(v13 % 0x1000) && (double)v13 > *a2 ) /*0x4409c3*/
    v4 = v13 - 1; /*0x4409c5*/
  if ( !(v5 % 0x1000) && (double)(int)a2[1] > a2[1] ) /*0x4409e8*/
    --v5; /*0x4409ea*/
  v14 = v4 - v4 % 0x80; /*0x440a08*/
  v12 = v5 - v5 % 0x80; /*0x440a1d*/
  if ( v14 == dword_B05198 ) /*0x440a21*/
    return unk_B33A5C; /*0x440a23*/
  v7 = v5 >> 0xC; /*0x440a35*/
  currentExteriorCell = this->currentExteriorCell; /*0x440a37*/
  v9 = v4 >> 0xC; /*0x440a3f*/
  if ( !currentExteriorCell /*0x440a56*/
    || TESObjectCELL_GetXCoordinate(currentExteriorCell) != v9
    || TESObjectCELL_GetYCoordinate(this->currentExteriorCell) != v7 )
  {
    this->currentExteriorCell = (TESObjectCELL *)TES_GetCellFromCoords(this, v9, v7); /*0x440a61*/
  }
  v10 = this->currentExteriorCell; /*0x440a64*/
  if ( !v10 || TESObjectCELL_IsInterior(v10) ) /*0x440a6b*/
    return 0; /*0x440aab*/
  v11 = (TESObjectCELL **)sub_4CE3C0(this->currentExteriorCell); /*0x440a77*/
  result = sub_4C5AA0(v11, a2); /*0x440a7f*/
  if ( result ) /*0x440a86*/
  {
    unk_B33A5C = result; /*0x440a93*/
    dword_B05198 = v14; /*0x440a98*/
    dword_B05194 = v12; /*0x440a9e*/
  }
  return result; /*0x440a2a*/
}
