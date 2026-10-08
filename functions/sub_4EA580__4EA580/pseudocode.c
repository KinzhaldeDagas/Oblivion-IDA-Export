// Verified quad-root lookup/creation: accepts signed 16-bit quadX/quadY, packs them as (quadX << 16) | uint16(quadY), and optionally allocates/inserts a TESTerrainLODQuadRoot containing quad data, owner map, and coordinates.
// local variable allocation has failed, the output may be wrong!
TESTerrainLODQuadRoot_OblivionLayout_010Verified *__thiscall TESWorldSpaceTerrainLODQuadMap_GetOrCreateRoot(
        TESWorldSpaceTerrainLODQuadMap *this,
        int quadX,
        int quadY,
        bool createIfMissing)
{
  __int16 v5; // bx
  int v6; // esi
  TESTerrainLODQuadRoot_OblivionLayout_010Verified *v7; // ebp
  TESTerrainLODQuadRoot_OblivionLayout_010Verified *v8; // eax
  TESTerrainLODQuadRoot_OblivionLayout_010Verified *v9; // eax

  if ( (unsigned int)(quadX + 0x8000) > 0xFFFF || (v5 = quadY, (unsigned int)(quadY + 0x8000) > 0xFFFF) ) /*0x4ea5cc*/
  {
    PrintError("Trying to get LOD for invalid world coordinate."); /*0x4ea648*/
    return 0; /*0x4ea650*/
  }
  else
  {
    v6 = ((__int16)quadX << 0x10) | (unsigned __int16)quadY;// Verified map key packing: signed quadX occupies the high 16 bits and unsigned quadY the low 16 bits. /*0x4ea5d7*/
    quadY = 0; /*0x4ea5e1*/
    NiTMap_GetAt(this, v6, &quadY); /*0x4ea5e9*/
    v7 = (TESTerrainLODQuadRoot_OblivionLayout_010Verified *)quadY; /*0x4ea5ee*/
    if ( !quadY && createIfMissing ) /*0x4ea5fb*/
    {
      v8 = (TESTerrainLODQuadRoot_OblivionLayout_010Verified *)FormHeapAlloc(0x10u); /*0x4ea5ff*/
      *(_DWORD *)&createIfMissing = v8; /*0x4ea607*/
      if ( v8 ) /*0x4ea611*/
        v9 = TESTerrainLODQuadRoot_ctor(v8, (TESWorldSpaceTerrainLODQuadMap_OblivionLayout_Verified *)this); /*0x4ea616*/
      else
        v9 = 0; /*0x4ea61d*/
      v9->quadX = quadX; /*0x4ea624*/
      v7 = v9; /*0x4ea634*/
      v9->quadY = v5; /*0x4ea636*/
      NiTMap_SetAt(this, v6, (int)v9); /*0x4ea63a*/
    }
    return v7; /*0x4ea63f*/
  }
}
