bool __thiscall sub_75E600(int *this, int a2)
{
  int v2; // esi
  NiRTTI *v4; // eax
  int v6; // eax

  v2 = a2; /*0x75e601*/
  if ( !a2 ) /*0x75e60a*/
    return 0; /*0x75e60a*/
  v4 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x75e613*/
  if ( !v4 ) /*0x75e617*/
    return 0; /*0x75e617*/
  while ( v4 != &stru_B40864 ) /*0x75e625*/
  {
    v4 = v4->parent; /*0x75e627*/
    if ( !v4 ) /*0x75e62c*/
      return 0; /*0x75e62c*/
  }
  v6 = *(this + 0x10); /*0x75e635*/
  return v6 && *(this + 0xC) && NiTMap_GetAt((_DWORD *)(v2 + 0xD4), v6, &a2) && a2; /*0x75e65f*/
}
