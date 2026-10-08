void __thiscall sub_43EB80(int this)
{
  unsigned int v2; // edi
  int v3; // eax
  int v4; // ecx
  Ni2DBuffer *v5; // eax
  NiNode *v6; // ecx
  NiAVObject *ChildAtIndex; // eax
  NiAVObject *v8; // esi
  char v9; // cl
  void **v10; // eax
  _DWORD *v11; // eax
  void *v12; // esi
  NiNode *v13; // ecx
  unsigned int i; // ebx
  NiAVObject *v15; // eax
  NiGeometry *v16; // esi
  int v17; // ecx
  const TESNPC *v18; // edi
  NiGeometryData *geomData; // ecx
  int *v20; // eax
  void *v21; // [esp+24h] [ebp-C4h]
  LPCRITICAL_SECTION lpCriticalSection; // [esp+28h] [ebp-C0h] BYREF
  void *v23; // [esp+2Ch] [ebp-BCh] BYREF
  void *slot; // [esp+30h] [ebp-B8h] BYREF
  NiMatrix33 right; // [esp+34h] [ebp-B4h] BYREF
  FaceGenHeadParameters a1; // [esp+58h] [ebp-90h] BYREF
  NiMatrix33 out; // [esp+B8h] [ebp-30h] BYREF
  unsigned int v28; // [esp+E4h] [ebp-4h]

  v2 = 0; /*0x43ebaf*/
  if ( *(int *)(this + 0xC) >= 4 /*0x43ebe1*/
    && (!*(_DWORD *)(this + 0x1C)
     || *(unsigned __int16 *)(*(_DWORD *)(this + 0x1C) + 0xC) == *(_DWORD *)(*(_DWORD *)(this + 0x1C) + 0x10))
    && *(_DWORD *)(this + 0xC) != 6 )
  {
    if ( *(PlayerCharacter **)(this + 0x30) != reference ) /*0x43ebf0*/
    {
      v3 = *(_DWORD *)(this + 0x24); /*0x43ebf6*/
      if ( v3 ) /*0x43ebfb*/
      {
        if ( *(_DWORD *)(v3 + 0x28) ) /*0x43ec01*/
        {
          v4 = *(_DWORD *)(v3 + 0x28); /*0x43ec0a*/
          if ( *(_DWORD *)(v4 + 8) ) /*0x43ec0d*/
          {
            v5 = (Ni2DBuffer *)sub_4792F0(*(_DWORD **)(this + 0x20), *(_DWORD *)(this + 0x28), *(_DWORD **)(v4 + 8)); /*0x43ec29*/
            NiSmartPointer_Set__((Ni2DBuffer **)(this + 0x2C), v5); /*0x43ec31*/
            v6 = *(NiNode **)(this + 0x2C); /*0x43ec36*/
            if ( v6 ) /*0x43ec3a*/
            {
              if ( v6->members.children.end ) /*0x43ec40*/
              {
                while ( 1 ) /*0x43ec51*/
                {
                  ChildAtIndex = NiNode_GetChildAtIndex(v6, v2); /*0x43ec51*/
                  v8 = ChildAtIndex; /*0x43ec56*/
                  if ( ChildAtIndex ) /*0x43ec5a*/
                  {
                    if ( ChildAtIndex->vtbl->super.Unk_03((NiObject *)ChildAtIndex) && v8[1].members.super.m_controller ) /*0x43ec69*/
                      break; /*0x43ec69*/
                  }
                  v6 = *(NiNode **)(this + 0x2C); /*0x43ec76*/
                  if ( ++v2 >= v6->members.children.end ) /*0x43ec85*/
                    goto LABEL_15; /*0x43ec85*/
                }
              }
              else
              {
LABEL_15:
                if ( *(_DWORD *)(this + 0x28) ) /*0x43ec87*/
                {
                  v9 = 0; /*0x43ec8c*/
                  v10 = (void **)(this + 0x28); /*0x43ec90*/
                }
                else
                {
                  v11 = sub_478A40(*(int ***)(this + 0x20)); /*0x43ec97*/
                  v10 = (void **)sub_405070(&slot, (int)v11); /*0x43eca1*/
                  v9 = 1; /*0x43eca6*/
                }
                v12 = *v10; /*0x43ecae*/
                v21 = *v10; /*0x43ecb0*/
                if ( (v9 & 1) != 0 ) /*0x43ecb4*/
                  NiPointerSlot_Release(&slot); /*0x43ecba*/
                if ( v12 ) /*0x43ecc1*/
                {
                  v13 = *(NiNode **)(this + 0x2C); /*0x43ecc7*/
                  for ( i = 0; i < v13->members.children.end; ++i ) /*0x43eccc*/
                  {
                    v15 = NiNode_GetChildAtIndex(v13, i); /*0x43ece1*/
                    v16 = (NiGeometry *)v15; /*0x43ece6*/
                    if ( v15 ) /*0x43ecea*/
                    {
                      if ( v15[1].members.super.m_pcName ) /*0x43ecf0*/
                      {
                        v17 = *(_DWORD *)(*(_DWORD *)(this + 0x20) + 0x150); /*0x43ed00*/
                        if ( v17 ) /*0x43ed08*/
                        {
                          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x170))(v17) ) /*0x43ed16*/
                          {
                            if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 0x20) /*0x43ed37*/
                                                                                        + 0x150)
                                                                          + 0x170))(*(_DWORD *)(*(_DWORD *)(this + 0x20)
                                                                                              + 0x150))
                                          + 4) == 0x23 )
                            {
                              v18 = (const TESNPC *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 0x20) /*0x43ed63*/
                                                                                                + 0x150)
                                                                                  + 0x170))(*(_DWORD *)(*(_DWORD *)(this + 0x20) + 0x150));
                              ArrayConstructor( /*0x43ed65*/
                                (char *)&a1,
                                0x18u,
                                4,
                                (void (__thiscall *)(char *))FaceGenMatrix_Construct,
                                (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
                              geomData = v16->member.geomData; /*0x43ed6a*/
                              v28 = 0; /*0x43ed75*/
                              v20 = sub_700790(geomData, (int *)&v23); /*0x43ed80*/
                              sub_405070(&lpCriticalSection, *v20); /*0x43ed8c*/
                              LOBYTE(v28) = 1; /*0x43ed95*/
                              NiPointerSlot_Release(&v23); /*0x43ed9d*/
                              v16->__vftable->SetGeomData(v16, (NiObject *)lpCriticalSection); /*0x43edb1*/
                              TESNPC_BuildAbsoluteFaceGenParameters(v18, &a1); /*0x43edba*/
                              NiEnterCriticalSection( /*0x43edc9*/
                                (struct _RTL_CRITICAL_SECTION *)&unk_B39C80,
                                (int)"QueuedHelmet::CheckFinished()");
                              if ( !useFaceGenHeads || BSFaceGenModel_ApplyEGMMorph(v21, &a1, v16, 1.0, 0) ) /*0x43ede9*/
                              {
                                NiMatrix33_InitRotationY(&right, flt_A3721C); /*0x43ee00*/
                                qmemcpy( /*0x43ee23*/
                                  &v16->member.super.m_localTransform,
                                  NiMAtrix33_Multiply(&v16->member.super.m_localTransform.rot, &out, &right),
                                  0x24u);
                              }
                              NiLeaveCriticalSection_0(&unk_B39C80); /*0x43ee2a*/
                              LOBYTE(v28) = 0; /*0x43ee33*/
                              NiPointerSlot_Release((void **)&lpCriticalSection); /*0x43ee3b*/
                              v28 = 0xFFFFFFFF; /*0x43ee4e*/
                              _LN21((char *)&a1, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x43ee59*/
                            }
                          }
                        }
                      }
                    }
                    v13 = *(NiNode **)(this + 0x2C); /*0x43ee5e*/
                  }
                }
              }
            }
          }
        }
      }
    }
    if ( !*(_DWORD *)(this + 0x18) ) /*0x43ee73*/
      DistantLODLoaderTask_SubmitToIOManager((volatile LONG *)this); /*0x43ee7b*/
  }
  sub_436F30(this); /*0x43ee82*/
}
