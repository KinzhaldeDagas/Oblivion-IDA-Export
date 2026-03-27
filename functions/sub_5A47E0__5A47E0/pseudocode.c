char __cdecl sub_5A47E0(int a1)
{
  int v1; // eax

  v1 = g_HUDInfoMenu;
  if ( !g_HUDInfoMenu || *(_DWORD *)(v1 + 0x54) != a1 )
    return 0;
  *(_DWORD *)(v1 + 0x54) = 0;
  return 1;
}
