void __thiscall TESRegionDataLandscape::~TESRegionDataLandscape(TESRegionDataLandscape *this)
{
  _DWORD *v2; // edi

  *(_DWORD *)this = &TESRegionDataLandscape::`vftable';
  v2 = *((_DWORD **)this + 2);
  if ( v2 )
  {
    TESTexture_destr(v2);
    FormHeapFree((unsigned int)v2);
  }
  sub_4A3510(this);
}
