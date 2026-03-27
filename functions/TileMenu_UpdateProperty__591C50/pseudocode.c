TileMenu *__userpurge TileMenu_UpdateProperty@<eax>(
        TileMenu *a1@<ecx>,
        double st6_0@<st1>,
        double a3@<st0>,
        TileMenu *a4,
        float a5,
        int a6)
{
  int v9; // ebx
  Menu *Dynamic; // eax
  _DWORD *GlobalScriptStateObj; // eax
  _DWORD *v13; // edi
  double Float; // st7
  _DWORD *v15; // edi
  float a2; // [esp+0h] [ebp-10h]
  char v17; // [esp+8h] [ebp-8h]
  int v18; // [esp+Ch] [ebp-4h]

  if ( a4 != (TileMenu *)0xFA2 )
    return 0;
  v9 = Double_To_SInt32(a3);
  Menu_GetB3A708(1);
  Dynamic = Menu_CreateDynamic(v9);
  *((_DWORD *)a1 + 0x11) = Dynamic;
  if ( !Dynamic )
  {
    GlobalScriptStateObj = (_DWORD *)GetGlobalScriptStateObj__(1);
    sub_585F40(GlobalScriptStateObj, "ERROR: Cant find menu class!", v17, v18);
    return 0;
  }
  Menu_SetTileMenu(Dynamic, st6_0, a3, a1);
  v13 = *((_DWORD **)a1 + 0x11);
  v13[8] = (*(int (__thiscall **)(_DWORD *))(*v13 + 0x34))(v13);
  Float = Tile_GetFloat(a1, 0xFA5);
  if ( Float == fXMLI_NoClickPast || (Float = Tile_GetFloat(a1, 0xFA5), Float == fXMLI_MixedMenu) )
  {
    v15 = *((_DWORD **)a1 + 0x11);
    v15[5] = (*(int (__thiscall **)(_DWORD *))(*v15 + 0x34))(v15);
    a2 = InterfaceManager_GetDepthR(Float);
    Tile_SetFloat(a1, (_DWORD *)0xFAB, a2);
  }
  a4 = a1;
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)&Menu_OpenMenuArray, v9 - 0x3E9, &a4);
  return a1;
}
