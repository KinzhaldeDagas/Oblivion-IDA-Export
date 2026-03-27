void __thiscall sub_68D380(char *this)
{
  NiNode *v2; // eax
  NiNode *v3; // ebx
  NiNode *v4; // esi
  NiExtraData *ExtraData; // esi
  unsigned int *v6; // eax
  unsigned int *v7; // eax
  int v8; // ecx
  TESObjectREFR *v9; // ebx
  int v10; // ecx
  TESObjectCELL *ParentCell; // eax
  int v12; // eax
  int v13; // ebp
  float **v14; // esi
  Ni2DBuffer *v15; // eax
  int v16; // ebp
  int v17; // eax
  Ni2DBuffer *v18; // eax
  Ni2DBuffer *v19; // eax
  int v20; // eax
  Ni2DBuffer **v21; // edi
  Ni2DBuffer *v22; // eax
  Ni2DBuffer *v23; // eax
  float *v24; // eax
  float v25; // edx
  double v26; // st7
  float *v27; // eax
  double v28; // st6
  float v29; // edx
  signed int v30; // [esp-8h] [ebp-3Ch]
  int v31; // [esp+14h] [ebp-20h]
  float v32; // [esp+20h] [ebp-14h]
  float v33; // [esp+20h] [ebp-14h]

  v2 = (NiNode *)FormHeapAlloc(0xDCu);
  v3 = 0;
  if ( v2 )
    v3 = NiNode::NiNode(v2, 0);
  v4 = *((NiNode **)this + 0xF);
  if ( v4 != v3 )
  {
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v4->members) )
        v4->vtbl->super.super.super.Destructor((NiRefObject *)v4, 1);
    }
    *((_DWORD *)this + 0xF) = v3;
    if ( v3 )
      InterlockedIncrement((volatile LONG *)&v3->members);
  }
  ExtraData = NiObjectNET_GetExtraData(*((NiObjectNET **)this + 0xF), dword_A7D0EC);
  if ( !ExtraData )
  {
    v6 = (unsigned int *)FormHeapAlloc(0x10u);
    if ( v6 )
      v7 = BSXFlags_constr(v6);
    else
      v7 = 0;
    ExtraData = (NiExtraData *)v7;
    sub_6FF820(*((const void ***)this + 0xF), dword_A7D0EC, v7);
  }
  ExtraData[1].__vftable = (NiExtraDataVtbl *)((int)ExtraData[1].__vftable | 1);
  v8 = *((_DWORD *)this + 8);
  if ( v8 )
    v9 = (TESObjectREFR *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8);
  else
    v9 = 0;
  v10 = *((_DWORD *)this + 9);
  if ( v10 )
    v31 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x20))(v10);
  else
    v31 = 0;
  if ( v9 )
  {
    if ( v31 )
    {
      TESObjectREFR_GetParentCell(v9);
      v30 = sub_4C9BE0(v9);
      ParentCell = TESObjectREFR_GetParentCell(v9);
      v12 = sub_441800(ParentCell, v30, 3u);
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v12 + 0x84))(v12, *((_DWORD *)this + 0xF), 1);
      v13 = *((_DWORD *)this + 0x12);
      v14 = (float **)(this + 0x48);
      if ( v13 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) )
          (**(void (__thiscall ***)(int, int))v13)(v13, 1);
        *v14 = 0;
      }
      v15 = (Ni2DBuffer *)sub_7F4D60(*((_DWORD *)this + 0xF));
      NiSmartPointer_Set__((Ni2DBuffer **)this + 0x12, v15);
      v16 = v31;
      v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v31 + 0x164))(v31);
      if ( v17 )
      {
        v18 = (Ni2DBuffer *)(*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(_DWORD *)(v17 + 0x98) + 0x7C)
                                                                        + 0x4C))(
                              *(_DWORD *)(*(_DWORD *)(v17 + 0x98) + 0x7C),
                              "Bip01 Spine1");
        NiSmartPointer_Set__((Ni2DBuffer **)this + 0x10, v18);
        if ( !*((_DWORD *)this + 0x10) )
        {
          v19 = (Ni2DBuffer *)v9->vtbl->GetNiNode(v9);
          NiSmartPointer_Set__((Ni2DBuffer **)this + 0x10, v19);
        }
        v16 = v31;
      }
      v20 = (int)v9->vtbl->GetAnimData(v9);
      if ( v20 )
      {
        v21 = (Ni2DBuffer **)(this + 0x44);
        v22 = (Ni2DBuffer *)(*(int (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(*(_DWORD *)(v20 + 0x98) + 0x7C)
                                                                        + 0x4C))(
                              *(_DWORD *)(*(_DWORD *)(v20 + 0x98) + 0x7C),
                              "Bip01 Spine1");
        NiSmartPointer_Set__(v21, v22);
        if ( !*v21 )
        {
          v23 = (Ni2DBuffer *)(*(int (__thiscall **)(int))(*(_DWORD *)v16 + 0x154))(v16);
          NiSmartPointer_Set__(v21, v23);
        }
      }
      if ( *v14 )
      {
        (*v14)[0x4F] = fAbsorbBoltsRadius;
        (*v14)[0x50] = fAbsorbBoltsRadiusStrength;
        (*v14)[0x54] = fAbsorbSegmentLength;
        (*v14)[0x55] = fAbsorbSegmentVariance;
        (*v14)[0x57] = fAbsorbTortuosityVariance;
        (*v14)[0x51] = fAbsorbBoltSmallWidth;
        (*v14)[0x52] = fAbsorbBoltGrowWidth;
        *((_DWORD *)*v14 + 0x4D) = iAbsorbNumBolts;
        v24 = *v14;
        v25 = fAbsorbCoreColorG;
        v26 = fAbsorbCoreColorB;
        v24[0x58] = fAbsorbCoreColorR;
        v24[0x59] = v25;
        v32 = v26;
        v24[0x5A] = v32;
        v24[0x5B] = 1.0;
        v27 = *v14;
        v28 = fAbsorbGlowColorB;
        v29 = fAbsorbGlowColorG;
        v27[0x5C] = fAbsorbGlowColorR;
        v33 = v28;
        v27 += 0x5C;
        v27[1] = v29;
        v27[2] = v33;
        v27[3] = 1.0;
        *((_BYTE *)*v14 + 0x181) = 0;
        *((_BYTE *)*v14 + 0x183) = 1;
        sub_7F2EC0(*v14);
      }
    }
  }
}
