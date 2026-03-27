int __thiscall sub_591DC0(_DWORD *this)
{
  float *v2; // edi
  _WORD *v3; // ebp
  NiAVObject *v4; // ebx
  NiAVObject *v5; // eax
  double v6; // st7
  double v7; // st7
  int v8; // eax
  NiAVObject *v9; // eax
  NiNode *v10; // edi
  NiMaterialProperty *v11; // eax
  NiMaterialProperty *v12; // eax
  int v13; // ecx
  int v14; // edx
  NiNode *v15; // eax
  NiNode *v16; // eax
  NiNode *v17; // ecx
  bool v18; // cl
  int v19; // eax
  Tile::Extra *v20; // eax
  unsigned int *v21; // eax
  float v23; // [esp+10h] [ebp-58h]
  float v24; // [esp+10h] [ebp-58h]
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

  canCreate = sub_5894D0((int)this);
  Float = Tile_GetFloat(this, 0xFAD);
  v36 = -Tile_GetFloat(this, 0xFAC);
  v29 = Tile_GetFloat(this, 0xFCB);
  v27 = Tile_GetFloat(this, 0xFCA);
  v31 = Tile_GetFloat(this, 0xFCC) * dbl_A46050;
  v32 = Tile_GetFloat(this, 0xFCD) * dbl_A46050;
  v33 = Tile_GetFloat(this, 0xFCE) * dbl_A46050;
  v30 = Tile_GetFloat(this, 0xFA7) * dbl_A46050;
  v2 = (float *)FormHeapAlloc(0x30u);
  v3 = (_WORD *)FormHeapAlloc(0xCu);
  *v2 = 0.0;
  v2[1] = 0.0;
  v28 = -v27;
  v2[2] = 0.0;
  v2[3] = 0.0;
  v2[4] = 0.0;
  v2[5] = v28;
  v2[6] = v29;
  v2[7] = 0.0;
  v2[8] = 0.0;
  v2[9] = v29;
  v2[0xA] = 0.0;
  v2[0xB] = v28;
  *v3 = 0;
  v3[1] = 1;
  v3[2] = 2;
  v3[3] = 2;
  v3[4] = 1;
  v3[5] = 3;
  if ( Tile_GetFloat(this, 0xFC8) == fConstant_2 )
  {
    v4 = (NiAVObject *)FormHeapAlloc(0xD0u);
    v5 = 0;
    if ( v4 )
    {
      v6 = sub_57D7F0();
      v25 = Double_To_SInt32(v6);
      v7 = sub_57D7A0();
      v8 = Double_To_SInt32(v7);
      v5 = sub_4A1780(v4, 4, (int)v2, 0, 0, 0, 0, 0, 2, (int)v3, 0, 0, v8, v25);
    }
    *((_BYTE *)this + 0x40) = 1;
  }
  else
  {
    v9 = (NiAVObject *)FormHeapAlloc(0xC0u);
    if ( v9 )
      v5 = sub_7174B0(v9, 4, (int)v2, 0, 0, 0, 0, 0, 2, (int)v3);
    else
      v5 = 0;
    *((_BYTE *)this + 0x40) = 0;
  }
  v10 = (NiNode *)v5;
  v11 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu);
  if ( v11 )
    v12 = NiMaterialProperty::NiMaterialProperty(v11);
  else
    v12 = 0;
  *((_DWORD *)v12 + 0x15) += 3;
  *((float *)v12 + 0x14) = v30;
  *((float *)v12 + 7) = v31;
  *((float *)v12 + 0xA) = v31;
  v13 = *((_DWORD *)v12 + 0x15);
  *((float *)v12 + 8) = v32;
  *((float *)v12 + 0xB) = v32;
  *((float *)v12 + 9) = v33;
  *((float *)v12 + 0xC) = v33;
  *((_DWORD *)v12 + 0xD) = dword_B25AC4;
  *((_DWORD *)v12 + 0xE) = dword_B25AC8;
  v14 = dword_B25ACC;
  *((_DWORD *)v12 + 0x15) = v13 + 1;
  *((_DWORD *)v12 + 0xF) = v14;
  sub_405680(v10, (BSShaderProperty *)v12);
  v34 = Tile_GetFloat(this, 0xFAB) * dbl_A68FD0;
  v10->members.super.m_localTransform.pos.x = Float;
  v10->members.super.m_localTransform.pos.y = v34;
  v10->members.super.m_localTransform.pos.z = v36;
  v15 = (NiNode *)FormHeapAlloc(0xDCu);
  if ( v15 )
    v16 = NiNode::NiNode(v15, 0);
  else
    v16 = 0;
  *(this + 9) = v16;
  ((void (__thiscall *)(NiNode *, NiNode *, int))v16->vtbl->AddObject)(v16, v10, 1);
  v17 = (NiNode *)canCreate;
  if ( !canCreate )
    v17 = InterfaceManager_GetSingleton(0, 1)->unk054[0];
  ((void (__thiscall *)(NiNode *, _DWORD, int))v17->vtbl->AddObject)(v17, *(this + 9), 1);
  NiObjectNET_SetName((NiObjectNET *)*(this + 9), (char *)*(this + 2));
  v18 = Tile_GetFloat(this, 0xFA1) == fConstant_1;
  v19 = *(this + 9);
  if ( v18 )
    *(_WORD *)(v19 + 0x18) |= 1u;
  else
    *(_WORD *)(v19 + 0x18) &= ~1u;
  NiNode_UpdateDynamicEffectState((NiNode *)*(this + 9));
  NiAVObject_InitializePropertyState((NiAVObject *)*(this + 9));
  LOBYTE(InterfaceManager_GetSingleton(0, 1)->unk07C) = 1;
  v20 = (Tile::Extra *)FormHeapAlloc(0x14u);
  if ( v20 )
    v21 = (unsigned int *)Tile::Extra::Extra(v20, (unsigned int)this, *(this + 9));
  else
    v21 = 0;
  NiNode_AddNiExtraData((const void **)*(this + 9), 0xFFFFFFFF, v21);
  v23 = Tile_GetFloat(this, 0xFAD);
  sub_58B2F0(this, 0xFAD, v23, 0);
  v24 = Tile_GetFloat(this, 0xFAC);
  sub_58B2F0(this, 0xFAC, v24, 0);
  return *(this + 9);
}
