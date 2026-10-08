TileMenu *__userpurge TileMenu_UpdateProperty@<eax>(
        TileMenu *a1@<ecx>,
        double st6_0@<st1>,
        double a3@<st0>,
        TileMenu *a4,
        float a5,
        int a6)
{
  int v7; // ebx
  Menu *Dynamic; // eax
  _DWORD *GlobalScriptStateObj; // eax
  _DWORD *v11; // edi
  double Float; // st7
  _DWORD *v13; // edi
  float a2; // [esp+0h] [ebp-10h]
  char v15; // [esp+8h] [ebp-8h]
  int v16; // [esp+Ch] [ebp-4h]

  if ( a4 != (TileMenu *)0xFA2 ) /*0x591c5c*/
    return 0; /*0x591c5c*/
  v7 = Double_To_SInt32(a3); /*0x591c67*/
  Menu_GetB3A708(1); /*0x591c6c*/
  Dynamic = Menu_CreateDynamic(v7); /*0x591c76*/
  *((_DWORD *)a1 + 0x11) = Dynamic; /*0x591c7d*/
  if ( !Dynamic )
  {
    GlobalScriptStateObj = (_DWORD *)GetGlobalScriptStateObj__(1); /*0x591c89*/
    sub_585F40(GlobalScriptStateObj, "ERROR: Cant find menu class!", v15, v16);
    return 0; /*0x591c9e*/
  }
  Menu_SetTileMenu(Dynamic, st6_0, a3, a1); /*0x591ca5*/
  v11 = *((_DWORD **)a1 + 0x11); /*0x591caa*/
  v11[8] = (*(int (__thiscall **)(_DWORD *))(*v11 + 0x34))(v11); /*0x591cbd*/
  Float = Tile_GetFloat(a1, 0xFA5); /*0x591cc0*/
  if ( Float == fXMLI_NoClickPast || (Float = Tile_GetFloat(a1, 0xFA5), Float == fXMLI_MixedMenu) ) /*0x591ce9*/
  {
    v13 = *((_DWORD **)a1 + 0x11); /*0x591ceb*/
    v13[5] = (*(int (__thiscall **)(_DWORD *))(*v13 + 0x34))(v13); /*0x591cf7*/
    a2 = InterfaceManager_GetDepthR(Float); /*0x591d00*/
    Tile_SetFloat(a1, 0xFABu, a2); /*0x591d0a*/
  }
  a4 = a1; /*0x591d20*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)&Menu_OpenMenuArray, v7 - 0x3E9, &a4); /*0x591d24*/
  return a1; /*0x591c9a*/
}
