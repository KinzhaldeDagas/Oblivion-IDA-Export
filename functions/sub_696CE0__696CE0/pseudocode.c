void __thiscall sub_696CE0(void *this)
{
  NiNode *v2; // eax
  NiNode *v3; // edi
  NiNode *v4; // esi
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  NiNode *v7; // eax
  NiNode *v8; // edi
  NiNode *v9; // esi
  _DWORD *v10; // esi
  _DWORD *v11; // eax
  NiExtraData *ExtraData; // esi
  unsigned int *v13; // eax
  unsigned int *v14; // eax
  const void **v15; // ecx
  int v16; // esi
  int v17; // eax
  int v18; // esi
  int v19; // edi
  int v20; // eax
  float *v21; // eax
  float v22; // edx
  double v23; // st7
  float *v24; // eax
  float v25; // edx
  double v26; // st6
  float v27; // [esp+34h] [ebp-38h]
  float v28; // [esp+34h] [ebp-38h]
  float v29[9]; // [esp+3Ch] [ebp-30h] BYREF
  int v30; // [esp+68h] [ebp-4h]

  v2 = (NiNode *)FormHeapAlloc(0xDCu);
  v3 = 0;
  v30 = 0;
  if ( v2 )
    v3 = NiNode::NiNode(v2, 0);
  v4 = *((NiNode **)this + 0x25);
  v30 = 0xFFFFFFFF;
  if ( v4 != v3 )
  {
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v4->members) )
        v4->vtbl->super.super.super.Destructor((NiRefObject *)v4, 1);
    }
    *((_DWORD *)this + 0x25) = v3;
    if ( v3 )
      InterlockedIncrement((volatile LONG *)&v3->members);
  }
  v5 = *((_DWORD **)this + 0x25);
  v6 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x174))(this);
  v5[0x22] = *v6;
  v5[0x23] = v6[1];
  v5[0x24] = v6[2];
  v7 = (NiNode *)FormHeapAlloc(0xDCu);
  v30 = 1;
  if ( v7 )
    v8 = NiNode::NiNode(v7, 0);
  else
    v8 = 0;
  v9 = *((NiNode **)this + 0x22);
  v30 = 0xFFFFFFFF;
  if ( v9 != v8 )
  {
    if ( v9 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v9->members) )
        v9->vtbl->super.super.super.Destructor((NiRefObject *)v9, 1);
    }
    *((_DWORD *)this + 0x22) = v8;
    if ( v8 )
      InterlockedIncrement((volatile LONG *)&v8->members);
  }
  v10 = *((_DWORD **)this + 0x22);
  v11 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x174))(this);
  v10[0x15] = *v11;
  v10[0x16] = v11[1];
  v10[0x17] = v11[2];
  ExtraData = NiObjectNET_GetExtraData(*((NiObjectNET **)this + 0x22), dword_A7D0EC);
  if ( !ExtraData )
  {
    v13 = (unsigned int *)FormHeapAlloc(0x10u);
    v30 = 2;
    if ( v13 )
      v14 = BSXFlags_constr(v13);
    else
      v14 = 0;
    v15 = *((const void ***)this + 0x22);
    v30 = 0xFFFFFFFF;
    ExtraData = (NiExtraData *)v14;
    sub_6FF820(v15, dword_A7D0EC, v14);
  }
  ExtraData[1].__vftable = (NiExtraDataVtbl *)((int)ExtraData[1].__vftable | 1);
  v16 = *((_DWORD *)this + 0x1F);
  if ( v16 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) )
      (**(void (__thiscall ***)(int, int))v16)(v16, 1);
    *((_DWORD *)this + 0x1F) = 0;
  }
  sub_7117C0(v29, *((float *)this + 0xA), *((float *)this + 8), *((float *)this + 9));
  qmemcpy((void *)(*((_DWORD *)this + 0x22) + 0x30), v29, 0x24u);
  v17 = sub_7F4D60(*((_DWORD *)this + 0x22));
  v18 = *((_DWORD *)this + 0x1F);
  v19 = v17;
  if ( v18 != v17 )
  {
    if ( v18 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) )
        (**(void (__thiscall ***)(int, int))v18)(v18, 1);
    }
    *((_DWORD *)this + 0x1F) = v19;
    if ( v19 )
      InterlockedIncrement((volatile LONG *)(v19 + 4));
  }
  v20 = *((_DWORD *)this + 0x1F);
  if ( v20 )
  {
    *(_DWORD *)(v20 + 0x134) = iShockNumBolts;
    *(float *)(*((_DWORD *)this + 0x1F) + 0x13C) = fShockBoltsRadius;
    *(float *)(*((_DWORD *)this + 0x1F) + 0x140) = fShockBoltsRadiusStrength;
    *(float *)(*((_DWORD *)this + 0x1F) + 0x144) = fShockBoltSmallWidth;
    *(float *)(*((_DWORD *)this + 0x1F) + 0x148) = fShockBoltGrowWidth;
    v21 = (float *)(*((_DWORD *)this + 0x1F) + 0x160);
    v22 = fShockCoreColorG;
    v23 = fShockCoreColorB;
    *v21 = fShockCoreColorR;
    v21[1] = v22;
    v27 = v23;
    v21[2] = v27;
    v21[3] = 1.0;
    v24 = *((float **)this + 0x1F);
    v25 = fShockGlowColorG;
    v26 = fShockGlowColorB;
    v24[0x5C] = fShockGlowColorR;
    v24[0x5D] = v25;
    v28 = v26;
    v24[0x5E] = v28;
    v24[0x5F] = 1.0;
    *(float *)(*((_DWORD *)this + 0x1F) + 0x150) = fShockSegmentLength;
    *(_DWORD *)(*((_DWORD *)this + 0x1F) + 0x14C) = iShockSegmentsPerBolt;
    *(float *)(*((_DWORD *)this + 0x1F) + 0x154) = fShockSegmentVariance;
    *(float *)(*((_DWORD *)this + 0x1F) + 0x15C) = fShockSubSegmentVariance;
    *(_BYTE *)(*((_DWORD *)this + 0x1F) + 0x183) = 1;
    sub_7F2EC0(*((float **)this + 0x1F));
  }
}
