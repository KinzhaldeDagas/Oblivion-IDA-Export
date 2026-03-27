NiNode *__thiscall sub_4C5BA0(int this, char arg0)
{
  NiNode *result; // eax
  int v4; // esi
  int v5; // edx
  NiNode *v6; // edi
  int v7; // edi
  int v8; // ebp
  _DWORD *v9; // edi
  float v10; // eax
  int v11; // edi
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
  float *v38; // eax
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
  int v63; // [esp+4Ch] [ebp-CCh]
  NiNode *v64; // [esp+50h] [ebp-C8h] BYREF
  int v65; // [esp+54h] [ebp-C4h]
  float v66; // [esp+58h] [ebp-C0h]
  int v67; // [esp+5Ch] [ebp-BCh]
  float v68; // [esp+60h] [ebp-B8h] BYREF
  float v69; // [esp+64h] [ebp-B4h]
  int v70; // [esp+68h] [ebp-B0h]
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
  _BYTE a2[80]; // [esp+BCh] [ebp-5Ch] BYREF
  int v90; // [esp+114h] [ebp-4h]

  result = *(NiNode **)(this + 0x24);
  v4 = 0;
  if ( result )
  {
    if ( result->members.super.super.super.m_uiRefCount )
    {
      result = TESObjectCELL_GetNiNode_(*(TESObjectCELL **)(this + 0x20));
      v5 = (int)result;
      v70 = (int)result;
      if ( result )
      {
        result = *(NiNode **)(this + 0x24);
        if ( *(_DWORD *)&result->members.super.super.m_extraDataListLen )
        {
          (*(void (__thiscall **)(int, NiNode **, _DWORD))(*(_DWORD *)v5 + 0x88))(
            v5,
            &v64,
            *(_DWORD *)&result->members.super.super.m_extraDataListLen);
          result = v64;
          if ( v64 )
          {
            v6 = v64;
            result = (NiNode *)InterlockedDecrement((volatile LONG *)&v64->members);
            if ( !result )
              result = (NiNode *)((int (__thiscall *)(NiNode *, int))v6->vtbl->super.super.super.Destructor)(v6, 1);
          }
          v7 = *(_DWORD *)(this + 0x24);
          v8 = *(_DWORD *)(v7 + 0x14);
          v9 = (_DWORD *)(v7 + 0x14);
          if ( v8 )
          {
            result = (NiNode *)InterlockedDecrement((volatile LONG *)(v8 + 4));
            if ( !result )
              result = (NiNode *)(**(int (__thiscall ***)(int, int))v8)(v8, 1);
            *v9 = 0;
          }
        }
        if ( arg0 )
        {
          v64 = (NiNode *)FormHeapAlloc(0x600u);
          v10 = COERCE_FLOAT(FormHeapAlloc(0x800u));
          v11 = LODWORD(v10);
          v59 = v10;
          v12 = 0;
          v90 = 0;
          if ( v10 == 0.0 )
          {
            v63 = 0;
          }
          else
          {
            sub_401080((void *)LODWORD(v10), 0x10, 0x80, (void *(__thiscall *)(void *))sub_47EA50);
            v63 = v11;
          }
          v90 = 0xFFFFFFFF;
          v65 = FormHeapAlloc(0x80u);
          v69 = sub_4BF060((TESObjectCELL **)this);
          v66 = sub_4BF0A0((TESObjectCELL **)this);
          v13 = v69;
          v67 = 0;
          v71 = v69;
          v14 = v66;
          v72 = v66;
          v73 = 0.0;
          v15 = dbl_A3DDD8;
          v16 = 1.0;
          v17 = dbl_A3F428;
          v18 = 0.0;
          while ( 1 )
          {
            *(float *)&v19 = 0.0;
            v60 = 0.0;
            do
            {
              if ( !v12 )
                goto LABEL_22;
              if ( *(float *)&v19 == 0.0 )
                goto LABEL_23;
              if ( v12 == 0x20 || v19 == 0x20 )
              {
LABEL_22:
                if ( *(float *)&v19 == 0.0 )
                {
LABEL_23:
                  v4 = v12;
                }
                else if ( v12 == 0x20 )
                {
                  v4 = v19 + 0x20;
                }
                else if ( v19 == 0x20 )
                {
                  v4 = 0x60 - v12;
                }
                else if ( !v12 )
                {
                  v4 = 0x80 - v19;
                }
                v20 = (float *)(v63 + 0x10 * v4);
                if ( v4 % 2 )
                {
                  v61 = (double)dword_B08B74 / v15;
                  v62 = (double)dword_B08B7C / v15;
                  v21 = v18;
                  v22 = (double)dword_B08B84 / v15;
                  v23 = v21;
                  v59 = v22;
                  v83 = v61;
                  v84 = v62;
                  v24 = v59;
                  *v20 = v61;
                  v85 = v24;
                  v25 = v17;
                  v26 = v16;
                  v27 = v25;
                  v20[1] = v84;
                  v28 = v85;
                  v86 = v26;
                  v29 = v86;
                }
                else
                {
                  v59 = (double)dword_B08B8C / v15;
                  v62 = (double)dword_B08B94 / v15;
                  v30 = v18;
                  v31 = (double)dword_B08B9C / v15;
                  v23 = v30;
                  v61 = v31;
                  v74 = v59;
                  v75 = v62;
                  v32 = v61;
                  *v20 = v59;
                  v76 = v32;
                  v33 = v17;
                  v34 = v16;
                  v27 = v33;
                  v20[1] = v75;
                  v28 = v76;
                  v77 = v34;
                  v29 = v77;
                }
                v35 = (double)v67;
                v20[2] = v28;
                v36 = v65;
                v20[3] = v29;
                v87 = v35 * v27;
                v37 = v27 * (double)SLODWORD(v60);
                *(_BYTE *)(v36 + v4) = 1;
                v88 = v37;
                v61 = v13 + v87;
                v60 = v14 + v88;
                v59 = v23 + v23;
                v78[0] = v61;
                v78[1] = v60;
                v79 = v59;
                if ( sub_4C3030((TESObjectCELL **)this, (int)a2, v78, 0) )
                  sub_4C44C0((_DWORD *)this, (int)a2, &v68);
                else
                  v68 = flt_A37448;
                v38 = (float *)((char *)v64 + 0xC * v4);
                v79 = v68 + dbl_A3F3F0;
                v13 = v69;
                v59 = v61 - v69;
                v14 = v66;
                v62 = v60 - v66;
                v60 = v79 - 0.0;
                v80 = v59;
                v39 = v62;
                *v38 = v59;
                v81 = v39;
                v40 = v60;
                v38[1] = v81;
                v82 = v40;
                v41 = dbl_A3F428;
                v38[2] = v82;
                v15 = dbl_A3DDD8;
                v42 = v41;
                v16 = 1.0;
                v43 = v42;
                v18 = 0.0;
                v17 = v43;
              }
              ++v19;
              v60 = *(float *)&v19;
            }
            while ( v19 < 0x21 );
            v67 = ++v12;
            if ( v12 >= 0x21 )
            {
              *(float *)&v44 = COERCE_FLOAT(FormHeapAlloc(0xC0u));
              v59 = *(float *)&v44;
              v90 = 1;
              if ( *(float *)&v44 == 0.0 )
                v45 = 0;
              else
                v45 = sub_7177E0(v44, 0x80u, (int)v64, v63, 0, 0, 0, v65);
              v46 = *(_DWORD *)(this + 0x24);
              v47 = *(NiAVObject **)(v46 + 0x14);
              v48 = (NiAVObject **)(v46 + 0x14);
              v90 = 0xFFFFFFFF;
              if ( v47 != v45 )
              {
                if ( v47 )
                {
                  if ( !InterlockedDecrement((volatile LONG *)&v47->members) )
                    v47->vtbl->super.super.Destructor((NiRefObject *)v47, 1);
                }
                *v48 = v45;
                if ( v45 )
                  InterlockedIncrement((volatile LONG *)&v45->members);
              }
              v49 = *(float **)(*(_DWORD *)(this + 0x24) + 0x14);
              v50 = v72;
              v49[0x15] = v71;
              v51 = v73;
              v49[0x16] = v50;
              v49[0x17] = v51;
              *(float *)&v52 = COERCE_FLOAT(FormHeapAlloc(0x30u));
              v59 = *(float *)&v52;
              v90 = 2;
              if ( *(float *)&v52 == 0.0 )
                v53 = 0;
              else
                v53 = NiTexturingProperty::NiTexturingProperty(v52);
              vtbl = v53->unk01C.data->vtbl;
              v90 = 0xFFFFFFFF;
              v59 = 0.0;
              if ( vtbl )
              {
                (*(void (__thiscall **)(NiTexturingProperty_Map_Vtbl *, int))vtbl->Destroy)(vtbl, 1);
                NiTArray_SetAt(&v53->unk01C, 0, &v59);
              }
              sub_703DC0((int)v53, 0, 0);
              sub_405680(*(NiNode **)(*(_DWORD *)(this + 0x24) + 0x14), (BSShaderProperty *)v53);
              *(float *)&v55 = COERCE_FLOAT(FormHeapAlloc(0x1Cu));
              v56 = (BSShaderProperty *)v55;
              v59 = *(float *)&v55;
              v90 = 3;
              if ( *(float *)&v55 == 0.0 )
              {
                v57 = 0;
              }
              else
              {
                NiObjectNET::NiObjectNET(v55);
                v56->vtbl = &NiVertexColorProperty::`vftable';
                v56->member.super.flags = 8;
                v57 = v56;
              }
              v57->member.super.flags = v57->member.super.flags & 0xFFC7 | 0x10;
              v58 = *(NiNode **)(*(_DWORD *)(this + 0x24) + 0x14);
              v90 = 0xFFFFFFFF;
              sub_405680(v58, v57);
              (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v70 + 0x84))(
                v70,
                *(_DWORD *)(*(_DWORD *)(this + 0x24) + 0x14),
                1);
              NiAVObject_InitializePropertyState(*(NiAVObject **)(*(_DWORD *)(this + 0x24) + 0x14));
              NiNode_UpdateDynamicEffectState(*(NiNode **)(*(_DWORD *)(this + 0x24) + 0x14));
              return (NiNode *)NiAVObject_UpdateNiAVObject(*(NiAVObject **)(*(_DWORD *)(this + 0x24) + 0x14), 0.0, 0);
            }
          }
        }
      }
    }
  }
  return result;
}
