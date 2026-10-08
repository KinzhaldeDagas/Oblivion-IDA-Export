int __thiscall sub_459790(_DWORD *this, int *a2, int a3, int a4)
{
  _DWORD *v4; // ecx
  int *v6; // eax
  int *v7; // esi
  int v8; // edi

  v4 = (_DWORD *)*(this + 4); /*0x459790*/
  if ( !v4 || !NiTMap_GetAt(v4, (int)a2, &a2) ) /*0x4597a6*/
    return 0; /*0x459797*/
  v6 = a2; /*0x4597b7*/
  if ( !a2 ) /*0x4597b9*/
    return 0; /*0x4597da*/
  while ( 1 ) /*0x4597c3*/
  {
    v7 = (int *)*v6; /*0x4597c3*/
    if ( *v6 ) /*0x4597c3*/
    {
      if ( a3 == v7[1] && a4 == v7[2] ) /*0x4597d1*/
        break; /*0x4597d1*/
    }
    v6 = (int *)v6[1]; /*0x4597d3*/
    if ( !v6 ) /*0x4597d8*/
      return 0; /*0x4597d8*/
  }
  v8 = *v7; /*0x4597e1*/
  BSSimpleList_Remove(a2, *v6); /*0x4597e4*/
  FormHeapFree((unsigned int)v7); /*0x4597ea*/
  return v8; /*0x459799*/
}
