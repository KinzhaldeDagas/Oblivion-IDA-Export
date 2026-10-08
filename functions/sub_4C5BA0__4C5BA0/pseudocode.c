NiNode *__thiscall sub_4C5BA0(int this, char arg0)
{
  NiNode *result; // eax
  int v4; // esi
  NiNode *v5; // edx
  NiNode *v6; // edi
  int v7; // edi
  int v8; // ebp
  _DWORD *v9; // edi
  float v10; // eax
  NiColorAlpha *v11; // edi
  int v12; // ebp
  double v13; // st7
  double v14; // st6
  double v15; // st5
  double v16; // st4
  double v17; // st3
  double v18; // st2
  int v19; // edi
  float *v20; // eax
  double v21; // rt0
  double v22; // st2
  double v23; // st5
  double v24; // st2
  double v25; // rt1
  double v26; // st3
  double v27; // st4
  float v28; // edx
  float v29; // ecx
  double v30; // rt2
  double v31; // st2
  double v32; // st2
  double v33; // rtt
  double v34; // st3
  double v35; // st3
  int v36; // edx
  double v37; // st4
  NiPoint3 *v38; // eax
  double v39; // st4
  double v40; // st4
  double v41; // st4
  double v42; // st2
  double v43; // rtt
  NiAVObject *v44; // eax
  NiAVObject *v45; // ebp
  int v46; // esi
  NiAVObject *v47; // edi
  NiAVObject **v48; // esi
  float *v49; // eax
  float v50; // ecx
  float v51; // edx
  NiTexturingProperty *v52; // eax
  NiTexturingProperty *v53; // esi
  NiTexturingProperty_Map_Vtbl *vtbl; // ecx
  NiObjectNET *v55; // eax
  BSShaderProperty *v56; // esi
  BSShaderProperty *v57; // eax
  NiNode *v58; // ecx
  float v59; // [esp+3Ch] [ebp-DCh] BYREF
  float v60; // [esp+40h] [ebp-D8h]
  float v61; // [esp+44h] [ebp-D4h]
  float v62; // [esp+48h] [ebp-D0h]
  NiColorAlpha *v63; // [esp+4Ch] [ebp-CCh]
  NiNode *v64; // [esp+50h] [ebp-C8h] BYREF
  int v65; // [esp+54h] [ebp-C4h]
  float v66; // [esp+58h] [ebp-C0h]
  int v67; // [esp+5Ch] [ebp-BCh]
  float v68; // [esp+60h] [ebp-B8h] BYREF
  float v69; // [esp+64h] [ebp-B4h]
  NiNode *v70; // [esp+68h] [ebp-B0h]
  float v71; // [esp+6Ch] [ebp-ACh]
  float v72; // [esp+70h] [ebp-A8h]
  float v73; // [esp+74h] [ebp-A4h]
  float v74; // [esp+78h] [ebp-A0h]
  float v75; // [esp+7Ch] [ebp-9Ch]
  float v76; // [esp+80h] [ebp-98h]
  float v77; // [esp+84h] [ebp-94h]
  float v78[2]; // [esp+88h] [ebp-90h] BYREF
  float v79; // [esp+90h] [ebp-88h]
  float v80; // [esp+94h] [ebp-84h]
  float v81; // [esp+98h] [ebp-80h]
  float v82; // [esp+9Ch] [ebp-7Ch]
  float v83; // [esp+A0h] [ebp-78h]
  float v84; // [esp+A4h] [ebp-74h]
  float v85; // [esp+A8h] [ebp-70h]
  float v86; // [esp+ACh] [ebp-6Ch]
  float v87; // [esp+B0h] [ebp-68h]
  float v88; // [esp+B4h] [ebp-64h]
  _BYTE v89[80]; // [esp+BCh] [ebp-5Ch] BYREF
  int v90; // [esp+114h] [ebp-4h]

  result = *(NiNode **)(this + 0x24); /*0x4c5bcf*/
  v4 = 0; /*0x4c5bd2*/
  if ( result ) /*0x4c5bd6*/
  {
    if ( result->members.super.super.super.m_uiRefCount ) /*0x4c5bdc*/
    {
      result = GetObjectPointerAt_054(*(TESObjectCELL **)(this + 0x20)); /*0x4c5be8*/
      v5 = result; /*0x4c5bed*/
      v70 = result; /*0x4c5bf1*/
      if ( result ) /*0x4c5bf5*/
      {
        result = *(NiNode **)(this + 0x24); /*0x4c5bfb*/
        if ( *(_DWORD *)&result->members.super.super.m_extraDataListLen ) /*0x4c5bfe*/
        {
          v5->vtbl->RemoveObject( /*0x4c5c17*/
            v5,
            (NiAVObject **)&v64,
            *(NiAVObject **)&result->members.super.super.m_extraDataListLen);
          result = v64; /*0x4c5c19*/
          if ( v64 ) /*0x4c5c1f*/
          {
            v6 = v64; /*0x4c5c21*/
            result = (NiNode *)InterlockedDecrement((volatile LONG *)&v64->members); /*0x4c5c27*/
            if ( !result ) /*0x4c5c2f*/
              result = (NiNode *)((int (__thiscall *)(NiNode *, int))v6->vtbl->super.super.super.Destructor)(v6, 1); /*0x4c5c3d*/
          }
          v7 = *(_DWORD *)(this + 0x24); /*0x4c5c3f*/
          v8 = *(_DWORD *)(v7 + 0x14); /*0x4c5c42*/
          v9 = (_DWORD *)(v7 + 0x14); /*0x4c5c45*/
          if ( v8 ) /*0x4c5c4a*/
          {
            result = (NiNode *)InterlockedDecrement((volatile LONG *)(v8 + 4)); /*0x4c5c50*/
            if ( !result ) /*0x4c5c58*/
              result = (NiNode *)(**(int (__thiscall ***)(int, int))v8)(v8, 1); /*0x4c5c67*/
            *v9 = 0; /*0x4c5c69*/
          }
        }
        if ( arg0 ) /*0x4c5c73*/
        {
          v64 = (NiNode *)FormHeapAlloc(0x600u); /*0x4c5c88*/
          v10 = COERCE_FLOAT(FormHeapAlloc(0x800u)); /*0x4c5c8c*/
          v11 = (NiColorAlpha *)LODWORD(v10); /*0x4c5c91*/
          v59 = v10; /*0x4c5c96*/
          v12 = 0; /*0x4c5c9a*/
          v90 = 0; /*0x4c5c9e*/
          if ( v10 == 0.0 ) /*0x4c5ca5*/
          {
            v63 = 0; /*0x4c5cbf*/
          }
          else
          {
            sub_401080((void *)LODWORD(v10), 0x10, 0x80, (void *(__thiscall *)(void *))sub_47EA50); /*0x4c5cb4*/
            v63 = v11; /*0x4c5cb9*/
          }
          v90 = 0xFFFFFFFF; /*0x4c5cc8*/
          v65 = FormHeapAlloc(0x80u); /*0x4c5cdd*/
          v69 = sub_4BF060((TESObjectCELL **)this); /*0x4c5ce6*/
          v66 = sub_4BF0A0((TESObjectCELL **)this); /*0x4c5cf1*/
          v13 = v69; /*0x4c5cf5*/
          v67 = 0; /*0x4c5cf9*/
          v71 = v69; /*0x4c5cfd*/
          v14 = v66; /*0x4c5d01*/
          v72 = v66; /*0x4c5d05*/
          v73 = 0.0; /*0x4c5d0b*/
          v15 = dbl_A3DDD8; /*0x4c5d0f*/
          v16 = 1.0; /*0x4c5d15*/
          v17 = dbl_A3F428; /*0x4c5d17*/
          v18 = 0.0; /*0x4c5d1d*/
          while ( 1 ) /*0x4c5d1f*/
          {
            *(float *)&v19 = 0.0; /*0x4c5d1f*/
            v60 = 0.0; /*0x4c5d21*/
            do /*0x4c5f75*/
            {
              if ( !v12 ) /*0x4c5d27*/
                goto LABEL_22; /*0x4c5d27*/
              if ( *(float *)&v19 == 0.0 ) /*0x4c5d2b*/
                goto LABEL_23; /*0x4c5d2b*/
              if ( v12 == 0x20 || v19 == 0x20 ) /*0x4c5d35*/
              {
LABEL_22:
                if ( *(float *)&v19 == 0.0 ) /*0x4c5d3d*/
                {
LABEL_23:
                  v4 = v12; /*0x4c5d3f*/
                }
                else if ( v12 == 0x20 ) /*0x4c5d46*/
                {
                  v4 = v19 + 0x20; /*0x4c5d48*/
                }
                else if ( v19 == 0x20 ) /*0x4c5d50*/
                {
                  v4 = 0x60 - v12; /*0x4c5d57*/
                }
                else if ( !v12 ) /*0x4c5d5d*/
                {
                  v4 = 0x80 - v19; /*0x4c5d64*/
                }
                v20 = (float *)((char *)v63 + 0x10 * v4); /*0x4c5d82*/
                if ( v4 % 2 ) /*0x4c5d74*/
                {
                  v61 = (double)dword_B08B74 / v15; /*0x4c5d88*/
                  v62 = (double)dword_B08B7C / v15; /*0x4c5d94*/
                  v21 = v18; /*0x4c5da0*/
                  v22 = (double)dword_B08B84 / v15; /*0x4c5da0*/
                  v23 = v21; /*0x4c5da0*/
                  v59 = v22; /*0x4c5da2*/
                  v83 = v61; /*0x4c5daa*/
                  v84 = v62; /*0x4c5db6*/
                  v24 = v59; /*0x4c5dba*/
                  *v20 = v61; /*0x4c5dbe*/
                  v85 = v24; /*0x4c5dc4*/
                  v25 = v17; /*0x4c5dcb*/
                  v26 = v16; /*0x4c5dcb*/
                  v27 = v25; /*0x4c5dcb*/
                  v20[1] = v84; /*0x4c5dcd*/
                  v28 = v85; /*0x4c5dd0*/
                  v86 = v26; /*0x4c5dd7*/
                  v29 = v86; /*0x4c5dde*/
                }
                else
                {
                  v59 = (double)dword_B08B8C / v15; /*0x4c5df6*/
                  v62 = (double)dword_B08B94 / v15; /*0x4c5e02*/
                  v30 = v18; /*0x4c5e0e*/
                  v31 = (double)dword_B08B9C / v15; /*0x4c5e0e*/
                  v23 = v30; /*0x4c5e0e*/
                  v61 = v31; /*0x4c5e10*/
                  v74 = v59; /*0x4c5e18*/
                  v75 = v62; /*0x4c5e24*/
                  v32 = v61; /*0x4c5e28*/
                  *v20 = v59; /*0x4c5e2c*/
                  v76 = v32; /*0x4c5e32*/
                  v33 = v17; /*0x4c5e36*/
                  v34 = v16; /*0x4c5e36*/
                  v27 = v33; /*0x4c5e36*/
                  v20[1] = v75; /*0x4c5e38*/
                  v28 = v76; /*0x4c5e3b*/
                  v77 = v34; /*0x4c5e3f*/
                  v29 = v77; /*0x4c5e43*/
                }
                v35 = (double)v67; /*0x4c5e47*/
                v20[2] = v28; /*0x4c5e4b*/
                v36 = v65; /*0x4c5e4e*/
                v20[3] = v29; /*0x4c5e52*/
                v87 = v35 * v27; /*0x4c5e5e*/
                v37 = v27 * (double)SLODWORD(v60); /*0x4c5e6d*/
                *(_BYTE *)(v36 + v4) = 1; /*0x4c5e73*/
                v88 = v37; /*0x4c5e77*/
                v61 = v13 + v87; /*0x4c5e89*/
                v60 = v14 + v88; /*0x4c5e94*/
                v59 = v23 + v23; /*0x4c5e9a*/
                v78[0] = v61; /*0x4c5ea2*/
                v78[1] = v60; /*0x4c5eaa*/
                v79 = v59; /*0x4c5eb2*/
                if ( sub_4C3030((TESObjectCELL **)this, (int)v89, v78, 0) ) /*0x4c5eb6*/
                  sub_4C44C0((_DWORD *)this, (int)v89, &v68); /*0x4c5eda*/
                else
                  v68 = flt_A37448; /*0x4c5ec5*/
                v38 = (NiPoint3 *)((char *)v64 + 0xC * v4); /*0x4c5ef0*/
                v79 = v68 + dbl_A3F3F0; /*0x4c5ef3*/
                v13 = v69; /*0x4c5f03*/
                v59 = v61 - v69; /*0x4c5f05*/
                v14 = v66; /*0x4c5f15*/
                v62 = v60 - v66; /*0x4c5f17*/
                v60 = v79 - 0.0; /*0x4c5f25*/
                v80 = v59; /*0x4c5f2d*/
                v39 = v62; /*0x4c5f35*/
                v38->x = v59; /*0x4c5f39*/
                v81 = v39; /*0x4c5f3b*/
                v40 = v60; /*0x4c5f43*/
                v38->y = v81; /*0x4c5f47*/
                v82 = v40; /*0x4c5f4a*/
                v41 = dbl_A3F428; /*0x4c5f52*/
                v38->z = v82; /*0x4c5f58*/
                v15 = dbl_A3DDD8; /*0x4c5f63*/
                v42 = v41; /*0x4c5f67*/
                v16 = 1.0; /*0x4c5f67*/
                v43 = v42; /*0x4c5f69*/
                v18 = 0.0; /*0x4c5f69*/
                v17 = v43; /*0x4c5f69*/
              }
              ++v19; /*0x4c5f6b*/
              v60 = *(float *)&v19; /*0x4c5f71*/
            }
            while ( v19 < 0x21 ); /*0x4c5f75*/
            v67 = ++v12; /*0x4c5f81*/
            if ( v12 >= 0x21 ) /*0x4c5f85*/
            {
              *(float *)&v44 = COERCE_FLOAT(FormHeapAlloc(0xC0u)); /*0x4c5f9c*/
              v59 = *(float *)&v44; /*0x4c5fa4*/
              v90 = 1; /*0x4c5faa*/
              if ( *(float *)&v44 == 0.0 ) /*0x4c5fb5*/
                v45 = 0; /*0x4c5fdc*/
              else
                v45 = NiLines_ctorWithGeometryData(v44, 0x80u, (NiPoint3 *)v64, v63, 0, 0, 0, v65); /*0x4c5fd8*/
              v46 = *(_DWORD *)(this + 0x24); /*0x4c5fde*/
              v47 = *(NiAVObject **)(v46 + 0x14); /*0x4c5fe1*/
              v48 = (NiAVObject **)(v46 + 0x14); /*0x4c5fe4*/
              v90 = 0xFFFFFFFF; /*0x4c5fe9*/
              if ( v47 != v45 ) /*0x4c5ff4*/
              {
                if ( v47 ) /*0x4c5ff8*/
                {
                  if ( !InterlockedDecrement((volatile LONG *)&v47->members) ) /*0x4c5ffe*/
                    v47->vtbl->super.super.Destructor((NiRefObject *)v47, 1); /*0x4c6014*/
                }
                *v48 = v45; /*0x4c6018*/
                if ( v45 ) /*0x4c601a*/
                  InterlockedIncrement((volatile LONG *)&v45->members); /*0x4c6020*/
              }
              v49 = *(float **)(*(_DWORD *)(this + 0x24) + 0x14); /*0x4c6029*/
              v50 = v72; /*0x4c6030*/
              v49[0x15] = v71; /*0x4c6034*/
              v51 = v73; /*0x4c6037*/
              v49[0x16] = v50; /*0x4c603b*/
              v49[0x17] = v51; /*0x4c6040*/
              *(float *)&v52 = COERCE_FLOAT(FormHeapAlloc(0x30u)); /*0x4c6043*/
              v59 = *(float *)&v52; /*0x4c604b*/
              v90 = 2; /*0x4c6051*/
              if ( *(float *)&v52 == 0.0 ) /*0x4c605c*/
                v53 = 0; /*0x4c6069*/
              else
                v53 = NiTexturingProperty::NiTexturingProperty(v52); /*0x4c6065*/
              vtbl = v53->unk01C.data->vtbl; /*0x4c606e*/
              v90 = 0xFFFFFFFF; /*0x4c6075*/
              v59 = 0.0; /*0x4c607c*/
              if ( vtbl ) /*0x4c6084*/
              {
                (*(void (__thiscall **)(NiTexturingProperty_Map_Vtbl *, int))vtbl->Destroy)(vtbl, 1); /*0x4c608c*/
                NiTArray_SetAt(&v53->unk01C, 0, &v59); /*0x4c6098*/
              }
              sub_703DC0((int)v53, 0, 0); /*0x4c60a3*/
              sub_405680(*(NiNode **)(*(_DWORD *)(this + 0x24) + 0x14), (BSShaderProperty *)v53); /*0x4c60af*/
              *(float *)&v55 = COERCE_FLOAT(FormHeapAlloc(0x1Cu)); /*0x4c60b6*/
              v56 = (BSShaderProperty *)v55; /*0x4c60bb*/
              v59 = *(float *)&v55; /*0x4c60c0*/
              v90 = 3; /*0x4c60c6*/
              if ( *(float *)&v55 == 0.0 ) /*0x4c60d1*/
              {
                v57 = 0; /*0x4c60ea*/
              }
              else
              {
                NiObjectNET::NiObjectNET(v55); /*0x4c60d5*/
                v56->vtbl = &NiVertexColorProperty::`vftable'; /*0x4c60da*/
                v56->member.super.flags = 8; /*0x4c60e0*/
                v57 = v56; /*0x4c60e6*/
              }
              v57->member.super.flags = v57->member.super.flags & 0xFFC7 | 0x10; /*0x4c60f9*/
              v58 = *(NiNode **)(*(_DWORD *)(this + 0x24) + 0x14); /*0x4c6100*/
              v90 = 0xFFFFFFFF; /*0x4c6104*/
              sub_405680(v58, v57); /*0x4c610b*/
              ((void (__thiscall *)(NiNode *, _DWORD, int))v70->vtbl->AddObject)( /*0x4c6125*/
                v70,
                *(_DWORD *)(*(_DWORD *)(this + 0x24) + 0x14),
                1);
              NiAVObject_InitializePropertyState(*(NiAVObject **)(*(_DWORD *)(this + 0x24) + 0x14)); /*0x4c612d*/
              NiNode_UpdateDynamicEffectState(*(NiNode **)(*(_DWORD *)(this + 0x24) + 0x14)); /*0x4c6138*/
              return (NiNode *)NiAVObject_UpdateNiAVObject(*(NiAVObject **)(*(_DWORD *)(this + 0x24) + 0x14), 0.0, 0); /*0x4c614b*/
            }
          }
        }
      }
    }
  }
  return result; /*0x4c6150*/
}
