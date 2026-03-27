double __usercall ClsoeSleepWaitMenu@<st0>(double a1@<st2>, double a2@<st1>, double result@<st0>)
{
  Tile *OpenMenuTile; // eax
  Tile *v5; // esi
  _DWORD *ParentMenu; // edi
  InterfaceManager *Singleton; // eax

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3F4);
  v5 = OpenMenuTile;
  if ( OpenMenuTile )
  {
    ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile);
    if ( ParentMenu )
    {
      Singleton = InterfaceManager_GetSingleton(0, 1);
      sub_5806D0((int)Singleton, a1, a2, result);
      sub_6AC330((_DWORD *)OSGlobals->sound, 0x100);
      sub_57DE50(2);
      result = fConstant_2;
      Tile_SetFloat(v5, (_DWORD *)0x1772, fConstant_2);
      sub_584740(ParentMenu, a1, a2);
    }
  }
  return result;
}
