int __thiscall sub_591600(_DWORD *this)
{
  float *v2; // esi
  float *v3; // edi
  _WORD *v4; // ebx
  double v5; // st6
  double v6; // st7
  double v7; // st7
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
  Tile::Extra *v21; // eax
  unsigned int *v22; // eax
  int v23; // ebp
  float Float; // [esp+10h] [ebp-3Ch]
  int v26; // [esp+14h] [ebp-38h]
  NiAVObject *v27; // [esp+2Ch] [ebp-20h]
  int canCreate; // [esp+30h] [ebp-1Ch]
  NiAVObject *v29; // [esp+34h] [ebp-18h]
  float v30; // [esp+3Ch] [ebp-10h]
  float v31; // [esp+3Ch] [ebp-10h]

  canCreate = sub_5894D0((int)this);
  v27 = 0;
  v2 = (float *)FormHeapAlloc(0x30u);
  v3 = (float *)FormHeapAlloc(0x20u);
  v4 = (_WORD *)FormHeapAlloc(0xCu);
  *v2 = 0.0;
  v5 = flt_A30634;
  v2[1] = 0.0;
  v30 = v5;
  v2[2] = 0.0;
  v2[3] = 0.0;
  v2[4] = 0.0;
  v2[6] = 1.0;
  v2[5] = v30;
  v31 = v5;
  v2[7] = 0.0;
  v2[9] = 1.0;
  v2[8] = 0.0;
  v2[0xA] = 0.0;
  v2[0xB] = v31;
  v4[2] = 2;
  v4[3] = 2;
  v4[1] = 1;
  v4[4] = 1;
  *v4 = 0;
  v4[5] = 3;
  *v3 = 0.0;
  v3[1] = 0.0;
  v3[2] = 0.0;
  v3[3] = 1.0;
  v3[4] = 1.0;
  v3[7] = 1.0;
  v3[5] = 0.0;
  v3[6] = 1.0;
  if ( Tile_GetFloat(this, 0xFC8) == fConstant_2 )
  {
    v29 = (NiAVObject *)FormHeapAlloc(0xD0u);
    if ( v29 )
    {
      v6 = sub_57D7F0();
      v26 = Double_To_SInt32(v6);
      v7 = sub_57D7A0();
      v8 = Double_To_SInt32(v7);
      v9 = sub_4A1780(v29, 4, (int)v2, 0, 0, (int)v3, 1, 0, 2, (int)v4, 0, 0, v8, v26);
    }
    else
    {
      v9 = 0;
    }
    if ( v9 )
    {
      v10 = (NiNode *)v9;
      InterlockedIncrement((volatile LONG *)&v9->members);
    }
    else
    {
      v10 = 0;
    }
    *((_BYTE *)this + 0x48) = 1;
  }
  else
  {
    v11 = (NiAVObject *)FormHeapAlloc(0xC0u);
    if ( v11 )
      v12 = sub_7174B0(v11, 4, (int)v2, 0, 0, (int)v3, 1, 0, 2, (int)v4);
    else
      v12 = 0;
    if ( v12 )
    {
      v27 = v12;
      InterlockedIncrement((volatile LONG *)&v12->members);
    }
    v10 = (NiNode *)v27;
    *((_BYTE *)this + 0x48) = 0;
  }
  v13 = (NiTexturingProperty *)FormHeapAlloc(0x30u);
  if ( v13 )
    v14 = NiTexturingProperty::NiTexturingProperty(v13);
  else
    v14 = 0;
  NiTexturingProperty::SetUnk08(v14, 0);
  if ( Tile_GetFloat(this, 0xFCF) == fConstant_2 )
    sub_405870(v14, 3);
  else
    sub_405870(v14, 0);
  v14->unk018 = v14->unk018 & 0xFFF1 | 4;
  sub_405680(v10, (BSShaderProperty *)v14);
  v15 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu);
  if ( v15 )
    v16 = NiMaterialProperty::NiMaterialProperty(v15);
  else
    v16 = 0;
  *((_DWORD *)v16 + 0x15) += 2;
  *((float *)v16 + 0x14) = 0.0;
  *((float *)v16 + 0x10) = 1.0;
  *((float *)v16 + 0x11) = 1.0;
  *((float *)v16 + 0x12) = 1.0;
  sub_405680(v10, (BSShaderProperty *)v16);
  v17 = (NiNode *)FormHeapAlloc(0xDCu);
  if ( v17 )
    v18 = NiNode::NiNode(v17, 0);
  else
    v18 = 0;
  *(this + 9) = v18;
  ((void (__thiscall *)(NiNode *, NiNode *, int))v18->vtbl->AddObject)(v18, v10, 1);
  v19 = (NiNode *)canCreate;
  if ( !canCreate )
    v19 = InterfaceManager_GetSingleton(0, 1)->unk054[0];
  ((void (__thiscall *)(NiNode *, _DWORD, int))v19->vtbl->AddObject)(v19, *(this + 9), 1);
  NiObjectNET_SetName((NiObjectNET *)*(this + 9), (char *)*(this + 2));
  Singleton = InterfaceManager_GetSingleton(0, 1);
  sub_405680((NiNode *)*(this + 9), (BSShaderProperty *)Singleton->unk078);
  NiNode_UpdateDynamicEffectState((NiNode *)*(this + 9));
  NiAVObject_InitializePropertyState((NiAVObject *)*(this + 9));
  LOBYTE(InterfaceManager_GetSingleton(0, 1)->unk07C) = 1;
  v21 = (Tile::Extra *)FormHeapAlloc(0x14u);
  if ( v21 )
    v22 = (unsigned int *)Tile::Extra::Extra(v21, (unsigned int)this, *(this + 9));
  else
    v22 = 0;
  NiNode_AddNiExtraData((const void **)*(this + 9), (int)v4, v22);
  Float = Tile_GetFloat(this, 0xFAB);
  sub_58B2F0(this, 0xFAB, Float, 0);
  if ( Tile_GetFloat(this, 0xFC8) == fConstant_2 )
    *(this + 0xB) |= 0x200u;
  *(this + 0xB) |= 0x3Du;
  v23 = *(this + 9);
  if ( v10 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&v10->members) )
      v10->vtbl->super.super.super.Destructor((NiRefObject *)v10, 1);
  }
  return v23;
}
