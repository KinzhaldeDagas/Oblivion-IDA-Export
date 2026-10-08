int __thiscall sub_49B5F0(_DWORD *this, signed int a2, signed int a3)
{
  int result; // eax
  TESObjectCELL *currentInteriorCell; // edi
  int v6; // eax
  float *v7; // eax
  float v8; // [esp+10h] [ebp-Ch]
  float v9; // [esp+14h] [ebp-8h]
  float WaterHeight; // [esp+18h] [ebp-4h]

  result = a2; /*0x49b5f3*/
  currentInteriorCell = MEMORY[0xB333A0]->currentInteriorCell; /*0x49b625*/
  v8 = (double)(a2 << 0xC) + dbl_A30F70; /*0x49b62a*/
  v9 = dbl_A30F70 + (double)(a3 << 0xC); /*0x49b632*/
  WaterHeight = kTerrainLODQuadRayDirectionZ; /*0x49b63c*/
  if ( currentInteriorCell ) /*0x49b640*/
  {
    if ( (currentInteriorCell->members.flags0 & 2) == 0 ) /*0x49b64b*/
    {
      *(_BYTE *)this = 0; /*0x49b64d*/
      *(_WORD *)(*(this + 1) + 0x18) |= 1u; /*0x49b653*/
      return result; /*0x49b65d*/
    }
  }
  else
  {
    currentInteriorCell = (TESObjectCELL *)TES_GetCellFromCoords(MEMORY[0xB333A0], a2, a3); /*0x49b667*/
  }
  if ( currentInteriorCell ) /*0x49b66b*/
  {
    WaterHeight = TESObjectCELL_GetWaterHeight((ExtraDataList *)currentInteriorCell); /*0x49b674*/
    sub_49A000(this, currentInteriorCell); /*0x49b67b*/
  }
  v6 = *(this + 1); /*0x49b680*/
  *(_BYTE *)this = 1; /*0x49b68d*/
  *(_WORD *)(v6 + 0x18) &= ~1u; /*0x49b690*/
  v7 = (float *)(*(this + 1) + 0x54); /*0x49b699*/
  *v7 = v8; /*0x49b69c*/
  v7[1] = v9; /*0x49b6a2*/
  v7[2] = WaterHeight; /*0x49b6a8*/
  return NiAVObject_UpdateNiAVObject((NiAVObject *)*(this + 1), 0.0, 0); /*0x49b659*/
}
