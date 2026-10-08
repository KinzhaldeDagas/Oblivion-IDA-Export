char __thiscall sub_7568B0(int *this, int a2)
{
  int v2; // edi
  NiRTTI *v4; // eax

  v2 = a2; /*0x7568b2*/
  if ( !sub_75E600(this, a2) ) /*0x7568b9*/
    return 0; /*0x7568b9*/
  if ( !NiTMap_GetAt((_DWORD *)(v2 + 0xD4), *(this + 0x10), &a2) ) /*0x7568d1*/
    return 0; /*0x7568d1*/
  if ( !a2 ) /*0x7568e0*/
    return 0; /*0x7568e0*/
  v4 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x7568e7*/
  if ( !v4 ) /*0x7568eb*/
    return 0; /*0x7568fe*/
  while ( v4 != &stru_B40AA4 ) /*0x7568f5*/
  {
    v4 = v4->parent; /*0x7568f7*/
    if ( !v4 ) /*0x7568fc*/
      return 0; /*0x7568fc*/
  }
  return 1; /*0x7568fe*/
}
