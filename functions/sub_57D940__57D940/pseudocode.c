double __userpurge sub_57D940@<st0>(
        int a1@<ecx>,
        char a2@<bpl>,
        double st5_0@<st2>,
        double a4@<st1>,
        double result@<st0>,
        double a6@<st3>,
        int a7)
{
  Tile *v8; // ecx
  bool v9; // bl
  _DWORD *v10; // eax
  void (__thiscall ***v11)(_DWORD, int); // ecx
  unsigned int *XML; // eax

  if ( TESDataHandler_g_PlayerRef )
  {
    v8 = *(Tile **)(a1 + 0x80);
    v9 = 0;
    if ( v8 )
    {
      Tile_SetFloat(v8, (_DWORD *)0xFA1, fConstant_2);
      v10 = (_DWORD *)sub_5A8260();
      if ( v10 )
        v9 = Tile_GetFloat(v10, 0xFA1) != fConstant_1;
    }
    v11 = *(void (__thiscall ****)(_DWORD, int))(a1 + 0x80);
    if ( !v11 || a7 != 2 )
      v9 = a7 > 0;
    if ( v11 )
    {
      if ( a7 == 3 )
      {
        (**v11)(v11, 1);
        *(_DWORD *)(a1 + 0x80) = 0;
      }
    }
    if ( !*(_DWORD *)(a1 + 0x80) && v9 )
    {
      byte_B3B0A2 = 1;
      XML = Menu_LoadXML(*(TileWindow **)(a1 + 0x68), st5_0, a4, result, "Data\\Menus\\Main\\hud_reticle.xml");
      *(_DWORD *)(a1 + 0x80) = XML;
      result = sub_5A8000(XML);
      byte_B3B0A2 = 0;
    }
    sub_5A8710(a2, st5_0, a4, result, a6, a7);
  }
  return result;
}
