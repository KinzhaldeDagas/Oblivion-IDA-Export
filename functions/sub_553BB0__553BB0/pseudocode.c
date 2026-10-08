void __cdecl sub_553BB0(int arg0, int a2)
{
  int v2; // ecx
  unsigned int v3; // edx
  bool v4; // zf
  int v5; // eax
  NiObject *v6; // eax
  int v7; // esi
  char **v8; // eax
  char *v9; // esi
  char *m_data; // esi
  char *v11; // eax
  Ni2DBuffer *v12; // eax
  volatile LONG *v13; // edi
  NiNode *v14; // ebp
  NiObject *v15; // edx
  NiProperty *NiPropertyByID; // esi
  NiProperty *v17; // edi
  BSShaderProperty *v18; // edi
  unsigned __int16 v19; // si
  int v20; // ecx
  NiProperty *v21; // eax
  double v22; // st7
  unsigned int v23; // eax
  LONG (__stdcall *v24)(volatile LONG *); // ebp
  NiNode *v25; // esi
  LONG v26; // eax
  char *v27; // [esp+0h] [ebp-100h]
  char *v28; // [esp+4h] [ebp-FCh]
  NiNode *v29; // [esp+24h] [ebp-DCh] BYREF
  BSStringT v30; // [esp+28h] [ebp-D8h] BYREF
  BSStringT v31; // [esp+30h] [ebp-D0h] BYREF
  int v32; // [esp+38h] [ebp-C8h]
  float v33; // [esp+3Ch] [ebp-C4h]
  BSStringT v34; // [esp+40h] [ebp-C0h] BYREF
  BSStringT v35; // [esp+48h] [ebp-B8h] BYREF
  BSStringT v36; // [esp+50h] [ebp-B0h] BYREF
  unsigned int v37; // [esp+58h] [ebp-A8h]
  NiObject *v38; // [esp+5Ch] [ebp-A4h]
  unsigned int v39; // [esp+60h] [ebp-A0h] BYREF
  int v40; // [esp+64h] [ebp-9Ch]
  int v41; // [esp+68h] [ebp-98h]
  __int16 v42; // [esp+6Ch] [ebp-94h]
  __int16 v43; // [esp+6Eh] [ebp-92h]
  Ni2DBuffer *v44; // [esp+70h] [ebp-90h] BYREF
  float *v45[2]; // [esp+74h] [ebp-8Ch] BYREF
  char v46; // [esp+7Ch] [ebp-84h]
  char v47[4]; // [esp+80h] [ebp-80h] BYREF
  int (__stdcall ***v48[4])(signed int); // [esp+84h] [ebp-7Ch] BYREF
  FaceGenHeadParameters a1; // [esp+94h] [ebp-6Ch] BYREF
  int v50; // [esp+FCh] [ebp-4h]

  v2 = arg0; /*0x553bdd*/
  v3 = 0; /*0x553be6*/
  v4 = *(_WORD *)(arg0 + 0xB6) == 0; /*0x553be8*/
  v32 = 0; /*0x553bef*/
  v37 = 0; /*0x553bf3*/
  if ( v4 ) /*0x553bf7*/
    return; /*0x553bf7*/
  while ( 1 ) /*0x553c00*/
  {
    if ( *(unsigned __int16 *)(v2 + 0xB6) <= v3 ) /*0x553c09*/
      goto LABEL_39; /*0x553c09*/
    v38 = *(NiObject **)(*(_DWORD *)(v2 + 0xB0) + 4 * v3); /*0x553c1a*/
    if ( !v38 ) /*0x553c1e*/
      goto LABEL_39; /*0x553c1e*/
    if ( !strcmp((const char *)v38[1].__vftable, "FaceGenFace") ) /*0x553c33*/
      break; /*0x553c33*/
    v2 = arg0; /*0x554102*/
LABEL_39:
    v23 = *(unsigned __int16 *)(v2 + 0xB6); /*0x554109*/
    v37 = ++v3; /*0x554115*/
    if ( v3 >= v23 ) /*0x554119*/
      return; /*0x554119*/
  }
  v5 = v38->__vftable->Unk_04(v38); /*0x553c42*/
  v6 = sub_550790(v5); /*0x553c45*/
  if ( v6 ) /*0x553c4f*/
    v7 = (int)v6->__vftable[1].Unk_02(v6); /*0x553c5a*/
  else
    v7 = 0; /*0x553c5e*/
  v29 = 0; /*0x553c60*/
  v50 = 6; /*0x553c64*/
  v31.m_data = 0; /*0x553c6b*/
  *(_DWORD *)&v31.m_dataLen = 0; /*0x553c6f*/
  v30.m_data = 0; /*0x553c79*/
  *(_DWORD *)&v30.m_dataLen = 0; /*0x553c7d*/
  v35.m_data = 0; /*0x553c87*/
  *(_DWORD *)&v35.m_dataLen = 0; /*0x553c8b*/
  v36.m_data = 0; /*0x553c95*/
  v36.m_dataLen = 0; /*0x553c99*/
  v36.m_bufLen = 0; /*0x553c9e*/
  v34.m_data = 0; /*0x553ca3*/
  *(_DWORD *)&v34.m_dataLen = 0; /*0x553ca7*/
  v41 = 0; /*0x553cb1*/
  v42 = 0; /*0x553cb5*/
  v43 = 0; /*0x553cba*/
  ArrayConstructor( /*0x553cdd*/
    (char *)&a1,
    0x18u,
    4,
    (void (__thiscall *)(char *))FaceGenMatrix_Construct,
    (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
  v4 = g_faceGenManager == 0; /*0x553ce2*/
  LOBYTE(v50) = 7; /*0x553ce8*/
  if ( v4 ) /*0x553cf0*/
    FaceGenManager_EnsureInitialized(); /*0x553cf2*/
  FaceGenHeadParameters_Copy((const FaceGenHeadParameters *)((char *)g_faceGenManager + 8), &a1); /*0x553d08*/
  v8 = *(char ***)(v7 + 8); /*0x553d0d*/
  if ( !v8 ) /*0x553d15*/
  {
    FormHeapFree(0); /*0x553d18*/
    v32 |= 1u; /*0x553d20*/
    v39 = 0; /*0x553d25*/
    v40 = 0; /*0x553d2e*/
    v8 = (char **)&v39; /*0x553d33*/
  }
  v9 = *v8; /*0x553d3c*/
  if ( (v32 & 1) != 0 ) /*0x553d3e*/
  {
    v32 &= ~1u; /*0x553d44*/
    FormHeapFree(v39); /*0x553d4a*/
    v39 = 0; /*0x553d52*/
    v40 = 0; /*0x553d5b*/
  }
  sub_54FF60(&v31, v9); /*0x553d66*/
  if ( a2 ) /*0x553d77*/
  {
    if ( a2 != 1 ) /*0x553d7c*/
      goto LABEL_46; /*0x553d7c*/
    sub_550170(&v30, v31.m_data); /*0x553d8c*/
  }
  else
  {
    sub_551B40(&v30, v31.m_data); /*0x553d9d*/
  }
  if ( !v30.m_data /*0x553dcb*/
    || !MEMORY[0xB33A04]
    || !MEMORY[0xB33A04]->vtbl->FindFile(MEMORY[0xB33A04], v30.m_data, 0, 0, 0xFFFFFFFF) )
  {
LABEL_46:
    LOBYTE(v50) = 6; /*0x5541c0*/
    _LN21((char *)&a1, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x5541d9*/
    FormHeapFree(0); /*0x5541df*/
    FormHeapFree(0); /*0x5541e5*/
    FormHeapFree(0); /*0x5541eb*/
    FormHeapFree(0); /*0x5541f1*/
    FormHeapFree((unsigned int)v30.m_data); /*0x5541fb*/
    FormHeapFree((unsigned int)v31.m_data); /*0x554205*/
    v50 = 0xFFFFFFFF; /*0x554213*/
    if ( !v29 ) /*0x55421e*/
      return; /*0x55421e*/
    v25 = v29; /*0x554220*/
    v26 = InterlockedDecrement((volatile LONG *)&v29->members); /*0x554226*/
    goto LABEL_48; /*0x554226*/
  }
  m_data = v30.m_data; /*0x553dd5*/
  v28 = sub_5500C0(&v34, v30.m_data); /*0x553dea*/
  v27 = sub_550010(&v36, m_data); /*0x553df9*/
  v11 = sub_54FEB0(&v35, m_data); /*0x553e01*/
  v12 = sub_553620(v11, m_data, v27, v28, 1, 0); /*0x553e0a*/
  v13 = (volatile LONG *)v12; /*0x553e0f*/
  v44 = v12; /*0x553e16*/
  if ( v12 ) /*0x553e1a*/
    InterlockedIncrement((volatile LONG *)&v12->members); /*0x553e20*/
  LOBYTE(v50) = 8; /*0x553e35*/
  if ( BSFaceGenModel_CreateMorphedGeometry((void *)v13, &a1, (NiGeometry **)&v29) && v29 ) /*0x553e50*/
  {
    NiObjectNET_SetName((NiObjectNET *)v29, "FaceGenFace"); /*0x553e5b*/
    v14 = v29; /*0x553e60*/
    v15 = v38; /*0x553e64*/
    v29->members.super.m_localTransform.pos = *(NiPoint3 *)&v38[0xA].members.m_uiRefCount; /*0x553e6b*/
    qmemcpy(&v14->members.super.m_localTransform, &v15[6], 0x24u); /*0x553e88*/
    v33 = *(float *)&v15[0xC].__vftable; /*0x553e8d*/
    v33 = fabs(v33); /*0x553e97*/
    v14->members.super.m_localTransform.scale = v33; /*0x553e9f*/
    if ( OB_RendererGlobalState_010201A0[0xC] ) /*0x553ea2*/
      BSShaderManager_AssignShadersRecursive((NiAVObject *)v14, 0x1Au, 1, 1); /*0x553eb0*/
    else
      BSShaderManager_AssignShadersRecursive((NiAVObject *)v14, 0xEu, 1, 1); /*0x553eb5*/
    NiPropertyByID = NiNode_GetNiPropertyByID(v14, 4); /*0x553ecc*/
    v17 = NiNode_GetNiPropertyByID((NiNode *)v38, 4); /*0x553ed7*/
    OB_NiCloningProcess_ctor((NiTPointerMap<NiObject *,NiObject *> **)v48); /*0x553ed9*/
    LOBYTE(v50) = 9; /*0x553ee5*/
    v18 = (BSShaderProperty *)sub_700610(v17, (int)v48); /*0x553ef2*/
    sub_550430(v18, *(_DWORD *)&NiPropertyByID[8].members.m_extraDataListLen); /*0x553efd*/
    sub_4A1220((int ***)v14, (int)NiPropertyByID); /*0x553f05*/
    sub_405680(v14, v18); /*0x553f0d*/
    NiGeometry_SetShader((NiGeometry *)v14, (BSShader *)v38[0x17].members.m_uiRefCount); /*0x553f1f*/
    v19 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)&v14->members.children.capacity + 0x50))(*(_DWORD *)&v14->members.children.capacity); /*0x553f39*/
    if ( NiGeometryData_LockVertexStream(*(_DWORD *)&v14->members.children.capacity, 1) ) /*0x553f3c*/
    {
      v20 = *(_DWORD *)&v14->members.children.capacity; /*0x553f45*/
      v45[0] = 0; /*0x553f50*/
      v45[1] = 0; /*0x553f54*/
      v46 = 0; /*0x553f58*/
      NiGeometryData_GetLockedVertexStream(v20, (int)v45); /*0x553f5c*/
      if ( v45[0] ) /*0x553f65*/
        sub_550A30((float *)(*(_DWORD *)&v14->members.children.capacity + 0xC), v45, v19); /*0x553f7a*/
    }
    v21 = NiNode_GetNiPropertyByID(v14, 2); /*0x553f86*/
    if ( v21 ) /*0x553f8f*/
    {
      v33 = *(float *)&v21[3].members.super.m_uiRefCount; /*0x553f94*/
      if ( v33 < 1.0 ) /*0x553fa3*/
      {
        v22 = flt_A46B10; /*0x553fa5*/
        ++v21[3].members.m_controller; /*0x553fab*/
        *(float *)&v21[3].members.super.m_uiRefCount = v22; /*0x553faf*/
      }
    }
    (*(void (__thiscall **)(int, char *, unsigned int, NiNode *))(*(_DWORD *)arg0 + 0x90))(arg0, v47, v37, v14); /*0x553fce*/
    NiPointerSlot_Release((NiD3DVertexShader *)v47); /*0x553fd4*/
    NiAVObject_InitializePropertyState((NiAVObject *)v14); /*0x553fdb*/
    NiNode_UpdateDynamicEffectState(v14); /*0x553fe2*/
    (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)arg0 + 0xC4))(arg0, *(_DWORD *)(arg0 + 0x1C), 0); /*0x553ff6*/
    if ( a2 ) /*0x554001*/
      *(_BYTE *)(arg0 + 0x110) = 0; /*0x554008*/
    else
      *(_BYTE *)(arg0 + 0x110) = 1; /*0x554010*/
    LOBYTE(v50) = 8; /*0x55401b*/
    sub_4781A0(v48); /*0x554023*/
    LOBYTE(v50) = 7; /*0x55402c*/
    NiPointerSlot_Release((NiD3DVertexShader *)&v44); /*0x554034*/
    LOBYTE(v50) = 6; /*0x55404a*/
    _LN21((char *)&a1, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x554052*/
    FormHeapFree(0); /*0x554058*/
    v41 = 0; /*0x554062*/
    v43 = 0; /*0x554066*/
    v42 = 0; /*0x55406b*/
    FormHeapFree((unsigned int)v34.m_data); /*0x554070*/
    v34.m_data = 0; /*0x55407a*/
    *(_DWORD *)&v34.m_dataLen = 0; /*0x554083*/
    FormHeapFree((unsigned int)v36.m_data); /*0x554088*/
    v36.m_data = 0; /*0x554092*/
    v36.m_bufLen = 0; /*0x554096*/
    v36.m_dataLen = 0; /*0x55409b*/
    FormHeapFree((unsigned int)v35.m_data); /*0x5540a0*/
    v35.m_data = 0; /*0x5540aa*/
    *(_DWORD *)&v35.m_dataLen = 0; /*0x5540b3*/
    FormHeapFree((unsigned int)v30.m_data); /*0x5540b8*/
    v30.m_data = 0; /*0x5540c2*/
    *(_DWORD *)&v30.m_dataLen = 0; /*0x5540cb*/
    FormHeapFree((unsigned int)v31.m_data); /*0x5540d0*/
    v31.m_data = 0; /*0x5540dc*/
    *(_DWORD *)&v31.m_dataLen = 0; /*0x5540e5*/
    v50 = 0xFFFFFFFF; /*0x5540ea*/
    NiPointerSlot_Release((NiD3DVertexShader *)&v29); /*0x5540f5*/
    v3 = v37; /*0x5540fa*/
    v2 = arg0; /*0x5540fe*/
    goto LABEL_39; /*0x554100*/
  }
  v24 = InterlockedDecrement; /*0x554126*/
  LOBYTE(v50) = 7; /*0x55412c*/
  if ( v13 ) /*0x554134*/
  {
    if ( !v24(v13 + 1) ) /*0x55413a*/
      (**(void (__thiscall ***)(volatile LONG *, int))v13)(v13, 1); /*0x554148*/
  }
  LOBYTE(v50) = 6; /*0x55415b*/
  _LN21((char *)&a1, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x554163*/
  FormHeapFree(0); /*0x554169*/
  FormHeapFree((unsigned int)v34.m_data); /*0x554173*/
  FormHeapFree((unsigned int)v36.m_data); /*0x55417d*/
  FormHeapFree((unsigned int)v35.m_data); /*0x554187*/
  FormHeapFree((unsigned int)m_data); /*0x55418d*/
  FormHeapFree((unsigned int)v31.m_data); /*0x554197*/
  v50 = 0xFFFFFFFF; /*0x5541a5*/
  if ( v29 ) /*0x5541b0*/
  {
    v25 = v29; /*0x5541b6*/
    v26 = v24((volatile LONG *)&v29->members); /*0x5541bc*/
LABEL_48:
    if ( !v26 ) /*0x55422e*/
      v25->vtbl->super.super.super.Destructor((NiRefObject *)v25, 1); /*0x55423c*/
  }
}
