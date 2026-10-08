// Count native SkillsMenu rows whose selection tile trait 0xFB1 equals 2. Class-major selection uses this count against the configured cap of seven.
UInt32 __thiscall SkillsMenu_CountSelectedRows(void *this)
{
  int v1; // eax
  UInt32 v2; // edi
  _DWORD *v3; // esi
  _DWORD *v4; // ecx

  v1 = *((_DWORD *)this + 0xA); /*0x5d5a00*/
  v2 = 0; /*0x5d5a04*/
  if ( !v1 ) /*0x5d5a08*/
    return 0; /*0x5d5a41*/
  v3 = *(_DWORD **)(v1 + 0x34); /*0x5d5a0b*/
  while ( v3 ) /*0x5d5a10*/
  {
    v4 = (_DWORD *)v3[2]; /*0x5d5a12*/
    v3 = (_DWORD *)*v3; /*0x5d5a1a*/
    if ( v4 ) /*0x5d5a1c*/
    {
      if ( Tile_GetFloat(v4, 0xFB1) == fConstant_2 ) /*0x5d5a33*/
        ++v2; /*0x5d5a35*/
    }
  }
  return v2; /*0x5d5a3f*/
}
