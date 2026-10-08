// Verified available-file scan iterates signed quad coordinates [-32,31], uses terrainLODQuadOwner (+0x48 TESWorldSpace backpointer) to read the owning FormID, and checks `Meshes\\Landscape\\LOD\\<worldspaceFormID>.<quadX*32>.<quadY*32>.32.NIF`. Only existing files create map roots; this scan does not load NIFs.
void __thiscall TESWorldSpaceTerrainLODQuadMap_DiscoverAvailableNIFs(TESWorldSpaceTerrainLODQuadMap *this)
{
  int v2; // edi
  int v3; // ebx
  int v4; // eax
  TESTerrainLODQuadRoot_OblivionLayout_010Verified *v5; // edi
  TESTerrainLODQuad_OblivionComplete_060 *v6; // eax
  int v7; // esi
  const char *v8; // eax
  int ArgList; // [esp+18h] [ebp-28h]
  TESTerrainLODQuad_OblivionComplete_060 *v10; // [esp+24h] [ebp-1Ch] BYREF
  BSStringT v11; // [esp+28h] [ebp-18h] BYREF
  int v12; // [esp+3Ch] [ebp-4h]

  v11.m_data = 0; /*0x4eb1d1*/
  v11.m_dataLen = 0; /*0x4eb1d5*/
  v11.m_bufLen = 0; /*0x4eb1da*/
  v12 = 0; /*0x4eb1df*/
  ArgList = 0xFFFFFFE0; /*0x4eb1e3*/
  do /*0x4eb33c*/
  {
    v2 = 0x20 * ArgList; /*0x4eb1ef*/
    v3 = 0xFFFFFFE0; /*0x4eb1f2*/
    do /*0x4eb328*/
    {
      BSStringT_Static_Format( /*0x4eb21a*/
        &v11,
        ".\\Data\\Meshes\\Landscape\\LOD\\%i.%02i.%02i.%i.NIF",
        *(_DWORD *)(*((_DWORD *)this + 4) + 0xC),
        v2,
        0x20 * v3,
        0x20);                                  // Verified the terrain-quad NIF path's first numeric component is `terrainLODQuadOwner->formID` (TESForm +0x0C), followed by tileFileX, tileFileY, and 32.
      if ( MEMORY[0xB33A04] ) /*0x4eb21f*/
      {
        if ( MEMORY[0xB33A04]->vtbl->FindFile(MEMORY[0xB33A04], v11.m_data, 0, 0, 0xFFFFFFFF) ) /*0x4eb23e*/
        {
          v4 = FormHeapAlloc(0x10u); /*0x4eb24a*/
          v5 = (TESTerrainLODQuadRoot_OblivionLayout_010Verified *)v4; /*0x4eb24f*/
          LOBYTE(v12) = 1; /*0x4eb25a*/
          if ( v4 ) /*0x4eb25f*/
          {
            *(_DWORD *)(v4 + 4) = this; /*0x4eb263*/
            v6 = (TESTerrainLODQuad_OblivionComplete_060 *)FormHeapAlloc(0x60u); /*0x4eb266*/
            v10 = v6; /*0x4eb26e*/
            LOBYTE(v12) = 2; /*0x4eb274*/
            if ( v6 ) /*0x4eb279*/
              v5->quadData = TESTerrainLODQuad_ctor(v6, v5); /*0x4eb283*/
            else
              v5->quadData = 0; /*0x4eb291*/
            v5->quadX = 0; /*0x4eb285*/
            v5->quadY = 0; /*0x4eb289*/
          }
          else
          {
            v5 = 0; /*0x4eb29d*/
          }
          v5->quadX = ArgList; /*0x4eb2a7*/
          v5->quadY = v3; /*0x4eb2b1*/
          v7 = ((__int16)ArgList << 0x10) | (unsigned __int16)v3; /*0x4eb2bd*/
          LOBYTE(v12) = 0; /*0x4eb2c2*/
          if ( NiTMap_GetAt(this, v7, &v10) ) /*0x4eb2c7*/
          {
            PrintError("Unable to add LOD for LOD space (%i, %i) because LOD already exists.", v5->quadX, v5->quadY); /*0x4eb2e5*/
          }
          else
          {
            NiTMap_SetAt(this, v7, (int)v5); /*0x4eb2f3*/
            v5->ownerMap = this; /*0x4eb2f8*/
          }
          v8 = (const char *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 4) + 0xD4))(*((_DWORD *)this + 4)); /*0x4eb306*/
          sub_40FEC0("Found terrain LOD file for %i, %i in worldspace '%s'", ArgList, v3, v8); /*0x4eb314*/
          v2 = 0x20 * ArgList; /*0x4eb319*/
        }
      }
      ++v3; /*0x4eb322*/
    }
    while ( v3 < 0x20 ); /*0x4eb328*/
    ++ArgList; /*0x4eb338*/
  }
  while ( ArgList < 0x20 ); /*0x4eb33c*/
  FormHeapFree((unsigned int)v11.m_data); /*0x4eb347*/
}
