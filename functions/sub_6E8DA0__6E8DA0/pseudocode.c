char __thiscall sub_6E8DA0(_DWORD *this)
{
  int v1; // ecx
  NiRTTI *v2; // eax

  v1 = *(this + 0xC); /*0x6e8da0*/
  if ( !v1 ) /*0x6e8da5*/
    return 0; /*0x6e8da5*/
  v2 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v1 + 4))(v1); /*0x6e8dac*/
  if ( !v2 ) /*0x6e8db0*/
    return 0; /*0x6e8dc0*/
  while ( v2 != &parent ) /*0x6e8db7*/
  {
    v2 = v2->parent; /*0x6e8db9*/
    if ( !v2 ) /*0x6e8dbe*/
      return 0; /*0x6e8dbe*/
  }
  return 1; /*0x6e8dc2*/
}
