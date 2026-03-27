void __thiscall sub_528A10(Ni2DBuffer **this, TESObjectREFR *arg0, _DWORD *a3, Ni2DBuffer *a2, Ni2DBuffer *a5)
{
  TESObjectREFR *v6; // esi
  void *niNode; // ecx
  NiNode *v8; // edi
  int v9; // ebp
  NiProperty *NiPropertyByID; // eax
  int v11; // eax
  int v12; // eax
  NiNode *vftable; // ecx
  int *v14; // ecx
  #9279 *v15; // edx
  #9279 *v16; // esi
  float *v17; // eax
  int v18; // eax
  int v19; // [esp+6Ch] [ebp-128h]
  int v20; // [esp+70h] [ebp-124h]
  bool v22; // [esp+78h] [ebp-11Ch]
  float v23[9]; // [esp+7Ch] [ebp-118h] BYREF
  float v24[9]; // [esp+A0h] [ebp-F4h] BYREF
  _DWORD *v25[49]; // [esp+C4h] [ebp-D0h] BYREF
  unsigned int v26; // [esp+190h] [ebp-4h]

  v6 = arg0;
  niNode = arg0->member.niNode;
  v8 = 0;
  v19 = 0;
  if ( niNode )
  {
    v19 = (*(int (__thiscall **)(void *))(*(_DWORD *)niNode + 8))(niNode);
    v8 = (NiNode *)v19;
  }
  v9 = sub_477EC0(a3, 0);
  v20 = 0;
  NiPropertyByID = (NiProperty *)arg0->vtbl->GetAnimData(arg0);
  if ( NiPropertyByID )
  {
    NiPropertyByID = (NiProperty *)arg0->vtbl->GetAnimData(arg0);
    if ( NiPropertyByID[6].members.m_pcName )
    {
      NiPropertyByID = *((NiProperty **)arg0->vtbl->GetAnimData(arg0)->manager + 0x1F);
      v20 = (int)NiPropertyByID;
    }
  }
  if ( v9 && v8 )
  {
    if ( a2 )
    {
      if ( (*((int (__thiscall **)(Ni2DBuffer *))a2->__vftable + 0x27))(a2) )
      {
        if ( TESObjectREFR_GetHealth((TESChildCELL *)arg0) <= *(float *)&SrcStr )
        {
          v11 = (*((int (__thiscall **)(Ni2DBuffer *))a2->__vftable + 0x27))(a2);
          (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v11 + 0x9C))(v11, 1, 1);
          v12 = (*((int (__thiscall **)(Ni2DBuffer *))a2->__vftable + 0x27))(a2);
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 0x94))(v12, 1);
        }
      }
      (*((void (__thiscall **)(Ni2DBuffer *, int))a2->__vftable + 0x2C))(a2, 1);
      (*((void (__thiscall **)(Ni2DBuffer *, int))a2->__vftable + 0x2E))(a2, 1);
      *(float *)&a2[4].members.super.m_uiRefCount = Vector3_InitValue_;
      a2[4].members.width = *(UInt32 *)(&Vector3_InitValue_ + 1);
      *(float *)&a2[4].members.height = dword_B3F9B0;
      qmemcpy(&a2[2].members.width, &stru_B26AF0[0xA].unk2C, 0x24u);
      (*(void (__thiscall **)(int, Ni2DBuffer *, int))(*(_DWORD *)v9 + 0x84))(v9, a2, 1);
      sub_7165B0(a2, v20);
      v6 = arg0;
      v8 = (NiNode *)v19;
    }
    if ( a5 )
    {
      if ( HIWORD(a5[9].__vftable) )
      {
        vftable = (NiNode *)a5[8].members.data->__vftable;
        if ( vftable )
        {
          NiPropertyByID = NiNode_GetNiPropertyByID(vftable, 6);
          if ( NiPropertyByID )
          {
            FaceGenHeadParameters_Ctor(v25);
            v14 = (int *)*(this + 0x3A);
            v26 = 0;
            TESRace_GetFaceGenHeadParameters(v14, (int)this, (int)v25);
            BSFaceGen_DoSomethingWithFaceGenNode((int)a5, v25);
            v26 = 0xFFFFFFFF;
            FaceGenHeadParameters_Dtor((unsigned int *)v25);
          }
        }
      }
      v15 = a5->__vftable;
      qmemcpy(v23, &stru_B26AF0[0xA].unk2C, sizeof(v23));
      v22 = a2 == 0;
      LOBYTE(NiPropertyByID) = a2 == 0;
      (*((void (__thiscall **)(Ni2DBuffer *, NiProperty *))v15 + 0x2C))(a5, NiPropertyByID);
      (*((void (__thiscall **)(Ni2DBuffer *, bool))a5->__vftable + 0x2E))(a5, v22);
      v16 = a5->__vftable;
      *(float *)&a5[4].members.super.m_uiRefCount = Vector3_InitValue_;
      a5[4].members.width = *(UInt32 *)(&Vector3_InitValue_ + 1);
      *(float *)&a5[4].members.height = dword_B3F9B0;
      v17 = sub_4D7C50(arg0, v24, v23, 1);
      (*((void (__thiscall **)(Ni2DBuffer *, float *))v16 + 0x2A))(a5, v17);
      (*(void (__thiscall **)(int, Ni2DBuffer *, int))(*(_DWORD *)v19 + 0x84))(v19, a5, 1);
      sub_7165B0(a5, v20);
      (*((void (__thiscall **)(Ni2DBuffer *, int, int))a5->__vftable + 0x31))(a5, v19, 1);
      v6 = arg0;
      v8 = (NiNode *)v19;
    }
    if ( a2 && (v18 = (*((int (__thiscall **)(Ni2DBuffer *))a2->__vftable + 0x27))(a2)) != 0
      || a5 && (v18 = (*((int (__thiscall **)(Ni2DBuffer *))a5->__vftable + 0x27))(a5)) != 0 )
    {
      (*(void (__thiscall **)(int, _DWORD, int, int, int, int, _DWORD))(*(_DWORD *)v18 + 0x78))(v18, 0.0, 1, 1, 1, 1, 0);
    }
    NiSmartPointer_Set__(this + 0x75, a2);
    NiSmartPointer_Set__(this + 0x76, a5);
    NiNode_UpdateDynamicEffectState(v8);
    NiAVObject_InitializePropertyState((NiAVObject *)v8);
    NiAVObject_UpdateNiAVObject((NiAVObject *)v8, 0.0, 0);
  }
  else
  {
    PrintError("Cannot create a head for an NPC (%d) that does not have a biped-head node.", *(this + 3));
  }
  sub_524510(v6, 0);
}
