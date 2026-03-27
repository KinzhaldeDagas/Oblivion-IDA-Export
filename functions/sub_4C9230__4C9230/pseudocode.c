char __thiscall sub_4C9230(int *this)
{
  int v2; // eax
  int v4; // eax
  int v5; // esi
  int v6; // [esp+4h] [ebp-4h] BYREF

  v2 = *(this + 9);
  if ( !v2 )
    return 0;
  v6 = 0;
  NiTMap_GetAt(&off_B09414, v2, &v6);
  v4 = *(this + 9);
  if ( dword_B35300 )
  {
    if ( *(_DWORD *)(v4 + 4) == v6 + 1 )
    {
      if ( v6 == 1 )
        NiTMap_RemoveAt(&off_B09414, *(this + 9));
      else
        NiTMap_SetAt(&off_B09414, v4, v6 - 1);
      v5 = *(this + 9);
      if ( !v5 )
        return 1;
      goto LABEL_15;
    }
  }
  else if ( *(_DWORD *)(v4 + 4) == v6 )
  {
    if ( v6 == 1 )
      NiTMap_RemoveAt(&off_B09414, *(this + 9));
    else
      NiTMap_SetAt(&off_B09414, v4, v6 - 1);
    v5 = *(this + 9);
    if ( !v5 )
      return 1;
LABEL_15:
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *(this + 9) = 0;
    return 1;
  }
  return 0;
}
