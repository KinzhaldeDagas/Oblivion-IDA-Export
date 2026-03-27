void __thiscall sub_4E82E0(float *this, TESChildCELL *a2, char a3)
{
  TESObjectREFR *v4; // edi
  int v5; // ebx
  NiNode *v6; // eax
  NiNode *v7; // eax
  double v8; // st7
  double v9; // st7
  void *v10; // ecx
  NiObject *v11; // eax
  NiObject *v12; // eax
  float v13; // esi
  int *v14; // esi
  _DWORD *v15; // eax
  int v16; // edi
  float *v17; // edi
  NiNode *v18; // eax
  float *v19; // ebx
  int v20; // eax
  float *v21; // ecx
  _BYTE *v22; // edx
  float *v23; // eax
  float v24; // ebx
  int v25; // ebx
  float v26; // ebx
  float v27; // ebx
  double v28; // st5
  double v29; // st5
  NiAVObject *v30; // eax
  NiAVObject *v31; // eax
  int v32; // ecx
  void (__thiscall *v33)(int, NiNode **, int, NiAVObject *); // edx
  NiNode *v34; // esi
  NiObjectNET *v35; // eax
  BSShaderProperty *v36; // esi
  BSShaderProperty *v37; // eax
  NiNode *v38; // ecx
  TESForm *BaseForm; // eax
  float v40; // [esp+14h] [ebp-5Ch]
  int v41; // [esp+14h] [ebp-5Ch]
  float v42; // [esp+18h] [ebp-58h]
  int v43; // [esp+18h] [ebp-58h]
  float v44; // [esp+1Ch] [ebp-54h] BYREF
  float v45; // [esp+20h] [ebp-50h]
  float v46; // [esp+24h] [ebp-4Ch]
  NiNode *v47; // [esp+28h] [ebp-48h] BYREF
  float v48; // [esp+2Ch] [ebp-44h] BYREF
  float v49; // [esp+30h] [ebp-40h]
  float v50; // [esp+34h] [ebp-3Ch]
  float v51; // [esp+38h] [ebp-38h]
  float v52; // [esp+3Ch] [ebp-34h]
  float v53; // [esp+40h] [ebp-30h]
  float v54; // [esp+44h] [ebp-2Ch]
  float v55; // [esp+48h] [ebp-28h]
  float v56; // [esp+4Ch] [ebp-24h]
  float v57; // [esp+50h] [ebp-20h]
  float v58; // [esp+54h] [ebp-1Ch]
  float v59; // [esp+58h] [ebp-18h]
  float v60; // [esp+5Ch] [ebp-14h]
  float v61; // [esp+60h] [ebp-10h]
  int v62; // [esp+6Ch] [ebp-4h]
  int v63; // [esp+78h] [ebp+8h]
  __int16 v64; // [esp+78h] [ebp+8h]

  v4 = (TESObjectREFR *)a2;
  v5 = 0;
  if ( a2 )
  {
    if ( *((_DWORD *)this + 0xA) )
      sub_4E8190(this);
    v6 = (NiNode *)FormHeapAlloc(0xDCu);
    v47 = v6;
    v62 = 0;
    if ( v6 )
      v7 = NiNode::NiNode(v6, 0);
    else
      v7 = 0;
    *((_DWORD *)this + 0xA) = v7;
    v8 = *(this + 5);
    v62 = 0xFFFFFFFF;
    v42 = v8 + 0.0;
    v40 = *(this + 6) + 0.0;
    v44 = *(this + 7) + dbl_A3F3F0;
    v48 = v42;
    v7->members.super.m_localTransform.pos.x = v42;
    v49 = v40;
    v9 = v44;
    v7->members.super.m_localTransform.pos.y = v40;
    v50 = v9;
    v7->members.super.m_localTransform.pos.z = v50;
    v44 = *(this + 7);
    v10 = (void *)dword_B36088;
    if ( ((int)v44 & 1) == 0 )
      v10 = (void *)dword_B36084;
    v11 = (NiObject *)sub_700900(v10);
    v12 = NiRTTI_Cast((BSStringT *)dword_B3FCD4, v11);
    (*(void (__thiscall **)(_DWORD, float *, _DWORD, NiObject *))(**((_DWORD **)this + 0xA) + 0x90))(
      *((_DWORD *)this + 0xA),
      &v44,
      0,
      v12);
    if ( v44 != 0.0 )
    {
      v13 = v44;
      if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v44) + 4)) )
        (**(void (__thiscall ***)(float, int))LODWORD(v13))(COERCE_FLOAT(LODWORD(v13)), 1);
    }
    v14 = (int *)(this + 8);
    if ( *((_DWORD *)this + 9) || *v14 )
    {
      v48 = 0.0;
      v49 = 0.0;
      if ( a3 )
      {
        v15 = this + 8;
        if ( this != (float *)0xFFFFFFE0 )
        {
          do
          {
            if ( *v15 )
              ++v5;
            v15 = (_DWORD *)v15[1];
          }
          while ( v15 );
        }
      }
      else
      {
        v63 = sub_4E4E90((int)a2, (int)this);
        if ( this != (float *)0xFFFFFFE0 )
        {
          do
          {
            if ( !v14[1] && !*v14 )
              break;
            v16 = *v14;
            if ( sub_4E4E90((int)a2, *v14) > v63 )
            {
              ++v5;
              BSSimpleList_PushFront(&v48, v16);
            }
            v14 = (int *)v14[1];
          }
          while ( v14 );
        }
        v14 = (int *)&v48;
      }
      if ( v5 )
      {
        v17 = (float *)(2 * v5);
        v64 = 2 * v5;
        v43 = FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)(2 * v5)) >> 0x20 != 0 ? 0xFFFFFFFF : 0x18 * v5);
        v18 = (NiNode *)FormHeapAlloc((unsigned __int64)(unsigned int)(2 * v5) >> 0x1C != 0 ? 0xFFFFFFFF : 0x20 * v5);
        v19 = (float *)v18;
        v47 = v18;
        v62 = 1;
        if ( v18 )
          sub_401080(v18, 0x10, (int)v17, (void *(__thiscall *)(void *))sub_47EA50);
        else
          v19 = 0;
        v41 = (int)v19;
        v62 = 0xFFFFFFFF;
        v20 = FormHeapAlloc((unsigned int)v17);
        v47 = (NiNode *)v20;
        if ( v14 )
        {
          v21 = (float *)v43;
          v22 = (_BYTE *)v20;
          v23 = v19;
          do
          {
            if ( !v14[1] && !*v14 )
              break;
            v17 = (float *)*v14;
            v24 = Vector3_InitValue_;
            v54 = 1.0;
            *v21 = v24;
            v55 = 1.0;
            v25 = *((_DWORD *)&Vector3_InitValue_ + 1);
            v57 = 1.0;
            *((_DWORD *)v21 + 1) = v25;
            v26 = dword_B3F9B0;
            v56 = 0.0;
            v21[2] = v26;
            v27 = v54;
            *v22 = 1;
            *v23 = v27;
            v23[1] = v55;
            v23[2] = v56;
            v23[3] = v57;
            v44 = v17[5] - *(this + 5);
            v21 += 6;
            v22 += 2;
            v23 += 8;
            v45 = v17[6] - *(this + 6);
            v46 = v17[7] - *(this + 7);
            v51 = v44;
            v28 = v45;
            v21[0xFFFFFFFD] = v44;
            v52 = v28;
            v29 = v46;
            v21[0xFFFFFFFE] = v52;
            v53 = v29;
            v21[0xFFFFFFFF] = v53;
            v22[0xFFFFFFFF] = 0;
            v58 = 1.0;
            v59 = 1.0;
            v23[0xFFFFFFFC] = 1.0;
            v61 = 1.0;
            v23[0xFFFFFFFD] = v59;
            v60 = 0.0;
            v23[0xFFFFFFFE] = 0.0;
            v23[0xFFFFFFFF] = v61;
            v14 = (int *)v14[1];
            LOWORD(v17) = v64;
          }
          while ( v14 );
        }
        v30 = (NiAVObject *)FormHeapAlloc(0xC0u);
        v62 = 2;
        if ( v30 )
          v31 = sub_7177E0(v30, (unsigned __int16)v17, v43, v41, 0, 0, 0, (int)v47);
        else
          v31 = 0;
        v32 = *((_DWORD *)this + 0xA);
        v33 = *(void (__thiscall **)(int, NiNode **, int, NiAVObject *))(*(_DWORD *)v32 + 0x90);
        v62 = 0xFFFFFFFF;
        v33(v32, &v47, 1, v31);
        if ( v47 )
        {
          v34 = v47;
          if ( !InterlockedDecrement((volatile LONG *)&v47->members) )
            v34->vtbl->super.super.super.Destructor((NiRefObject *)v34, 1);
        }
      }
      BSSimpleList_Clear(&v48);
      v4 = (TESObjectREFR *)a2;
    }
    if ( sub_67ED70(this) )
    {
      v35 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
      v36 = (BSShaderProperty *)v35;
      v62 = 3;
      if ( v35 )
      {
        NiObjectNET::NiObjectNET(v35);
        v36->vtbl = &NiWireframeProperty::`vftable';
        v36->member.super.flags = 0;
        v37 = v36;
      }
      else
      {
        v37 = 0;
      }
      v37->member.super.flags |= 1u;
      v38 = *((NiNode **)this + 0xA);
      v62 = 0xFFFFFFFF;
      sub_405680(v38, v37);
    }
    if ( TESObjectREFR_GetBaseForm(v4) )
    {
      BaseForm = TESObjectREFR_GetBaseForm(v4);
      ((void (__thiscall *)(TESForm *, _DWORD, int))BaseForm->vtbl->Unk_21)(BaseForm, *((_DWORD *)this + 0xA), 1);
    }
  }
}
