void __thiscall TESRegionDataLandscape::~TESRegionDataLandscape(TESRegionDataLandscape *this)
{
  TESTexture *canopyShadowTexture; // edi

  this->base.vtable = (TESRegionDataVtable *)&TESRegionDataLandscape::`vftable'; /*0x4a3c19*/
  canopyShadowTexture = this->canopyShadowTexture; /*0x4a3c1f*/
  if ( canopyShadowTexture ) /*0x4a3c2c*/
  {
    TESTexture_destr(canopyShadowTexture); /*0x4a3c30*/
    FormHeapFree((unsigned int)canopyShadowTexture); /*0x4a3c36*/
  }
  TESRegionData_SetBaseVTable(this); /*0x4a3c48*/
}
