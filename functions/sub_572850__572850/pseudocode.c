char __usercall sub_572850@<al>(double st6_0@<st1>, double st7_0@<st0>, const void **a3, char *a2, int a5, float a6)
{
  BSStringT *v7; // ebx
  _DWORD *v8; // esi
  int v9; // ecx
  float v10; // eax
  float *v11; // eax
  int v12; // eax
  float v13; // esi
  NiNode *v14; // eax
  NiObjectNET *v15; // eax
  NiNode *v16; // ebp
  NiNode *v17; // eax
  int v18; // esi
  BSStringT *v19; // eax
  BSStringT *v20; // eax
  _DWORD *Singleton; // eax
  int v22; // esi
  NiMatrix33 *v24; // eax
  double v25; // st7
  double v26; // st7
  float v27; // eax
  NiMatrix33 *v28; // eax
  NiMatrix33 *v29; // eax
  NiObjectNET *v30; // eax
  BSShaderProperty *v31; // esi
  NiObjectNET *v32; // eax
  BSShaderProperty *v33; // esi
  UInt16 v34; // dx
  float v35; // eax
  float *v36; // esi
  double v37; // st7
  float *v38; // eax
  double v39; // [esp+Ch] [ebp-E8h]
  double v40; // [esp+14h] [ebp-E0h]
  float angleX; // [esp+1Ch] [ebp-D8h]
  char v42; // [esp+37h] [ebp-BDh]
  float v43; // [esp+38h] [ebp-BCh] BYREF
  float v44; // [esp+3Ch] [ebp-B8h] BYREF
  BSStringT v45; // [esp+40h] [ebp-B4h] BYREF
  int v46; // [esp+48h] [ebp-ACh] BYREF
  float v47; // [esp+4Ch] [ebp-A8h]
  float v48; // [esp+50h] [ebp-A4h]
  float v49; // [esp+54h] [ebp-A0h]
  NiMatrix33 v50; // [esp+58h] [ebp-9Ch] BYREF
  NiMatrix33 out; // [esp+7Ch] [ebp-78h] BYREF
  NiMatrix33 right; // [esp+A0h] [ebp-54h] BYREF
  NiMatrix33 v53; // [esp+C4h] [ebp-30h] BYREF
  int v54; // [esp+F0h] [ebp-4h]

  if ( !a3 ) /*0x572888*/
    return 0; /*0x572888*/
  v42 = 0; /*0x572891*/
  v44 = COERCE_FLOAT(Double_To_SInt32(st7_0)); /*0x5728a9*/
  v7 = (BSStringT *)sub_571BD0((int)a3, (int)a2, a5, &v44); /*0x5728ba*/
  if ( v7 ) /*0x5728c1*/
  {
    v8 = *((_DWORD **)sub_571F90(1) + 0x579); /*0x5728ce*/
    if ( v8 ) /*0x5728de*/
    {
      v9 = unk_B3A6A4; /*0x5728e0*/
      while ( 1 ) /*0x5728e6*/
      {
        if ( !v9 ) /*0x5728e8*/
        {
          v10 = COERCE_FLOAT(FormHeapAlloc(0x15F0u)); /*0x5728ef*/
          v43 = v10; /*0x5728f7*/
          v54 = 0; /*0x5728fd*/
          if ( v10 == 0.0 ) /*0x572904*/
            v11 = 0; /*0x57290f*/
          else
            v11 = sub_571E80((float *)LODWORD(v10)); /*0x572908*/
          v9 = (int)v11; /*0x572911*/
          v54 = 0xFFFFFFFF; /*0x572913*/
          unk_B3A6A4 = (int)v11; /*0x57291e*/
        }
        v12 = v8[2]; /*0x572927*/
        v8 = (_DWORD *)*v8; /*0x57292f*/
        if ( *(_DWORD *)(v12 + 0xC) == *(_DWORD *)&v7[1].m_dataLen ) /*0x572931*/
          break; /*0x572931*/
        if ( !v8 ) /*0x572935*/
          goto LABEL_12; /*0x572935*/
      }
      *(float *)(v12 + 0x18) = a6; /*0x5729a1*/
      return 1; /*0x5729a4*/
    }
LABEL_12:
    (*((void (__usercall **)(const void **@<ecx>, float *, _DWORD, double@<st0>, double@<st1>))*a3 + 0x22))( /*0x572937*/
      a3,
      &v44,
      *(_DWORD *)&v7[1].m_dataLen,
      st7_0,
      st6_0);
    v13 = v44; /*0x57294d*/
    if ( v44 != 0.0 && !InterlockedDecrement((volatile LONG *)(LODWORD(v44) + 4)) && v13 != 0.0 ) /*0x572965*/
      (**(void (__thiscall ***)(_DWORD, int))LODWORD(v13))(LODWORD(v13), 1); /*0x57296f*/
    *(float *)&v14 = COERCE_FLOAT(FormHeapAlloc(0xE4u)); /*0x572976*/
    v43 = *(float *)&v14; /*0x57297e*/
    v54 = 1; /*0x572984*/
    if ( *(float *)&v14 == 0.0 ) /*0x57298f*/
      v15 = 0; /*0x5729a9*/
    else
      v15 = (NiObjectNET *)NiBillBoardNode_Constructor(v14); /*0x572993*/
    v54 = 0xFFFFFFFF; /*0x5729b2*/
    v16 = (NiNode *)v15; /*0x5729bd*/
    NiObjectNET_SetName(v15, "FloatingText"); /*0x5729bf*/
    v42 = 1; /*0x5729c4*/
  }
  else
  {
    *(float *)&v17 = COERCE_FLOAT(FormHeapAlloc(0xE4u)); /*0x5729d3*/
    v18 = (int)v17; /*0x5729d8*/
    v43 = *(float *)&v17; /*0x5729dd*/
    v54 = 2; /*0x5729e3*/
    if ( *(float *)&v17 == 0.0 ) /*0x5729ee*/
    {
      v18 = 0; /*0x572a11*/
    }
    else
    {
      NiNode::NiNode(v17, 0); /*0x5729f3*/
      *(float *)(v18 + 0xE0) = 0.0; /*0x5729fa*/
      *(_DWORD *)v18 = &NiBillboardNode::`vftable'; /*0x572a00*/
      *(_WORD *)(v18 + 0xDC) = 9; /*0x572a06*/
    }
    v54 = 0xFFFFFFFF; /*0x572a1d*/
    v16 = (NiNode *)v18; /*0x572a24*/
    NiObjectNET_SetName((NiObjectNET *)v18, "FloatingText"); /*0x572a26*/
    *(float *)&v19 = COERCE_FLOAT(FormHeapAlloc(0x20u)); /*0x572a2d*/
    v43 = *(float *)&v19; /*0x572a35*/
    v54 = 3; /*0x572a3b*/
    if ( *(float *)&v19 == 0.0 ) /*0x572a46*/
      v20 = 0; /*0x572a67*/
    else
      v20 = sub_571C50(v19, v18, a2, a5, SLODWORD(v44)); /*0x572a60*/
    v54 = 0xFFFFFFFF; /*0x572a69*/
    v7 = v20; /*0x572a70*/
  }
  LODWORD(v44) = a5 + *(_DWORD *)&v7[3].m_dataLen; /*0x572a89*/
  v46 = 0x2710; /*0x572a8d*/
  v45.m_data = 0; /*0x572a95*/
  v45.m_dataLen = 0; /*0x572a99*/
  v45.m_bufLen = 0; /*0x572a9e*/
  BSStringT_Set(&v45, a2, 0); /*0x572aa3*/
  v54 = 4; /*0x572aa8*/
  Singleton = FontManager_GetSingleton(); /*0x572ab3*/
  HIDWORD(v40) = &dword_B25AE0; /*0x572abe*/
  LODWORD(v40) = 2; /*0x572ac3*/
  HIDWORD(v39) = &v46; /*0x572ac9*/
  LODWORD(v39) = &v45; /*0x572ace*/
  v22 = sub_575870((float **)Singleton[1], 0.0, COERCE_INT(0.0), 0.0, v39, v40, 0); /*0x572ae4*/
  if ( !v22 ) /*0x572ae8*/
  {
    FormHeapFree((unsigned int)v45.m_data); /*0x572aef*/
    return 0; /*0x572af9*/
  }
  ((void (__thiscall *)(NiNode *, int, int))v16->vtbl->AddObject)(v16, v22, 1); /*0x572b0c*/
  BSStringT_Set(v7 + 2, a2, 0); /*0x572b1a*/
  NiMatrix33_InitRotationXTransposed(&v50, flt_A3F3E0); /*0x572b2d*/
  v24 = NiMAtrix33_Multiply(&v50, &out, (NiMatrix33 *)(v22 + 0x30)); /*0x572b3f*/
  v47 = 0.0; /*0x572b46*/
  v48 = 0.0; /*0x572b4c*/
  v25 = (double)SLODWORD(v44); /*0x572b55*/
  qmemcpy((void *)(v22 + 0x30), v24, 0x24u); /*0x572b5d*/
  v44 = v25; /*0x572b5f*/
  v49 = v44; /*0x572b67*/
  v26 = flt_A3721C; /*0x572b6b*/
  v27 = v44; /*0x572b75*/
  v16->members.super.m_localTransform.pos.x = v47; /*0x572b79*/
  v16->members.super.m_localTransform.pos.y = 0.0; /*0x572b7d*/
  angleX = v26; /*0x572b84*/
  v16->members.super.m_localTransform.pos.z = v27; /*0x572b87*/
  NiMatrix33_InitRotationXTransposed(&v50, angleX); /*0x572b8a*/
  NiMatrix33_InitRotationY(&right, flt_A449C0); /*0x572ba0*/
  v28 = NiMAtrix33_Multiply(&v50, &v53, &right); /*0x572bc2*/
  v29 = NiMAtrix33_Multiply(v28, &out, &v16->members.super.m_localTransform.rot); /*0x572bc9*/
  v43 = fabs(dbl_A2FAA0); /*0x572bd8*/
  qmemcpy(&v16->members.super.m_localTransform, v29, 0x24u); /*0x572be5*/
  v16->members.super.m_localTransform.scale = v43; /*0x572be7*/
  *(_DWORD *)&v7[1].m_dataLen = v16; /*0x572bec*/
  *(float *)&v30 = COERCE_FLOAT(FormHeapAlloc(0x1Cu)); /*0x572bef*/
  v31 = (BSShaderProperty *)v30; /*0x572bf4*/
  v43 = *(float *)&v30; /*0x572bf9*/
  LOBYTE(v54) = 5; /*0x572bff*/
  if ( *(float *)&v30 == 0.0 ) /*0x572c07*/
  {
    v31 = 0; /*0x572c1e*/
  }
  else
  {
    NiObjectNET::NiObjectNET(v30); /*0x572c0b*/
    v31->vtbl = &NiVertexColorProperty::`vftable'; /*0x572c10*/
    v31->member.super.flags = 8; /*0x572c16*/
  }
  v31->member.super.flags = v31->member.super.flags & 0xFFC7 | 0x10; /*0x572c2d*/
  LOBYTE(v54) = 4; /*0x572c34*/
  sub_405680(v16, v31); /*0x572c3c*/
  *(float *)&v32 = COERCE_FLOAT(FormHeapAlloc(0x1Cu)); /*0x572c43*/
  v33 = (BSShaderProperty *)v32; /*0x572c48*/
  v43 = *(float *)&v32; /*0x572c4d*/
  LOBYTE(v54) = 6; /*0x572c53*/
  if ( *(float *)&v32 == 0.0 ) /*0x572c5b*/
  {
    v33 = 0; /*0x572c76*/
  }
  else
  {
    NiObjectNET::NiObjectNET(v32); /*0x572c5f*/
    v33->vtbl = &NiAlphaProperty::`vftable'; /*0x572c64*/
    v33->member.super.flags = 0xEC; /*0x572c6a*/
    v33->member.super.pad01A[0] = 0; /*0x572c70*/
  }
  v34 = v33->member.super.flags & 0xDFFE | 1; /*0x572c81*/
  LOBYTE(v54) = 4; /*0x572c88*/
  v33->member.super.flags = v34; /*0x572c90*/
  sub_405680(v16, v33); /*0x572c94*/
  if ( !v42 ) /*0x572ca5*/
    NiObjectNET_AddExtraData(a3, (int)v7, (unsigned int *)v7); /*0x572caa*/
  (*((void (__thiscall **)(const void **, NiNode *, int))*a3 + 0x21))(a3, v16, 1); /*0x572cbc*/
  NiAVObject_InitializePropertyState((NiAVObject *)v16); /*0x572cc0*/
  NiNode_UpdateDynamicEffectState(v16); /*0x572cc7*/
  NiAVObject_UpdateNiAVObject((NiAVObject *)v16, 0.0, 0); /*0x572cd6*/
  v35 = COERCE_FLOAT(FormHeapAlloc(0x1Cu)); /*0x572cdd*/
  v43 = v35; /*0x572ce5*/
  LOBYTE(v54) = 7; /*0x572ceb*/
  if ( v35 == 0.0 ) /*0x572cf3*/
    *(float *)&v36 = 0.0; /*0x572d00*/
  else
    *(float *)&v36 = COERCE_FLOAT(sub_571D40((_DWORD *)LODWORD(v35))); /*0x572cfc*/
  v37 = v44; /*0x572d02*/
  *v36 = v44; /*0x572d0d*/
  v36[1] = v37; /*0x572d11*/
  v36[6] = a6; /*0x572d1f*/
  LOBYTE(v54) = 4; /*0x572d22*/
  v43 = *(float *)&v36; /*0x572d2a*/
  BSStringT_Set((BSStringT *)v36 + 2, a2, 0); /*0x572d2e*/
  NiSmartPointer_Set__((Ni2DBuffer **)v36 + 3, (Ni2DBuffer *)v16); /*0x572d37*/
  v38 = sub_571F90(1); /*0x572d43*/
  NiTPointerList__AddTail((BSTextureManager *)(v38 + 0x578), (void **)&v43); /*0x572d53*/
  FormHeapFree((unsigned int)v45.m_data); /*0x572d5d*/
  return 1; /*0x572d67*/
}
