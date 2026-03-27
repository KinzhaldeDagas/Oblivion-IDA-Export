float *__thiscall sub_6980B0(TESObjectREFR *this, int arg0, int a3)
{
  NiNode *v4; // esi
  float *result; // eax
  Ni2DBuffer *v6; // eax
  signed int v7; // edi
  TESObjectCELL *ParentCell; // eax
  unsigned int v9; // edi
  NiNode *NiNode; // eax
  int v11; // edi
  int v12; // ecx
  int v13; // eax
  int v14; // edi
  float v15; // eax
  double v16; // st7
  float v17; // ecx
  float v18; // ecx
  double v19; // st6
  float v20; // edx
  double v21; // st7
  bhkCharacterProxy *CharProxy; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  float *v26; // esi
  Ni2DBuffer **v27; // eax
  Ni2DBuffer **v28; // esi
  float v29; // edx
  float v30; // eax
  Ni2DBuffer *v31; // [esp+30h] [ebp-4Ch]
  float v32; // [esp+34h] [ebp-48h] BYREF
  float v33; // [esp+38h] [ebp-44h]
  float v34; // [esp+3Ch] [ebp-40h]
  float v35; // [esp+40h] [ebp-3Ch]
  Ni2DBuffer *a2; // [esp+44h] [ebp-38h]
  Ni2DBuffer *v37; // [esp+48h] [ebp-34h]
  __m128 v38; // [esp+4Ch] [ebp-30h] BYREF
  unsigned int v39; // [esp+78h] [ebp-4h]

  v4 = 0;
  if ( !a3
    || (result = *(float **)(a3 + 0xC), result == *((float **)this + 0x1C))
    && (result = (float *)(*(int (**)(void))(*(_DWORD *)arg0 + 4))(), *((float **)this + 0x26) != result) )
  {
    v6 = (Ni2DBuffer *)FormHeapAlloc(0xDCu);
    v37 = v6;
    v39 = 0;
    if ( v6 )
    {
      v4 = NiNode::NiNode((NiNode *)v6, 0);
      a2 = (Ni2DBuffer *)v4;
    }
    else
    {
      a2 = 0;
    }
    v39 = 0xFFFFFFFF;
    TESObjectREFR_GetParentCell(this);
    v7 = sub_4C9BE0(this);
    ParentCell = TESObjectREFR_GetParentCell(this);
    v9 = v7 + 2;
    NiNode = TESObjectCELL_GetNiNode_(ParentCell);
    if ( NiNode
      && NiNode->members.children.end > v9
      && (v11 = *((_DWORD *)&NiNode->members.children.data->vtbl + v9)) != 0
      && *(_WORD *)(v11 + 0xB6) > 3u )
    {
      v12 = *(_DWORD *)(*(_DWORD *)(v11 + 0xB0) + 0xC);
    }
    else
    {
      v12 = 0;
    }
    (*(void (__thiscall **)(int, NiNode *, int))(*(_DWORD *)v12 + 0x84))(v12, v4, 1);
    v13 = sub_7F4D60((int)v4);
    v14 = v13;
    if ( v13 )
    {
      *(_DWORD *)(v13 + 0x134) = iShockBranchNumBolts;
      *(float *)(v13 + 0x13C) = fShockBranchBoltsRadius;
      *(float *)(v13 + 0x140) = fShockBranchBoltsRadiusStrength;
      *(float *)(v13 + 0x144) = fShockBoltSmallWidth;
      *(float *)(v13 + 0x148) = fShockBoltGrowWidth;
      v32 = fShockCoreColorR;
      v33 = fShockCoreColorG;
      v15 = v33;
      v16 = fShockCoreColorB;
      *(float *)(v14 + 0x160) = v32;
      v34 = v16;
      v17 = v34;
      *(float *)(v14 + 0x164) = v15;
      v35 = 1.0;
      *(float *)(v14 + 0x168) = v17;
      *(float *)(v14 + 0x16C) = v35;
      v32 = fShockGlowColorR;
      v33 = fShockGlowColorG;
      v18 = v33;
      v19 = fShockGlowColorB;
      *(float *)(v14 + 0x170) = v32;
      v34 = v19;
      v20 = v34;
      *(float *)(v14 + 0x174) = v18;
      v35 = 1.0;
      *(float *)(v14 + 0x178) = v20;
      *(float *)(v14 + 0x17C) = 1.0;
      *(float *)(v14 + 0x150) = fShockBranchSegmentLength;
      *(_DWORD *)(v14 + 0x14C) = iShockBranchSegmentsPerBolt;
      *(float *)(v14 + 0x154) = fShockBranchSegmentVariance;
      v21 = fSubSegmentVariance;
      *(_BYTE *)(v14 + 0x183) = 0;
      *(float *)(v14 + 0x15C) = v21;
      sub_7F2EC0((float *)v14);
    }
    CharProxy = MobileObject_GetCharProxy((MobileObject *)this);
    sub_891440((__m128 *)CharProxy, &v38);
    sub_43F3E0(&v32, &v38);
    v23 = *((_DWORD *)this + 0x26);
    v37 = 0;
    if ( v23 )
    {
      v24 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 0x154))(v23);
      if ( v24 )
        v37 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v24 + 0x58))(v24, "Bip01 Spine2");
    }
    v25 = (*(int (__thiscall **)(int))(*(_DWORD *)arg0 + 4))(arg0);
    result = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v25 + 0x154))(v25);
    v26 = result;
    if ( result )
    {
      v31 = (Ni2DBuffer *)(*(int (__thiscall **)(float *, const char *))(*(_DWORD *)result + 0x58))(
                            result,
                            "Bip01 Spine2");
      if ( !v31 )
        v31 = (Ni2DBuffer *)v26;
      v27 = (Ni2DBuffer **)FormHeapAlloc(0x20u);
      v28 = 0;
      if ( v27 )
      {
        *v27 = 0;
        v27[1] = 0;
        v27[5] = 0;
        v27[6] = 0;
        v28 = v27;
      }
      NiSmartPointer_Set__(v28, (Ni2DBuffer *)v14);
      NiSmartPointer_Set__(v28 + 1, a2);
      NiSmartPointer_Set__(v28 + 5, v37);
      NiSmartPointer_Set__(v28 + 6, v31);
      v29 = v33;
      v30 = v34;
      *((float *)v28 + 2) = v32;
      *((float *)v28 + 3) = v29;
      *((float *)v28 + 4) = v30;
      v28[7] = *((Ni2DBuffer **)this + 0x21);
      result = sub_696460((float *)this, 0.0, (void **)v28);
      *((_DWORD *)this + 0x21) = v28;
    }
  }
  return result;
}
