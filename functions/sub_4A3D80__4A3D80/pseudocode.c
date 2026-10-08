_DWORD *__thiscall sub_4A3D80(_BYTE *this, int a2)
{
  TESTexture *v3; // eax
  TESTexture *v4; // eax
  const char *v5; // ecx

  sub_4A34E0(this, (_BYTE *)a2); /*0x4a3dae*/
  *(_DWORD *)this = &TESRegionDataLandscape::`vftable'; /*0x4a3dbd*/
  v3 = (TESTexture *)FormHeapAlloc(0xCu); /*0x4a3dc3*/
  if ( v3 ) /*0x4a3dd6*/
    v4 = TESTexture_constr(v3); /*0x4a3dda*/
  else
    v4 = 0; /*0x4a3de1*/
  *((_DWORD *)this + 2) = v4; /*0x4a3de3*/
  v5 = *(const char **)(*(_DWORD *)(a2 + 8) + 4); /*0x4a3de9*/
  if ( !v5 ) /*0x4a3df3*/
    v5 = EmptyString; /*0x4a3df5*/
  BSStringT_Set(&v4->path, v5, 0); /*0x4a3e00*/
  return this; /*0x4a3e07*/
}
