char __thiscall sub_72BCA0(int *this, int *a2)
{
  int *v2; // ebp
  unsigned int v5; // edi
  int v6; // esi

  v2 = a2;
  if ( NiTMap_GetAt((_DWORD *)*a2, *(this + 4), &a2) )
    return 1;
  v5 = *(_DWORD *)(*(this + 2) + 0x40);
  v6 = 0;
  if ( !v5 )
    return 0;
  while ( !NiTMap_GetAt((_DWORD *)*v2, *(_DWORD *)(*(this + 5) + 4 * v6), &a2) )
  {
    if ( ++v6 >= v5 )
      return 0;
  }
  return 1;
}
