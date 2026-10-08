// TileImage virtual slot 2: builds textured quad geometry directly in the InterfaceManager scene; no low-resolution intermediate UI target observed.
int __thiscall TileImage_CreateSceneNode(_DWORD *this)
{
  NiPoint3 *v2; // esi
  float *v3; // edi
  UInt16 *v4; // ebx
  double v5; // st6
  double VirtualScreenHeight; // st7
  double VirtualScreenWidth; // st7
  int v8; // eax
  NiAVObject *v9; // eax
  NiNode *v10; // edi
  NiAVObject *v11; // eax
  NiAVObject *v12; // eax
  NiTexturingProperty *v13; // eax
  NiTexturingProperty *v14; // esi
  NiMaterialProperty *v15; // eax
  NiMaterialProperty *v16; // eax
  NiNode *v17; // eax
  NiNode *v18; // eax
  NiNode *v19; // ecx
  InterfaceManager *Singleton; // eax
  NiObject *v21; // eax
  unsigned int *v22; // eax
  int v23; // ebp
  float value; // [esp+10h] [ebp-3Ch]
  int v26; // [esp+14h] [ebp-38h]
  NiAVObject *v27; // [esp+2Ch] [ebp-20h]
  int canCreate; // [esp+30h] [ebp-1Ch]
  NiAVObject *v29; // [esp+34h] [ebp-18h]
  float v30; // [esp+3Ch] [ebp-10h]
  float v31; // [esp+3Ch] [ebp-10h]

  canCreate = sub_5894D0((int)this); /*0x59162e*/
  v27 = 0; /*0x591634*/
  v2 = (NiPoint3 *)FormHeapAlloc(0x30u); /*0x591645*/
  v3 = (float *)FormHeapAlloc(0x20u); /*0x59164e*/
  v4 = (UInt16 *)FormHeapAlloc(0xCu); /*0x591657*/
  v2->x = 0.0; /*0x591675*/
  v5 = kTerrainLODQuadRayDirectionZ; /*0x59167b*/
  v2->y = 0.0; /*0x591685*/
  v30 = v5; /*0x591688*/
  v2->z = 0.0; /*0x591692*/
  v2[1].x = 0.0; /*0x59169f*/
  v2[1].y = 0.0; /*0x5916ae*/
  v2[2].x = 1.0; /*0x5916bb*/
  v2[1].z = v30; /*0x5916c8*/
  v31 = v5; /*0x5916d1*/
  v2[2].y = 0.0; /*0x5916d5*/
  v2[3].x = 1.0; /*0x5916dc*/
  v2[2].z = 0.0; /*0x5916df*/
  v2[3].y = 0.0; /*0x5916ee*/
  v2[3].z = v31; /*0x5916f1*/
  v4[2] = 2; /*0x5916f9*/
  v4[3] = 2; /*0x5916fd*/
  v4[1] = 1; /*0x591714*/
  v4[4] = 1; /*0x591718*/
  *v4 = 0; /*0x591724*/
  v4[5] = 3; /*0x59172d*/
  *v3 = 0.0; /*0x591733*/
  v3[1] = 0.0; /*0x59173c*/
  v3[2] = 0.0; /*0x59173f*/
  v3[3] = 1.0; /*0x591742*/
  v3[4] = 1.0; /*0x591753*/
  v3[7] = 1.0; /*0x591766*/
  v3[5] = 0.0; /*0x591770*/
  v3[6] = 1.0; /*0x591773*/
  if ( Tile_GetFloat(this, 0xFC8) == fConstant_2 ) /*0x591786*/
  {
    v29 = (NiAVObject *)FormHeapAlloc(0xD0u); /*0x591795*/
    if ( v29 ) /*0x5917a0*/
    {
      VirtualScreenHeight = UI_GetVirtualScreenHeight(); /*0x5917a2*/
      v26 = Double_To_SInt32(VirtualScreenHeight); /*0x5917ac*/
      VirtualScreenWidth = UI_GetVirtualScreenWidth(); /*0x5917ad*/
      v8 = Double_To_SInt32(VirtualScreenWidth); /*0x5917b2*/
      v9 = sub_4A1780(v29, 4u, v2, 0, 0, v3, 1, 0, 2u, v4, 0, 0, v8, v26); /*0x5917cf*/
    }
    else
    {
      v9 = 0; /*0x5917d6*/
    }
    if ( v9 ) /*0x5917df*/
    {
      v10 = (NiNode *)v9; /*0x5917e1*/
      InterlockedIncrement((volatile LONG *)&v9->members); /*0x5917eb*/
    }
    else
    {
      v10 = 0; /*0x5917f7*/
    }
    *((_BYTE *)this + 0x48) = 1; /*0x5917f1*/
  }
  else
  {
    v11 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x591806*/
    if ( v11 ) /*0x591819*/
      v12 = NiTriShape_ctorWithGeometryData(v11, 4u, v2, 0, 0, v3, 1, 0, 2u, v4); /*0x59182c*/
    else
      v12 = 0; /*0x591833*/
    if ( v12 ) /*0x59183c*/
    {
      v27 = v12; /*0x59183e*/
      InterlockedIncrement((volatile LONG *)&v12->members); /*0x591846*/
    }
    v10 = (NiNode *)v27; /*0x59184c*/
    *((_BYTE *)this + 0x48) = 0; /*0x591850*/
  }
  v13 = (NiTexturingProperty *)FormHeapAlloc(0x30u); /*0x591856*/
  if ( v13 ) /*0x591869*/
    v14 = NiTexturingProperty::NiTexturingProperty(v13); /*0x591872*/
  else
    v14 = 0; /*0x591876*/
  OB_NiTexturingProperty_SetBaseTexture_010201A0(v14, 0); /*0x591881*/
  if ( Tile_GetFloat(this, 0xFCF) == fConstant_2 ) /*0x59189f*/
    OB_NiTexturingProperty_SetClampMode_010201A0(v14, 3); /*0x5918a3*/
  else
    OB_NiTexturingProperty_SetClampMode_010201A0(v14, 0); /*0x5918a7*/
  v14->unk018 = v14->unk018 & 0xFFF1 | 4; /*0x5918bc*/
  sub_405680(v10, (BSShaderProperty *)v14); /*0x5918c0*/
  v15 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu); /*0x5918c7*/
  if ( v15 ) /*0x5918da*/
    v16 = NiMaterialProperty::NiMaterialProperty(v15); /*0x5918de*/
  else
    v16 = 0; /*0x5918e5*/
  *((_DWORD *)v16 + 0x15) += 2; /*0x5918e9*/
  *((float *)v16 + 0x14) = 0.0; /*0x5918ed*/
  *((float *)v16 + 0x10) = 1.0; /*0x59190c*/
  *((float *)v16 + 0x11) = 1.0; /*0x591913*/
  *((float *)v16 + 0x12) = 1.0; /*0x591916*/
  sub_405680(v10, (BSShaderProperty *)v16); /*0x59191b*/
  v17 = (NiNode *)FormHeapAlloc(0xDCu); /*0x591925*/
  if ( v17 ) /*0x591938*/
    v18 = NiNode::NiNode(v17, 0); /*0x59193e*/
  else
    v18 = 0; /*0x591945*/
  *(this + 9) = v18; /*0x591947*/
  ((void (__thiscall *)(NiNode *, NiNode *, int))v18->vtbl->AddObject)(v18, v10, 1); /*0x59195c*/
  v19 = (NiNode *)canCreate; /*0x59195e*/
  if ( !canCreate ) /*0x591964*/
    v19 = InterfaceManager_GetSingleton(0, 1)->unk054[0]; /*0x59196e*/
  ((void (__thiscall *)(NiNode *, _DWORD, int))v19->vtbl->AddObject)(v19, *(this + 9), 1); /*0x591986*/
  NiObjectNET_SetName((NiObjectNET *)*(this + 9), (char *)*(this + 2)); /*0x59198f*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x591998*/
  sub_405680((NiNode *)*(this + 9), (BSShaderProperty *)Singleton->unk078); /*0x5919a7*/
  NiNode_UpdateDynamicEffectState((NiNode *)*(this + 9)); /*0x5919af*/
  NiAVObject_InitializePropertyState((NiAVObject *)*(this + 9)); /*0x5919b7*/
  LOBYTE(InterfaceManager_GetSingleton(0, 1)->unk07C) = 1; /*0x5919c7*/
  v21 = (NiObject *)FormHeapAlloc(0x14u); /*0x5919cb*/
  if ( v21 ) /*0x5919de*/
    v22 = (unsigned int *)Tile::Extra::Extra(v21, (unsigned int)this, *(this + 9)); /*0x5919e7*/
  else
    v22 = 0; /*0x5919ee*/
  NiObjectNET_AddExtraData((const void **)*(this + 9), (int)v4, v22); /*0x5919f9*/
  value = Tile_GetFloat(this, 0xFAB); /*0x591a0d*/
  Tile::FinalPostParse((Tile *)this, 0xFABu, value, 0); /*0x591a17*/
  if ( Tile_GetFloat(this, 0xFC8) == fConstant_2 ) /*0x591a33*/
    *(this + 0xB) |= 0x200u; /*0x591a35*/
  *(this + 0xB) |= 0x3Du; /*0x591a3c*/
  v23 = *(this + 9); /*0x591a42*/
  if ( v10 ) /*0x591a4d*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&v10->members) ) /*0x591a53*/
      v10->vtbl->super.super.super.Destructor((NiRefObject *)v10, 1); /*0x591a65*/
  }
  return v23; /*0x591a69*/
}
