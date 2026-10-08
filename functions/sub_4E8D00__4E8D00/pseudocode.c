// Verified: searches the TESRoad connected-point bucket for the cell containing the requested NiPoint3, compares candidate positions with sub_47D810 using fConstant_2 tolerance, and returns the matching TESConnectedPoint or null.
TESConnectedPoint *__thiscall TESRoad_FindConnectedPointByPosition(TESRoad *this, const NiPoint3 *position)
{
  int v3; // eax
  int v4; // esi
  NiPoint3 *v5; // eax
  float v7; // [esp+0h] [ebp-18h]
  int v8; // [esp+14h] [ebp-4h] BYREF

  v3 = TESObjectCELL_PackExteriorGroupLabel((int)position->x >> 0xC, (int)position->y >> 0xC); /*0x4e8d3b*/
  v8 = 0; /*0x4e8d4c*/
  NiTMap_GetAt((_DWORD *)this + 7, v3, &v8); /*0x4e8d50*/
  v4 = v8; /*0x4e8d55*/
  if ( v8 ) /*0x4e8d5b*/
  {
    while ( *(_DWORD *)(v4 + 4) || *(_DWORD *)v4 ) /*0x4e8d67*/
    {
      v7 = fConstant_2; /*0x4e8d72*/
      v5 = TESConnectedPoint_GetPosition(*(TESConnectedPoint **)v4); /*0x4e8d76*/
      if ( sub_47D810(&v5->x, &position->x, v7) ) /*0x4e8d7c*/
        return *(TESConnectedPoint **)v4; /*0x4e8d9a*/
      v4 = *(_DWORD *)(v4 + 4); /*0x4e8d88*/
      if ( !v4 ) /*0x4e8d8d*/
        return 0; /*0x4e8d8d*/
    }
  }
  return 0; /*0x4e8d8f*/
}
