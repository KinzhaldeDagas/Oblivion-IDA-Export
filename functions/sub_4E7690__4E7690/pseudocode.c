// Verified cell-unload graph cleanup: if a point array exists, clear rendered geometry; when the TESPathGrid has no winning override or its primary override file is inactive, destroy graph point/reference structures and clear the per-PathGrid 512-unit spatial bucket map. Called from cell deactivation at 0x447BF6. Override-selection semantics beyond the observed predicates remain Unknown.
void __thiscall TESPathGrid_ClearGraphOnCellUnload(TESForm *this)
{
  Data *OverrideFile; // eax

  if ( *((_DWORD *)this + 9) ) /*0x4e7693*/
  {
    TESPathGrid_ClearRenderedPointGeometry((TESPathGrid *)this); /*0x4e7699*/
    if ( !TESForm_GetOverrideFile(this, 0xFFFFFFFF) /*0x4e76b6*/
      || (OverrideFile = TESForm_GetOverrideFile(this, 0), !TESFile_IsActive(OverrideFile)) )
    {
      TESPathGrid_ClearPointsAndReferenceMaps((TESPathGrid *)this); /*0x4e76c1*/
      TESPathGrid_ClearSpatialBucketMap((TESPathGrid *)this); /*0x4e76c9*/
    }
  }
}
