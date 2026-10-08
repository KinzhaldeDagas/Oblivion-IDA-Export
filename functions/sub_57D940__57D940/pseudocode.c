void __userpurge sub_57D940(int a1@<ecx>, double Float@<st4>, int a3)
{
  Tile *v9; // ecx
  bool v10; // bl
  _DWORD *v11; // eax
  void (__thiscall ***v12)(_DWORD, int); // ecx
  Tile *File; // eax

  if ( reference ) /*0x57d940*/
  {
    v9 = *(Tile **)(a1 + 0x80); /*0x57d950*/
    v10 = 0; /*0x57d957*/
    if ( v9 ) /*0x57d95c*/
    {
      Float = fConstant_2; /*0x57d95e*/
      Tile_SetFloat(v9, 0xFA1u, fConstant_2); /*0x57d96d*/
      v11 = (_DWORD *)sub_5A8260(); /*0x57d972*/
      if ( v11 ) /*0x57d979*/
      {
        Float = Tile_GetFloat(v11, 0xFA1); /*0x57d982*/
        v10 = Float != fConstant_1; /*0x57d992*/
      }
    }
    v12 = *(void (__thiscall ****)(_DWORD, int))(a1 + 0x80); /*0x57d99a*/
    if ( !v12 || a3 != 2 ) /*0x57d9ab*/
      v10 = a3 > 0; /*0x57d9af*/
    if ( v12 ) /*0x57d9b4*/
    {
      if ( a3 == 3 ) /*0x57d9b9*/
      {
        (**v12)(v12, 1); /*0x57d9c1*/
        *(_DWORD *)(a1 + 0x80) = 0; /*0x57d9c3*/
      }
    }
    if ( !*(_DWORD *)(a1 + 0x80) && v10 ) /*0x57d9d8*/
    {
      unk_B3B0A2 = 1; /*0x57d9da*/
      File = Tile::ReadFile(*(Tile **)(a1 + 0x68), "Data\\Menus\\Main\\hud_reticle.xml"); /*0x57d9e9*/
      *(_DWORD *)(a1 + 0x80) = File; /*0x57d9ef*/
      sub_5A8000(File); /*0x57d9f5*/
      unk_B3B0A2 = 0; /*0x57d9fd*/
    }
    sub_5A8710(Float, a3); /*0x57da05*/
  }
}
