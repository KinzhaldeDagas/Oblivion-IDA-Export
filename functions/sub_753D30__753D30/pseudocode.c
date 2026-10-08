char __thiscall sub_753D30(_DWORD *this)
{
  int v1; // ecx
  NiRTTI *v2; // eax

  v1 = *(this + 0xC); /*0x753d30*/
  if ( !v1 ) /*0x753d35*/
    return 0; /*0x753d35*/
  v2 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v1 + 4))(v1); /*0x753d3c*/
  if ( !v2 ) /*0x753d40*/
    return 0; /*0x753d50*/
  while ( v2 != &stru_B40864 ) /*0x753d47*/
  {
    v2 = v2->parent; /*0x753d49*/
    if ( !v2 ) /*0x753d4e*/
      return 0; /*0x753d4e*/
  }
  return 1; /*0x753d52*/
}
