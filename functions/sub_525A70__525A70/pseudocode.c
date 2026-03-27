char __userpurge sub_525A70@<al>(int a1@<ecx>, double st7_0@<st0>, TESChildCELL *a3, int *a4)
{
  int v4; // ebx
  int v5; // eax
  NiDX92DBufferData *v6; // ebp
  void *vtbl; // ecx
  int v8; // esi
  ActorAnimData *(__thiscall *v9)(TESObjectREFR *); // edx
  Ni2DBuffer *v10; // edx
  Ni2DBuffer *v11; // eax
  int v12; // ecx
  void *v13; // ecx
  unsigned int vftable_high; // ebp
  unsigned int v15; // edi
  int v16; // eax
  void **v17; // esi
  _DWORD *v18; // eax
  BSFaceGenAnimationData *v19; // eax
  int v20; // eax
  Ni2DBuffer **v21; // esi
  Ni2DBuffer *v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // eax
  int v25; // eax
  int v26; // eax
  NiNode **v27; // esi
  NiNode *v28; // eax
  int v29; // eax
  int v30; // edi
  _DWORD *v31; // eax
  _DWORD *v32; // eax
  int v33; // eax
  int v34; // ebp
  unsigned int v35; // ecx
  NiNode *v36; // edi
  unsigned int v37; // eax
  BSFaceGenAnimationData *v38; // eax
  Ni2DBuffer *v39; // ecx
  _DWORD *v40; // eax
  int *v41; // ecx
  int v42; // eax
  int v43; // eax
  Ni2DBuffer *v44; // eax
  int v45; // ecx
  Ni2DBuffer *v46; // eax
  int v47; // eax
  Ni2DBuffer *v48; // eax
  void (__thiscall **v49)(Ni2DBuffer *, float *); // esi
  float *v50; // eax
  NiAVObject *v51; // esi
  int v52; // ecx
  int v53; // eax
  const char *v54; // eax
  Ni2DBuffer *v56; // [esp+6Ch] [ebp-A0h]
  Ni2DBuffer *v57; // [esp+6Ch] [ebp-A0h]
  Ni2DBuffer *v58; // [esp+6Ch] [ebp-A0h]
  Ni2DBuffer *v59; // [esp+6Ch] [ebp-A0h]
  int v60; // [esp+6Ch] [ebp-A0h]
  Ni2DBuffer *a2; // [esp+84h] [ebp-88h] BYREF
  Ni2DBuffer *v62; // [esp+88h] [ebp-84h] BYREF
  UInt32 v63; // [esp+8Ch] [ebp-80h] BYREF
  NiAVObject *v64; // [esp+90h] [ebp-7Ch]
  int v65; // [esp+94h] [ebp-78h]
  int v66; // [esp+98h] [ebp-74h]
  UInt32 v67; // [esp+9Ch] [ebp-70h] BYREF
  unsigned int i; // [esp+A0h] [ebp-6Ch] BYREF
  BSFaceGenAnimationData *v69; // [esp+A4h] [ebp-68h]
  int v70; // [esp+A8h] [ebp-64h] BYREF
  int v71; // [esp+ACh] [ebp-60h] BYREF
  unsigned int v72; // [esp+B0h] [ebp-5Ch]
  int v73; // [esp+B4h] [ebp-58h]
  int (__stdcall ***v74[9])(signed int); // [esp+B8h] [ebp-54h] BYREF
  float v75[9]; // [esp+DCh] [ebp-30h] BYREF
  unsigned int v76; // [esp+108h] [ebp-4h]

  v4 = a1;
  v65 = a1;
  v5 = sub_553600();
  if ( v5 )
  {
    v5 = *a4;
    if ( *a4 )
    {
      if ( useFaceGenHeads )
      {
        v6 = (NiDX92DBufferData *)a3;
        if ( a3 != (TESChildCELL *)TESDataHandler_g_PlayerRef
          || (LOBYTE(v5) = sub_65D770(TESDataHandler_g_PlayerRef, (int)a4), !(_BYTE)v5) )
        {
          vtbl = a3[0xF].vtbl;
          v64 = 0;
          if ( vtbl )
            v64 = (NiAVObject *)(*(int (__thiscall **)(void *))(*(_DWORD *)vtbl + 8))(vtbl);
          v8 = sub_477EC0(a4, 0);
          v9 = *((ActorAnimData *(__thiscall **)(TESObjectREFR *))a3->vtbl + 0x59);
          v73 = v8;
          v66 = 0;
          if ( v9((TESObjectREFR *)a3) )
          {
            if ( *(_DWORD *)((*((int (__thiscall **)(TESChildCELL *))a3->vtbl + 0x59))(a3) + 0x98) )
              v66 = *(_DWORD *)(*(_DWORD *)((*((int (__thiscall **)(TESChildCELL *))a3->vtbl + 0x59))(a3) + 0x98) + 0x7C);
          }
          if ( !v8 || !v64 )
          {
            LOBYTE(v5) = PrintError(
                           "Cannot create a head for an NPC (%d) that does not have a biped-head node.",
                           *(_DWORD *)(v4 + 0xC));
            return v5;
          }
          if ( (*((int (__thiscall **)(TESChildCELL *, int))a3->vtbl + 0x4C))(a3, v8)
            || (*((int (__thiscall **)(TESChildCELL *, int))a3->vtbl + 0x4D))(a3, v8) )
          {
            goto LABEL_79;
          }
          a2 = 0;
          v62 = 0;
          v69 = 0;
          v63 = 0;
          v76 = 0;
          v67 = 0;
          v11 = *(Ni2DBuffer **)(v4 + 0x1D4);
          LOBYTE(v76) = 1;
          if ( v11 )
          {
            v12 = *(_DWORD *)(v4 + 0x1D8);
            if ( v12 && *(_DWORD *)(v12 + 4) <= 1u )
            {
              a2 = v11;
            }
            else
            {
              st7_0 = 1.0;
              sub_478C80((NiTPointerMap<NiObject *,NiObject *> **)v74, 1.0);
              v13 = *(void **)(v4 + 0x1D4);
              LOBYTE(v76) = 2;
              a2 = (Ni2DBuffer *)sub_700610(v13, (int)v74);
              LOBYTE(v76) = 1;
              sub_4781A0(v74);
            }
            vftable_high = HIWORD(a2[9].__vftable);
            v15 = 0;
            if ( HIWORD(a2[9].__vftable) )
            {
              do
              {
                v16 = sub_405790((int)a2, v15);
                if ( v16 )
                {
                  v17 = (void **)(*(int (__thiscall **)(int))(*(_DWORD *)v16 + 0x10))(v16);
                  if ( v17 )
                  {
                    if ( *(Ni2DBuffer **)(v65 + 0x1D4) != a2 )
                    {
                      v56 = (Ni2DBuffer *)*sub_700790(v17[0x2D], (int *)&i);
                      LOBYTE(v76) = 3;
                      NiSmartPointer_Set__((Ni2DBuffer **)&v63, v56);
                      LOBYTE(v76) = 1;
                      sub_7016A0((NiD3DVertexShader *)&i);
                      if ( v63 )
                        (*((void (__thiscall **)(void **, UInt32))*v17 + 0x23))(v17, v63);
                    }
                  }
                }
                ++v15;
              }
              while ( v15 < vftable_high );
              v4 = v65;
            }
            if ( *(Ni2DBuffer **)(v4 + 0x1D4) != a2 )
            {
              v18 = (_DWORD *)(*((int (__thiscall **)(Ni2DBuffer *))a2->__vftable + 0x27))(a2);
              v19 = sub_54D2C0(v18, st7_0);
              v69 = v19;
              if ( v19 )
                (*((void (__thiscall **)(Ni2DBuffer *, BSFaceGenAnimationData *))a2->__vftable + 0x28))(a2, v19);
            }
            v6 = (NiDX92DBufferData *)a3;
          }
          v20 = *(_DWORD *)(v4 + 0x1D8);
          v21 = (Ni2DBuffer **)(v4 + 0x1D8);
          if ( !v20 )
            goto LABEL_59;
          if ( *(_DWORD *)(v20 + 4) > 1u )
          {
            st7_0 = 1.0;
            sub_478C80((NiTPointerMap<NiObject *,NiObject *> **)v74, 1.0);
            v22 = *v21;
            LOBYTE(v76) = 4;
            v62 = (Ni2DBuffer *)sub_700610(v22, (int)v74);
            LOBYTE(v76) = 1;
            sub_4781A0(v74);
          }
          else
          {
            v62 = *(Ni2DBuffer **)(v4 + 0x1D8);
          }
          v23 = HIWORD(v62[9].__vftable);
          v24 = 0;
          v72 = v23;
          for ( i = 0; i < v72; ++i )
          {
            v25 = sub_405790((int)v62, v24);
            if ( v25 )
            {
              v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v25 + 0x10))(v25);
              v27 = (NiNode **)v26;
              if ( v26 )
              {
                if ( *(Ni2DBuffer **)(v4 + 0x1D8) != v62 )
                {
                  v57 = (Ni2DBuffer *)*sub_700790(*(void **)(v26 + 0xB4), &v70);
                  LOBYTE(v76) = 5;
                  NiSmartPointer_Set__((Ni2DBuffer **)&v63, v57);
                  LOBYTE(v76) = 1;
                  sub_7016A0((NiD3DVertexShader *)&v70);
                  if ( v63 )
                    ((void (__thiscall *)(NiNode **, UInt32))LODWORD((*v27)->members.super.m_worldTransform.pos.y))(
                      v27,
                      v63);
                }
                v28 = v27[0x2E];
                if ( v28 )
                {
                  if ( v28->members.super.super.m_controller )
                  {
                    v29 = sub_550790((int)v27);
                    v30 = v29;
                    if ( v29
                      && (*(int (__thiscall **)(int))(*(_DWORD *)v29 + 0x54))(v29)
                      && (v31 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v30 + 0x54))(v30), sub_523D60(v31)) )
                    {
                      v32 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v30 + 0x54))(v30);
                      v33 = sub_523D60(v32);
                      v34 = *(_DWORD *)(v33 + 0x14);
                      v35 = *(_DWORD *)(*(_DWORD *)(v33 + 8) + 0x40);
                      v36 = v27[0x2E];
                      v37 = 0;
                      if ( v35 )
                      {
                        do
                        {
                          *(_DWORD *)(*(_DWORD *)&v36->members.super.super.m_extraDataListLen + 4 * v37) = *(_DWORD *)(v34 + 4 * v37);
                          ++v37;
                        }
                        while ( v37 < v35 );
                        v4 = v65;
                      }
                      v6 = (NiDX92DBufferData *)a3;
                    }
                    else
                    {
                      v54 = (const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 0xD4))(
                                            v4,
                                            *(_DWORD *)(v4 + 0xC));
                      PrintError("Could not correctly handle skinning for duplicate NPC \"%s\" (%08X).", v54, v60);
                    }
                    v58 = (Ni2DBuffer *)*sub_700790(v27[0x2E]->members.super.super.m_controller, &v71);
                    LOBYTE(v76) = 6;
                    NiSmartPointer_Set__((Ni2DBuffer **)&v67, v58);
                    LOBYTE(v76) = 1;
                    sub_7016A0((NiD3DVertexShader *)&v71);
                    if ( v67 )
                      sub_478300(v27[0x2E], (NiTimeController *)v67);
                  }
                }
              }
            }
            v24 = i + 1;
          }
          v10 = v62;
          v21 = (Ni2DBuffer **)(v4 + 0x1D8);
          if ( *(Ni2DBuffer **)(v4 + 0x1D8) == v62 )
            goto LABEL_59;
          v38 = v69;
          v39 = v62;
          if ( !v69 )
          {
            v40 = (_DWORD *)(*((int (**)(void))v62->__vftable + 0x27))();
            v38 = sub_54D2C0(v40, st7_0);
            if ( !v38 )
            {
LABEL_59:
              if ( !*(_DWORD *)(v4 + 0x1D4) && !*v21 )
              {
                v41 = *(int **)(v4 + 0xE8);
                if ( v41 )
                {
                  sub_52DED0(v41, (int *)&a2, (int *)&v62, v4, 0, 0);
                  v59 = a2;
                  *(_WORD *)(v4 + 0x1E0) = *(_WORD *)(*(_DWORD *)(v4 + 0xE8) + 0x2FC);
                  NiSmartPointer_Set__((Ni2DBuffer **)(v4 + 0x1D4), v59);
                  NiSmartPointer_Set__(v21, v62);
                }
              }
              if ( a2 )
                goto LABEL_85;
              if ( v62 )
              {
LABEL_71:
                LOBYTE(v10) = a2 == 0;
                qmemcpy(v75, &stru_B26AF0[0xA].unk2C, sizeof(v75));
                v47 = (*((int (__thiscall **)(Ni2DBuffer *, Ni2DBuffer *))v62->__vftable + 0x2C))(v62, v10);
                LOBYTE(v47) = a2 == 0;
                (*((void (__thiscall **)(Ni2DBuffer *, int))v62->__vftable + 0x2E))(v62, v47);
                v48 = v62;
                *(float *)&v62[4].members.super.m_uiRefCount = Vector3_InitValue_;
                v48 = (Ni2DBuffer *)((char *)v48 + 0x54);
                v48->members.super.m_uiRefCount = *(UInt32 *)(&Vector3_InitValue_ + 1);
                *(float *)&v48->members.width = dword_B3F9B0;
                v49 = (void (__thiscall **)(Ni2DBuffer *, float *))((char *)v62->__vftable + 0xA8);
                v50 = sub_4D7C50(v6, (float *)v74, v75, 1);
                (*v49)(v62, v50);
                v51 = v64;
                ((void (__thiscall *)(NiAVObject *, Ni2DBuffer *, int))v64->vtbl[1].super.super.Destructor)(v64, v62, 1);
                v52 = v66;
                v62[0xD].members.data = v6;
                sub_7165B0(v62, v52);
                (*((void (__thiscall **)(Ni2DBuffer *, NiAVObject *, int))v62->__vftable + 0x31))(v62, v51, 1);
                v46 = v62;
LABEL_72:
                if ( a2 )
                {
                  v53 = (*((int (__thiscall **)(Ni2DBuffer *))a2->__vftable + 0x27))(a2);
                  if ( v53 )
                  {
LABEL_77:
                    (*(void (__thiscall **)(int, _DWORD, int, int, int, int, _DWORD))(*(_DWORD *)v53 + 0x78))(
                      v53,
                      0.0,
                      1,
                      1,
                      1,
                      1,
                      0);
LABEL_78:
                    LOBYTE(v76) = 0;
                    sub_7016A0((NiD3DVertexShader *)&v67);
                    v76 = 0xFFFFFFFF;
                    sub_7016A0((NiD3DVertexShader *)&v63);
LABEL_79:
                    LOBYTE(v5) = NiAVObject_UpdateNiAVObject(v64, 0.0, 0);
                    return v5;
                  }
                  v46 = v62;
                }
                if ( !v46 )
                  goto LABEL_78;
                v53 = (*((int (__thiscall **)(Ni2DBuffer *))v46->__vftable + 0x27))(v46);
                if ( !v53 )
                  goto LABEL_78;
                goto LABEL_77;
              }
              PrintError("Cannot create a head for an NPC (%d) (no race or bad race data).", *(_DWORD *)(v4 + 0xC));
              if ( a2 )
              {
LABEL_85:
                if ( (*((int (__thiscall **)(Ni2DBuffer *))a2->__vftable + 0x27))(a2) )
                {
                  if ( TESObjectREFR_GetHealth((TESChildCELL *)v6) <= *(float *)&SrcStr )
                  {
                    v42 = (*((int (__thiscall **)(Ni2DBuffer *))a2->__vftable + 0x27))(a2);
                    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v42 + 0x9C))(v42, 1, 1);
                    v43 = (*((int (__thiscall **)(Ni2DBuffer *))a2->__vftable + 0x27))(a2);
                    (*(void (__thiscall **)(int, int))(*(_DWORD *)v43 + 0x94))(v43, 1);
                  }
                }
                (*((void (__thiscall **)(Ni2DBuffer *, int))a2->__vftable + 0x2C))(a2, 1);
                (*((void (__thiscall **)(Ni2DBuffer *, int))a2->__vftable + 0x2E))(a2, 1);
                v44 = a2;
                *(float *)&a2[4].members.super.m_uiRefCount = Vector3_InitValue_;
                v44 = (Ni2DBuffer *)((char *)v44 + 0x54);
                v44->members.super.m_uiRefCount = *(UInt32 *)(&Vector3_InitValue_ + 1);
                *(float *)&v44->members.width = dword_B3F9B0;
                qmemcpy(&a2[2].members.width, &stru_B26AF0[0xA].unk2C, 0x24u);
                (*(void (__thiscall **)(int, Ni2DBuffer *, int))(*(_DWORD *)v73 + 0x84))(v73, a2, 1);
                v45 = v66;
                a2[0xD].members.data = v6;
                sub_7165B0(a2, v45);
              }
              v46 = v62;
              if ( !v62 )
                goto LABEL_72;
              goto LABEL_71;
            }
            v39 = v62;
          }
          (*((void (__thiscall **)(Ni2DBuffer *, BSFaceGenAnimationData *))v39->__vftable + 0x28))(v39, v38);
          goto LABEL_59;
        }
      }
    }
  }
  return v5;
}
