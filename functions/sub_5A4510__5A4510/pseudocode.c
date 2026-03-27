char __usercall sub_5A4510@<al>(double a1@<st2>, double a2@<st0>, double a3@<st1>)
{
  _DWORD *OpenMenuTile; // eax
  int *v5; // eax
  int v6; // esi
  float *Singleton; // eax

  if ( !dword_B3B338 && !dword_B3B334 )
    return 0;
  if ( sub_5790E0(0x3F1, 0) )
  {
    OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F1);
    if ( *(_DWORD *)(Tile_GetParentMenu(OpenMenuTile) + 0x24) == 1 )
      return 0;
  }
  v5 = (int *)dword_B3B338;
  v6 = dword_B3B334;
  if ( dword_B3B338 )
  {
    dword_B3B338 = v5[1];
    dword_B3B334 = *v5;
    FormHeapFree((unsigned int)v5);
  }
  else
  {
    dword_B3B334 = 0;
  }
  sub_5A44E0(a2, a3, *(char **)v6, *(_DWORD *)(v6 + 8), 0, *(_DWORD *)(v6 + 0x2AC), 4, v6 + 0x60);
  Singleton = (float *)InterfaceManager_GetSingleton(0, 1);
  sub_57F9F0(Singleton, a1, a2, a3, 0.0, (_DWORD *)0xFDD, 0);
  return 1;
}
