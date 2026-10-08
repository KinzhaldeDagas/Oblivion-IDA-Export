char __thiscall sub_758250(int *this, int a2)
{
  int v2; // edi
  NiRTTI *v4; // eax

  v2 = a2; /*0x758252*/
  if ( !sub_75E600(this, a2) ) /*0x758259*/
    return 0; /*0x758259*/
  if ( !NiTMap_GetAt((_DWORD *)(v2 + 0xD4), *(this + 0x10), &a2) ) /*0x758271*/
    return 0; /*0x758271*/
  if ( !a2 ) /*0x758280*/
    return 0; /*0x758280*/
  v4 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x758287*/
  if ( !v4 ) /*0x75828b*/
    return 0; /*0x75829e*/
  while ( v4 != &stru_B40B50 ) /*0x758295*/
  {
    v4 = v4->parent; /*0x758297*/
    if ( !v4 ) /*0x75829c*/
      return 0; /*0x75829c*/
  }
  return 1; /*0x75829e*/
}
