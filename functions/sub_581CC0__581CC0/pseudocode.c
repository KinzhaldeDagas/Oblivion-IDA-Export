LONG __thiscall sub_581CC0(InterfaceManager *this, char a4)
{
  double v2; // st5
  int v4; // eax
  double v5; // st7
  double v6; // st6
  double v7; // st7
  double v8; // st7
  NiNode *v9; // eax
  NiNode *v10; // eax
  SceneGraph *unk000; // esi
  NiObjectNET *v12; // eax
  NiObjectNET *v13; // ebp
  TileImage *v14; // eax
  NiAVObject **v15; // esi
  double v16; // st7
  float *v17; // eax
  double v18; // st6
  LONG result; // eax
  float v20; // [esp+2Ch] [ebp-38h]
  float v21; // [esp+2Ch] [ebp-38h]
  float a3; // [esp+44h] [ebp-20h]
  float a3a; // [esp+44h] [ebp-20h]
  float a3b; // [esp+44h] [ebp-20h]
  float a3c; // [esp+44h] [ebp-20h]
  float v26; // [esp+48h] [ebp-1Ch]
  float v27; // [esp+48h] [ebp-1Ch]
  float v28; // [esp+50h] [ebp-14h]

  v4 = FormHeapAlloc(0x44u); /*0x581ceb*/
  if ( v4 ) /*0x581cf7*/
  {
    *(_DWORD *)(v4 + 8) = 0; /*0x581cf9*/
    *(_WORD *)(v4 + 0xC) = 0; /*0x581cfc*/
    *(_WORD *)(v4 + 0xE) = 0; /*0x581d00*/
    *(_DWORD *)(v4 + 0x20) = 0; /*0x581d04*/
    *(_DWORD *)(v4 + 0x18) = 0; /*0x581d07*/
    *(_DWORD *)(v4 + 0x1C) = 0; /*0x581d0a*/
    *(_DWORD *)(v4 + 0x14) = &NiTList<Tile::Value *>::`vftable'; /*0x581d0d*/
    *(_DWORD *)(v4 + 0x3C) = 0; /*0x581d14*/
    *(_DWORD *)(v4 + 0x34) = 0; /*0x581d17*/
    *(_DWORD *)(v4 + 0x38) = 0; /*0x581d1a*/
    *(_DWORD *)(v4 + 0x30) = &NiTList<Tile *>::`vftable'; /*0x581d1d*/
    *(_DWORD *)(v4 + 0x24) = 0; /*0x581d24*/
    *(_DWORD *)(v4 + 0x10) = 0; /*0x581d27*/
    *(_BYTE *)(v4 + 4) = 0; /*0x581d2a*/
    *(_BYTE *)(v4 + 6) = 0; /*0x581d2d*/
    *(_DWORD *)v4 = &TileRect::`vftable'; /*0x581d30*/
  }
  else
  {
    v4 = 0; /*0x581d38*/
  }
  this->menuRoot = (Tile *)v4; /*0x581d3b*/
  (*(void (__thiscall **)(int, _DWORD, const char *, _DWORD))(*(_DWORD *)v4 + 4))(
    v4,
    0,
    "InterfaceManager: Menus Root",
    0);
  BSStringT_Set((BSStringT *)this->menuRoot + 1, "MenuRoot", 0); /*0x581d59*/
  Tile_SetFloat(this->menuRoot, 0xFA6u, fConstant_2); /*0x581d70*/
  Tile_SetFloat(this->menuRoot, 0x1771u, flt_A68C00); /*0x581d87*/
  Tile_SetFloat(this->menuRoot, 0xFA7u, 0.0); /*0x581d9a*/
  a3 = (float)nWidth; /*0x581da5*/
  v26 = (float)nHeight; /*0x581daf*/
  if ( v26 >= (double)a3 ) /*0x581dc2*/
    v5 = flt_A688A8; /*0x581dd2*/
  else
    v5 = a3 / v26 * dbl_A68D70; /*0x581dc6*/
  a3a = v5; /*0x581dd9*/
  Tile_SetFloat(this->menuRoot, 0xFCBu, a3a); /*0x581dec*/
  a3b = (float)nWidth; /*0x581df7*/
  v27 = (float)nHeight; /*0x581e01*/
  v6 = a3b; /*0x581e09*/
  if ( a3b >= (double)v27 ) /*0x581e14*/
    v7 = flt_A68D78; /*0x581e24*/
  else
    v7 = v27 / v6 * dbl_A688A0; /*0x581e18*/
  a3c = v7; /*0x581e2b*/
  Tile_SetFloat(this->menuRoot, 0xFCAu, a3c); /*0x581e3e*/
  v20 = sub_57D330(); /*0x581e4c*/
  Tile_SetFloat(this->menuRoot, 0xFDAu, v20); /*0x581e54*/
  v8 = sub_57D390(); /*0x581e59*/
  v21 = v8; /*0x581e62*/
  Tile_SetFloat(this->menuRoot, 0xFD9u, v21); /*0x581e6a*/
  sub_5903E0(v2, v8, v6); /*0x581e6f*/
  this->strings = Tile::ReadFile(this->menuRoot, "Data\\Menus\\strings.xml"); /*0x581e87*/
  sub_584670("Data\\Menus\\strings.xml", 0); /*0x581e8a*/
  Tile::SetParent(this->strings, 0, 0); /*0x581e97*/
  v9 = (NiNode *)FormHeapAlloc(0xDCu); /*0x581ea1*/
  if ( v9 ) /*0x581eb3*/
    v10 = NiNode::NiNode(v9, 0); /*0x581eb8*/
  else
    v10 = 0; /*0x581ebf*/
  this->unk070 = v10; /*0x581ed0*/
  NiObjectNET_SetName((NiObjectNET *)v10, "InterfaceManager: DebugText Root");
  this->unk070->members.super.m_flags &= ~1u; /*0x581edb*/
  ((void (__thiscall *)(NiNode *, NiNode *, _DWORD))this->unk054[0]->vtbl->AddObject)(this->unk054[0], this->unk070, 0); /*0x581ef1*/
  unk000 = this->unk000; /*0x581ef3*/
  NiAVObject_InitializePropertyState((NiAVObject *)this->unk000); /*0x581ef7*/
  NiNode_UpdateDynamicEffectState((NiNode *)unk000); /*0x581efe*/
  NiAVObject_UpdateNiAVObject((NiAVObject *)unk000, 0.0, 1); /*0x581f0d*/
  v12 = (NiObjectNET *)FormHeapAlloc(0x34u); /*0x581f14*/
  if ( v12 ) /*0x581f2a*/
    v13 = NiFogProperty_constr(v12); /*0x581f33*/
  else
    v13 = 0; /*0x581f37*/
  if ( v13 ) /*0x581f3f*/
    InterlockedIncrement((volatile LONG *)&v13->members); /*0x581f45*/
  *(float *)&v13[1].members.m_extraDataListLen = 0.0; /*0x581f4d*/
  *(float *)&v13[2].vtbl = 0.0; /*0x581f51*/
  sub_405680((NiNode *)this->unk004, (BSShaderProperty *)v13); /*0x581f5f*/
  this->debugTextOn = 0; /*0x581f66*/
  v14 = (TileImage *)FormHeapAlloc(0x4Cu); /*0x581f69*/
  if ( v14 ) /*0x581f7c*/
    v15 = (NiAVObject **)TileImage::TileImage(v14); /*0x581f85*/
  else
    v15 = 0; /*0x581f89*/
  ((void (__thiscall *)(NiAVObject **, _DWORD, const char *, _DWORD))(*v15)->members.super.super.m_uiRefCount)( /*0x581f9e*/
    v15,
    0,
    "Cursor",
    0);
  Tile_SetFloat((Tile *)v15, 0xFABu, flt_A342A0); /*0x581fb1*/
  Tile_SetFloat((Tile *)v15, 0xFCBu, flt_A56670); /*0x581fc7*/
  Tile_SetFloat((Tile *)v15, 0xFCAu, flt_A56670); /*0x581fdd*/
  Tile_SetString(v15, (_DWORD *)0xFE6, "Menus\\Misc\\cursor.dds"); /*0x581fee*/
  Tile_SetFloat((Tile *)v15, 0xFADu, 0.0); /*0x582000*/
  Tile_SetFloat((Tile *)v15, 0xFACu, 0.0); /*0x582012*/
  Tile_SetFloat((Tile *)v15, 0xFA1u, 1.0); /*0x582024*/
  Tile_SetFloat((Tile *)v15, 0xFA7u, flt_A40098); /*0x58203a*/
  Tile_SetFloat((Tile *)v15, 0xFCCu, flt_A40098); /*0x582050*/
  Tile_SetFloat((Tile *)v15, 0xFCDu, flt_A40098); /*0x582066*/
  v16 = flt_A40098; /*0x58206b*/
  Tile_SetFloat((Tile *)v15, 0xFCEu, flt_A40098); /*0x58207c*/
  sub_58E870((int)v15, v2, v6, v16); /*0x582083*/
  if ( !v15[9] ) /*0x582088*/
    sub_533D30(1, "The Cursor could not be created. Check art resources. \n"); /*0x582094*/
  ((void (__thiscall *)(NiNode *, NiAVObject *, int))this->unk054[1]->vtbl->AddObject)(this->unk054[1], v15[9], 1); /*0x5820ad*/
  v17 = (float *)v15[9]; /*0x5820b1*/
  v18 = kTerrainLODQuadRayDirectionZ; /*0x5820b8*/
  v28 = kTerrainLODQuadRayDirectionZ; /*0x5820c2*/
  v17[0x15] = 0.0; /*0x5820c6*/
  v17[0x16] = v28; /*0x5820cd*/
  v17[0x17] = 0.0; /*0x5820d8*/
  NiAVObject_InitializePropertyState(v15[9]); /*0x5820de*/
  NiNode_UpdateDynamicEffectState((NiNode *)v15[9]); /*0x5820e6*/
  NiAVObject_UpdateNiAVObject(v15[9], 0.0, 1); /*0x5820f6*/
  this->cursor = (Tile *)v15; /*0x5820fd*/
  sub_57E7C0((float *)this); /*0x582100*/
  *(_WORD *)(*((_DWORD *)this->cursor + 9) + 0x18) |= 1u; /*0x58210b*/
  if ( a4 ) /*0x582114*/
    sub_578E10((char)v13, v2, v18, 0.0, 0); /*0x582117*/
  result = InterlockedDecrement((volatile LONG *)&v13->members); /*0x58212b*/
  if ( !result ) /*0x582133*/
    return (*(LONG (__thiscall **)(NiObjectNET *, int))v13->vtbl)(v13, 1); /*0x58213e*/
  return result; /*0x582140*/
}
