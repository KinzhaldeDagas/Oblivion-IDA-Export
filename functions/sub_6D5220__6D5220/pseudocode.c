char __thiscall sub_6D5220(_DWORD *this)
{
  int v1; // ecx
  NiRTTI *v2; // eax

  v1 = *(this + 0xC); /*0x6d5220*/
  if ( !v1 ) /*0x6d5225*/
    return 0; /*0x6d5225*/
  v2 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v1 + 4))(v1); /*0x6d522c*/
  if ( !v2 ) /*0x6d5230*/
    return 0; /*0x6d5240*/
  while ( v2 != &stru_B3FD5C ) /*0x6d5237*/
  {
    v2 = v2->parent; /*0x6d5239*/
    if ( !v2 ) /*0x6d523e*/
      return 0; /*0x6d523e*/
  }
  return 1; /*0x6d5242*/
}
