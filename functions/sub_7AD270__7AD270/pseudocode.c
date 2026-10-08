// BSShaderAccumulator vtable +0x58; bool __thiscall(this, geometry). The generic path keeps BSShaderProperty* at raw [ESP+0x1C], EBP=current RenderPass, and EDX=currentNode->next. At 0x7ADA04 a no-call Lighting30 predicate may use only EAX to test vtable 0x00A9576C and selector 0x177..0x17A. Match preserves EDX and jumps to 0x7ADA32; miss replays CMP g_bWaterReflectionPassActive,0 and jumps to 0x7ADA0B. The only ordinary selector-bucket insertion is 0x7ADE2C: this+0x104+0x14*selector. Thus the interception precedes all list mutation. It must not purge a selector bucket, including under FreezeRenderAccumulation, because buckets can intentionally retain other borrowed nodes.
//
// Pass 369 exact-class closure: the saved property at raw [ESP+0x1C] can be scoped with vptr A9576C without a call. Oblivion has exactly three references that store this vptr (constructor, derived destructor, clone), and both the engine NiRTTI and MSVC RTTI contain no native class derived from Lighting30ShaderProperty. The MSVC hierarchy is a linear nine-class offset-zero chain. Therefore the exact vptr comparison selects only retail Lighting30ShaderProperty objects and deliberately excludes other PP-lighting owners of selectors 0x177..0x17A.
//
// Pass 370 subtype census: all 17 native BSShaderProperty-family MSVC hierarchies reference the shared BSShaderProperty base descriptor ACF34C. Reading vtable slot +0x54 for this complete set yields subtypes {0,1,2,3,4,5,6,7,9,10,11,12,13,14,15}; only Lighting30ShaderProperty_vftable A9576C yields 10. The exact-vptr filter remains preferable because it is no-call and conservatively excludes non-native or extension properties, but subtype 10 is class-unique within retail Oblivion.
//
// CULLING MainWorld goal 2026-09-27: bool return is NOT a queued-geometry certificate. Observed no-work branches return true (e.g. 0x7AD383); 0x7ADFC2 directly invokes geometry Render and 0x7ADFC7 returns true. Other branches enqueue geometry/pass records. Telemetry must distinguish handling from actual enqueue/direct-render outcomes; do not label a true result as saved/queued draw evidence.
bool __thiscall BSShaderAccumulator_AccumulateGeometry(BSShaderAccumulator *this, NiGeometry *geometry)
{
  NiGeometry *v2; // esi
  NiRTTI *v4; // eax
  volatile LONG *v6; // edi
  _DWORD *v7; // eax
  NiObject *shader; // ecx
  BSShaderProperty *v9; // ebp
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int (__thiscall *v14)(BSShaderProperty *, NiGeometry *, int, BSShaderProperty **, int); // edx
  int v15; // eax
  _DWORD *v16; // esi
  volatile LONG *v17; // eax
  NiGeometry *v18; // esi
  NiGeometryData *geomData; // ecx
  NiGeometry *v20; // edi
  int (__thiscall *v21)(BSShaderProperty *, NiGeometry *, int, BSShaderProperty **, int); // edx
  int v22; // eax
  _DWORD *v23; // esi
  unsigned __int16 *v24; // eax
  int (__thiscall *v25)(BSShaderProperty *, NiGeometry *, int, void ***, int); // edx
  int v26; // eax
  void **v27; // esi
  _DWORD *v28; // edi
  BSTextureManager *v29; // ecx
  NiGeometry *v30; // esi
  NiGeometryDataVtbl *vftable; // edx
  int (__thiscall *v32)(BSShaderProperty *, NiGeometry *, int, BSShaderProperty **, int); // edx
  int v33; // eax
  void **v34; // esi
  _DWORD *v35; // edi
  BSTextureManager *v36; // ecx
  int start; // eax
  NiGeometry *v38; // esi
  int ShadowSceneNode; // eax
  char v40; // al
  int (__thiscall *v41)(BSShaderProperty *, NiGeometry *, int, int *, int); // edx
  volatile LONG *v42; // eax
  NiObject *j; // esi
  float *v44; // eax
  int v45; // eax
  unsigned __int16 *v46; // esi
  BSShader *v47; // edi
  int v48; // eax
  void **v49; // ebp
  _DWORD *v50; // edx
  unsigned __int16 v51; // si
  _DWORD *v52; // ecx
  void **v53; // eax
  volatile LONG *v54; // edi
  float *v55; // edi
  float *v56; // eax
  float v57; // edx
  float v58; // ecx
  float v59; // edx
  int v60; // eax
  float v61; // ecx
  float v62; // edx
  double v63; // st7
  float v64; // edx
  double v65; // st7
  float v66; // eax
  float v67; // ecx
  float v68; // edx
  float v69; // ecx
  double v70; // st6
  float v71; // eax
  double v72; // st6
  float v73; // ecx
  double v74; // st6
  float v75; // edx
  float v76; // eax
  float v77; // ecx
  bool v78; // zf
  UInt32 passInfo; // ecx
  _DWORD *v80; // eax
  int v81; // eax
  __int16 v82; // ax
  int v83; // eax
  NiGeometry *v84; // ecx
  int v85; // eax
  _DWORD *v86; // eax
  int v87; // [esp-Ah] [ebp-98h]
  int v88; // [esp-Ah] [ebp-98h]
  int v89; // [esp-Ah] [ebp-98h]
  int v90; // [esp-Ah] [ebp-98h]
  int v91; // [esp-Ah] [ebp-98h]
  char v92; // [esp+15h] [ebp-79h]
  _DWORD *v93; // [esp+16h] [ebp-78h]
  void **v94; // [esp+1Ah] [ebp-74h] BYREF
  BSShaderProperty *v95; // [esp+1Eh] [ebp-70h] BYREF
  volatile LONG *i; // [esp+22h] [ebp-6Ch] BYREF
  int v97; // [esp+26h] [ebp-68h] BYREF
  volatile LONG *v98; // [esp+2Ah] [ebp-64h] BYREF
  float v99; // [esp+2Eh] [ebp-60h]
  float v100; // [esp+32h] [ebp-5Ch]
  int v101; // [esp+36h] [ebp-58h]
  float v102; // [esp+3Ah] [ebp-54h]
  float v103; // [esp+3Eh] [ebp-50h]
  float v104; // [esp+42h] [ebp-4Ch]
  float v105; // [esp+46h] [ebp-48h]
  float v106; // [esp+4Ah] [ebp-44h]
  float v107; // [esp+4Eh] [ebp-40h]
  float v108[3]; // [esp+52h] [ebp-3Ch] BYREF
  float v109; // [esp+5Eh] [ebp-30h]
  float v110; // [esp+62h] [ebp-2Ch]
  float v111; // [esp+66h] [ebp-28h]
  float v112; // [esp+6Ah] [ebp-24h]
  float v113; // [esp+6Eh] [ebp-20h]
  float v114; // [esp+72h] [ebp-1Ch]
  float v115; // [esp+76h] [ebp-18h]
  float v116; // [esp+7Ah] [ebp-14h]
  float v117; // [esp+7Eh] [ebp-10h]
  float v118; // [esp+82h] [ebp-Ch]
  float v119; // [esp+86h] [ebp-8h]
  float v120; // [esp+8Ah] [ebp-4h]

  v2 = geometry; /*0x7ad27c*/
  if ( !g_bRendererAccumulationFrozen ) /*0x7ad285*/
  {
LABEL_9:
    if ( unk_B42CDB ) /*0x7ad2d1*/
      BSShaderAccumulator_ClearAccumulatedPasses(this); /*0x7ad2dc*/
LABEL_11:
    if ( !*((_BYTE *)this + 0x2268) && !g_bWaterReflectionPassActive ) /*0x7ad2ea*/
      *((_BYTE *)this + 0x2268) = 1; /*0x7ad2f3*/
    v6 = *NiGeometry_GetPropertyState(v2, &i); /*0x7ad307*/
    if ( i ) /*0x7ad30f*/
    {
      v2 = (NiGeometry *)i; /*0x7ad311*/
      if ( !InterlockedDecrement(i + 1) ) /*0x7ad317*/
        v2->__vftable->super.super.super.Destructor((NiRefObject *)v2, 1); /*0x7ad32d*/
    }
    if ( !v6 ) /*0x7ad331*/
    {
      v7 = sub_7ABC40(this, 0, (int)v2); /*0x7ad33d*/
      BSTPersistentList_AppendTailReusingFreeNode(v7, (int *)&geometry); /*0x7ad344*/
      return 1; /*0x7ad351*/
    }
    v78 = unk_B42CE3 == 0; /*0x7ad354*/
    shader = geometry->member.shader; /*0x7ad362*/
    v9 = *((BSShaderProperty **)v6 + 6); /*0x7ad369*/
    v95 = v9; /*0x7ad36c*/
    if ( v78 ) /*0x7ad370*/
    {
      if ( !shader ) /*0x7ad428*/
        goto LABEL_24; /*0x7ad428*/
    }
    else
    {
      v10 = *((_DWORD *)v6 + 8); /*0x7ad378*/
      if ( !shader ) /*0x7ad37b*/
      {
        if ( !v10 ) /*0x7ad383*/
          return 1; /*0x7ad383*/
        v11 = **(_DWORD **)(v10 + 0x20); /*0x7ad38c*/
        if ( !v11 || !*(_DWORD *)(v11 + 8) ) /*0x7ad396*/
          return 1; /*0x7ad399*/
        goto LABEL_24; /*0x7ad399*/
      }
    }
    if ( !v9 ) /*0x7ad430*/
    {
LABEL_24:
      if ( *((_BYTE *)this + 0x21E0) ) /*0x7ad39f*/
      {
        v12 = *((_DWORD *)v6 + 2); /*0x7ad3ac*/
        if ( (*(_BYTE *)(v12 + 0x18) & 1) != 0 && (!*((_BYTE *)this + 0x34) || (*(_WORD *)(v12 + 0x18) & 0x2000) == 0) ) /*0x7ad3ca*/
        {
          if ( unk_B42CE3 ) /*0x7ad3d0*/
          {
            NiTPointerList__AddTail((BSTextureManager *)((char *)this + 0xC), (void **)&geometry); /*0x7adf70*/
            return 1; /*0x7adf78*/
          }
          else if ( unk_B42CE1 && (double)unk_B42CE4 > geometry->member.super.m_kWorldBound.Center.z ) /*0x7ad401*/
          {
            NiTPointerList__AddTail((BSTextureManager *)((char *)this + 0x2254), (void **)&geometry); /*0x7ad415*/
            return 1; /*0x7ad41d*/
          }
          else
          {
            NiTPointerList__AddTail((BSTextureManager *)((char *)this + 0x2244), (void **)&geometry); /*0x7adf54*/
            return 1; /*0x7adf5c*/
          }
        }
        if ( *(_WORD *)&OB_RendererGlobalState_010201A0[0x13] != 6 ) /*0x7adf89*/
        {
          v86 = sub_7ABC40(this, (int)v6, (int)v2); /*0x7adf95*/
          BSTPersistentList_AppendTailReusingFreeNode(v86, (int *)&geometry); /*0x7adf9c*/
          return 1; /*0x7adfaa*/
        }
      }
      else
      {
        geometry->__vftable->Render(geometry, (NiRenderer *)renderer); /*0x7adfc2*/
      }
      return 1; /*0x7adfc7*/
    }
    v2 = (NiGeometry *)((int (__thiscall *)(NiObject *))shader->__vftable->Load)(shader); /*0x7ad440*/
    v13 = (*((int (__thiscall **)(BSShaderProperty *))v9->vtbl + 0x15))(v9); /*0x7ad447*/
    if ( v2 == (NiGeometry *)0x16 ) /*0x7ad44c*/
    {
      if ( v13 == 0xB ) /*0x7ad455*/
      {
        v14 = *((int (__thiscall **)(BSShaderProperty *, NiGeometry *, int, BSShaderProperty **, int))v9->vtbl + 0x17); /*0x7ad464*/
        v87 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0xA7]; /*0x7ad475*/
        v95 = 0; /*0x7ad479*/
        v15 = *(_DWORD *)(v14(v9, geometry, v87, &v95, 1) + 4); /*0x7ad483*/
        v16 = *(_DWORD **)v15; /*0x7ad486*/
        v17 = *(volatile LONG **)(v15 + 8); /*0x7ad48b*/
        for ( i = v17; v17; i = v17 ) /*0x7ad493*/
        {
          if ( g_bWaterReflectionPassActive ) /*0x7ad4a0*/
          {
            if ( *((_WORD *)v17 + 2) == 0x17D ) /*0x7ad4ad*/
              BSShaderAccumulator_DrawRenderPass(v17, 0x17Du); /*0x7ad4b3*/
          }
          else
          {
            BSTPersistentList_AppendTailReusingFreeNode( /*0x7ad4cc*/
              (_DWORD *)this + 5 * *((unsigned __int16 *)v17 + 2) + 0x41,
              (int *)&i);
          }
          if ( !v16 ) /*0x7ad4d3*/
            break; /*0x7ad4d3*/
          v17 = (volatile LONG *)v16[2]; /*0x7ad4d8*/
          v16 = (_DWORD *)*v16; /*0x7ad4dc*/
        }
        v18 = geometry; /*0x7ad4e4*/
        ++unk_B42CD0; /*0x7ad4eb*/
        if ( !v18->__vftable->super.super.Unk_04((NiObject *)v18) ) /*0x7ad4fd*/
          return 1; /*0x7ad4fd*/
        geomData = v18->member.geomData; /*0x7ad503*/
LABEL_45:
        g_rendererTriangleCount += (int)geomData->__vftable[1].super.GetType((NiObject *)geomData); /*0x7ad509*/
        return 1; /*0x7ad525*/
      }
      goto LABEL_89; /*0x7ad455*/
    }
    if ( v2 == (NiGeometry *)0x18 ) /*0x7ad52b*/
    {
      if ( v13 == 0xC ) /*0x7ad534*/
      {
        v20 = geometry; /*0x7ad543*/
        v21 = *((int (__thiscall **)(BSShaderProperty *, NiGeometry *, int, BSShaderProperty **, int))v9->vtbl + 0x17); /*0x7ad54a*/
        v88 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0xA7]; /*0x7ad554*/
        v95 = 0; /*0x7ad558*/
        v22 = *(_DWORD *)(v21(v9, geometry, v88, &v95, 1) + 4); /*0x7ad562*/
        v23 = *(_DWORD **)v22; /*0x7ad565*/
        v24 = *(unsigned __int16 **)(v22 + 8); /*0x7ad56a*/
        for ( i = (volatile LONG *)v24; v24; i = (volatile LONG *)v24 ) /*0x7ad572*/
        {
          BSTPersistentList_AppendTailReusingFreeNode((_DWORD *)this + 5 * v24[2] + 0x41, (int *)&i); /*0x7ad586*/
          if ( !v23 ) /*0x7ad58d*/
            break; /*0x7ad58d*/
          v24 = (unsigned __int16 *)v23[2]; /*0x7ad592*/
          v23 = (_DWORD *)*v23; /*0x7ad596*/
        }
        ++unk_B42CD0; /*0x7ad59e*/
        if ( !v20->__vftable->super.super.Unk_04((NiObject *)v20) ) /*0x7ad5b0*/
          return 1; /*0x7ad5b0*/
        geomData = v20->member.geomData; /*0x7ad5b6*/
        goto LABEL_45; /*0x7ad5bc*/
      }
      goto LABEL_89; /*0x7ad534*/
    }
    if ( v2 == (NiGeometry *)0x19 ) /*0x7ad5c4*/
    {
      if ( v13 != 0xE ) /*0x7ad5cd*/
        goto LABEL_89; /*0x7ad5cd*/
      if ( !*((_BYTE *)this + 0x21E3) ) /*0x7ad5da*/
        return 1; /*0x7ad5da*/
      v25 = *((int (__thiscall **)(BSShaderProperty *, NiGeometry *, int, void ***, int))v9->vtbl + 0x17); /*0x7ad5e9*/
      v89 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0xA7]; /*0x7ad5fa*/
      v94 = 0; /*0x7ad5fe*/
      v26 = *(_DWORD *)(v25(v9, geometry, v89, &v94, 1) + 4); /*0x7ad608*/
      v28 = *(_DWORD **)v26; /*0x7ad610*/
      i = *(volatile LONG **)(v26 + 8); /*0x7ad615*/
      v27 = (void **)i; /*0x7ad60b*/
      if ( i ) /*0x7ad619*/
      {
        while ( 1 ) /*0x7ad624*/
        {
          if ( v95[2].member.passes.end == (NiTList_Entry_NiProperty *)8 ) /*0x7ad62e*/
          {
            sub_7AD1C0((_DWORD *)this + 0x29, (int)v27); /*0x7ad63a*/
            goto LABEL_70; /*0x7ad63f*/
          }
          NiTPointerList__AddTail((BSTextureManager *)this + 0x78, (void **)&i); /*0x7ad64c*/
          if ( unk_B42CE3 ) /*0x7ad651*/
          {
            v29 = (BSTextureManager *)((char *)this + 0xC); /*0x7ad6ad*/
            goto LABEL_69; /*0x7ad6ad*/
          }
          if ( v95[2].member.passes.end != (NiTList_Entry_NiProperty *)8 ) /*0x7ad664*/
            break; /*0x7ad664*/
          if ( !unk_B42CE1 || !unk_B42CE2 ) /*0x7ad66f*/
            goto LABEL_64; /*0x7ad676*/
          v29 = (BSTextureManager *)((char *)this + 0x2254); /*0x7ad678*/
LABEL_69:
          NiTPointerList__AddTail(v29, v27); /*0x7ad6b0*/
LABEL_70:
          if ( v28 ) /*0x7ad6b8*/
          {
            v27 = (void **)v28[2]; /*0x7ad6ba*/
            v28 = (_DWORD *)*v28; /*0x7ad6c2*/
            i = (volatile LONG *)v27; /*0x7ad6c4*/
            if ( v27 ) /*0x7ad6c8*/
              continue; /*0x7ad6c8*/
          }
          goto LABEL_72; /*0x7ad6c8*/
        }
        if ( unk_B42CE1 && (double)unk_B42CE4 > *((float *)*v27 + 0xA) ) /*0x7ad6a3*/
        {
          v29 = (BSTextureManager *)((char *)this + 0x2254); /*0x7ad6a5*/
          goto LABEL_69; /*0x7ad6ab*/
        }
LABEL_64:
        v29 = (BSTextureManager *)((char *)this + 0x2244); /*0x7ad680*/
        goto LABEL_69; /*0x7ad686*/
      }
    }
    else
    {
      if ( v2 != (NiGeometry *)0x1A ) /*0x7ad715*/
      {
        if ( (int)v2 <= (int)0xFFFFFFFF ) /*0x7ad7e1*/
          goto LABEL_24; /*0x7ad7e1*/
        goto LABEL_89; /*0x7ad7e1*/
      }
      if ( v13 != 0xD ) /*0x7ad71e*/
      {
LABEL_89:
        if ( v13 >= 1 ) /*0x7ad7ea*/
        {
          start = (int)v9[1].member.passes.start; /*0x7ad7f0*/
          if ( start && sub_7AA3C0((int)this, start, 1) ) /*0x7ad7ff*/
            return 1; /*0x7ad806*/
          v38 = geometry; /*0x7ad80c*/
          v78 = LOBYTE(geometry->member.super.m_flags) >> 7 == 0; /*0x7ad81c*/
          v101 = *((_DWORD *)v6 + 2); /*0x7ad81e*/
          if ( v78 && *(_WORD *)&OB_RendererGlobalState_010201A0[0x13] != 5 ) /*0x7ad82c*/
          {
            ShadowSceneNode = GetShadowSceneNode(v9->member.passInfo >> 0x1C); /*0x7ad835*/
            if ( !sub_7C7050((int)v38, ShadowSceneNode) ) /*0x7ad846*/
              return 1; /*0x7ad846*/
            v38->member.super.m_flags |= 0x80u; /*0x7ad84c*/
          }
          v40 = *((_DWORD *)this + 0x17) > 0; /*0x7ad856*/
          if ( v40 != ((v9->member.passInfo & 0x200) != 0) ) /*0x7ad865*/
          {
            sub_434980(v9, 0x200, v40); /*0x7ad86f*/
            BSShaderProperty_ClearRenderPassLists(v9); /*0x7ad876*/
          }
          v41 = *((int (__thiscall **)(BSShaderProperty *, NiGeometry *, int, int *, int))v9->vtbl + 0x17);// Load BSShaderProperty virtual +0x5C. Exact Lighting30 resolves to Lighting30ShaderProperty_BuildRenderPasses 0x8637D0; exact Hair to 0x882AE0; the three base/SpeedTree PP-lighting owners to 0x7D85D0. /*0x7ad884*/
          v91 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0xA7]; /*0x7ad88e*/
          v97 = 0; /*0x7ad892*/
          v42 = (volatile LONG *)v41(v9, v38, v91, &v97, 1);// Accumulator calls the active shader property's virtual +0x5C builder. This is the decisive reachability edge: exact Lighting30 -> 0x8637D0; exact Hair -> 0x882AE0; base and SpeedTree PP-lighting owners -> 0x7D85D0. /*0x7ad89a*/
          i = v42; /*0x7ad89e*/
          if ( !v42 ) /*0x7ad8a2*/
            return 1; /*0x7ad8a2*/
          v92 = 0; /*0x7ad8ac*/
          if ( *((_DWORD *)v42 + 3) > 1u ) /*0x7ad8b1*/
          {
            for ( j = (NiObject *)geometry->member.super.super.m_controller; j; j = (NiObject *)j[6].members.m_uiRefCount ) /*0x7ad8bf*/
            {
              if ( v92 ) /*0x7ad8c8*/
                break; /*0x7ad8c8*/
              if ( NiRTTI::IsObjectOfRTTIType(&stru_B3CE30, j) ) /*0x7ad8d0*/
              {
                v44 = (float *)FormHeapAlloc(0x18u); /*0x7ad8de*/
                if ( v44 ) /*0x7ad8e8*/
                {
                  *(_DWORD *)v44 = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable'; /*0x7ad8ea*/
                  v44[1] = 0.0; /*0x7ad8f0*/
                  v44[2] = 0.0; /*0x7ad8f3*/
                  v44[3] = 0.0; /*0x7ad8f6*/
                }
                else
                {
                  v44 = 0; /*0x7ad8fb*/
                }
                v44[5] = 0.0; /*0x7ad901*/
                v94 = (void **)v44; /*0x7ad904*/
                sub_7AA6C0(v44); /*0x7ad908*/
                NiTList_AddHead((_DWORD *)this + 0xF, &v94); /*0x7ad915*/
                v92 = 1; /*0x7ad91a*/
              }
            }
          }
          if ( !*((_DWORD *)i + 3) || v95->member.alpha <= 0.0 ) /*0x7ad942*/
            return 1; /*0x7ad942*/
          if ( *((_BYTE *)this + 0x21E2) ) /*0x7ad948*/
          {
            if ( *((_BYTE *)this + 0x21E0) ) /*0x7ad955*/
            {
              v45 = (*((int (**)(void))v95->vtbl + 0x19))(); /*0x7ad963*/
              if ( *(_DWORD *)(v45 + 0xC) ) /*0x7ad965*/
              {
                v78 = *((_BYTE *)this + 0x21E0) == 0; /*0x7ad96b*/
                v46 = *(unsigned __int16 **)(*(_DWORD *)(v45 + 4) + 8); /*0x7ad975*/
                v94 = (void **)v46; /*0x7ad978*/
                if ( v78 ) /*0x7ad97c*/
                {
                  v47 = sub_7A9CC0(); /*0x7ad99c*/
                  sub_7D1320((int *)v46[2]); /*0x7ad9a5*/
                  if ( v47 ) /*0x7ad9af*/
                  {
                    v47->member.super.VertexConstantMap->_vtbl->sub_9A97B0(v47->member.super.VertexConstantMap); /*0x7ad9b9*/
                    v47->member.super.PixelConstantMap->_vtbl->sub_9A97B0(v47->member.super.PixelConstantMap); /*0x7ad9c3*/
                  }
                  BSShaderAccumulator_DrawRenderPass(v46, v46[2]); /*0x7ad9cd*/
                }
                else
                {
                  BSTPersistentList_AppendTailReusingFreeNode((_DWORD *)this + 5 * v46[2] + 0x41, (int *)&v94); /*0x7ad990*/
                }
              }
            }
          }
          v48 = *((_DWORD *)i + 1); /*0x7ad9d6*/
          v50 = *(_DWORD **)v48; /*0x7ad9de*/
          v93 = *(_DWORD **)v48; /*0x7ad9e3*/
          v94 = *(void ***)(v48 + 8); /*0x7ad9e7*/
          v49 = v94; /*0x7ad9d9*/
          if ( v94 ) /*0x7ad9eb*/
          {
            while ( 1 ) /*0x7ada0b*/
            {
              v51 = *((_WORD *)v49 + 2); /*0x7ada0b*/
              if ( g_bWaterReflectionPassActive /*0x7ada30*/
                && ((unsigned __int16)(v51 - 0x168) <= 0x12u && v51 != 0x16E && v51 != 0x16F || v51 == 0x17B) )// Previously proposed exact-Lighting30 high-selector pre-queue filter site. The ABI is valid, but the authoritative producer graph now proves exact Lighting30 cannot stock-produce 0x177..0x17A, so this predicate is unreachable defensive code rather than a native-mismatch correction.
              {
                if ( !v50 ) /*0x7ada34*/
                  break;                        // Native no-append cursor-advance path. It remains an ABI-safe skip successor, but no stock exact-Lighting30 0x177..0x17A record reaches the proposed filter predicate. /*0x7ada34*/
                v52 = (_DWORD *)*v50; /*0x7ada3a*/
                v53 = (void **)(v50 + 2); /*0x7ada3c*/
BSShaderAccumulator_LoadNextPropertyRenderPass:
                v93 = v52; /*0x7adf08*/
                goto LABEL_205; /*0x7adf08*/
              }
              if ( v51 == 0x190 || v51 == 0x192 || (unsigned __int16)(v51 - 0x34) <= 0x13u && *((_DWORD *)i + 3) == 1 ) /*0x7ada67*/
              {
                v54 = *NiGeometry_GetPropertyState((NiGeometry *)*v49, &v98); /*0x7ada7a*/
                NiPointerSlot_Release((NiD3DVertexShader *)&v98); /*0x7ada80*/
                v55 = *((float **)v54 + 3); /*0x7ada85*/
                if ( v55 ) /*0x7ada8a*/
                {
                  v56 = *((float **)this + 2); /*0x7ada90*/
                  v57 = v56[0x22]; /*0x7ada96*/
                  v99 = v55[0xB]; /*0x7ada9c*/
                  v58 = v56[0x23]; /*0x7adaa0*/
                  v100 = v55[0xC]; /*0x7adaae*/
                  v102 = v57; /*0x7adab2*/
                  v59 = v56[0x24]; /*0x7adab6*/
                  v60 = (int)*v49 + 0x20; /*0x7adabc*/
                  v103 = v58; /*0x7adabf*/
                  v109 = *(float *)v60; /*0x7adac5*/
                  v61 = *(float *)(v60 + 8); /*0x7adad1*/
                  v104 = v59; /*0x7adad4*/
                  v62 = *(float *)(v60 + 4); /*0x7adad8*/
                  v108[0] = v109 - v102; /*0x7adadb*/
                  v110 = v62; /*0x7adadf*/
                  v63 = v62; /*0x7adae3*/
                  v64 = *(float *)(v60 + 0xC); /*0x7adae7*/
                  v111 = v61; /*0x7adaee*/
                  v112 = v64; /*0x7adaf6*/
                  v108[1] = v63 - v103; /*0x7adafa*/
                  v108[2] = v61 - v104; /*0x7adb06*/
                  v65 = NiPoint3_Length(v108); /*0x7adb0a*/
                  if ( v99 >= v65 + v112 ) /*0x7adb20*/
                  {
                    if ( v51 != 0x190 && v51 != 0x192 ) /*0x7adbe1*/
                    {
                      switch ( v51 ) /*0x7adbf2*/
                      {
                        case '4': /*0x7adbf2*/
                          goto LABEL_145;
                        case '5': /*0x7adbf2*/
                          goto LABEL_138;
                        case '6': /*0x7adbf2*/
                          goto LABEL_146;
                        case '7': /*0x7adbf2*/
                          goto LABEL_147;
                        case '8': /*0x7adbf2*/
                          goto LABEL_148;
                        case '9': /*0x7adbf2*/
                          goto LABEL_149;
                        case ':': /*0x7adbf2*/
                          goto LABEL_150;
                        case ';': /*0x7adbf2*/
                          goto LABEL_151;
                        case '<': /*0x7adbf2*/
                          goto LABEL_152;
                        case '=': /*0x7adbf2*/
                          goto LABEL_153;
                        case '>': /*0x7adbf2*/
                          goto LABEL_154;
                        case '?': /*0x7adbf2*/
                          goto LABEL_155;
                        case '@': /*0x7adbf2*/
                          goto LABEL_157;
                        case 'A': /*0x7adbf2*/
                          goto LABEL_158;
                        case 'B': /*0x7adbf2*/
                          goto LABEL_159;
                        case 'C': /*0x7adbf2*/
                          goto LABEL_160;
                        case 'D': /*0x7adbf2*/
                          goto LABEL_156;
                        case 'E': /*0x7adbf2*/
                          goto LABEL_161;
                        case 'F': /*0x7adbf2*/
                          goto LABEL_162;
                        case 'G': /*0x7adbf2*/
                          goto LABEL_163;
                      }
                    }
                    v78 = v93 == 0; /*0x7adc03*/
                    goto LABEL_140; /*0x7adc03*/
                  }
                  v66 = v55[8]; /*0x7adb2a*/
                  v67 = v55[9]; /*0x7adb2d*/
                  v113 = v100; /*0x7adb30*/
                  v68 = v55[0xA]; /*0x7adb34*/
                  v105 = v66; /*0x7adb39*/
                  v114 = v100 - v99; /*0x7adb41*/
                  v106 = v67; /*0x7adb45*/
                  v69 = v114; /*0x7adb4b*/
                  v115 = 0.0; /*0x7adb4f*/
                  v107 = v68; /*0x7adb53*/
                  v116 = 0.0; /*0x7adb5b*/
                  v70 = v66; /*0x7adb5f*/
                  flt_B46638[0] = v100; /*0x7adb63*/
                  v71 = v116; /*0x7adb68*/
                  v117 = v70; /*0x7adb6c*/
                  v72 = v106; /*0x7adb70*/
                  flt_B46638[1] = v69; /*0x7adb74*/
                  v73 = v117; /*0x7adb7a*/
                  v118 = v72; /*0x7adb7e*/
                  v74 = v107; /*0x7adb85*/
                  flt_B46638[2] = 0.0; /*0x7adb89*/
                  v75 = v118; /*0x7adb8f*/
                  v119 = v74; /*0x7adb96*/
                  flt_B46638[3] = v71; /*0x7adb9d*/
                  v76 = v119; /*0x7adba2*/
                  v120 = 0.0; /*0x7adba9*/
                  flt_B46638[4] = v73; /*0x7adbb0*/
                  v77 = v120; /*0x7adbb6*/
                  flt_B46638[5] = v75; /*0x7adbbd*/
                  flt_B46638[6] = v76; /*0x7adbc3*/
                  flt_B46638[7] = v77; /*0x7adbc8*/
                }
                else
                {
                  if ( v51 == 0x190 || v51 == 0x192 ) /*0x7adc30*/
                  {
                    if ( !v93 ) /*0x7adefd*/
                      break; /*0x7adefd*/
                    v53 = (void **)(v93 + 2); /*0x7adf03*/
                    v52 = (_DWORD *)*v93; /*0x7adf06*/
                    goto BSShaderAccumulator_LoadNextPropertyRenderPass; /*0x7adf06*/
                  }
                  switch ( v51 ) /*0x7adc45*/
                  {
                    case '4': /*0x7adc45*/
LABEL_145:
                      v51 = 0x19; /*0x7adc4c*/
                      break; /*0x7adc51*/
                    case '5': /*0x7adc45*/
LABEL_138:
                      v51 = 0x1A; /*0x7adbf9*/
                      break; /*0x7adbfe*/
                    case '6': /*0x7adc45*/
LABEL_146:
                      v51 = 0x1B; /*0x7adc56*/
                      break; /*0x7adc5b*/
                    case '7': /*0x7adc45*/
LABEL_147:
                      v51 = 0x1C; /*0x7adc60*/
                      break; /*0x7adc65*/
                    case '8': /*0x7adc45*/
LABEL_148:
                      v51 = 0x1E; /*0x7adc6a*/
                      break; /*0x7adc6f*/
                    case '9': /*0x7adc45*/
LABEL_149:
                      v51 = 0x1F; /*0x7adc71*/
                      break; /*0x7adc76*/
                    case ':': /*0x7adc45*/
LABEL_150:
                      v51 = 0x1D; /*0x7adc78*/
                      break; /*0x7adc7d*/
                    case ';': /*0x7adc45*/
LABEL_151:
                      v51 = 0x20; /*0x7adc7f*/
                      break; /*0x7adc84*/
                    case '<': /*0x7adc45*/
LABEL_152:
                      v51 = 0x21; /*0x7adc86*/
                      break; /*0x7adc8b*/
                    case '=': /*0x7adc45*/
LABEL_153:
                      v51 = 0x22; /*0x7adc8d*/
                      break; /*0x7adc92*/
                    case '>': /*0x7adc45*/
LABEL_154:
                      v51 = 0x24; /*0x7adc94*/
                      break; /*0x7adc99*/
                    case '?': /*0x7adc45*/
LABEL_155:
                      v51 = 0x25; /*0x7adc9b*/
                      break; /*0x7adca0*/
                    case '@': /*0x7adc45*/
LABEL_157:
                      v51 = 0x26; /*0x7adca9*/
                      break; /*0x7adcae*/
                    case 'A': /*0x7adc45*/
LABEL_158:
                      v51 = 0x27; /*0x7adcb0*/
                      break; /*0x7adcb5*/
                    case 'B': /*0x7adc45*/
LABEL_159:
                      v51 = 0x29; /*0x7adcb7*/
                      break; /*0x7adcbc*/
                    case 'C': /*0x7adc45*/
LABEL_160:
                      v51 = 0x2A; /*0x7adcbe*/
                      break; /*0x7adcc3*/
                    case 'D': /*0x7adc45*/
LABEL_156:
                      v51 = 0x28; /*0x7adca2*/
                      break; /*0x7adca7*/
                    case 'E': /*0x7adc45*/
LABEL_161:
                      v51 = 0x2B; /*0x7adcc5*/
                      break; /*0x7adcca*/
                    case 'F': /*0x7adc45*/
LABEL_162:
                      v51 = 0x2C; /*0x7adccc*/
                      break; /*0x7adcd1*/
                    case 'G': /*0x7adc45*/
LABEL_163:
                      v51 = 0x2E; /*0x7adcd3*/
                      break; /*0x7adcd3*/
                  }
                }
              }
              if ( v101 && (*(_BYTE *)(v101 + 0x18) & 1) != 0 ) /*0x7adcea*/
              {
                if ( !*((_BYTE *)this + 0x21E0) ) /*0x7adcf7*/
                  goto LABEL_189; /*0x7adcf7*/
                passInfo = v95->member.passInfo; /*0x7add01*/
                if ( ((passInfo & 0x100) != 0 || v95->member.alpha < 1.0) /*0x7add48*/
                  && *(_WORD *)&OB_RendererGlobalState_010201A0[0x13] != 5
                  && (v51 < 0x156u || v51 > 0x15Au)
                  && (v51 < 0x160u || v51 > 0x164u) )
                {
                  if ( *((int *)this + 0x17) > 0 && (v80 = *((_DWORD **)this + 0x18)) != 0 && (passInfo & 0x200) != 0 ) /*0x7add60*/
                  {
                    sub_7AD1C0(v80, (int)v49); /*0x7add66*/
                    v78 = v93 == 0; /*0x7add6b*/
                  }
                  else
                  {
                    NiTPointerList__AddTail((BSTextureManager *)this + 0x78, (void **)&v94); /*0x7add7f*/
                    if ( unk_B42CE3 ) /*0x7add84*/
                    {
                      NiTPointerList__AddTail((BSTextureManager *)((char *)this + 0xC), v49); /*0x7addd9*/
                      v78 = v93 == 0; /*0x7addde*/
                    }
                    else if ( unk_B42CE1 && (double)unk_B42CE4 > *((float *)*v49 + 0xA) ) /*0x7adda9*/
                    {
                      NiTPointerList__AddTail((BSTextureManager *)((char *)this + 0x2254), v49); /*0x7addb2*/
                      v78 = v93 == 0; /*0x7addb7*/
                    }
                    else
                    {
                      NiTPointerList__AddTail((BSTextureManager *)((char *)this + 0x2244), v49); /*0x7addc7*/
                      v78 = v93 == 0; /*0x7addcc*/
                    }
                  }
                  goto LABEL_140; /*0x7add6f*/
                }
              }
              if ( *((_BYTE *)this + 0x21E0) ) /*0x7adde7*/
              {
                if ( v92 && (v81 = *((_DWORD *)this + 0x10), *(_DWORD *)(v81 + 8)) ) /*0x7addfa*/
                {
                  sub_7AD1C0(*(_DWORD **)(v81 + 8), (int)v49); /*0x7ade06*/
                  unk_B42CB0 += 0x10; /*0x7ade0b*/
                  v78 = v93 == 0; /*0x7ade12*/
                }
                else
                {
                  BSTPersistentList_AppendTailReusingFreeNode((_DWORD *)this + 5 * v51 + 0x41, (int *)&v94); /*0x7ade2c*/
                  unk_B42CB0 += 0x10; /*0x7ade31*/
                  v78 = v93 == 0; /*0x7ade38*/
                }
                goto LABEL_140; /*0x7ade16*/
              }
LABEL_189:
              if ( *(_WORD *)&OB_RendererGlobalState_010201A0[0x13] == 6 ) /*0x7ade49*/
                goto LABEL_201; /*0x7ade49*/
              if ( !byte_B2BB7C ) /*0x7ade56*/
              {
LABEL_195:
                if ( !*((_DWORD *)this + 0x1E) ) /*0x7adea5*/
                {
                  v83 = FormHeapAlloc(0x18u); /*0x7adeac*/
                  if ( v83 ) /*0x7adeb6*/
                  {
                    *(_DWORD *)v83 = &BSTPersistentList<NiTPointerAllocator<unsigned int>,BSShaderProperty::RenderPass *>::`vftable'; /*0x7adeb8*/
                    *(_DWORD *)(v83 + 4) = 0; /*0x7adebe*/
                    *(_DWORD *)(v83 + 8) = 0; /*0x7adec1*/
                    *(_DWORD *)(v83 + 0xC) = 0; /*0x7adec4*/
                  }
                  else
                  {
                    v83 = 0; /*0x7adec9*/
                  }
                  *((_DWORD *)this + 0x1E) = v83; /*0x7adecd*/
                  *(float *)(v83 + 0x14) = 0.0; /*0x7aded0*/
                  sub_7AA6C0(*((_DWORD **)this + 0x1E)); /*0x7aded6*/
                }
                BSTPersistentList_AppendTailReusingFreeNode(*((_DWORD **)this + 0x1E), (int *)&v94); /*0x7adee3*/
LABEL_201:
                unk_B42CB0 += 0x10; /*0x7adee8*/
                v78 = v93 == 0; /*0x7adeef*/
                goto LABEL_140; /*0x7adef3*/
              }
              v82 = *((_WORD *)v49 + 2); /*0x7ade58*/
              if ( v82 == 0x195 ) /*0x7ade60*/
              {
                BSTPersistentList_AppendTailReusingFreeNode((_DWORD *)this + 0x24, (int *)&v94); /*0x7ade6d*/
                unk_B42CB0 += 0x10; /*0x7ade72*/
                v78 = v93 == 0; /*0x7ade79*/
              }
              else
              {
                if ( v82 != 0x76 ) /*0x7ade86*/
                  goto LABEL_195; /*0x7ade86*/
                BSTPersistentList_AppendTailReusingFreeNode((_DWORD *)this + 0x1F, (int *)&v94); /*0x7ade90*/
                unk_B42CB0 += 0x10; /*0x7ade95*/
                v78 = v93 == 0; /*0x7ade9c*/
              }
LABEL_140:
              if ( v78 ) /*0x7adc08*/
                break; /*0x7adc08*/
              v53 = (void **)(v93 + 2); /*0x7adc14*/
              v93 = (_DWORD *)*v93; /*0x7adc17*/
LABEL_205:
              v49 = (void **)*v53; /*0x7adf0c*/
              v94 = (void **)*v53; /*0x7adf10*/
              if ( !v94 ) /*0x7adf14*/
                break; /*0x7adf14*/
              v50 = v93; /*0x7ada00*/
            }
          }
          v84 = geometry; /*0x7adf1a*/
          ++unk_B42CD0; /*0x7adf21*/
          v85 = v84->__vftable->super.super.Unk_04((NiObject *)v84); /*0x7adf2d*/
          if ( !v85 ) /*0x7adf31*/
            return 1; /*0x7adf31*/
          vftable = **(NiGeometryDataVtbl ***)(v85 + 0xB4); /*0x7adf3d*/
LABEL_74:
          g_rendererTriangleCount += ((unsigned __int16 (*)(void))vftable[1].super.GetType)(); /*0x7ad6f5*/
          return 1; /*0x7ad70f*/
        }
        goto LABEL_24; /*0x7ad7ea*/
      }
      if ( !*((_BYTE *)this + 0x21E3) ) /*0x7ad72b*/
        return 1; /*0x7ad72b*/
      v32 = *((int (__thiscall **)(BSShaderProperty *, NiGeometry *, int, BSShaderProperty **, int))v9->vtbl + 0x17); /*0x7ad73a*/
      v90 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0xA7]; /*0x7ad74b*/
      v95 = 0; /*0x7ad74f*/
      v33 = *(_DWORD *)(v32(v9, geometry, v90, &v95, 1) + 4); /*0x7ad759*/
      v35 = *(_DWORD **)v33; /*0x7ad761*/
      i = *(volatile LONG **)(v33 + 8); /*0x7ad766*/
      v34 = (void **)i; /*0x7ad75c*/
      if ( i ) /*0x7ad76a*/
      {
        do /*0x7ad7d7*/
        {
          NiTPointerList__AddTail((BSTextureManager *)this + 0x78, (void **)&i); /*0x7ad77d*/
          if ( unk_B42CE3 ) /*0x7ad782*/
          {
            v36 = (BSTextureManager *)((char *)this + 0xC); /*0x7ad7b8*/
          }
          else if ( unk_B42CE1 && (double)unk_B42CE4 > *((float *)*v34 + 0xA) ) /*0x7ad7a6*/
          {
            v36 = (BSTextureManager *)((char *)this + 0x2254); /*0x7ad7a8*/
          }
          else
          {
            v36 = (BSTextureManager *)((char *)this + 0x2244); /*0x7ad7b0*/
          }
          NiTPointerList__AddTail(v36, v34); /*0x7ad7bc*/
          if ( !v35 ) /*0x7ad7c3*/
            break; /*0x7ad7c3*/
          v34 = (void **)v35[2]; /*0x7ad7c9*/
          v35 = (_DWORD *)*v35; /*0x7ad7d1*/
          i = (volatile LONG *)v34; /*0x7ad7d3*/
        }
        while ( v34 ); /*0x7ad7d7*/
      }
    }
LABEL_72:
    v30 = geometry; /*0x7ad6ce*/
    ++unk_B42CD0; /*0x7ad6d5*/
    if ( !v30->__vftable->super.super.Unk_04((NiObject *)v30) ) /*0x7ad6e7*/
      return 1; /*0x7ad6e7*/
    vftable = v30->member.geomData->__vftable; /*0x7ad6f3*/
    goto LABEL_74; /*0x7ad6f3*/
  }
  if ( !unk_B42CDB ) /*0x7ad28e*/
  {
LABEL_8:
    if ( g_bRendererAccumulationFrozen ) /*0x7ad2c8*/
      goto LABEL_11; /*0x7ad2cf*/
    goto LABEL_9; /*0x7ad2cf*/
  }
  if ( !geometry ) /*0x7ad292*/
    return 1; /*0x7ad292*/
  v4 = geometry->__vftable->super.super.GetType(geometry); /*0x7ad29f*/
  if ( !v4 ) /*0x7ad2a3*/
    return 1; /*0x7ad2a3*/
  do /*0x7ad2bc*/
  {
    if ( v4 == &stru_B3FCDC ) /*0x7ad2b5*/
      goto LABEL_8; /*0x7ad2b5*/
    v4 = v4->parent; /*0x7ad2b7*/
  }
  while ( v4 ); /*0x7ad2bc*/
  return 1; /*0x7ad2be*/
}
