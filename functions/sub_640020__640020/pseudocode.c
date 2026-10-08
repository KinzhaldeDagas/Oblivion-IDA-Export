// Health Bars plugin analysis: HighProcess native 3D health-bar updater. Creates a NiBillBoardNode named HealthBar, attaches it to actor 3D, and loads Data\\Textures\\Menus\\Misc\\HealthBar3DBW.dds for the bar texture.
void __userpurge sub_640020(float a1@<ecx>, float arg0, float a3)
{
  float v3; // ebp
  float v4; // ebx
  TESForm *ActorBaseForm; // eax
  int v6; // edx
  NiObjectNET **v7; // edi
  double v8; // st7
  LONG (__stdcall *v9)(volatile LONG *); // ebx
  float v10; // esi
  NiObjectNET *v11; // esi
  BoltShaderProperty *v12; // eax
  NiNode *v13; // eax
  double ScaledCollisionHeight; // st7
  float *v15; // eax
  int v16; // eax
  int v17; // esi
  float *v18; // ebp
  BoltShaderProperty *v19; // eax
  BSShaderProperty *v20; // ebx
  UInt16 *v21; // eax
  double v22; // st6
  UInt16 *v23; // ebx
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
  float z; // ecx
  int v41; // ecx
  float v42; // edx
  float v43; // edx
  NiObjectNET *v44; // edi
  bool v45; // zf
  double v46; // st6
  int v47; // edi
  int v48; // eax
  float *v49; // esi
  NiProperty *NiPropertyByID; // eax
  bool v51; // c0
  float x; // edx
  double v53; // st7
  double v54; // st7
  double v55; // st7
  double v56; // st6
  float y; // edx
  float v58; // eax
  float v59; // eax
  float v60; // ecx
  float v61; // edx
  float v62; // ebx
  double v63; // st7
  char *v64; // ecx
  double v65; // st6
  double v66; // st7
  float v67; // [esp+2Ch] [ebp-40h]
  float v68; // [esp+2Ch] [ebp-40h]
  BSShaderProperty *v69; // [esp+2Ch] [ebp-40h]
  NiTexturingProperty *v70; // [esp+2Ch] [ebp-40h]
  BSShaderProperty *v71; // [esp+2Ch] [ebp-40h]
  BSStringT Src; // [esp+30h] [ebp-3Ch] BYREF
  BoltShaderProperty *a2[2]; // [esp+38h] [ebp-34h]
  float v74; // [esp+40h] [ebp-2Ch]
  NiPoint3 other; // [esp+44h] [ebp-28h] BYREF
  float v76; // [esp+50h] [ebp-1Ch] BYREF
  float v77; // [esp+54h] [ebp-18h]
  float v78; // [esp+58h] [ebp-14h]
  float v79; // [esp+5Ch] [ebp-10h]
  int v80; // [esp+68h] [ebp-4h]

  v3 = a1; /*0x640047*/
  v74 = a1; /*0x640049*/
  v4 = arg0; /*0x64004d*/
  *(double *)a2 = TESObjectREFR_GetHealth((TESChildCELL *)LODWORD(arg0)); /*0x640058*/
  ActorBaseForm = Actor_GetActorBaseForm((Actor *)LODWORD(v4), 0); /*0x640060*/
  *(float *)(LODWORD(v3) + 0x26C) = *(double *)a2 / (double)TESActorBase_GetHealth(ActorBaseForm); /*0x64007a*/
  if ( sub_5F0D60((TESObjectREFR *)LODWORD(v4)) )// Health Bars plugin call hook site: replaces call to 0x5F0D60 with HealthBarVisibilityHook. Hook clamps HighProcess+0x26C to 1.0, then calls the original Oblivion visibility predicate. /*0x640080*/
  {
    v67 = *(float *)&MEMORY[0xB33E90][0xC] / flt_B14CCC + *(float *)(LODWORD(v3) + 0x264); /*0x640150*/
    *(float *)(LODWORD(v3) + 0x264) = v67; /*0x640158*/
    if ( v67 > 1.0 ) /*0x640165*/
      *(float *)(LODWORD(v3) + 0x264) = 1.0; /*0x640167*/
    v7 = (NiObjectNET **)(LODWORD(v3) + 0x268); /*0x640178*/
    if ( !*(_DWORD *)(LODWORD(v3) + 0x268) ) /*0x640171*/
    {
      if ( !(*(int (__thiscall **)(TESObjectREFR *))(*(_DWORD *)LODWORD(v4) + 0x154))((TESObjectREFR *)LODWORD(v4)) ) /*0x640192*/
        return; /*0x640192*/
      v12 = (BoltShaderProperty *)FormHeapAlloc(0xE4u); /*0x64019d*/
      a2[0] = v12; /*0x6401a5*/
      v80 = 0; /*0x6401ab*/
      if ( v12 ) /*0x6401b3*/
        v13 = NiBillBoardNode_Constructor((NiNode *)v12); /*0x6401b7*/
      else
        v13 = 0; /*0x6401be*/
      v80 = 0xFFFFFFFF; /*0x6401c3*/
      NiSmartPointer_Set__((Ni2DBuffer **)(LODWORD(v3) + 0x268), (Ni2DBuffer *)v13); /*0x6401cb*/
      sub_70FE20((float *)&(*v7)[2], flt_A3F3E0, 1.0, 0.0, 0.0); /*0x6401f1*/
      ScaledCollisionHeight = Actor_GetScaledCollisionHeight((void *)LODWORD(v4)); /*0x6401f8*/
      v15 = (float *)*v7; /*0x640203*/
      v68 = ScaledCollisionHeight + dbl_A3D0C0; /*0x64020a*/
      other.x = 0.0; /*0x640210*/
      other.y = 0.0; /*0x640218*/
      v15[0x15] = 0.0; /*0x640224*/
      other.z = v68; /*0x640227*/
      v15[0x16] = 0.0; /*0x64022f*/
      v15[0x17] = v68; /*0x640232*/
      NiObjectNET_SetName(*v7, "HealthBar"); /*0x640237*/
      v16 = (*(int (__thiscall **)(TESObjectREFR *))(*(_DWORD *)LODWORD(v4) + 0x154))((TESObjectREFR *)LODWORD(v4)); /*0x640246*/
      (*(void (__thiscall **)(int, NiObjectNET *, int))(*(_DWORD *)v16 + 0x84))(v16, *v7, 1); /*0x640257*/
      v17 = FormHeapAlloc(0x30u); /*0x640262*/
      v18 = (float *)FormHeapAlloc(0x20u); /*0x64026b*/
      v19 = (BoltShaderProperty *)FormHeapAlloc(0x40u); /*0x64026d*/
      v20 = (BSShaderProperty *)v19; /*0x640272*/
      a2[0] = v19; /*0x640277*/
      v80 = 1; /*0x64027d*/
      if ( v19 ) /*0x640285*/
      {
        sub_401080(v19, 0x10, 4, (void *(__thiscall *)(void *))sub_47EA50); /*0x640291*/
        v69 = v20; /*0x640296*/
      }
      else
      {
        v69 = 0; /*0x64029c*/
      }
      v80 = 0xFFFFFFFF; /*0x6402a6*/
      v21 = (UInt16 *)FormHeapAlloc(0xCu); /*0x6402ae*/
      v22 = dbl_A2FAA0; /*0x6402b9*/
      v23 = v21; /*0x6402bf*/
      *(float *)&Src.m_data = flt_B14CB4 * v22; /*0x6402c8*/
      *(float *)a2 = v22 * flt_B14CBC; /*0x6402d2*/
      v24 = *(float *)&Src.m_data; /*0x6402d6*/
      *(float *)&Src.m_data = -*(float *)&Src.m_data; /*0x6402de*/
      v25 = *(float *)&Src.m_data; /*0x6402e2*/
      v26 = *(float *)a2; /*0x6402ee*/
      *(_DWORD *)v17 = Src.m_data; /*0x6402f2*/
      other.y = v26; /*0x6402f4*/
      *(float *)(v17 + 4) = other.y; /*0x6402fe*/
      other.x = v25; /*0x64030b*/
      *(float *)(v17 + 8) = 0.0; /*0x64030f*/
      *(float *)(v17 + 0xC) = other.x; /*0x640316*/
      *(float *)a2 = -v26; /*0x64031d*/
      v27 = *(float *)a2; /*0x64032d*/
      *(BoltShaderProperty **)(v17 + 0x10) = a2[0]; /*0x64032f*/
      *(float *)(v17 + 0x14) = 0.0; /*0x64033c*/
      other.x = v24; /*0x64033f*/
      *(float *)(v17 + 0x18) = other.x; /*0x640349*/
      other.y = v26; /*0x64034c*/
      *(float *)(v17 + 0x1C) = other.y; /*0x640356*/
      *(float *)(v17 + 0x20) = 0.0; /*0x640363*/
      other.x = v24; /*0x640366*/
      *(float *)(v17 + 0x24) = other.x; /*0x64036e*/
      other.y = v27; /*0x640371*/
      *(float *)(v17 + 0x28) = other.y; /*0x640379*/
      other.z = 0.0; /*0x64037c*/
      *(float *)(v17 + 0x2C) = 0.0; /*0x640386*/
      *(float *)&a2[1] = 0.0; /*0x6403a3*/
      *v18 = 1.0; /*0x6403a7*/
      v28 = a2[1]; /*0x6403aa*/
      *(float *)a2 = 0.0; /*0x6403ae*/
      v18[1] = 1.0; /*0x6403b2*/
      v18[2] = 1.0; /*0x6403b7*/
      *((_DWORD *)v18 + 3) = v28; /*0x6403ba*/
      v18[4] = *(float *)a2; /*0x6403c9*/
      *(float *)a2 = 0.0; /*0x6403cc*/
      *(float *)&a2[1] = 0.0; /*0x6403d4*/
      v18[5] = 1.0; /*0x6403dc*/
      v18[6] = 0.0; /*0x6403df*/
      v18[7] = 0.0; /*0x6403e2*/
      v21[1] = 1; /*0x6403ef*/
      v21[2] = 2; /*0x6403f3*/
      v21[3] = 2; /*0x6403f7*/
      v29 = v69; /*0x6403fb*/
      v23[4] = 1; /*0x6403ff*/
      *v23 = 0; /*0x640403*/
      v23[5] = 3; /*0x640408*/
      v30 = 4; /*0x64040e*/
      do /*0x640449*/
      {
        v29->vtbl = (void **)dword_B25AE0; /*0x640426*/
        v29->member.super.super.super.m_uiRefCount = dword_B25AE4; /*0x64042e*/
        v29->member.super.super.m_pcName = (const char *)dword_B25AE8; /*0x640437*/
        v29->member.super.super.m_controller = (NiInterpController *)dword_B25AEC; /*0x640440*/
        v29 = (BSShaderProperty *)((char *)v29 + 0x10); /*0x640443*/
        --v30; /*0x640446*/
      }
      while ( v30 ); /*0x640449*/
      v31 = (BoltShaderProperty *)FormHeapAlloc(0x1Cu); /*0x64044d*/
      a2[0] = v31; /*0x640455*/
      v80 = 2; /*0x64045b*/
      if ( v31 ) /*0x640463*/
      {
        NiObjectNET::NiObjectNET((NiObjectNET *)v31); /*0x640467*/
        v32 = (BSShaderProperty *)a2[0]; /*0x64046c*/
        *(_DWORD *)a2[0] = &NiAlphaProperty::`vftable'; /*0x640470*/
        v32->member.super.flags = 0xEC; /*0x640476*/
        v32->member.super.pad01A[0] = 0; /*0x64047c*/
      }
      else
      {
        v32 = 0; /*0x640482*/
      }
      v32->member.super.flags |= 1u; /*0x640484*/
      sub_405680((NiNode *)*v7, v32); /*0x640494*/
      v33 = (BoltShaderProperty *)FormHeapAlloc(0xC0u); /*0x64049e*/
      a2[0] = v33; /*0x6404a6*/
      v80 = 3; /*0x6404ac*/
      if ( v33 ) /*0x6404b4*/
        v34 = (NiObjectNET *)NiTriShape_ctorWithGeometryData( /*0x6404cf*/
                               (NiAVObject *)v33,
                               4u,
                               (NiPoint3 *)v17,
                               0,
                               (NiColorAlpha *)v69,
                               v18,
                               1,
                               0,
                               2u,
                               v23);
      else
        v34 = 0; /*0x6404d3*/
      LOBYTE(v34[7].members.m_controller->member.m_pTarget) = 5; /*0x6404db*/
      (*((void (__thiscall **)(NiObjectNET *, NiObjectNET *, int))(*v7)->vtbl + 0x21))(*v7, v34, 1); /*0x6404f4*/
      Src.m_data = 0; /*0x6404f8*/
      *(_DWORD *)&Src.m_dataLen = 0; /*0x6404fc*/
      v80 = 4; /*0x640510*/
      BSStringT_Static_Format(&Src, "Data\\Textures\\Menus\\Misc\\HealthBar3DBW.dds");// Health Bars plugin: native HealthBar texture load site. Plugin validates this push operand and redirects it to its own lifetime-stable copy of the IDA-observed path Data\\Textures\\Menus\\Misc\\HealthBar3DBW.dds. /*0x640518*/
      m_data = Src.m_data; /*0x64051d*/
      NiObjectNET_SetName(v34, Src.m_data); /*0x640527*/
      TextureByFilename = NiSourceTexture::LoadTextureByFilename( /*0x64053b*/
                            m_data,
                            &OB_TES_DefaultSourceTextureFormatPrefs_010201A0.pixelLayout,
                            1);
      v37 = (BoltShaderProperty *)FormHeapAlloc(0x30u); /*0x64053d*/
      a2[0] = v37; /*0x640545*/
      LOBYTE(v80) = 5; /*0x64054b*/
      if ( v37 ) /*0x640550*/
        v70 = NiTexturingProperty::NiTexturingProperty((NiTexturingProperty *)v37); /*0x640559*/
      else
        v70 = 0; /*0x64055f*/
      LOBYTE(v80) = 4; /*0x64056c*/
      OB_NiTexturingProperty_SetBaseTexture_010201A0(v70, (NiTexture *)TextureByFilename); /*0x640571*/
      sub_405680((NiNode *)v34, (BSShaderProperty *)v70); /*0x64057d*/
      v38 = (BoltShaderProperty *)FormHeapAlloc(0x5Cu); /*0x640584*/
      a2[0] = v38; /*0x64058c*/
      LOBYTE(v80) = 6; /*0x640592*/
      if ( v38 ) /*0x640597*/
        v39 = NiMaterialProperty::NiMaterialProperty(v38); /*0x64059b*/
      else
        v39 = 0; /*0x6405a2*/
      *((_DWORD *)v39 + 0x10) = LODWORD(stru_B25AC4.x); /*0x6405aa*/
      *((_DWORD *)v39 + 0x11) = LODWORD(stru_B25AC4.y); /*0x6405b3*/
      z = stru_B25AC4.z; /*0x6405b6*/
      ++*((_DWORD *)v39 + 0x15); /*0x6405bc*/
      *((float *)v39 + 0x12) = z; /*0x6405c0*/
      v41 = *((_DWORD *)v39 + 0x15); /*0x6405c9*/
      *((_DWORD *)v39 + 7) = LODWORD(stru_B25AC4.x); /*0x6405cc*/
      *((_DWORD *)v39 + 8) = LODWORD(stru_B25AC4.y); /*0x6405d5*/
      v42 = stru_B25AC4.z; /*0x6405d8*/
      *((_DWORD *)v39 + 0x15) = ++v41; /*0x6405e1*/
      *((float *)v39 + 9) = v42; /*0x6405e4*/
      *((_DWORD *)v39 + 0xA) = LODWORD(stru_B25AC4.x); /*0x6405ed*/
      *((_DWORD *)v39 + 0xB) = LODWORD(stru_B25AC4.y); /*0x6405f6*/
      v43 = stru_B25AC4.z; /*0x6405f9*/
      *((_DWORD *)v39 + 0x15) = v41 + 1; /*0x640602*/
      LOBYTE(v80) = 4; /*0x640608*/
      *((float *)v39 + 0xC) = v43; /*0x64060d*/
      sub_405680((NiNode *)v34, (BSShaderProperty *)v39); /*0x640610*/
      NiNode_UpdateDynamicEffectState((NiNode *)*v7); /*0x640617*/
      NiAVObject_InitializePropertyState((NiAVObject *)*v7); /*0x64061e*/
      NiAVObject_UpdateNiAVObject((NiAVObject *)*v7, 0.0, 0); /*0x64062d*/
      v80 = 0xFFFFFFFF; /*0x640633*/
      FormHeapFree((unsigned int)m_data); /*0x64063b*/
      v4 = arg0; /*0x640640*/
      v3 = v74; /*0x640644*/
    }
  }
  else
  {
    v6 = *(_DWORD *)(LODWORD(v3) + 0x268); /*0x64008f*/
    v7 = (NiObjectNET **)(LODWORD(v3) + 0x268); /*0x640099*/
    if ( !v6 ) /*0x64009f*/
      return; /*0x64009f*/
    arg0 = *(float *)(LODWORD(v3) + 0x264) - *(float *)&MEMORY[0xB33E90][0xC] / flt_B14CCC; /*0x6400b9*/
    v8 = arg0; /*0x6400bd*/
    *(float *)(LODWORD(v3) + 0x264) = arg0; /*0x6400c1*/
    if ( v8 < 0.0 ) /*0x6400d0*/
    {
      (*(void (__thiscall **)(_DWORD, float *, int))(**(_DWORD **)(v6 + 0x1C) + 0x88))( /*0x6400e7*/
        *(_DWORD *)(v6 + 0x1C),
        &arg0,
        v6);
      v9 = InterlockedDecrement; /*0x6400ef*/
      if ( arg0 != 0.0 ) /*0x6400f5*/
      {
        v10 = arg0; /*0x6400f7*/
        if ( !v9((volatile LONG *)(LODWORD(arg0) + 4)) ) /*0x6400fd*/
          (**(void (__thiscall ***)(float, int))LODWORD(v10))(COERCE_FLOAT(LODWORD(v10)), 1); /*0x64010f*/
      }
      v11 = *v7; /*0x640111*/
      if ( *v7 ) /*0x640111*/
      {
        if ( !v9((volatile LONG *)&v11->members) ) /*0x64011f*/
        {
          if ( v11 ) /*0x640127*/
            (*(void (__thiscall **)(NiObjectNET *, int))v11->vtbl)(v11, 1); /*0x640131*/
        }
        *v7 = 0; /*0x640133*/
      }
      return; /*0x640139*/
    }
  }
  v44 = *v7; /*0x64064d*/
  v45 = HIWORD(v44[7].members.m_controller) == 0; /*0x64064f*/
  v78 = 0.0; /*0x640657*/
  v79 = *(float *)(LODWORD(v3) + 0x264); /*0x640661*/
  v46 = *(float *)(LODWORD(v3) + 0x26C) - dbl_A2FAA0; /*0x640673*/
  *(float *)a2 = dbl_A2FAA0 * -flt_B14CB4 * (v46 + v46); /*0x640683*/
  if ( v45 ) /*0x640687*/
    v47 = 0; /*0x640689*/
  else
    v47 = *(_DWORD *)v44[7].members.m_pcName; /*0x640693*/
  v48 = *(_DWORD *)(v47 + 0xB4); /*0x640695*/
  v49 = *(float **)(v48 + 0x24); /*0x64069e*/
  Src.m_data = *(char **)(v48 + 0x1C); /*0x6406a1*/
  NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)v47, 2); /*0x6406a9*/
  v51 = kHeadBodyNormalMatchRadius < (double)*(float *)(LODWORD(v3) + 0x26C); /*0x6406b4*/
  x = stru_B25AC4.x; /*0x6406ba*/
  other.y = stru_B25AC4.y; /*0x6406c7*/
  other.x = x; /*0x6406cd*/
  v71 = (BSShaderProperty *)NiPropertyByID; /*0x6406dc*/
  other.z = stru_B25AC4.z; /*0x6406e0*/
  if ( v51 ) /*0x6406e4*/
  {
    v77 = 1.0; /*0x6406e6*/
    v53 = *(float *)(LODWORD(v3) + 0x26C) - dbl_A2FAA0; /*0x6406f0*/
    v76 = 1.0 - (v53 + v53); /*0x6406fc*/
  }
  else
  {
    v76 = 1.0; /*0x640702*/
    v77 = *(float *)(LODWORD(v3) + 0x26C) + *(float *)(LODWORD(v3) + 0x26C); /*0x64070e*/
  }
  if ( NiPropertyByID ) /*0x640714*/
  {
    if ( *(float *)(LODWORD(v3) + 0x270) > 0.0 ) /*0x640727*/
    {
      arg0 = *(float *)&NiPropertyByID[3].members.m_pcName; /*0x640732*/
      v54 = sub_5E0AC0((_DWORD *)LODWORD(v4)); /*0x640736*/
      arg0 = v54 * arg0; /*0x64073f*/
      v74 = *(float *)(LODWORD(v3) + 0x270) - flt_B14CCC * *(float *)&MEMORY[0xB33E90][0xC]; /*0x640757*/
      v55 = v74; /*0x64075b*/
      *(float *)(LODWORD(v3) + 0x270) = v74; /*0x64075f*/
      if ( v55 >= 0.0 ) /*0x64076e*/
      {
        v56 = flt_B14CDC; /*0x64077a*/
        if ( v56 > v55 ) /*0x640787*/
          arg0 = v55 / v56 * arg0; /*0x64078f*/
      }
      else
      {
        arg0 = 0.0; /*0x640772*/
      }
      other.x = arg0 * v76; /*0x6407b1*/
      other.y = arg0 * v77; /*0x6407bb*/
      other.z = arg0 * dbl_A2FC68; /*0x6407c5*/
      if ( NiPoint3__NotEqual((const NiPoint3 *)&v71->member.unk38.end, &other) ) /*0x6407c9*/
      {
        y = other.y; /*0x6407d6*/
        v58 = other.z; /*0x6407da*/
        v71->member.unk38.end = (NiTList_Entry_NiProperty *)LODWORD(other.x); /*0x6407de*/
        *(float *)&v71->member.unk38.numItems = y; /*0x6407e0*/
        *(float *)&v71->member.unk48.vtlb = v58; /*0x6407e3*/
        ++v71->member.unk48.numItems; /*0x6407ea*/
      }
    }
  }
  if ( sub_632310(v49, &v76) ) /*0x6407f5*/
  {
    v59 = v76; /*0x6407fe*/
    v60 = v77; /*0x640802*/
    v61 = v78; /*0x640806*/
    v62 = v79; /*0x64080a*/
    *v49 = v76; /*0x64080e*/
    v49[4] = v59; /*0x640810*/
    v49[8] = v59; /*0x640813*/
    v49[0xC] = v59; /*0x640816*/
    v49[1] = v60; /*0x640819*/
    v49[5] = v60; /*0x64081c*/
    v49[9] = v60; /*0x64081f*/
    v49[0xD] = v60; /*0x640822*/
    v49[2] = v61; /*0x640825*/
    v49[6] = v61; /*0x640828*/
    v49[0xA] = v61; /*0x64082b*/
    v49[0xE] = v61; /*0x64082e*/
    v49[3] = v62; /*0x640831*/
    v49[7] = v62; /*0x640834*/
    v49[0xB] = v62; /*0x640837*/
    v49[0xF] = v62; /*0x64083a*/
    *(_WORD *)(*(_DWORD *)(v47 + 0xB4) + 0x2E) |= 4u; /*0x640843*/
  }
  v63 = *(float *)a2; /*0x640848*/
  v64 = Src.m_data; /*0x64084c*/
  if ( *(float *)Src.m_data != *(float *)a2 ) /*0x64085b*/
  {
    arg0 = v63 - *(float *)Src.m_data; /*0x640861*/
    v74 = flt_B14CC4 * *(float *)&MEMORY[0xB33E90][0xC]; /*0x640871*/
    v65 = arg0; /*0x640875*/
    arg0 = fabs(arg0); /*0x64087d*/
    if ( v74 <= (double)arg0 ) /*0x640892*/
    {
      v66 = v74; /*0x64089c*/
      if ( v65 <= 0.0 ) /*0x6408a7*/
      {
        *(float *)Src.m_data = *(float *)Src.m_data - v66; /*0x6408b8*/
        v63 = *((float *)v64 + 3) - v66; /*0x6408ba*/
      }
      else
      {
        *(float *)Src.m_data = v66 + *(float *)Src.m_data; /*0x6408ad*/
        v63 = v66 + *((float *)v64 + 3); /*0x6408af*/
      }
    }
    else
    {
      *(float *)Src.m_data = *(float *)a2; /*0x640898*/
    }
    *((float *)v64 + 3) = v63; /*0x6408bd*/
    *(float *)(LODWORD(v3) + 0x270) = flt_B14CD4; /*0x6408c6*/
    *(_WORD *)(*(_DWORD *)(v47 + 0xB4) + 0x2E) |= 1u; /*0x6408d2*/
  }
}
