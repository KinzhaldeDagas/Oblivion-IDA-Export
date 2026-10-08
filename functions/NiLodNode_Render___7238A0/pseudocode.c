// CULLING audit 2026-09-27 (observed Oblivion behavior): Focused CULLING audit: preserves native LOD camera selection. Dynamic flag+0x100 enables recomputing selected index+0xE0 from current process.Camera, then delegates to NiSwitchNode OnVisible. Guard selected geometry after this dispatch; rejecting/replacing node handling can skip native selection side effects.
// GPU static-world LOD audit 2026-09-27: dynamic selection is conditional on byte+100 and non-null data+FC. Global B273FC>=0 overrides the camera result through data virtual+58. Only this dynamic/data branch walks backward to a preceding non-null child before delegating to NiSwitchNode. Cached +E0 writes remain native side effects required by any replacement.
int __thiscall NiLodNode_Render_(NiLODNode *this, NiCullingProcess *a2)
{                                               // Test NiLODNode dynamic-selection flag +0x100 before recomputing selected child +0xE0 from the current culling camera.
  int v3; // ecx
  int v4; // ecx
  int v5; // eax
  int v6; // eax

  if ( *((_BYTE *)this + 0x100) ) /*0x7238a3*/
  {
    v3 = *((_DWORD *)this + 0x3F); /*0x7238b1*/
    if ( v3 ) /*0x7238b9*/
    {
      *((_DWORD *)this + 0x38) = (*(int (__thiscall **)(int, NiCamera *, NiLODNode *))(*(_DWORD *)v3 + 0x4C))( /*0x7238c7*/
                                   v3,
                                   a2->Camera,
                                   this);       // Store the current camera-derived selected child index at NiLODNode+0xE0.
      if ( dword_B273FC >= 0 ) /*0x7238d4*/
        *((_DWORD *)this + 0x38) = (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 0x3F) + 0x58))( /*0x7238e4*/
                                     *((_DWORD *)this + 0x3F),
                                     dword_B273FC);
      if ( *((int *)this + 0x38) >= 0 ) /*0x7238f1*/
      {
        v4 = *((unsigned __int16 *)this + 0x5B); /*0x7238f3*/
        do /*0x723921*/
        {
          v5 = *((_DWORD *)this + 0x38);        // Continue native NiLOD selected-child handling after dynamic selection. /*0x723900*/
          if ( v5 < v4 && *(_DWORD *)(*((_DWORD *)this + 0x2C) + 4 * v5) ) /*0x723910*/
            break; /*0x723914*/
          v6 = v5 - 1; /*0x723916*/
          *((_DWORD *)this + 0x38) = v6; /*0x72391b*/
        }
        while ( v6 >= 0 ); /*0x723921*/
      }
    }
  }
  return NiSwitchNode_OnVisible((NiNode *)this, a2); /*0x72392b*/
}
