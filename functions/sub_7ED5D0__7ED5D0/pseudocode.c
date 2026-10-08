// OBLIVION AUTHORITY (2026-08-24): Generic pass-list marker counter used by the SpeedTree leaf program selector. Walks property+0x70 entries and counts nonnull shader objects whose word at +0x118 is not 0x00FF. It does not test ShadowSceneLight disabled byte +0xF4. Result selects point-light shader program bit; it is not a leaf layer/card/LOD index.
int __thiscall OB_BSShaderProperty_CountPassListEntriesWithMarker_010201A0(void *this)
{
  _DWORD *v1; // ecx
  int result; // eax
  int v3; // edx

  v1 = *((_DWORD **)this + 0x1C); /*0x7ed5d0*/
  result = 0; /*0x7ed5d3*/
  while ( v1 ) /*0x7ed5d7*/
  {
    v3 = v1[2]; /*0x7ed5e3*/
    v1 = (_DWORD *)*v1; /*0x7ed5e7*/
    if ( v3 ) /*0x7ed5e9*/
    {
      if ( *(_WORD *)(v3 + 0x118) != 0xFF ) /*0x7ed5f4*/
        ++result; /*0x7ed5f6*/
    }
  }
  return result; /*0x7ed5fd*/
}
