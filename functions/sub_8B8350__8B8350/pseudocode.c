char __thiscall sub_8B8350(_DWORD *this)
{
  int v1; // ecx
  NiRTTI *v2; // eax

  v1 = *(this + 0xC); /*0x8b8350*/
  if ( !v1 ) /*0x8b8355*/
    return 0; /*0x8b8355*/
  v2 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v1 + 4))(v1); /*0x8b835c*/
  if ( !v2 ) /*0x8b8360*/
    return 0; /*0x8b8370*/
  while ( v2 != &stru_B3FA80 ) /*0x8b8367*/
  {
    v2 = v2->parent; /*0x8b8369*/
    if ( !v2 ) /*0x8b836e*/
      return 0; /*0x8b836e*/
  }
  return 1; /*0x8b8372*/
}
