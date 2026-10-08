// Reconcile an NPC's cached biped/skinned FaceGen nodes with an actor instance. When both cached nodes are absent, synchronously calls TESRace_CreateFaceGenNodes; the Race/Sex refresh deliberately clears both nodes to force this branch.
double __userpurge TESNPC_ReconcileFaceGenNodesForActor@<st0>(
        int a1@<ecx>,
        double st7_0@<st0>,
        TESChildCELL *a3,
        ActorAnimData *a4)
{
  int v4; // ebx
  NiDX92DBufferData *v5; // ebp
  void *vtbl; // ecx
  NiNode *CachedNode; // esi
  int (__thiscall *v8)(TESChildCELL *); // edx
  Ni2DBuffer *v9; // edx
  Ni2DBuffer *v10; // eax
  int v11; // ecx
  void *v12; // ecx
  unsigned int vftable_high; // ebp
  unsigned int v14; // edi
  NiAVObject *ChildAtIndex; // eax
  void **v16; // esi
  _DWORD *v17; // eax
  BSFaceGenAnimationData *v18; // eax
  int v19; // eax
  Ni2DBuffer **v20; // esi
  Ni2DBuffer *v21; // ecx
  unsigned int v22; // ecx
  char *v23; // eax
  NiAVObject *v24; // eax
  int v25; // eax
  NiNode **v26; // esi
  NiNode *v27; // eax
  NiObject *v28; // eax
  NiObject *v29; // edi
  NiObject *v30; // eax
  NiObject *v31; // eax
  int v32; // eax
  int v33; // ebp
  unsigned int v34; // ecx
  NiNode *v35; // edi
  unsigned int v36; // eax
  BSFaceGenAnimationData *v37; // eax
  Ni2DBuffer *v38; // ecx
  _DWORD *v39; // eax
  TESRace *v40; // ecx
  int v41; // eax
  int v42; // eax
  Ni2DBuffer *v43; // eax
  int v44; // ecx
  Ni2DBuffer *v45; // eax
  int v46; // eax
  Ni2DBuffer *v47; // eax
  void (__thiscall **v48)(Ni2DBuffer *, float *); // esi
  float *v49; // eax
  NiAVObject *v50; // esi
  int v51; // ecx
  int v52; // eax
  const char *v53; // eax
  Ni2DBuffer *v54; // [esp+6Ch] [ebp-A0h]
  Ni2DBuffer *v55; // [esp+6Ch] [ebp-A0h]
  Ni2DBuffer *v56; // [esp+6Ch] [ebp-A0h]
  Ni2DBuffer *v57; // [esp+6Ch] [ebp-A0h]
  int v58; // [esp+6Ch] [ebp-A0h]
  Ni2DBuffer *a2; // [esp+84h] [ebp-88h] BYREF
  Ni2DBuffer *v60; // [esp+88h] [ebp-84h] BYREF
  UInt32 v61; // [esp+8Ch] [ebp-80h] BYREF
  NiAVObject *v62; // [esp+90h] [ebp-7Ch]
  int v63; // [esp+94h] [ebp-78h]
  int v64; // [esp+98h] [ebp-74h]
  UInt32 v65; // [esp+9Ch] [ebp-70h] BYREF
  void *slot; // [esp+A0h] [ebp-6Ch] BYREF
  BSFaceGenAnimationData *v67; // [esp+A4h] [ebp-68h]
  void *v68; // [esp+A8h] [ebp-64h] BYREF
  void *v69; // [esp+ACh] [ebp-60h] BYREF
  unsigned int v70; // [esp+B0h] [ebp-5Ch]
  NiNode *v71; // [esp+B4h] [ebp-58h]
  int (__stdcall ***v72[9])(signed int); // [esp+B8h] [ebp-54h] BYREF
  float v73[9]; // [esp+DCh] [ebp-30h] BYREF
  unsigned int v74; // [esp+108h] [ebp-4h]

  v4 = a1; /*0x525a9a*/
  v63 = a1; /*0x525a9c*/
  if ( FaceGenManager_GetSingleton() ) /*0x525aa0*/
  {
    if ( a4->unk00 ) /*0x525ab4*/
    {
      if ( useFaceGenHeads ) /*0x525ac0*/
      {
        v5 = (NiDX92DBufferData *)a3; /*0x525ad3*/
        if ( a3 != (TESChildCELL *)reference || !sub_65D770(reference, (int)a4) ) /*0x525adf*/
        {
          vtbl = a3[0xF].vtbl; /*0x525aec*/
          v62 = 0; /*0x525af1*/
          if ( vtbl ) /*0x525af5*/
            v62 = (NiAVObject *)(*(int (__thiscall **)(void *))(*(_DWORD *)vtbl + 8))(vtbl); /*0x525afe*/
          CachedNode = ActorSkinInfo_GetCachedNode((ActorSkinInfo *)a4, 0); /*0x525b0a*/
          v8 = *((int (__thiscall **)(TESChildCELL *))a3->vtbl + 0x59); /*0x525b0f*/
          v71 = CachedNode; /*0x525b17*/
          v64 = 0; /*0x525b1b*/
          if ( v8(a3) ) /*0x525b1f*/
          {
            if ( *(_DWORD *)((*((int (__thiscall **)(TESChildCELL *))a3->vtbl + 0x59))(a3) + 0x98) ) /*0x525b32*/
              v64 = *(_DWORD *)(*(_DWORD *)((*((int (__thiscall **)(TESChildCELL *))a3->vtbl + 0x59))(a3) + 0x98) + 0x7C); /*0x525b50*/
          }
          if ( CachedNode && v62 ) /*0x525b60*/
          {
            if ( (*((int (__usercall **)@<eax>(TESChildCELL *@<ecx>, NiNode *, double@<st0>))a3->vtbl + 0x4C))( /*0x525b88*/
                   a3,
                   CachedNode,
                   st7_0)
              || (*((int (__thiscall **)(TESChildCELL *, NiNode *))a3->vtbl + 0x4D))(a3, CachedNode) )
            {
              goto LABEL_79; /*0x525b8c*/
            }
            a2 = 0; /*0x525b92*/
            v60 = 0; /*0x525b96*/
            v67 = 0; /*0x525b9a*/
            v61 = 0; /*0x525b9e*/
            v74 = 0; /*0x525ba2*/
            v65 = 0; /*0x525ba9*/
            v10 = *(Ni2DBuffer **)(v4 + 0x1D4); /*0x525bad*/
            LOBYTE(v74) = 1; /*0x525bb5*/
            if ( v10 ) /*0x525bbd*/
            {
              v11 = *(_DWORD *)(v4 + 0x1D8); /*0x525bc3*/
              if ( v11 && *(_DWORD *)(v11 + 4) <= 1u ) /*0x525bd1*/
              {
                a2 = v10; /*0x525bd3*/
              }
              else
              {
                st7_0 = 1.0; /*0x525bd9*/
                sub_478C80((NiTPointerMap<NiObject *,NiObject *> **)v72, 1.0); /*0x525be3*/
                v12 = *(void **)(v4 + 0x1D4); /*0x525be8*/
                LOBYTE(v74) = 2; /*0x525bf3*/
                a2 = (Ni2DBuffer *)sub_700610(v12, (int)v72); /*0x525c04*/
                LOBYTE(v74) = 1; /*0x525c08*/
                sub_4781A0(v72); /*0x525c10*/
              }
              vftable_high = HIWORD(a2[9].__vftable); /*0x525c19*/
              v14 = 0; /*0x525c20*/
              if ( HIWORD(a2[9].__vftable) ) /*0x525c19*/
              {
                do /*0x525ca8*/
                {
                  ChildAtIndex = NiNode_GetChildAtIndex((NiNode *)a2, v14); /*0x525c31*/
                  if ( ChildAtIndex ) /*0x525c38*/
                  {
                    v16 = (void **)ChildAtIndex->vtbl->super.Unk_04((NiObject *)ChildAtIndex); /*0x525c43*/
                    if ( v16 ) /*0x525c47*/
                    {
                      if ( *(Ni2DBuffer **)(v63 + 0x1D4) != a2 ) /*0x525c58*/
                      {
                        v54 = (Ni2DBuffer *)*sub_700790(v16[0x2D], (int *)&slot); /*0x525c6c*/
                        LOBYTE(v74) = 3; /*0x525c71*/
                        NiSmartPointer_Set__((Ni2DBuffer **)&v61, v54); /*0x525c78*/
                        LOBYTE(v74) = 1; /*0x525c81*/
                        NiPointerSlot_Release(&slot); /*0x525c89*/
                        if ( v61 ) /*0x525c94*/
                          (*((void (__thiscall **)(void **, UInt32))*v16 + 0x23))(v16, v61); /*0x525ca1*/
                      }
                    }
                  }
                  ++v14; /*0x525ca3*/
                }
                while ( v14 < vftable_high ); /*0x525ca8*/
                v4 = v63; /*0x525caa*/
              }
              if ( *(Ni2DBuffer **)(v4 + 0x1D4) != a2 ) /*0x525cb8*/
              {
                v17 = (_DWORD *)(*((int (__thiscall **)(Ni2DBuffer *))a2->__vftable + 0x27))(a2); /*0x525cc2*/
                v18 = sub_54D2C0(v17, st7_0); /*0x525cc6*/
                v67 = v18; /*0x525ccd*/
                if ( v18 ) /*0x525cd1*/
                  (*((void (__thiscall **)(Ni2DBuffer *, BSFaceGenAnimationData *))a2->__vftable + 0x28))(a2, v18); /*0x525ce0*/
              }
              v5 = (NiDX92DBufferData *)a3; /*0x525ce2*/
            }
            v19 = *(_DWORD *)(v4 + 0x1D8); /*0x525ce9*/
            v20 = (Ni2DBuffer **)(v4 + 0x1D8); /*0x525cf1*/
            if ( !v19 ) /*0x525cf7*/
              goto LABEL_59; /*0x525cf7*/
            if ( *(_DWORD *)(v19 + 4) > 1u ) /*0x525d01*/
            {
              st7_0 = 1.0; /*0x525d09*/
              sub_478C80((NiTPointerMap<NiObject *,NiObject *> **)v72, 1.0); /*0x525d13*/
              v21 = *v20; /*0x525d18*/
              LOBYTE(v74) = 4; /*0x525d1f*/
              v60 = (Ni2DBuffer *)sub_700610(v21, (int)v72); /*0x525d30*/
              LOBYTE(v74) = 1; /*0x525d34*/
              sub_4781A0(v72); /*0x525d3c*/
            }
            else
            {
              v60 = *(Ni2DBuffer **)(v4 + 0x1D8); /*0x525d03*/
            }
            v22 = HIWORD(v60[9].__vftable); /*0x525d45*/
            v23 = 0; /*0x525d4c*/
            v70 = v22; /*0x525d50*/
            for ( slot = 0; (unsigned int)slot < v70; slot = (char *)slot + 1 ) /*0x525d58*/
            {
              v24 = NiNode_GetChildAtIndex((NiNode *)v60, (unsigned int)v23); /*0x525d63*/
              if ( v24 ) /*0x525d6a*/
              {
                v25 = v24->vtbl->super.Unk_04((NiObject *)v24); /*0x525d77*/
                v26 = (NiNode **)v25; /*0x525d79*/
                if ( v25 ) /*0x525d7d*/
                {
                  if ( *(Ni2DBuffer **)(v4 + 0x1D8) != v60 ) /*0x525d8d*/
                  {
                    v55 = (Ni2DBuffer *)*sub_700790(*(void **)(v25 + 0xB4), (int *)&v68); /*0x525da1*/
                    LOBYTE(v74) = 5; /*0x525da6*/
                    NiSmartPointer_Set__((Ni2DBuffer **)&v61, v55); /*0x525dae*/
                    LOBYTE(v74) = 1; /*0x525db7*/
                    NiPointerSlot_Release(&v68); /*0x525dbf*/
                    if ( v61 ) /*0x525dca*/
                      ((void (__thiscall *)(NiNode **, UInt32))LODWORD((*v26)->members.super.m_worldTransform.pos.y))( /*0x525dd7*/
                        v26,
                        v61);
                  }
                  v27 = v26[0x2E]; /*0x525dd9*/
                  if ( v27 ) /*0x525de1*/
                  {
                    if ( v27->members.super.super.m_controller ) /*0x525de7*/
                    {
                      v28 = sub_550790((int)v26); /*0x525df2*/
                      v29 = v28; /*0x525df7*/
                      if ( v28 /*0x525e20*/
                        && v28->__vftable[1].Unk_02(v28)
                        && (v30 = v29->__vftable[1].Unk_02(v29), sub_523D60(v30)) )
                      {
                        v31 = v29->__vftable[1].Unk_02(v29); /*0x525e34*/
                        v32 = sub_523D60(v31); /*0x525e38*/
                        v33 = *(_DWORD *)(v32 + 0x14); /*0x525e3d*/
                        v34 = *(_DWORD *)(*(_DWORD *)(v32 + 8) + 0x40); /*0x525e43*/
                        v35 = v26[0x2E]; /*0x525e46*/
                        v36 = 0; /*0x525e4c*/
                        if ( v34 ) /*0x525e50*/
                        {
                          do /*0x525e61*/
                          {
                            *(_DWORD *)(*(_DWORD *)&v35->members.super.super.m_extraDataListLen + 4 * v36) = *(_DWORD *)(v33 + 4 * v36); /*0x525e59*/
                            ++v36; /*0x525e5c*/
                          }
                          while ( v36 < v34 ); /*0x525e61*/
                          v4 = v63; /*0x525e63*/
                        }
                        v5 = (NiDX92DBufferData *)a3; /*0x525e67*/
                      }
                      else
                      {
                        v53 = (const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 0xD4))( /*0x5261ee*/
                                              v4,
                                              *(_DWORD *)(v4 + 0xC));
                        PrintError("Could not correctly handle skinning for duplicate NPC \"%s\" (%08X).", v53, v58); /*0x5261f6*/
                      }
                      v56 = (Ni2DBuffer *)*sub_700790(v26[0x2E]->members.super.super.m_controller, (int *)&v69); /*0x525e85*/
                      LOBYTE(v74) = 6; /*0x525e8a*/
                      NiSmartPointer_Set__((Ni2DBuffer **)&v65, v56); /*0x525e92*/
                      LOBYTE(v74) = 1; /*0x525e9b*/
                      NiPointerSlot_Release(&v69); /*0x525ea3*/
                      if ( v65 ) /*0x525eae*/
                        sub_478300(v26[0x2E], (NiTimeController *)v65); /*0x525eb9*/
                    }
                  }
                }
              }
              v23 = (char *)slot + 1; /*0x525ec2*/
            }
            v9 = v60; /*0x525ed3*/
            v20 = (Ni2DBuffer **)(v4 + 0x1D8); /*0x525edd*/
            if ( *(Ni2DBuffer **)(v4 + 0x1D8) == v60 ) /*0x525ee3*/
              goto LABEL_59; /*0x525ee3*/
            v37 = v67; /*0x525ee5*/
            v38 = v60; /*0x525eeb*/
            if ( !v67 ) /*0x525eed*/
            {
              v39 = (_DWORD *)(*((int (**)(void))v60->__vftable + 0x27))(); /*0x525ef7*/
              v37 = sub_54D2C0(v39, st7_0); /*0x525efb*/
              if ( !v37 ) /*0x525f02*/
              {                                 // Both cached TESNPC FaceGen nodes were cleared by RaceSexMenu_RefreshPlayerFace; proceed to native node reconstruction when the race is available.
LABEL_59:
                if ( !*(_DWORD *)(v4 + 0x1D4) && !*v20 ) /*0x525f22*/
                {
                  v40 = *(TESRace **)(v4 + 0xE8); /*0x525f27*/
                  if ( v40 ) /*0x525f2f*/
                  {
                    TESRace_CreateFaceGenNodes(v40, (NiObjectNET **)&a2, (NiObjectNET **)&v60, (TESNPC *)v4, 0, 0);// Reconstruct the biped/skinned FaceGen nodes. TESRace_CreateFaceGenNodes reaches BSFaceGen_BuildHeadGeometryNodes and therefore the bFixFaceNormals normal-stitch gate. /*0x525f40*/
                    v57 = a2; /*0x525f56*/
                    *(_WORD *)(v4 + 0x1E0) = *(_WORD *)(*(_DWORD *)(v4 + 0xE8) + 0x2FC); /*0x525f59*/
                    NiSmartPointer_Set__((Ni2DBuffer **)(v4 + 0x1D4), v57); /*0x525f60*/
                    NiSmartPointer_Set__(v20, v60); /*0x525f6c*/
                  }
                }
                if ( a2 ) /*0x525f76*/
                  goto LABEL_84; /*0x525f76*/
                if ( v60 ) /*0x525f7d*/
                {
LABEL_71:
                  LOBYTE(v9) = a2 == 0; /*0x526091*/
                  qmemcpy(v73, &stru_B26AF0[0xA].unk2C, sizeof(v73)); /*0x5260a7*/
                  v46 = (*((int (__thiscall **)(Ni2DBuffer *, Ni2DBuffer *))v60->__vftable + 0x2C))(v60, v9); /*0x5260b6*/
                  LOBYTE(v46) = a2 == 0; /*0x5260c9*/
                  (*((void (__thiscall **)(Ni2DBuffer *, int))v60->__vftable + 0x2E))(v60, v46); /*0x5260cd*/
                  v47 = v60; /*0x5260cf*/
                  v60[4].members.super.m_uiRefCount = LODWORD(g_zeroNiPoint3.x); /*0x5260d9*/
                  v47 = (Ni2DBuffer *)((char *)v47 + 0x54); /*0x5260e2*/
                  v47->members.super.m_uiRefCount = LODWORD(g_zeroNiPoint3.y); /*0x5260e5*/
                  v47->members.width = LODWORD(g_zeroNiPoint3.z); /*0x5260ee*/
                  v48 = (void (__thiscall **)(Ni2DBuffer *, float *))((char *)v60->__vftable + 0xA8); /*0x526105*/
                  v49 = sub_4D7C50(v5, (float *)v72, v73, 1); /*0x52610b*/
                  (*v48)(v60, v49); /*0x526117*/
                  v50 = v62; /*0x526119*/
                  ((void (__thiscall *)(NiAVObject *, Ni2DBuffer *, int))v62->vtbl[1].super.super.Destructor)( /*0x52612e*/
                    v62,
                    v60,
                    1);
                  v51 = v64; /*0x526134*/
                  v60[0xD].members.data = v5; /*0x526138*/
                  sub_7165B0(v60, v51); /*0x526144*/
                  (*((void (__thiscall **)(Ni2DBuffer *, NiAVObject *, int))v60->__vftable + 0x31))(v60, v50, 1); /*0x52615b*/
                  v45 = v60; /*0x52615d*/
LABEL_72:
                  if ( a2 ) /*0x526167*/
                  {
                    v52 = (*((int (__thiscall **)(Ni2DBuffer *))a2->__vftable + 0x27))(a2); /*0x526171*/
                    if ( v52 ) /*0x526175*/
                    {
LABEL_77:
                      (*(void (__thiscall **)(int, _DWORD, int, int, int, int, _DWORD))(*(_DWORD *)v52 + 0x78))( /*0x52618f*/
                        v52,
                        0.0,
                        1,
                        1,
                        1,
                        1,
                        0);
LABEL_78:
                      LOBYTE(v74) = 0; /*0x5261a8*/
                      NiPointerSlot_Release((void **)&v65); /*0x5261b4*/
                      v74 = 0xFFFFFFFF; /*0x5261bd*/
                      NiPointerSlot_Release((void **)&v61); /*0x5261c8*/
LABEL_79:
                      NiAVObject_UpdateNiAVObject(v62, 0.0, 0); /*0x5261cd*/
                      return 0.0; /*0x5261de*/
                    }
                    v45 = v60; /*0x526177*/
                  }
                  if ( !v45 ) /*0x52617d*/
                    goto LABEL_78; /*0x52617d*/
                  v52 = (*((int (__thiscall **)(Ni2DBuffer *))v45->__vftable + 0x27))(v45); /*0x526189*/
                  if ( !v52 ) /*0x52618d*/
                    goto LABEL_78; /*0x52618d*/
                  goto LABEL_77; /*0x52618d*/
                }
                PrintError("Cannot create a head for an NPC (%d) (no race or bad race data).", *(_DWORD *)(v4 + 0xC)); /*0x525f8c*/
                if ( a2 ) /*0x525f99*/
                {
LABEL_84:
                  if ( (*((int (__thiscall **)(Ni2DBuffer *))a2->__vftable + 0x27))(a2) ) /*0x525fab*/
                  {
                    if ( TESObjectREFR_GetHealth((TESChildCELL *)v5) <= *(float *)&SrcStr ) /*0x525fc3*/
                    {
                      v41 = (*((int (__thiscall **)(Ni2DBuffer *))a2->__vftable + 0x27))(a2); /*0x525fd1*/
                      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v41 + 0x9C))(v41, 1, 1); /*0x525fe1*/
                      v42 = (*((int (__thiscall **)(Ni2DBuffer *))a2->__vftable + 0x27))(a2); /*0x525fef*/
                      (*(void (__thiscall **)(int, int))(*(_DWORD *)v42 + 0x94))(v42, 1); /*0x525ffd*/
                    }
                  }
                  (*((void (__thiscall **)(Ni2DBuffer *, int))a2->__vftable + 0x2C))(a2, 1); /*0x52600d*/
                  (*((void (__thiscall **)(Ni2DBuffer *, int))a2->__vftable + 0x2E))(a2, 1); /*0x52601d*/
                  v43 = a2; /*0x52601f*/
                  a2[4].members.super.m_uiRefCount = LODWORD(g_zeroNiPoint3.x); /*0x526029*/
                  v43 = (Ni2DBuffer *)((char *)v43 + 0x54); /*0x526032*/
                  v43->members.super.m_uiRefCount = LODWORD(g_zeroNiPoint3.y); /*0x526035*/
                  v43->members.width = LODWORD(g_zeroNiPoint3.z); /*0x52603e*/
                  qmemcpy(&a2[2].members.width, &stru_B26AF0[0xA].unk2C, 0x24u); /*0x526052*/
                  ((void (__thiscall *)(NiNode *, Ni2DBuffer *, int))v71->vtbl->AddObject)(v71, a2, 1); /*0x526067*/
                  v44 = v64; /*0x52606d*/
                  a2[0xD].members.data = v5; /*0x526071*/
                  sub_7165B0(a2, v44); /*0x52607d*/
                }
                v45 = v60; /*0x526085*/
                if ( !v60 ) /*0x52608b*/
                  goto LABEL_72; /*0x52608b*/
                goto LABEL_71; /*0x52608b*/
              }
              v38 = v60; /*0x525f04*/
            }
            (*((void (__thiscall **)(Ni2DBuffer *, BSFaceGenAnimationData *))v38->__vftable + 0x28))(v38, v37); /*0x525f11*/
            goto LABEL_59; /*0x525f11*/
          }
          PrintError( /*0x52620c*/
            "Cannot create a head for an NPC (%d) that does not have a biped-head node.",
            *(_DWORD *)(v4 + 0xC));
        }
      }
    }
  }
  return st7_0; /*0x526214*/
}
