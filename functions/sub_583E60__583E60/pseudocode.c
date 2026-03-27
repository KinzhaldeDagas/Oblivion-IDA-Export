void __usercall sub_583E60(_BYTE *this@<ecx>, char bp0@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st3>)
{
  InputGlobal *input; // edi
  char v7; // al
  double v8; // st7
  int v9; // ecx
  double v10; // st7
  _BYTE *GlobalScriptStateObj; // eax
  double v12; // st7
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax
  float a2; // [esp+0h] [ebp-Ch]

  input = OSGlobals->input;
  sub_583C30(this);
  v7 = *(this + 8);
  if ( v7 != 3 || *(this + 9) )
  {
    if ( v7 == 5 )
      *(this + 8) = 2;
  }
  else
  {
    InputGlobals::FlushKeyboardBuffer(input);
    v8 = fConstant_2;
    v9 = *((_DWORD *)this + 7);
    *(this + 8) = 5;
    *(_WORD *)(*(_DWORD *)(v9 + 0x24) + 0x18) &= ~1u;
    a2 = v8;
    Tile_SetFloat(*((Tile **)this + 7), (_DWORD *)0xFA1, a2);
    Tile_SetString(*((_DWORD **)this + 7), (_DWORD *)0xFE6, "Menus\\Misc\\cursor.dds");
    sub_58E870(*((_DWORD *)this + 7), a3, a4, v8);
    v10 = sub_57D940((int)this, bp0, a3, a4, v8, a5, 0);
    sub_5A4980(a3, a4, v10, 0, 0, 0);
    *((_DWORD *)this + 0x22) = 0;
    GlobalScriptStateObj = (_BYTE *)GetGlobalScriptStateObj__(0);
    if ( GlobalScriptStateObj )
      sub_585820(GlobalScriptStateObj, bp0, a3, a4, v10);
    v12 = sub_5A6040(a3, a4, bp0, v10, 1, 0);
    OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3ED);
    if ( OpenMenuTile )
    {
      ParentMenu = Tile_GetParentMenu(OpenMenuTile);
      sub_584740(ParentMenu, a3, a4, bp0, v12);
    }
  }
}
