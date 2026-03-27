char __usercall sub_572850@<al>(double a1@<st2>, double st6_0@<st1>, float *a3, char *a2, int a5, float a6)
{
  double v6; // st7
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
  int Singleton; // eax
  int v22; // esi
  float *v24; // eax
  double v25; // st7
  double v26; // st7
  float v27; // eax
  float *v28; // eax
  float *v29; // eax
  NiObjectNET *v30; // eax
  BSShaderProperty *v31; // esi
  NiObjectNET *v32; // eax
  BSShaderProperty *v33; // esi
  UInt16 v34; // dx
  float v35; // eax
  float *v36; // esi
  double v37; // st7
  float *v38; // eax
  float v39; // [esp+1Ch] [ebp-D8h]
  char v40; // [esp+37h] [ebp-BDh]
  float v41; // [esp+38h] [ebp-BCh] BYREF
  float v42; // [esp+3Ch] [ebp-B8h] BYREF
  BSStringT v43; // [esp+40h] [ebp-B4h] BYREF
  int v44; // [esp+48h] [ebp-ACh] BYREF
  float v45; // [esp+4Ch] [ebp-A8h]
  float v46; // [esp+50h] [ebp-A4h]
  float v47; // [esp+54h] [ebp-A0h]
  float v48[9]; // [esp+58h] [ebp-9Ch] BYREF
  float v49[9]; // [esp+7Ch] [ebp-78h] BYREF
  float v50[9]; // [esp+A0h] [ebp-54h] BYREF
  float v51[9]; // [esp+C4h] [ebp-30h] BYREF
  int v52; // [esp+F0h] [ebp-4h]

  if ( !a3 )
    return 0;
  v6 = a3[0xA];
  v40 = 0;
  v42 = COERCE_FLOAT(Double_To_SInt32(v6));
  v7 = (BSStringT *)sub_571BD0((int)a3, (int)a2, a5, &v42);
  if ( v7 )
  {
    v8 = *((_DWORD **)sub_571F90(1) + 0x579);
    if ( v8 )
    {
      v9 = dword_B3A6A4;
      while ( 1 )
      {
        if ( !v9 )
        {
          v10 = COERCE_FLOAT(FormHeapAlloc(0x15F0u));
          v41 = v10;
          v52 = 0;
          if ( v10 == 0.0 )
            v11 = 0;
          else
            v11 = sub_571E80((float *)LODWORD(v10));
          v9 = (int)v11;
          v52 = 0xFFFFFFFF;
          dword_B3A6A4 = (int)v11;
        }
        v12 = v8[2];
        v8 = (_DWORD *)*v8;
        if ( *(_DWORD *)(v12 + 0xC) == *(_DWORD *)&v7[1].m_dataLen )
          break;
        if ( !v8 )
          goto LABEL_12;
      }
      *(float *)(v12 + 0x18) = a6;
      return 1;
    }
LABEL_12:
    (*(void (__thiscall **)(float *, float *, _DWORD))(*(_DWORD *)a3 + 0x88))(a3, &v42, *(_DWORD *)&v7[1].m_dataLen);
    v13 = v42;
    if ( v42 != 0.0 && !InterlockedDecrement((volatile LONG *)(LODWORD(v42) + 4)) && v13 != 0.0 )
      (**(void (__thiscall ***)(_DWORD, int))LODWORD(v13))(LODWORD(v13), 1);
    *(float *)&v14 = COERCE_FLOAT(FormHeapAlloc(0xE4u));
    v41 = *(float *)&v14;
    v52 = 1;
    if ( *(float *)&v14 == 0.0 )
      v15 = 0;
    else
      v15 = (NiObjectNET *)NiBillBoardNode_Constructor(v14);
    v52 = 0xFFFFFFFF;
    v16 = (NiNode *)v15;
    NiObjectNET_SetName(v15, "FloatingText");
    v40 = 1;
  }
  else
  {
    *(float *)&v17 = COERCE_FLOAT(FormHeapAlloc(0xE4u));
    v18 = (int)v17;
    v41 = *(float *)&v17;
    v52 = 2;
    if ( *(float *)&v17 == 0.0 )
    {
      v18 = 0;
    }
    else
    {
      NiNode::NiNode(v17, 0);
      v6 = 0.0;
      *(float *)(v18 + 0xE0) = 0.0;
      *(_DWORD *)v18 = &NiBillboardNode::`vftable';
      *(_WORD *)(v18 + 0xDC) = 9;
    }
    v52 = 0xFFFFFFFF;
    v16 = (NiNode *)v18;
    NiObjectNET_SetName((NiObjectNET *)v18, "FloatingText");
    *(float *)&v19 = COERCE_FLOAT(FormHeapAlloc(0x20u));
    v41 = *(float *)&v19;
    v52 = 3;
    if ( *(float *)&v19 == 0.0 )
      v20 = 0;
    else
      v20 = sub_571C50(v19, v18, a2, a5, SLODWORD(v42));
    v52 = 0xFFFFFFFF;
    v7 = v20;
  }
  LODWORD(v42) = a5 + *(_DWORD *)&v7[3].m_dataLen;
  v44 = 0x2710;
  v43.m_data = 0;
  v43.m_dataLen = 0;
  v43.m_bufLen = 0;
  BSStringT_Set(&v43, a2, 0);
  v52 = 4;
  Singleton = FontManager_GetSingleton(v6, st6_0, a1);
  v22 = sub_575870(*(_DWORD **)(Singleton + 4), 0.0, 0.0, 0.0, (int)&v43, (int)&v44, 2, (int)&dword_B25AE0, 0);
  if ( !v22 )
  {
    FormHeapFree((unsigned int)v43.m_data);
    return 0;
  }
  ((void (__thiscall *)(NiNode *, int, int))v16->vtbl->AddObject)(v16, v22, 1);
  BSStringT_Set(v7 + 2, a2, 0);
  NiMatrix33_InitRotationTransposedTransform___(v48, flt_A3F3E0);
  v24 = NiMAtrix33_Multiply(v48, v49, (float *)(v22 + 0x30));
  v45 = 0.0;
  v46 = 0.0;
  v25 = (double)SLODWORD(v42);
  qmemcpy((void *)(v22 + 0x30), v24, 0x24u);
  v42 = v25;
  v47 = v42;
  v26 = flt_A3721C;
  v27 = v42;
  v16->members.super.m_localTransform.pos.x = v45;
  v16->members.super.m_localTransform.pos.y = 0.0;
  v39 = v26;
  v16->members.super.m_localTransform.pos.z = v27;
  NiMatrix33_InitRotationTransposedTransform___(v48, v39);
  sub_70FD80(v50, flt_A449C0);
  v28 = NiMAtrix33_Multiply(v48, v51, v50);
  v29 = NiMAtrix33_Multiply(v28, v49, (float *)&v16->members.super.m_localTransform);
  v41 = fabs(dbl_A2FAA0);
  qmemcpy(&v16->members.super.m_localTransform, v29, 0x24u);
  v16->members.super.m_localTransform.scale = v41;
  *(_DWORD *)&v7[1].m_dataLen = v16;
  *(float *)&v30 = COERCE_FLOAT(FormHeapAlloc(0x1Cu));
  v31 = (BSShaderProperty *)v30;
  v41 = *(float *)&v30;
  LOBYTE(v52) = 5;
  if ( *(float *)&v30 == 0.0 )
  {
    v31 = 0;
  }
  else
  {
    NiObjectNET::NiObjectNET(v30);
    v31->vtbl = &NiVertexColorProperty::`vftable';
    v31->member.super.flags = 8;
  }
  v31->member.super.flags = v31->member.super.flags & 0xFFC7 | 0x10;
  LOBYTE(v52) = 4;
  sub_405680(v16, v31);
  *(float *)&v32 = COERCE_FLOAT(FormHeapAlloc(0x1Cu));
  v33 = (BSShaderProperty *)v32;
  v41 = *(float *)&v32;
  LOBYTE(v52) = 6;
  if ( *(float *)&v32 == 0.0 )
  {
    v33 = 0;
  }
  else
  {
    NiObjectNET::NiObjectNET(v32);
    v33->vtbl = &NiAlphaProperty::`vftable';
    v33->member.super.flags = 0xEC;
    v33->member.super.pad01A[0] = 0;
  }
  v34 = v33->member.super.flags & 0xDFFE | 1;
  LOBYTE(v52) = 4;
  v33->member.super.flags = v34;
  sub_405680(v16, v33);
  if ( !v40 )
    NiNode_AddNiExtraData((const void **)a3, (int)v7, (unsigned int *)v7);
  (*(void (__thiscall **)(float *, NiNode *, int))(*(_DWORD *)a3 + 0x84))(a3, v16, 1);
  NiAVObject_InitializePropertyState((NiAVObject *)v16);
  NiNode_UpdateDynamicEffectState(v16);
  NiAVObject_UpdateNiAVObject((NiAVObject *)v16, 0.0, 0);
  v35 = COERCE_FLOAT(FormHeapAlloc(0x1Cu));
  v41 = v35;
  LOBYTE(v52) = 7;
  if ( v35 == 0.0 )
    *(float *)&v36 = 0.0;
  else
    *(float *)&v36 = COERCE_FLOAT(sub_571D40((_DWORD *)LODWORD(v35)));
  v37 = v42;
  *v36 = v42;
  v36[1] = v37;
  v36[6] = a6;
  LOBYTE(v52) = 4;
  v41 = *(float *)&v36;
  BSStringT_Set((BSStringT *)v36 + 2, a2, 0);
  NiSmartPointer_Set__((Ni2DBuffer **)v36 + 3, (Ni2DBuffer *)v16);
  v38 = sub_571F90(1);
  sub_5B1E20((BSTextureManager *)(v38 + 0x578), (void **)&v41);
  FormHeapFree((unsigned int)v43.m_data);
  return 1;
}
