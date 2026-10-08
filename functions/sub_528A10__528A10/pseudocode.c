void __thiscall sub_528A10(Ni2DBuffer **this, TESObjectREFR *arg0, ActorAnimData *a3, Ni2DBuffer *a2, Ni2DBuffer *a5)
{
  TESObjectREFR *v6; // esi
  void *niNode; // ecx
  NiNode *v8; // edi
  NiNode *CachedNode; // ebp
  NiProperty *NiPropertyByID; // eax
  int v11; // eax
  int v12; // eax
  NiNode *vftable; // ecx
  TESRace *v14; // ecx
  #9279 *v15; // edx
  #9279 *v16; // esi
  float *v17; // eax
  int v18; // eax
  int v19; // [esp+6Ch] [ebp-128h]
  int v20; // [esp+70h] [ebp-124h]
  bool v22; // [esp+78h] [ebp-11Ch]
  float v23[9]; // [esp+7Ch] [ebp-118h] BYREF
  float v24[9]; // [esp+A0h] [ebp-F4h] BYREF
  FaceGenRenderState parameters; // [esp+C4h] [ebp-D0h] BYREF
  unsigned int v26; // [esp+190h] [ebp-4h]

  v6 = arg0; /*0x528a43*/
  niNode = arg0->member.niNode; /*0x528a4a*/
  v8 = 0; /*0x528a4d*/
  v19 = 0; /*0x528a51*/
  if ( niNode ) /*0x528a55*/
  {
    v19 = (*(int (__thiscall **)(void *))(*(_DWORD *)niNode + 8))(niNode); /*0x528a5e*/
    v8 = (NiNode *)v19; /*0x528a62*/
  }
  CachedNode = ActorSkinInfo_GetCachedNode((ActorSkinInfo *)a3, 0); /*0x528a72*/
  v20 = 0; /*0x528a7e*/
  NiPropertyByID = (NiProperty *)arg0->vtbl->GetAnimData(arg0); /*0x528a86*/
  if ( NiPropertyByID ) /*0x528a8a*/
  {
    NiPropertyByID = (NiProperty *)arg0->vtbl->GetAnimData(arg0); /*0x528a96*/
    if ( NiPropertyByID[6].members.m_pcName ) /*0x528a98*/
    {
      NiPropertyByID = *((NiProperty **)arg0->vtbl->GetAnimData(arg0)->manager + 0x1F); /*0x528ab3*/
      v20 = (int)NiPropertyByID; /*0x528ab6*/
    }
  }
  if ( CachedNode && v8 ) /*0x528ac4*/
  {
    if ( a2 ) /*0x528ad3*/
    {
      if ( (*((int (__thiscall **)(Ni2DBuffer *))a2->__vftable + 0x27))(a2) ) /*0x528ae3*/
      {
        if ( TESObjectREFR_GetHealth((TESChildCELL *)arg0) <= *(float *)&SrcStr ) /*0x528afb*/
        {
          v11 = (*((int (__thiscall **)(Ni2DBuffer *))a2->__vftable + 0x27))(a2); /*0x528b07*/
          (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v11 + 0x9C))(v11, 1, 1); /*0x528b17*/
          v12 = (*((int (__thiscall **)(Ni2DBuffer *))a2->__vftable + 0x27))(a2); /*0x528b23*/
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 0x94))(v12, 1); /*0x528b31*/
        }
      }
      (*((void (__thiscall **)(Ni2DBuffer *, int))a2->__vftable + 0x2C))(a2, 1); /*0x528b3f*/
      (*((void (__thiscall **)(Ni2DBuffer *, int))a2->__vftable + 0x2E))(a2, 1); /*0x528b4d*/
      a2[4].members.super.m_uiRefCount = LODWORD(g_zeroNiPoint3.x); /*0x528b55*/
      a2[4].members.width = LODWORD(g_zeroNiPoint3.y); /*0x528b5e*/
      a2[4].members.height = LODWORD(g_zeroNiPoint3.z); /*0x528b66*/
      qmemcpy(&a2[2].members.width, &stru_B26AF0[0xA].unk2C, 0x24u); /*0x528b76*/
      ((void (__thiscall *)(NiNode *, Ni2DBuffer *, int))CachedNode->vtbl->AddObject)(CachedNode, a2, 1); /*0x528b86*/
      sub_7165B0(a2, v20); /*0x528b8e*/
      v6 = arg0; /*0x528b93*/
      v8 = (NiNode *)v19; /*0x528b9a*/
    }
    if ( a5 ) /*0x528baa*/
    {
      if ( HIWORD(a5[9].__vftable) ) /*0x528bb0*/
      {
        vftable = (NiNode *)a5[8].members.data->__vftable; /*0x528bc0*/
        if ( vftable ) /*0x528bc4*/
        {
          NiPropertyByID = NiNode_GetNiPropertyByID(vftable, 6); /*0x528bc8*/
          if ( NiPropertyByID ) /*0x528bcf*/
          {
            FaceGenRenderState_Construct(&parameters); /*0x528bd5*/
            v14 = (TESRace *)*(this + 0x3A); /*0x528bde*/
            v26 = 0; /*0x528bea*/
            TESRace_BuildFaceGenRenderState(v14, (TESNPC *)this, &parameters); /*0x528bf5*/
            BSFaceGen_ApplyHeadParametersToNode((BSFaceGenNiNode *)a5, &parameters); /*0x528c00*/
            v26 = 0xFFFFFFFF; /*0x528c0c*/
            FaceGenRenderState_Destruct(&parameters); /*0x528c17*/
          }
        }
      }
      v15 = a5->__vftable; /*0x528c1c*/
      qmemcpy(v23, &stru_B26AF0[0xA].unk2C, sizeof(v23)); /*0x528c32*/
      v22 = a2 == 0; /*0x528c34*/
      LOBYTE(NiPropertyByID) = a2 == 0; /*0x528c21*/
      (*((void (__thiscall **)(Ni2DBuffer *, NiProperty *))v15 + 0x2C))(a5, NiPropertyByID); /*0x528c41*/
      (*((void (__thiscall **)(Ni2DBuffer *, bool))a5->__vftable + 0x2E))(a5, v22); /*0x528c53*/
      v16 = a5->__vftable; /*0x528c5a*/
      a5[4].members.super.m_uiRefCount = LODWORD(g_zeroNiPoint3.x); /*0x528c5d*/
      a5[4].members.width = LODWORD(g_zeroNiPoint3.y); /*0x528c66*/
      a5[4].members.height = LODWORD(g_zeroNiPoint3.z); /*0x528c82*/
      v17 = sub_4D7C50(arg0, v24, v23, 1); /*0x528c85*/
      (*((void (__thiscall **)(Ni2DBuffer *, float *))v16 + 0x2A))(a5, v17); /*0x528c93*/
      (*(void (__thiscall **)(int, Ni2DBuffer *, int))(*(_DWORD *)v19 + 0x84))(v19, a5, 1); /*0x528ca6*/
      sub_7165B0(a5, v20); /*0x528cae*/
      (*((void (__thiscall **)(Ni2DBuffer *, int, int))a5->__vftable + 0x31))(a5, v19, 1); /*0x528cc4*/
      v6 = arg0; /*0x528cc6*/
      v8 = (NiNode *)v19; /*0x528ccd*/
    }
    if ( a2 && (v18 = (*((int (__thiscall **)(Ni2DBuffer *))a2->__vftable + 0x27))(a2)) != 0 /*0x528cf8*/
      || a5 && (v18 = (*((int (__thiscall **)(Ni2DBuffer *))a5->__vftable + 0x27))(a5)) != 0 )
    {
      (*(void (__thiscall **)(int, _DWORD, int, int, int, int, _DWORD))(*(_DWORD *)v18 + 0x78))(v18, 0.0, 1, 1, 1, 1, 0); /*0x528d11*/
    }
    NiSmartPointer_Set__(this + 0x75, a2); /*0x528d1e*/
    NiSmartPointer_Set__(this + 0x76, a5); /*0x528d2a*/
    NiNode_UpdateDynamicEffectState(v8); /*0x528d31*/
    NiAVObject_InitializePropertyState((NiAVObject *)v8); /*0x528d38*/
    NiAVObject_UpdateNiAVObject((NiAVObject *)v8, 0.0, 0); /*0x528d47*/
  }
  else
  {
    PrintError("Cannot create a head for an NPC (%d) that does not have a biped-head node.", *(this + 3)); /*0x528d57*/
  }
  sub_524510(v6, 0); /*0x528d64*/
}
