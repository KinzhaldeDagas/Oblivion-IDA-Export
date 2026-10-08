char __usercall sub_5A4510@<al>(double a1@<st2>, double a2@<st0>, double a3@<st1>)
{
  _DWORD *OpenMenuTile; // eax
  int *v4; // eax
  int v5; // esi
  float *Singleton; // eax

  if ( !dword_B3B0B4[0xA1] && !dword_B3B0B4[0xA0] ) /*0x5a4519*/
    return 0; /*0x5a4519*/
  if ( InterfaceManager_IsMenuVisibleByID(0x3F1, 0) ) /*0x5a452d*/
  {
    OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F1); /*0x5a453e*/
    if ( *(_DWORD *)(Tile_GetParentMenu(OpenMenuTile) + 0x24) == 1 ) /*0x5a4551*/
      return 0; /*0x5a4656*/
  }
  v4 = (int *)dword_B3B0B4[0xA1]; /*0x5a4557*/
  v5 = dword_B3B0B4[0xA0]; /*0x5a455f*/
  if ( dword_B3B0B4[0xA1] ) /*0x5a4557*/
  {
    dword_B3B0B4[0xA1] = v4[1]; /*0x5a456a*/
    dword_B3B0B4[0xA0] = *v4; /*0x5a4573*/
    FormHeapFree((unsigned int)v4); /*0x5a4579*/
  }
  else
  {
    dword_B3B0B4[0xA0] = 0; /*0x5a4583*/
  }
  sub_5A44E0(a2, a1, *(char **)v5, *(_DWORD *)(v5 + 8), 0, *(_DWORD *)(v5 + 0x2AC), 4, v5 + 0x60); /*0x5a462e*/
  Singleton = (float *)InterfaceManager_GetSingleton(0, 1); /*0x5a4643*/
  InterfaceManager::SetCurrentFocusTarget(Singleton, a1, a2, a3, 0.0, (_DWORD *)0xFDD, 0); /*0x5a464d*/
  return 1; /*0x5a4655*/
}
