char __thiscall sub_536AE0(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = *(this + 7);
  if ( !v2 )
    return 0;
  while ( *(_DWORD *)(v2 + 0xC) != a2 )
  {
    v2 = *(_DWORD *)(v2 + 4);
    if ( !v2 )
      return 0;
  }
  return 1;
}
