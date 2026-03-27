char sub_50ED50()
{
  NiNode *v0; // eax
  NiNode *v1; // ebp
  BSShaderProperty *v2; // eax
  TESObjectCELL *ParentCell; // edi
  BSExtraDataVtbl *v4; // esi
  void (__thiscall *v5)(BSExtraDataVtbl *, NiNode *, float *, int); // edx
  unsigned int v6; // eax
  unsigned int a2; // ecx
  unsigned int i; // ebx
  ExtraDataList **GridEntry; // eax
  ExtraDataList *v10; // esi
  BSExtraDataVtbl *v11; // edi
  float *v12; // eax
  void (__thiscall *v13)(BSExtraDataVtbl *, NiNode *, float *, int); // edx
  float v15; // [esp+28h] [ebp-58h]
  float v16; // [esp+28h] [ebp-58h]
  unsigned int v17; // [esp+28h] [ebp-58h]
  float v18; // [esp+2Ch] [ebp-54h]
  float v19; // [esp+30h] [ebp-50h]
  float v20; // [esp+34h] [ebp-4Ch]
  float v21[3]; // [esp+38h] [ebp-48h] BYREF
  float v22[3]; // [esp+44h] [ebp-3Ch] BYREF
  float v23[9]; // [esp+50h] [ebp-30h] BYREF
  unsigned int v24; // [esp+7Ch] [ebp-4h]

  v0 = (NiNode *)FormHeapAlloc(0xDCu);
  v24 = 0;
  if ( v0 )
    v1 = NiNode::NiNode(v0, 0);
  else
    v1 = 0;
  v24 = 0xFFFFFFFF;
  v2 = (BSShaderProperty *)sub_4E70B0();
  sub_405680(v1, v2);
  ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
  if ( TESObjectCELL_IsInterior(ParentCell) )
  {
    v4 = sub_4CCED0((ExtraDataList *)ParentCell);
    if ( v4 )
    {
      v15 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef)[2];
      v5 = *((void (__thiscall **)(BSExtraDataVtbl *, NiNode *, float *, int))v4->Destructor + 1);
      v21[0] = 0.0;
      v21[1] = 0.0;
      v21[2] = v15;
      v5(v4, v1, v21, 1);
      v16 = sub_4CCE00((ExtraDataList *)ParentCell) * dbl_A3D360;
      if ( v16 != 0.0 )
      {
        qmemcpy(v23, &stru_B26AF0[0xA].unk2C, sizeof(v23));
        NiMatrix33_InitRotationTransform(v23, v16);
        qmemcpy(&v1->members.super.m_localTransform, v23, 0x24u);
      }
    }
  }
  else
  {
    v6 = uGridsToLoad;
    for ( a2 = 0; ; ++a2 )
    {
      v17 = a2;
      if ( a2 >= v6 )
        break;
      for ( i = 0; i < v6; ++i )
      {
        GridEntry = (ExtraDataList **)GetGridEntry(TES->gridCellArray, a2, i);
        v10 = *GridEntry;
        if ( *GridEntry )
        {
          v11 = sub_4CCED0(*GridEntry);
          if ( v11 )
          {
            v19 = (float)(TESObjectCELL_GetXCoordinate((TESObjectCELL *)v10) << 0xC);
            v18 = (float)(TESObjectCELL_GetYCoordinate((TESObjectCELL *)v10) << 0xC);
            v12 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
            v13 = *((void (__thiscall **)(BSExtraDataVtbl *, NiNode *, float *, int))v11->Destructor + 1);
            v20 = v12[2];
            v22[0] = v19;
            v22[1] = v18;
            v22[2] = v20;
            v13(v11, v1, v22, 1);
          }
        }
        v6 = uGridsToLoad;
        a2 = v17;
      }
    }
  }
  NiAVObject_UpdateNiAVObject((NiAVObject *)v1, 0.0, 1);
  NiAVObject_InitializePropertyState((NiAVObject *)v1);
  sub_440E60(TES, (int)v1, flt_A37CC8);
  return 1;
}
