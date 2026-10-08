char __thiscall sub_4C9230(int *this)
{
  int v2; // eax
  int v4; // eax
  int v5; // esi
  int v6; // [esp+4h] [ebp-4h] BYREF

  v2 = *(this + 9); /*0x4c9234*/
  if ( !v2 ) /*0x4c9239*/
    return 0; /*0x4c923f*/
  v6 = 0; /*0x4c924c*/
  NiTMap_GetAt(&off_B09414, v2, &v6); /*0x4c9254*/
  v4 = *(this + 9); /*0x4c9260*/
  if ( unk_B35300 ) /*0x4c9259*/
  {
    if ( *(_DWORD *)(v4 + 4) == v6 + 1 ) /*0x4c926f*/
    {
      if ( v6 == 1 ) /*0x4c9274*/
        NiTMap_RemoveAt(&off_B09414, *(this + 9)); /*0x4c928a*/
      else
        NiTMap_SetAt(&off_B09414, v4, v6 - 1); /*0x4c927d*/
      v5 = *(this + 9); /*0x4c928f*/
      if ( !v5 ) /*0x4c9294*/
        return 1; /*0x4c9294*/
      goto LABEL_15; /*0x4c9294*/
    }
  }
  else if ( *(_DWORD *)(v4 + 4) == v6 ) /*0x4c929f*/
  {
    if ( v6 == 1 ) /*0x4c92a4*/
      NiTMap_RemoveAt(&off_B09414, *(this + 9)); /*0x4c92ba*/
    else
      NiTMap_SetAt(&off_B09414, v4, v6 - 1); /*0x4c92ad*/
    v5 = *(this + 9); /*0x4c92bf*/
    if ( !v5 ) /*0x4c92c4*/
      return 1; /*0x4c92c4*/
LABEL_15:
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x4c92ca*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x4c92e0*/
    *(this + 9) = 0; /*0x4c92e2*/
    return 1; /*0x4c92ee*/
  }
  return 0; /*0x4c923d*/
}
