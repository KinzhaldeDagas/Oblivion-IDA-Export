void __thiscall sub_477F90(int this)
{
  int v1; // esi
  unsigned __int16 v2; // ax
  __int16 v3; // ax

  if ( *(_WORD *)(this + 0xA) )
  {
    v1 = *(_DWORD *)(this + 4);
    do
    {
      v2 = *(_WORD *)(this + 0xA);
      if ( *(_DWORD *)(v1 + 4 * v2 - 4) )
        break;
      v3 = v2 - 1;
      *(_WORD *)(this + 0xA) = v3;
    }
    while ( v3 );
  }
}
