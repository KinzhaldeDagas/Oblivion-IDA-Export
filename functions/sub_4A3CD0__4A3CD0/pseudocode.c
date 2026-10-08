TESRegionDataLandscape *__thiscall TESRegionDataLandscape_ctor(TESRegionDataLandscape *self)
{
  TESTexture *v2; // eax
  TESTexture *v3; // eax

  TESRegionData_InitializeBase(&self->base); /*0x4a3cfa*/
  self->base.vtable = (TESRegionDataVtable *)&TESRegionDataLandscape::`vftable'; /*0x4a3d09*/
  v2 = (TESTexture *)FormHeapAlloc(0xCu); /*0x4a3d0f*/
  if ( v2 ) /*0x4a3d22*/
    v3 = TESTexture_constr(v2); /*0x4a3d26*/
  else
    v3 = 0; /*0x4a3d2d*/
  self->canopyShadowTexture = v3; /*0x4a3d3e*/
  BSStringT_Set(&v3->path, "Trees\\CanopyShadow.dds", 0); /*0x4a3d41*/
  return self; /*0x4a3d48*/
}
