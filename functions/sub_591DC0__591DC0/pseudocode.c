int __thiscall TileRect_CreateSceneNode(_DWORD *this)
{
  NiPoint3 *v2; // edi
  UInt16 *v3; // ebp
  NiAVObject *v4; // ebx
  NiAVObject *v5; // eax
  double VirtualScreenHeight; // st7
  double VirtualScreenWidth; // st7
  int v8; // eax
  NiAVObject *v9; // eax
  NiNode *v10; // edi
  NiMaterialProperty *v11; // eax
  NiMaterialProperty *v12; // eax
  int v13; // ecx
  float z; // edx
  NiNode *v15; // eax
  NiNode *v16; // eax
  NiNode *v17; // ecx
  bool v18; // cl
  int v19; // eax
  NiObject *v20; // eax
  unsigned int *v21; // eax
  float value; // [esp+10h] [ebp-58h]
  float valuea; // [esp+10h] [ebp-58h]
  int v25; // [esp+14h] [ebp-54h]
  int canCreate; // [esp+2Ch] [ebp-3Ch]
  float v27; // [esp+30h] [ebp-38h]
  float v28; // [esp+30h] [ebp-38h]
  float v29; // [esp+34h] [ebp-34h]
  float v30; // [esp+38h] [ebp-30h]
  float v31; // [esp+3Ch] [ebp-2Ch]
  float v32; // [esp+40h] [ebp-28h]
  float v33; // [esp+44h] [ebp-24h]
  float v34; // [esp+44h] [ebp-24h]
  float Float; // [esp+48h] [ebp-20h]
  float v36; // [esp+4Ch] [ebp-1Ch]

  canCreate = sub_5894D0((int)this); /*0x591df5*/
  Float = Tile_GetFloat(this, 0xFAD); /*0x591dfe*/
  v36 = -Tile_GetFloat(this, 0xFAC); /*0x591e15*/
  v29 = Tile_GetFloat(this, 0xFCB); /*0x591e20*/
  v27 = Tile_GetFloat(this, 0xFCA); /*0x591e30*/
  v31 = Tile_GetFloat(this, 0xFCC) * dbl_A46050; /*0x591e4d*/
  v32 = Tile_GetFloat(this, 0xFCD) * dbl_A46050; /*0x591e63*/
  v33 = Tile_GetFloat(this, 0xFCE) * dbl_A46050; /*0x591e79*/
  v30 = Tile_GetFloat(this, 0xFA7) * dbl_A46050; /*0x591e8a*/
  v2 = (NiPoint3 *)FormHeapAlloc(0x30u); /*0x591e95*/
  v3 = (UInt16 *)FormHeapAlloc(0xCu); /*0x591ea2*/
  v2->x = 0.0; /*0x591ec0*/
  v2->y = 0.0; /*0x591ecc*/
  v28 = -v27; /*0x591ed3*/
  v2->z = 0.0; /*0x591edb*/
  v2[1].x = 0.0; /*0x591ee2*/
  v2[1].y = 0.0; /*0x591ef1*/
  v2[1].z = v28; /*0x591efe*/
  v2[2].x = v29; /*0x591f0f*/
  v2[2].y = 0.0; /*0x591f12*/
  v2[2].z = 0.0; /*0x591f18*/
  v2[3].x = v29; /*0x591f23*/
  v2[3].y = 0.0; /*0x591f30*/
  v2[3].z = v28; /*0x591f3b*/
  *v3 = 0; /*0x591f4f*/
  v3[1] = 1; /*0x591f55*/
  v3[2] = 2; /*0x591f59*/
  v3[3] = 2; /*0x591f5d*/
  v3[4] = 1; /*0x591f61*/
  v3[5] = 3; /*0x591f65*/
  if ( Tile_GetFloat(this, 0xFC8) == fConstant_2 ) /*0x591f7b*/
  {
    v4 = (NiAVObject *)FormHeapAlloc(0xD0u); /*0x591f87*/
    v5 = 0; /*0x591f90*/
    if ( v4 ) /*0x591f98*/
    {
      VirtualScreenHeight = UI_GetVirtualScreenHeight(); /*0x591f9a*/
      v25 = Double_To_SInt32(VirtualScreenHeight); /*0x591fa4*/
      VirtualScreenWidth = UI_GetVirtualScreenWidth(); /*0x591fa5*/
      v8 = Double_To_SInt32(VirtualScreenWidth); /*0x591faa*/
      v5 = sub_4A1780(v4, 4u, v2, 0, 0, 0, 0, 0, 2u, v3, 0, 0, v8, v25); /*0x591fc6*/
    }
    *((_BYTE *)this + 0x40) = 1; /*0x591fcb*/
  }
  else
  {
    v9 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x591fdb*/
    if ( v9 ) /*0x591ff1*/
      v5 = NiTriShape_ctorWithGeometryData(v9, 4u, v2, 0, 0, 0, 0, 0, 2u, v3); /*0x592004*/
    else
      v5 = 0; /*0x59200b*/
    *((_BYTE *)this + 0x40) = 0; /*0x59200d*/
  }
  v10 = (NiNode *)v5; /*0x592013*/
  v11 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu); /*0x59201d*/
  if ( v11 ) /*0x59202f*/
    v12 = NiMaterialProperty::NiMaterialProperty(v11); /*0x592033*/
  else
    v12 = 0; /*0x59203a*/
  *((_DWORD *)v12 + 0x15) += 3; /*0x592045*/
  *((float *)v12 + 0x14) = v30; /*0x592048*/
  *((float *)v12 + 7) = v31; /*0x59205c*/
  *((float *)v12 + 0xA) = v31; /*0x59205f*/
  v13 = *((_DWORD *)v12 + 0x15); /*0x59206e*/
  *((float *)v12 + 8) = v32; /*0x592079*/
  *((float *)v12 + 0xB) = v32; /*0x59207c*/
  *((float *)v12 + 9) = v33; /*0x59207f*/
  *((float *)v12 + 0xC) = v33; /*0x592082*/
  *((_DWORD *)v12 + 0xD) = LODWORD(stru_B25AC4.x); /*0x59208b*/
  *((_DWORD *)v12 + 0xE) = LODWORD(stru_B25AC4.y); /*0x592094*/
  z = stru_B25AC4.z; /*0x592097*/
  *((_DWORD *)v12 + 0x15) = v13 + 1; /*0x5920a0*/
  *((float *)v12 + 0xF) = z; /*0x5920ad*/
  sub_405680(v10, (BSShaderProperty *)v12); /*0x5920b0*/
  v34 = Tile_GetFloat(this, 0xFAB) * dbl_A68FD0; /*0x5920cc*/
  v10->members.super.m_localTransform.pos.x = Float; /*0x5920e0*/
  v10->members.super.m_localTransform.pos.y = v34; /*0x5920ef*/
  v10->members.super.m_localTransform.pos.z = v36; /*0x5920fa*/
  v15 = (NiNode *)FormHeapAlloc(0xDCu); /*0x5920fd*/
  if ( v15 ) /*0x59210f*/
    v16 = NiNode::NiNode(v15, 0); /*0x592115*/
  else
    v16 = 0; /*0x59211c*/
  *(this + 9) = v16; /*0x59211e*/
  ((void (__thiscall *)(NiNode *, NiNode *, int))v16->vtbl->AddObject)(v16, v10, 1); /*0x592135*/
  v17 = (NiNode *)canCreate; /*0x592137*/
  if ( !canCreate ) /*0x59213d*/
    v17 = InterfaceManager_GetSingleton(0, 1)->unk054[0]; /*0x592147*/
  ((void (__thiscall *)(NiNode *, _DWORD, int))v17->vtbl->AddObject)(v17, *(this + 9), 1); /*0x59215f*/
  NiObjectNET_SetName((NiObjectNET *)*(this + 9), (char *)*(this + 2)); /*0x592168*/
  v18 = Tile_GetFloat(this, 0xFA1) == fConstant_1; /*0x592184*/
  v19 = *(this + 9); /*0x59218e*/
  if ( v18 ) /*0x592191*/
    *(_WORD *)(v19 + 0x18) |= 1u; /*0x592193*/
  else
    *(_WORD *)(v19 + 0x18) &= ~1u; /*0x59219a*/
  NiNode_UpdateDynamicEffectState((NiNode *)*(this + 9)); /*0x5921a3*/
  NiAVObject_InitializePropertyState((NiAVObject *)*(this + 9)); /*0x5921ab*/
  LOBYTE(InterfaceManager_GetSingleton(0, 1)->unk07C) = 1; /*0x5921bb*/
  v20 = (NiObject *)FormHeapAlloc(0x14u); /*0x5921bf*/
  if ( v20 ) /*0x5921d5*/
    v21 = (unsigned int *)Tile::Extra::Extra(v20, (unsigned int)this, *(this + 9)); /*0x5921de*/
  else
    v21 = 0; /*0x5921e5*/
  NiObjectNET_AddExtraData((const void **)*(this + 9), 0xFFFFFFFF, v21); /*0x5921ef*/
  value = Tile_GetFloat(this, 0xFAD); /*0x592203*/
  Tile::FinalPostParse((Tile *)this, 0xFADu, value, 0); /*0x59220d*/
  valuea = Tile_GetFloat(this, 0xFAC); /*0x592221*/
  Tile::FinalPostParse((Tile *)this, 0xFACu, valuea, 0); /*0x59222b*/
  return *(this + 9); /*0x592233*/
}
