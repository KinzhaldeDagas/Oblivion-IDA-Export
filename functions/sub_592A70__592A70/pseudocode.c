int __thiscall TileWindow_CreateSceneNode(unsigned int *this)
{
  NiNode *v2; // ebx
  NiPoint3 *v3; // edi
  UInt16 *v4; // ebp
  NiAVObject *v5; // eax
  NiNode *v6; // edi
  NiMaterialProperty *v7; // eax
  NiMaterialProperty *v8; // eax
  int v9; // ecx
  float z; // edx
  NiNode *v11; // eax
  NiNode *v12; // eax
  bool v13; // cl
  int v14; // eax
  NiObject *v15; // eax
  unsigned int *v16; // eax
  float value; // [esp+10h] [ebp-54h]
  float valuea; // [esp+10h] [ebp-54h]
  float v20; // [esp+2Ch] [ebp-38h]
  float v21; // [esp+2Ch] [ebp-38h]
  float v22; // [esp+30h] [ebp-34h]
  float v23; // [esp+34h] [ebp-30h]
  float v24; // [esp+38h] [ebp-2Ch]
  float v25; // [esp+3Ch] [ebp-28h]
  float v26; // [esp+40h] [ebp-24h]
  float v27; // [esp+40h] [ebp-24h]
  float Float; // [esp+44h] [ebp-20h]
  float v29; // [esp+48h] [ebp-1Ch]

  v2 = (NiNode *)sub_5894D0((int)this); /*0x592aa5*/
  Float = Tile_GetFloat(this, 0xFAD); /*0x592aac*/
  v29 = -Tile_GetFloat(this, 0xFAC); /*0x592ac3*/
  v22 = Tile_GetFloat(this, 0xFCB); /*0x592ace*/
  v20 = Tile_GetFloat(this, 0xFCA); /*0x592ade*/
  v24 = Tile_GetFloat(this, 0xFCC) * dbl_A46050; /*0x592afb*/
  v25 = Tile_GetFloat(this, 0xFCD) * dbl_A46050; /*0x592b11*/
  v26 = Tile_GetFloat(this, 0xFCE) * dbl_A46050; /*0x592b27*/
  v23 = Tile_GetFloat(this, 0xFA7) * dbl_A46050; /*0x592b38*/
  v3 = (NiPoint3 *)FormHeapAlloc(0x30u); /*0x592b43*/
  v4 = (UInt16 *)FormHeapAlloc(0xCu); /*0x592b50*/
  v3->x = 0.0; /*0x592b6e*/
  v3->y = 0.0; /*0x592b7a*/
  v21 = -v20; /*0x592b81*/
  v3->z = 0.0; /*0x592b89*/
  v3[1].x = 0.0; /*0x592b90*/
  v3[1].y = 0.0; /*0x592b9f*/
  v3[1].z = v21; /*0x592bac*/
  v3[2].x = v22; /*0x592bbd*/
  v3[2].y = 0.0; /*0x592bc4*/
  v3[2].z = 0.0; /*0x592bc7*/
  v3[3].x = v22; /*0x592bd0*/
  v3[3].y = 0.0; /*0x592bdb*/
  v3[3].z = v21; /*0x592be6*/
  *v4 = 0; /*0x592bf8*/
  v4[1] = 1; /*0x592bfe*/
  v4[2] = 2; /*0x592c02*/
  v4[3] = 2; /*0x592c06*/
  v4[4] = 1; /*0x592c0a*/
  v4[5] = 3; /*0x592c0e*/
  v5 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x592c14*/
  if ( v5 ) /*0x592c2a*/
    v6 = (NiNode *)NiTriShape_ctorWithGeometryData(v5, 4u, v3, 0, 0, 0, 0, 0, 2u, v4); /*0x592c43*/
  else
    v6 = 0; /*0x592c47*/
  v7 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu); /*0x592c52*/
  if ( v7 ) /*0x592c68*/
    v8 = NiMaterialProperty::NiMaterialProperty(v7); /*0x592c6c*/
  else
    v8 = 0; /*0x592c73*/
  *((float *)v8 + 0x14) = v23; /*0x592c7d*/
  *((float *)v8 + 7) = v24; /*0x592c91*/
  *((float *)v8 + 0xA) = v24; /*0x592c94*/
  *((float *)v8 + 8) = v25; /*0x592ca3*/
  *((float *)v8 + 0xB) = v25; /*0x592cae*/
  *((float *)v8 + 9) = v26; /*0x592cb1*/
  *((float *)v8 + 0xC) = v26; /*0x592cb4*/
  *((_DWORD *)v8 + 0x15) += 3; /*0x592cbc*/
  v9 = *((_DWORD *)v8 + 0x15); /*0x592cc5*/
  *((_DWORD *)v8 + 0xD) = LODWORD(stru_B25AC4.x); /*0x592cc8*/
  *((_DWORD *)v8 + 0xE) = LODWORD(stru_B25AC4.y); /*0x592cd1*/
  z = stru_B25AC4.z; /*0x592cd4*/
  *((_DWORD *)v8 + 0x15) = v9 + 1; /*0x592cdd*/
  *((float *)v8 + 0xF) = z; /*0x592ce2*/
  sub_405680(v6, (BSShaderProperty *)v8); /*0x592ce5*/
  v27 = Tile_GetFloat(this, 0xFAB) * dbl_A68FD0; /*0x592d01*/
  v6->members.super.m_localTransform.pos.x = Float; /*0x592d15*/
  v6->members.super.m_localTransform.pos.y = v27; /*0x592d24*/
  v6->members.super.m_localTransform.pos.z = v29; /*0x592d2f*/
  v11 = (NiNode *)FormHeapAlloc(0xECu); /*0x592d32*/
  if ( v11 ) /*0x592d48*/
    v12 = sub_4A15F0(v11); /*0x592d4c*/
  else
    v12 = 0; /*0x592d53*/
  *(this + 9) = (unsigned int)v12; /*0x592d55*/
  ((void (__thiscall *)(NiNode *, NiNode *, int))v12->vtbl->AddObject)(v12, v6, 1); /*0x592d6d*/
  if ( !v2 ) /*0x592d71*/
    v2 = InterfaceManager_GetSingleton(0, 1)->unk054[0]; /*0x592d7b*/
  ((void (__thiscall *)(NiNode *, _DWORD, int))v2->vtbl->AddObject)(v2, *(this + 9), 1); /*0x592d91*/
  NiObjectNET_SetName((NiObjectNET *)*(this + 9), (char *)*(this + 2)); /*0x592d9a*/
  v13 = Tile_GetFloat(this, 0xFA1) == fConstant_1; /*0x592db6*/
  v14 = *(this + 9); /*0x592dc0*/
  if ( v13 ) /*0x592dc3*/
    *(_WORD *)(v14 + 0x18) |= 1u; /*0x592dc5*/
  else
    *(_WORD *)(v14 + 0x18) &= ~1u; /*0x592dcc*/
  NiNode_UpdateDynamicEffectState((NiNode *)*(this + 9)); /*0x592dd5*/
  NiAVObject_InitializePropertyState((NiAVObject *)*(this + 9)); /*0x592ddd*/
  LOBYTE(InterfaceManager_GetSingleton(0, 1)->unk07C) = 1; /*0x592ded*/
  v15 = (NiObject *)FormHeapAlloc(0x14u); /*0x592df1*/
  if ( v15 ) /*0x592e03*/
    v16 = (unsigned int *)Tile::Extra::Extra(v15, (unsigned int)this, *(this + 9)); /*0x592e0c*/
  else
    v16 = 0; /*0x592e13*/
  NiObjectNET_AddExtraData((const void **)*(this + 9), (int)v2, v16); /*0x592e21*/
  value = Tile_GetFloat(this, 0xFAD); /*0x592e35*/
  Tile::FinalPostParse((Tile *)this, 0xFADu, value, 0); /*0x592e3f*/
  valuea = Tile_GetFloat(this, 0xFAC); /*0x592e53*/
  Tile::FinalPostParse((Tile *)this, 0xFACu, valuea, 0); /*0x592e5d*/
  return *(this + 9); /*0x592e65*/
}
