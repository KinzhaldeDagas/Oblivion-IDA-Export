double __usercall sub_583E60@<st0>(
        _BYTE *this@<ecx>,
        char bp0@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st3>,
        double result@<st0>)
{
  InputGlobal *input; // edi
  char v8; // al
  double v9; // st7
  int v10; // ecx
  _BYTE *GlobalScriptStateObj; // eax
  _DWORD *OpenMenuTile; // eax
  _DWORD *ParentMenu; // eax
  float a2; // [esp+0h] [ebp-Ch]

  input = MEMORY[0xB33398]->input; /*0x583e67*/
  InterfaceManager::UpdateAllTimers(this); /*0x583e6c*/
  v8 = *(this + 8); /*0x583e71*/
  if ( v8 != 3 || *(this + 9) ) /*0x583e7c*/
  {
    if ( v8 == 5 ) /*0x583f2d*/
      *(this + 8) = 2; /*0x583f2f*/
  }
  else
  {
    InputGlobals::FlushKeyboardBuffer(input); /*0x583e88*/
    v9 = fConstant_2; /*0x583e8d*/
    v10 = *((_DWORD *)this + 7); /*0x583e93*/
    *(this + 8) = 5; /*0x583e96*/
    *(_WORD *)(*(_DWORD *)(v10 + 0x24) + 0x18) &= ~1u; /*0x583e9d*/
    a2 = v9; /*0x583ea7*/
    Tile_SetFloat(*((Tile **)this + 7), 0xFA1u, a2); /*0x583eaf*/
    Tile_SetString(*((_DWORD **)this + 7), (_DWORD *)0xFE6, "Menus\\Misc\\cursor.dds"); /*0x583ec1*/
    sub_58E870(*((_DWORD *)this + 7), a3, a4, v9); /*0x583ec9*/
    result = sub_57D940((int)this, bp0, a3, a4, v9, a5, 0); /*0x583ed2*/
    sub_5A4980(a3, a4, result, 0, 0, 0); /*0x583edd*/
    *((_DWORD *)this + 0x22) = 0; /*0x583ee4*/
    GlobalScriptStateObj = (_BYTE *)GetGlobalScriptStateObj__(0); /*0x583eee*/
    if ( GlobalScriptStateObj ) /*0x583ef8*/
      sub_585820(GlobalScriptStateObj, bp0, a3, a4, result); /*0x583efc*/
    sub_5A6040(a3, a4, 1, 0); /*0x583f05*/
    OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3ED); /*0x583f0f*/
    if ( OpenMenuTile ) /*0x583f19*/
    {
      ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile); /*0x583f1d*/
      Menu::StartFadeOut(ParentMenu, a4); /*0x583f26*/
    }
  }
  return result; /*0x583f22*/
}
