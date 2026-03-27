_DWORD *__thiscall sub_4A3D80(_BYTE *this, int a2)
{
  TESTexture *v3; // eax
  TESTexture *v4; // eax
  const char *v5; // ecx

  sub_4A34E0(this, (_BYTE *)a2);
  *(_DWORD *)this = &TESRegionDataLandscape::`vftable';
  v3 = (TESTexture *)FormHeapAlloc(0xCu);
  if ( v3 )
    v4 = TESTexture_constr(v3);
  else
    v4 = 0;
  *((_DWORD *)this + 2) = v4;
  v5 = *(const char **)(*(_DWORD *)(a2 + 8) + 4);
  if ( !v5 )
    v5 = EmptyString;
  BSStringT_Set(&v4->path, v5, 0);
  return this;
}
