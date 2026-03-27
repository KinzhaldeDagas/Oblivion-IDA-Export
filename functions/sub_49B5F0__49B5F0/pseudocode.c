int __thiscall sub_49B5F0(_DWORD *this, signed int a2, signed int a3)
{
  int result; // eax
  TESObjectCELL *currentInteriorCell; // edi
  int v6; // eax
  float *v7; // eax
  float v8; // [esp+10h] [ebp-Ch]
  float v9; // [esp+14h] [ebp-8h]
  float WaterHeight; // [esp+18h] [ebp-4h]

  result = a2;
  currentInteriorCell = TES->currentInteriorCell;
  v8 = (double)(a2 << 0xC) + dbl_A30F70;
  v9 = dbl_A30F70 + (double)(a3 << 0xC);
  WaterHeight = flt_A30634;
  if ( currentInteriorCell )
  {
    if ( (currentInteriorCell->members.flags0 & 2) == 0 )
    {
      *(_BYTE *)this = 0;
      *(_WORD *)(*(this + 1) + 0x18) |= 1u;
      return result;
    }
  }
  else
  {
    currentInteriorCell = (TESObjectCELL *)TES_GetCellFromCoords(TES, a2, a3);
  }
  if ( currentInteriorCell )
  {
    WaterHeight = TESObjectCELL_GetWaterHeight(currentInteriorCell);
    sub_49A000(this, currentInteriorCell);
  }
  v6 = *(this + 1);
  *(_BYTE *)this = 1;
  *(_WORD *)(v6 + 0x18) &= ~1u;
  v7 = (float *)(*(this + 1) + 0x54);
  *v7 = v8;
  v7[1] = v9;
  v7[2] = WaterHeight;
  return NiAVObject_UpdateNiAVObject((NiAVObject *)*(this + 1), 0.0, 0);
}
