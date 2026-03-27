_DWORD *__thiscall sub_4A3CD0(_BYTE *this)
{
  TESTexture *v2; // eax
  TESTexture *v3; // eax

  sub_4A34C0(this);
  *(_DWORD *)this = &TESRegionDataLandscape::`vftable';
  v2 = (TESTexture *)FormHeapAlloc(0xCu);
  if ( v2 )
    v3 = TESTexture_constr(v2);
  else
    v3 = 0;
  *((_DWORD *)this + 2) = v3;
  BSStringT_Set(&v3->path, "Trees\\CanopyShadow.dds", 0);
  return this;
}
