char __thiscall sub_757A30(int *this, int a2)
{
  int v2; // edi
  NiRTTI *v4; // eax

  v2 = a2; /*0x757a32*/
  if ( !sub_75E600(this, a2) ) /*0x757a39*/
    return 0; /*0x757a39*/
  if ( !NiTMap_GetAt((_DWORD *)(v2 + 0xD4), *(this + 0x10), &a2) ) /*0x757a51*/
    return 0; /*0x757a51*/
  if ( !a2 ) /*0x757a60*/
    return 0; /*0x757a60*/
  v4 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x757a67*/
  if ( !v4 ) /*0x757a6b*/
    return 0; /*0x757a7e*/
  while ( v4 != &stru_B41E68 ) /*0x757a75*/
  {
    v4 = v4->parent; /*0x757a77*/
    if ( !v4 ) /*0x757a7c*/
      return 0; /*0x757a7c*/
  }
  return 1; /*0x757a7e*/
}
