void __userpurge sub_640020(float a1@<ecx>, float arg0, float a3)
{
  float v3; // ebp
  int v4; // ebx
  TESForm *ActorBaseForm; // eax
  int v6; // edx
  NiObjectNET **v7; // edi
  double v8; // st7
  LONG (__stdcall *v9)(volatile LONG *); // ebx
  float v10; // esi
  NiObjectNET *v11; // esi
  BoltShaderProperty *v12; // eax
  NiNode *v13; // eax
  double v14; // st7
  float *v15; // eax
  int v16; // eax
  int v17; // esi
  int v18; // ebp
  BoltShaderProperty *v19; // eax
  BSShaderProperty *v20; // ebx
  _WORD *v21; // eax
  double v22; // st6
  _WORD *v23; // ebx
  double v24; // st7
  double v25; // st6
  double v26; // st5
  double v27; // st6
  BoltShaderProperty *v28; // ecx
  BSShaderProperty *v29; // eax
  int v30; // ecx
  BoltShaderProperty *v31; // eax
  BSShaderProperty *v32; // eax
  BoltShaderProperty *v33; // eax
  NiObjectNET *v34; // esi
  char *m_data; // ebp
  NiSourceTexture *TextureByFilename; // ebx
  BoltShaderProperty *v37; // eax
  BoltShaderProperty *v38; // eax
  NiMaterialProperty *v39; // eax
  int v40; // ecx
  int v41; // ecx
  int v42; // edx
  int v43; // edx
  NiObjectNET *v44; // edi
  bool v45; // zf
  double v46; // st6
  int v47; // edi
  int v48; // eax
  float *v49; // esi
  NiProperty *NiPropertyByID; // eax
  bool v51; // c0
  float v52; // edx
  double v53; // st7
  double v54; // st7
  double v55; // st7
  double v56; // st6
  float v57; // edx
  int v58; // eax
  float v59; // eax
  float v60; // ecx
  float v61; // edx
  float v62; // ebx
  double v63; // st7
  char *v64; // ecx
  double v65; // st6
  double v66; // st7
  float v67; // [esp+2Ch] [ebp-40h]
  int v68; // [esp+2Ch] [ebp-40h]
  BSShaderProperty *v69; // [esp+2Ch] [ebp-40h]
  NiTexturingProperty *v70; // [esp+2Ch] [ebp-40h]
  BSShaderProperty *v71; // [esp+2Ch] [ebp-40h]
  BSStringT Src; // [esp+30h] [ebp-3Ch] BYREF
  BoltShaderProperty *a2[2]; // [esp+38h] [ebp-34h]
  float v74; // [esp+40h] [ebp-2Ch]
  float v75; // [esp+44h] [ebp-28h] BYREF
  float v76; // [esp+48h] [ebp-24h]
  int v77; // [esp+4Ch] [ebp-20h]
  float v78; // [esp+50h] [ebp-1Ch] BYREF
  float v79; // [esp+54h] [ebp-18h]
  float v80; // [esp+58h] [ebp-14h]
  float v81; // [esp+5Ch] [ebp-10h]
  int v82; // [esp+68h] [ebp-4h]

  v3 = a1;
  v74 = a1;
  v4 = LODWORD(arg0);
  *(double *)a2 = TESObjectREFR_GetHealth((TESChildCELL *)LODWORD(arg0));
  ActorBaseForm = Actor_GetActorBaseForm((Actor *)v4, 0);
  *(float *)(LODWORD(v3) + 0x26C) = *(double *)a2 / (double)TESActorBase_GetHealth(ActorBaseForm);
  if ( sub_5F0D60((TESObjectREFR *)v4) )
  {
    v67 = flt_B33E9C / flt_B14CCC + *(float *)(LODWORD(v3) + 0x264);
    *(float *)(LODWORD(v3) + 0x264) = v67;
    if ( v67 > 1.0 )
      *(float *)(LODWORD(v3) + 0x264) = 1.0;
    v7 = (NiObjectNET **)(LODWORD(v3) + 0x268);
    if ( !*(_DWORD *)(LODWORD(v3) + 0x268) )
    {
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x154))(v4) )
        return;
      v12 = (BoltShaderProperty *)FormHeapAlloc(0xE4u);
      a2[0] = v12;
      v82 = 0;
      if ( v12 )
        v13 = NiBillBoardNode_Constructor((NiNode *)v12);
      else
        v13 = 0;
      v82 = 0xFFFFFFFF;
      NiSmartPointer_Set__((Ni2DBuffer **)(LODWORD(v3) + 0x268), (Ni2DBuffer *)v13);
      sub_70FE20((float *)&(*v7)[2], flt_A3F3E0, 1.0, 0.0, 0.0);
      v14 = sub_5E0660((void *)v4);
      v15 = (float *)*v7;
      *(float *)&v68 = v14 + dbl_A3D0C0;
      v75 = 0.0;
      v76 = 0.0;
      v15[0x15] = 0.0;
      v77 = v68;
      v15[0x16] = 0.0;
      v15[0x17] = *(float *)&v68;
      NiObjectNET_SetName(*v7, "HealthBar");
      v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x154))(v4);
      (*(void (__thiscall **)(int, NiObjectNET *, int))(*(_DWORD *)v16 + 0x84))(v16, *v7, 1);
      v17 = FormHeapAlloc(0x30u);
      v18 = FormHeapAlloc(0x20u);
      v19 = (BoltShaderProperty *)FormHeapAlloc(0x40u);
      v20 = (BSShaderProperty *)v19;
      a2[0] = v19;
      v82 = 1;
      if ( v19 )
      {
        sub_401080(v19, 0x10, 4, (void *(__thiscall *)(void *))sub_47EA50);
        v69 = v20;
      }
      else
      {
        v69 = 0;
      }
      v82 = 0xFFFFFFFF;
      v21 = (_WORD *)FormHeapAlloc(0xCu);
      v22 = dbl_A2FAA0;
      v23 = v21;
      *(float *)&Src.m_data = flt_B14CB4 * v22;
      *(float *)a2 = v22 * flt_B14CBC;
      v24 = *(float *)&Src.m_data;
      *(float *)&Src.m_data = -*(float *)&Src.m_data;
      v25 = *(float *)&Src.m_data;
      v26 = *(float *)a2;
      *(_DWORD *)v17 = Src.m_data;
      v76 = v26;
      *(float *)(v17 + 4) = v76;
      v75 = v25;
      *(float *)(v17 + 8) = 0.0;
      *(float *)(v17 + 0xC) = v75;
      *(float *)a2 = -v26;
      v27 = *(float *)a2;
      *(BoltShaderProperty **)(v17 + 0x10) = a2[0];
      *(float *)(v17 + 0x14) = 0.0;
      v75 = v24;
      *(float *)(v17 + 0x18) = v75;
      v76 = v26;
      *(float *)(v17 + 0x1C) = v76;
      *(float *)(v17 + 0x20) = 0.0;
      v75 = v24;
      *(float *)(v17 + 0x24) = v75;
      v76 = v27;
      *(float *)(v17 + 0x28) = v76;
      *(float *)&v77 = 0.0;
      *(float *)(v17 + 0x2C) = 0.0;
      *(float *)&a2[1] = 0.0;
      *(float *)v18 = 1.0;
      v28 = a2[1];
      *(float *)a2 = 0.0;
      *(float *)(v18 + 4) = 1.0;
      *(float *)(v18 + 8) = 1.0;
      *(_DWORD *)(v18 + 0xC) = v28;
      *(BoltShaderProperty **)(v18 + 0x10) = a2[0];
      *(float *)a2 = 0.0;
      *(float *)&a2[1] = 0.0;
      *(float *)(v18 + 0x14) = 1.0;
      *(float *)(v18 + 0x18) = 0.0;
      *(float *)(v18 + 0x1C) = 0.0;
      v21[1] = 1;
      v21[2] = 2;
      v21[3] = 2;
      v29 = v69;
      v23[4] = 1;
      *v23 = 0;
      v23[5] = 3;
      v30 = 4;
      do
      {
        v29->vtbl = (void **)dword_B25AE0;
        v29->member.super.super.super.m_uiRefCount = dword_B25AE4;
        v29->member.super.super.m_pcName = (const char *)dword_B25AE8;
        v29->member.super.super.m_controller = (NiInterpController *)dword_B25AEC;
        v29 = (BSShaderProperty *)((char *)v29 + 0x10);
        --v30;
      }
      while ( v30 );
      v31 = (BoltShaderProperty *)FormHeapAlloc(0x1Cu);
      a2[0] = v31;
      v82 = 2;
      if ( v31 )
      {
        NiObjectNET::NiObjectNET((NiObjectNET *)v31);
        v32 = (BSShaderProperty *)a2[0];
        *(_DWORD *)a2[0] = &NiAlphaProperty::`vftable';
        v32->member.super.flags = 0xEC;
        v32->member.super.pad01A[0] = 0;
      }
      else
      {
        v32 = 0;
      }
      v32->member.super.flags |= 1u;
      sub_405680((NiNode *)*v7, v32);
      v33 = (BoltShaderProperty *)FormHeapAlloc(0xC0u);
      a2[0] = v33;
      v82 = 3;
      if ( v33 )
        v34 = (NiObjectNET *)sub_7174B0((NiAVObject *)v33, 4, v17, 0, (int)v69, v18, 1, 0, 2, (int)v23);
      else
        v34 = 0;
      LOBYTE(v34[7].members.m_controller->member.m_pTarget) = 5;
      (*((void (__thiscall **)(NiObjectNET *, NiObjectNET *, int))(*v7)->vtbl + 0x21))(*v7, v34, 1);
      Src.m_data = 0;
      *(_DWORD *)&Src.m_dataLen = 0;
      v82 = 4;
      BSStringT_Static_Format(&Src, "Data\\Textures\\Menus\\Misc\\HealthBar3DBW.dds");
      m_data = Src.m_data;
      NiObjectNET_SetName(v34, Src.m_data);
      TextureByFilename = NiSourceTexture::LoadTextureByFilename(m_data, (PixelLayout *)dword_B256D0, 1);
      v37 = (BoltShaderProperty *)FormHeapAlloc(0x30u);
      a2[0] = v37;
      LOBYTE(v82) = 5;
      if ( v37 )
        v70 = NiTexturingProperty::NiTexturingProperty((NiTexturingProperty *)v37);
      else
        v70 = 0;
      LOBYTE(v82) = 4;
      NiTexturingProperty::SetUnk08(v70, (NiRenderedTexture *)TextureByFilename);
      sub_405680((NiNode *)v34, (BSShaderProperty *)v70);
      v38 = (BoltShaderProperty *)FormHeapAlloc(0x5Cu);
      a2[0] = v38;
      LOBYTE(v82) = 6;
      if ( v38 )
        v39 = NiMaterialProperty::NiMaterialProperty(v38);
      else
        v39 = 0;
      *((_DWORD *)v39 + 0x10) = dword_B25AC4;
      *((_DWORD *)v39 + 0x11) = dword_B25AC8;
      v40 = dword_B25ACC;
      ++*((_DWORD *)v39 + 0x15);
      *((_DWORD *)v39 + 0x12) = v40;
      v41 = *((_DWORD *)v39 + 0x15);
      *((_DWORD *)v39 + 7) = dword_B25AC4;
      *((_DWORD *)v39 + 8) = dword_B25AC8;
      v42 = dword_B25ACC;
      *((_DWORD *)v39 + 0x15) = ++v41;
      *((_DWORD *)v39 + 9) = v42;
      *((_DWORD *)v39 + 0xA) = dword_B25AC4;
      *((_DWORD *)v39 + 0xB) = dword_B25AC8;
      v43 = dword_B25ACC;
      *((_DWORD *)v39 + 0x15) = v41 + 1;
      LOBYTE(v82) = 4;
      *((_DWORD *)v39 + 0xC) = v43;
      sub_405680((NiNode *)v34, (BSShaderProperty *)v39);
      NiNode_UpdateDynamicEffectState((NiNode *)*v7);
      NiAVObject_InitializePropertyState((NiAVObject *)*v7);
      NiAVObject_UpdateNiAVObject((NiAVObject *)*v7, 0.0, 0);
      v82 = 0xFFFFFFFF;
      FormHeapFree((unsigned int)m_data);
      v4 = LODWORD(arg0);
      v3 = v74;
    }
  }
  else
  {
    v6 = *(_DWORD *)(LODWORD(v3) + 0x268);
    v7 = (NiObjectNET **)(LODWORD(v3) + 0x268);
    if ( !v6 )
      return;
    arg0 = *(float *)(LODWORD(v3) + 0x264) - flt_B33E9C / flt_B14CCC;
    v8 = arg0;
    *(float *)(LODWORD(v3) + 0x264) = arg0;
    if ( v8 < 0.0 )
    {
      (*(void (__thiscall **)(_DWORD, float *, int))(**(_DWORD **)(v6 + 0x1C) + 0x88))(
        *(_DWORD *)(v6 + 0x1C),
        &arg0,
        v6);
      v9 = InterlockedDecrement;
      if ( arg0 != 0.0 )
      {
        v10 = arg0;
        if ( !v9((volatile LONG *)(LODWORD(arg0) + 4)) )
          (**(void (__thiscall ***)(float, int))LODWORD(v10))(COERCE_FLOAT(LODWORD(v10)), 1);
      }
      v11 = *v7;
      if ( *v7 )
      {
        if ( !v9((volatile LONG *)&v11->members) )
        {
          if ( v11 )
            (*(void (__thiscall **)(NiObjectNET *, int))v11->vtbl)(v11, 1);
        }
        *v7 = 0;
      }
      return;
    }
  }
  v44 = *v7;
  v45 = HIWORD(v44[7].members.m_controller) == 0;
  v80 = 0.0;
  v81 = *(float *)(LODWORD(v3) + 0x264);
  v46 = *(float *)(LODWORD(v3) + 0x26C) - dbl_A2FAA0;
  *(float *)a2 = dbl_A2FAA0 * -flt_B14CB4 * (v46 + v46);
  if ( v45 )
    v47 = 0;
  else
    v47 = *(_DWORD *)v44[7].members.m_pcName;
  v48 = *(_DWORD *)(v47 + 0xB4);
  v49 = *(float **)(v48 + 0x24);
  Src.m_data = *(char **)(v48 + 0x1C);
  NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)v47, 2);
  v51 = flt_A3D65C < (double)*(float *)(LODWORD(v3) + 0x26C);
  v52 = *(float *)&dword_B25AC4;
  v76 = *(float *)&dword_B25AC8;
  v75 = v52;
  v71 = (BSShaderProperty *)NiPropertyByID;
  v77 = dword_B25ACC;
  if ( v51 )
  {
    v79 = 1.0;
    v53 = *(float *)(LODWORD(v3) + 0x26C) - dbl_A2FAA0;
    v78 = 1.0 - (v53 + v53);
  }
  else
  {
    v78 = 1.0;
    v79 = *(float *)(LODWORD(v3) + 0x26C) + *(float *)(LODWORD(v3) + 0x26C);
  }
  if ( NiPropertyByID )
  {
    if ( *(float *)(LODWORD(v3) + 0x270) > 0.0 )
    {
      v54 = *(float *)&NiPropertyByID[3].members.m_pcName;
      arg0 = *(float *)&NiPropertyByID[3].members.m_pcName;
      sub_5E0AC0(v4);
      arg0 = v54 * arg0;
      v74 = *(float *)(LODWORD(v3) + 0x270) - flt_B14CCC * flt_B33E9C;
      v55 = v74;
      *(float *)(LODWORD(v3) + 0x270) = v74;
      if ( v55 >= 0.0 )
      {
        v56 = flt_B14CDC;
        if ( v56 > v55 )
          arg0 = v55 / v56 * arg0;
      }
      else
      {
        arg0 = 0.0;
      }
      v75 = arg0 * v78;
      v76 = arg0 * v79;
      *(float *)&v77 = arg0 * dbl_A2FC68;
      if ( sub_8AA390((float *)&v71->member.unk38.end, &v75) )
      {
        v57 = v76;
        v58 = v77;
        *(float *)&v71->member.unk38.end = v75;
        *(float *)&v71->member.unk38.numItems = v57;
        v71->member.unk48.vtlb = (void **)v58;
        ++v71->member.unk48.numItems;
      }
    }
  }
  if ( sub_632310(v49, &v78) )
  {
    v59 = v78;
    v60 = v79;
    v61 = v80;
    v62 = v81;
    *v49 = v78;
    v49[4] = v59;
    v49[8] = v59;
    v49[0xC] = v59;
    v49[1] = v60;
    v49[5] = v60;
    v49[9] = v60;
    v49[0xD] = v60;
    v49[2] = v61;
    v49[6] = v61;
    v49[0xA] = v61;
    v49[0xE] = v61;
    v49[3] = v62;
    v49[7] = v62;
    v49[0xB] = v62;
    v49[0xF] = v62;
    *(_WORD *)(*(_DWORD *)(v47 + 0xB4) + 0x2E) |= 4u;
  }
  v63 = *(float *)a2;
  v64 = Src.m_data;
  if ( *(float *)Src.m_data != *(float *)a2 )
  {
    arg0 = v63 - *(float *)Src.m_data;
    v74 = flt_B14CC4 * flt_B33E9C;
    v65 = arg0;
    arg0 = fabs(arg0);
    if ( v74 <= (double)arg0 )
    {
      v66 = v74;
      if ( v65 <= 0.0 )
      {
        *(float *)Src.m_data = *(float *)Src.m_data - v66;
        v63 = *((float *)v64 + 3) - v66;
      }
      else
      {
        *(float *)Src.m_data = v66 + *(float *)Src.m_data;
        v63 = v66 + *((float *)v64 + 3);
      }
    }
    else
    {
      *(float *)Src.m_data = *(float *)a2;
    }
    *((float *)v64 + 3) = v63;
    *(float *)(LODWORD(v3) + 0x270) = flt_B14CD4;
    *(_WORD *)(*(_DWORD *)(v47 + 0xB4) + 0x2E) |= 1u;
  }
}
