// Verified `TogglePathGrid` action: flips g_PathGridDebugRenderingEnabled, updates the shared debug root, then rebuilds or clears the PathGrid visuals for the current interior grid or every loaded exterior grid cell. It is reached by ScriptCommand_TogglePathGrid. Fallout comparison: Script::ToggleNavMeshFunction (Fallout 0x823CED68) handles selectable draw modes, cover/connection overlays and transparency, and adds per-cell navmesh draws; Oblivion exposes one PathGrid display toggle and updates loaded PathGrid roots. This is a directly observed subsystem divergence.
void __cdecl TESPathGrid_ToggleDebugRendering()
{
  TESObjectCELL *currentInteriorCell; // ecx
  TESPathGrid *v1; // ecx
  unsigned int v2; // eax
  unsigned int i; // edi
  unsigned int v4; // esi
  TESObjectCELL *cell; // ecx
  TESPathGrid *v6; // ecx

  TESPathGrid_SetDebugRenderingEnabled(!g_PathGridDebugRenderingEnabled); /*0x4e7d1b*/
  currentInteriorCell = MEMORY[0xB333A0]->currentInteriorCell; /*0x4e7d26*/
  if ( !currentInteriorCell ) /*0x4e7d2e*/
  {
    v2 = uGridsToLoad; /*0x4e7d4e*/
    for ( i = 0; ; ++i ) /*0x4e7d54*/
    {
      if ( i >= v2 ) /*0x4e7d59*/
        return; /*0x4e7d59*/
      v4 = 0; /*0x4e7d5b*/
      while ( v4 < v2 ) /*0x4e7d62*/
      {
        cell = GetGridEntry(MEMORY[0xB333A0]->gridCellArray, i, v4)->cell; /*0x4e7d74*/
        if ( cell && (v6 = (TESPathGrid *)sub_4AF170(cell)) != 0 ) /*0x4e7d83*/
        {
          if ( !g_PathGridDebugRenderingEnabled ) /*0x4e7d8c*/
          {
            TESPathGrid_ClearRenderedPointGeometry(v6); /*0x4e7d9d*/
            goto LABEL_15; /*0x4e7d9d*/
          }
          TESPathGrid_RebuildRenderedGraph(v6); /*0x4e7d8e*/
          v2 = uGridsToLoad; /*0x4e7d93*/
          ++v4; /*0x4e7d98*/
        }
        else
        {
LABEL_15:
          v2 = uGridsToLoad; /*0x4e7da2*/
          ++v4; /*0x4e7da7*/
        }
      }
    }
  }
  v1 = (TESPathGrid *)sub_4AF170(currentInteriorCell); /*0x4e7d35*/
  if ( v1 ) /*0x4e7d39*/
  {
    if ( g_PathGridDebugRenderingEnabled ) /*0x4e7d3b*/
      TESPathGrid_RebuildRenderedGraph(v1); /*0x4e7d44*/
    else
      TESPathGrid_ClearRenderedPointGeometry(v1); /*0x4e7d49*/
  }
}
