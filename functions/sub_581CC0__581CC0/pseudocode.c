LONG __thiscall sub_581CC0(InterfaceManager *this, char a4)
{
  char v2; // bp
  double v3; // st5
  int v5; // eax
  double v6; // st7
  double v7; // st6
  double v8; // st7
  double v9; // st7
  NiNode *v10; // eax
  NiNode *v11; // eax
  SceneGraph *unk000; // esi
  NiObjectNET *v13; // eax
  NiObjectNET *v14; // ebp
  TileImage *v15; // eax
  NiAVObject **v16; // esi
  double v17; // st7
  float *v18; // eax
  double v19; // st6
  LONG result; // eax
  float v21; // [esp+2Ch] [ebp-38h]
  float v22; // [esp+2Ch] [ebp-38h]
  float a3; // [esp+44h] [ebp-20h]
  float a3a; // [esp+44h] [ebp-20h]
  float a3b; // [esp+44h] [ebp-20h]
  float a3c; // [esp+44h] [ebp-20h]
  float v27; // [esp+48h] [ebp-1Ch]
  float v28; // [esp+48h] [ebp-1Ch]
  float v29; // [esp+50h] [ebp-14h]

  v5 = FormHeapAlloc(0x44u);
  if ( v5 )
  {
    *(_DWORD *)(v5 + 8) = 0;
    *(_WORD *)(v5 + 0xC) = 0;
    *(_WORD *)(v5 + 0xE) = 0;
    *(_DWORD *)(v5 + 0x20) = 0;
    *(_DWORD *)(v5 + 0x18) = 0;
    *(_DWORD *)(v5 + 0x1C) = 0;
    *(_DWORD *)(v5 + 0x14) = &NiTList<Tile::Value *>::`vftable';
    *(_DWORD *)(v5 + 0x3C) = 0;
    *(_DWORD *)(v5 + 0x34) = 0;
    *(_DWORD *)(v5 + 0x38) = 0;
    *(_DWORD *)(v5 + 0x30) = &NiTList<Tile *>::`vftable';
    *(_DWORD *)(v5 + 0x24) = 0;
    *(_DWORD *)(v5 + 0x10) = 0;
    *(_BYTE *)(v5 + 4) = 0;
    *(_BYTE *)(v5 + 6) = 0;
    *(_DWORD *)v5 = &TileRect::`vftable';
  }
  else
  {
    v5 = 0;
  }
  this->menuRoot = (Tile *)v5;
  (*(void (__thiscall **)(int, _DWORD, const char *, _DWORD))(*(_DWORD *)v5 + 4))(
    v5,
    0,
    "InterfaceManager: Menus Root",
    0);
  BSStringT_Set((BSStringT *)this->menuRoot + 1, "MenuRoot", 0);
  Tile_SetFloat(this->menuRoot, (_DWORD *)0xFA6, fConstant_2);
  Tile_SetFloat(this->menuRoot, (_DWORD *)0x1771, flt_A68C00);
  Tile_SetFloat(this->menuRoot, (_DWORD *)0xFA7, 0.0);
  a3 = (float)nWidth;
  v27 = (float)nHeight;
  if ( v27 >= (double)a3 )
    v6 = flt_A688A8;
  else
    v6 = a3 / v27 * dbl_A68D70;
  a3a = v6;
  Tile_SetFloat(this->menuRoot, (_DWORD *)0xFCB, a3a);
  a3b = (float)nWidth;
  v28 = (float)nHeight;
  v7 = a3b;
  if ( a3b >= (double)v28 )
    v8 = flt_A68D78;
  else
    v8 = v28 / v7 * dbl_A688A0;
  a3c = v8;
  Tile_SetFloat(this->menuRoot, (_DWORD *)0xFCA, a3c);
  v21 = sub_57D330();
  Tile_SetFloat(this->menuRoot, (_DWORD *)0xFDA, v21);
  v9 = sub_57D390();
  v22 = v9;
  Tile_SetFloat(this->menuRoot, (_DWORD *)0xFD9, v22);
  sub_5903E0(v3, v2, v9, v7);
  this->strings = (Tile *)Menu_LoadXML(this->menuRoot, v3, v7, v9, "Data\\Menus\\strings.xml");
  sub_584670("Data\\Menus\\strings.xml", 0);
  sub_58D1C0((float *)this->strings, 0.0, 0);
  v10 = (NiNode *)FormHeapAlloc(0xDCu);
  if ( v10 )
    v11 = NiNode::NiNode(v10, 0);
  else
    v11 = 0;
  this->unk070 = v11;
  NiObjectNET_SetName((NiObjectNET *)v11, "InterfaceManager: DebugText Root");
  this->unk070->members.super.m_flags &= ~1u;
  ((void (__thiscall *)(NiNode *, NiNode *, _DWORD))this->unk054[0]->vtbl->AddObject)(this->unk054[0], this->unk070, 0);
  unk000 = this->unk000;
  NiAVObject_InitializePropertyState((NiAVObject *)this->unk000);
  NiNode_UpdateDynamicEffectState((NiNode *)unk000);
  NiAVObject_UpdateNiAVObject((NiAVObject *)unk000, 0.0, 1);
  v13 = (NiObjectNET *)FormHeapAlloc(0x34u);
  if ( v13 )
    v14 = NiFogProperty_constr(v13);
  else
    v14 = 0;
  if ( v14 )
    InterlockedIncrement((volatile LONG *)&v14->members);
  *(float *)&v14[1].members.m_extraDataListLen = 0.0;
  *(float *)&v14[2].vtbl = 0.0;
  sub_405680((NiNode *)this->unk004, (BSShaderProperty *)v14);
  this->debugTextOn = 0;
  v15 = (TileImage *)FormHeapAlloc(0x4Cu);
  if ( v15 )
    v16 = (NiAVObject **)TileImage::TileImage(v15);
  else
    v16 = 0;
  ((void (__thiscall *)(NiAVObject **, _DWORD, const char *, _DWORD))(*v16)->members.super.super.m_uiRefCount)(
    v16,
    0,
    "Cursor",
    0);
  Tile_SetFloat((Tile *)v16, (_DWORD *)0xFAB, flt_A342A0);
  Tile_SetFloat((Tile *)v16, (_DWORD *)0xFCB, flt_A56670);
  Tile_SetFloat((Tile *)v16, (_DWORD *)0xFCA, flt_A56670);
  Tile_SetString(v16, (_DWORD *)0xFE6, "Menus\\Misc\\cursor.dds");
  Tile_SetFloat((Tile *)v16, (_DWORD *)0xFAD, 0.0);
  Tile_SetFloat((Tile *)v16, (_DWORD *)0xFAC, 0.0);
  Tile_SetFloat((Tile *)v16, (_DWORD *)0xFA1, 1.0);
  Tile_SetFloat((Tile *)v16, (_DWORD *)0xFA7, flt_A40098);
  Tile_SetFloat((Tile *)v16, (_DWORD *)0xFCC, flt_A40098);
  Tile_SetFloat((Tile *)v16, (_DWORD *)0xFCD, flt_A40098);
  v17 = flt_A40098;
  Tile_SetFloat((Tile *)v16, (_DWORD *)0xFCE, flt_A40098);
  sub_58E870((int)v16, v3, v7, v17);
  if ( !v16[9] )
    sub_533D30(1, "The Cursor could not be created. Check art resources. \n");
  ((void (__thiscall *)(NiNode *, NiAVObject *, int))this->unk054[1]->vtbl->AddObject)(this->unk054[1], v16[9], 1);
  v18 = (float *)v16[9];
  v19 = flt_A30634;
  v29 = flt_A30634;
  v18[0x15] = 0.0;
  v18[0x16] = v29;
  v18[0x17] = 0.0;
  NiAVObject_InitializePropertyState(v16[9]);
  NiNode_UpdateDynamicEffectState((NiNode *)v16[9]);
  NiAVObject_UpdateNiAVObject(v16[9], 0.0, 1);
  this->cursor = (Tile *)v16;
  sub_57E7C0((float *)this);
  *(_WORD *)(*((_DWORD *)this->cursor + 9) + 0x18) |= 1u;
  if ( a4 )
    sub_578E10((char)v14, v3, v19, 0.0, 0);
  result = InterlockedDecrement((volatile LONG *)&v14->members);
  if ( !result )
    return (*(LONG (__thiscall **)(NiObjectNET *, int))v14->vtbl)(v14, 1);
  return result;
}
