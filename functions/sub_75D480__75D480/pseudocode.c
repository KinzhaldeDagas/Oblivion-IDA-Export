char __thiscall sub_75D480(int *this, int a2)
{
  int v2; // edi
  NiRTTI *v4; // eax

  v2 = a2; /*0x75d482*/
  if ( !sub_75E600(this, a2) ) /*0x75d489*/
    return 0; /*0x75d489*/
  if ( !NiTMap_GetAt((_DWORD *)(v2 + 0xD4), *(this + 0x10), &a2) ) /*0x75d4a1*/
    return 0; /*0x75d4a1*/
  if ( !a2 ) /*0x75d4b0*/
    return 0; /*0x75d4b0*/
  v4 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x75d4b7*/
  if ( !v4 ) /*0x75d4bb*/
    return 0; /*0x75d4ce*/
  while ( v4 != &stru_B41B38 ) /*0x75d4c5*/
  {
    v4 = v4->parent; /*0x75d4c7*/
    if ( !v4 ) /*0x75d4cc*/
      return 0; /*0x75d4cc*/
  }
  return 1; /*0x75d4ce*/
}
