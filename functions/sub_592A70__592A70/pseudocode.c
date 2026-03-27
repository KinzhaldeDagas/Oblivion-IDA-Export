int __thiscall sub_592A70(unsigned int *this)
{
  NiNode *v2; // ebx
  float *v3; // edi
  _WORD *v4; // ebp
  NiAVObject *v5; // eax
  NiNode *v6; // edi
  NiMaterialProperty *v7; // eax
  NiMaterialProperty *v8; // eax
  int v9; // ecx
  int v10; // edx
  NiNode *v11; // eax
  NiNode *v12; // eax
  bool v13; // cl
  int v14; // eax
  Tile::Extra *v15; // eax
  unsigned int *v16; // eax
  float v18; // [esp+10h] [ebp-54h]
  float v19; // [esp+10h] [ebp-54h]
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

  v2 = (NiNode *)sub_5894D0((int)this);
  Float = Tile_GetFloat(this, 0xFAD);
  v29 = -Tile_GetFloat(this, 0xFAC);
  v22 = Tile_GetFloat(this, 0xFCB);
  v20 = Tile_GetFloat(this, 0xFCA);
  v24 = Tile_GetFloat(this, 0xFCC) * dbl_A46050;
  v25 = Tile_GetFloat(this, 0xFCD) * dbl_A46050;
  v26 = Tile_GetFloat(this, 0xFCE) * dbl_A46050;
  v23 = Tile_GetFloat(this, 0xFA7) * dbl_A46050;
  v3 = (float *)FormHeapAlloc(0x30u);
  v4 = (_WORD *)FormHeapAlloc(0xCu);
  *v3 = 0.0;
  v3[1] = 0.0;
  v21 = -v20;
  v3[2] = 0.0;
  v3[3] = 0.0;
  v3[4] = 0.0;
  v3[5] = v21;
  v3[6] = v22;
  v3[7] = 0.0;
  v3[8] = 0.0;
  v3[9] = v22;
  v3[0xA] = 0.0;
  v3[0xB] = v21;
  *v4 = 0;
  v4[1] = 1;
  v4[2] = 2;
  v4[3] = 2;
  v4[4] = 1;
  v4[5] = 3;
  v5 = (NiAVObject *)FormHeapAlloc(0xC0u);
  if ( v5 )
    v6 = (NiNode *)sub_7174B0(v5, 4, (int)v3, 0, 0, 0, 0, 0, 2, (int)v4);
  else
    v6 = 0;
  v7 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu);
  if ( v7 )
    v8 = NiMaterialProperty::NiMaterialProperty(v7);
  else
    v8 = 0;
  *((float *)v8 + 0x14) = v23;
  *((float *)v8 + 7) = v24;
  *((float *)v8 + 0xA) = v24;
  *((float *)v8 + 8) = v25;
  *((float *)v8 + 0xB) = v25;
  *((float *)v8 + 9) = v26;
  *((float *)v8 + 0xC) = v26;
  *((_DWORD *)v8 + 0x15) += 3;
  v9 = *((_DWORD *)v8 + 0x15);
  *((_DWORD *)v8 + 0xD) = dword_B25AC4;
  *((_DWORD *)v8 + 0xE) = dword_B25AC8;
  v10 = dword_B25ACC;
  *((_DWORD *)v8 + 0x15) = v9 + 1;
  *((_DWORD *)v8 + 0xF) = v10;
  sub_405680(v6, (BSShaderProperty *)v8);
  v27 = Tile_GetFloat(this, 0xFAB) * dbl_A68FD0;
  v6->members.super.m_localTransform.pos.x = Float;
  v6->members.super.m_localTransform.pos.y = v27;
  v6->members.super.m_localTransform.pos.z = v29;
  v11 = (NiNode *)FormHeapAlloc(0xECu);
  if ( v11 )
    v12 = sub_4A15F0(v11);
  else
    v12 = 0;
  *(this + 9) = (unsigned int)v12;
  ((void (__thiscall *)(NiNode *, NiNode *, int))v12->vtbl->AddObject)(v12, v6, 1);
  if ( !v2 )
    v2 = InterfaceManager_GetSingleton(0, 1)->unk054[0];
  ((void (__thiscall *)(NiNode *, _DWORD, int))v2->vtbl->AddObject)(v2, *(this + 9), 1);
  NiObjectNET_SetName((NiObjectNET *)*(this + 9), (char *)*(this + 2));
  v13 = Tile_GetFloat(this, 0xFA1) == fConstant_1;
  v14 = *(this + 9);
  if ( v13 )
    *(_WORD *)(v14 + 0x18) |= 1u;
  else
    *(_WORD *)(v14 + 0x18) &= ~1u;
  NiNode_UpdateDynamicEffectState((NiNode *)*(this + 9));
  NiAVObject_InitializePropertyState((NiAVObject *)*(this + 9));
  LOBYTE(InterfaceManager_GetSingleton(0, 1)->unk07C) = 1;
  v15 = (Tile::Extra *)FormHeapAlloc(0x14u);
  if ( v15 )
    v16 = (unsigned int *)Tile::Extra::Extra(v15, (unsigned int)this, *(this + 9));
  else
    v16 = 0;
  NiNode_AddNiExtraData((const void **)*(this + 9), (int)v2, v16);
  v18 = Tile_GetFloat(this, 0xFAD);
  sub_58B2F0(this, 0xFAD, v18, 0);
  v19 = Tile_GetFloat(this, 0xFAC);
  sub_58B2F0(this, 0xFAC, v19, 0);
  return *(this + 9);
}
