bool __thiscall sub_680790(_DWORD *this, int a2)
{
  int v2; // esi

  if ( !a2 )
    return 0;
  if ( *(this + 2) == a2 )
  {
    v2 = *(this + 1);
    return v2 && ((*(_DWORD *)(v2 + 8) & 0x800) == 0 || sub_67F0E0()) && (*(_DWORD *)(v2 + 8) & 0x20) == 0;
  }
  if ( *(this + 4) == a2 )
  {
    v2 = *(this + 3);
    return v2 && ((*(_DWORD *)(v2 + 8) & 0x800) == 0 || sub_67F0E0()) && (*(_DWORD *)(v2 + 8) & 0x20) == 0;
  }
  return 0;
}
