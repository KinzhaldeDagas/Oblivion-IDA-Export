// ShaderPackage class-1 PP-lighting producer at vtable +0x98. Refract/RefractF emits selector 0x160/0x161/0x162, then continues class-1 material/light pass production. This function contains no 0x177..0x17A high-selector construction.
void __thiscall BSShaderPPLightingProperty_BuildClass1Passes(
        BSShaderProperty *this,
        NiGeometry *geometry,
        int rendererState,
        unsigned __int16 *outContext,
        int emit)
{
  UInt32 passInfo; // eax
  char v7; // bl
  struct NiRTTI *v8; // eax
  char v9; // al
  NiRTTI *v10; // eax
  char v11; // al
  struct NiRTTI *v12; // eax
  char v13; // al
  BSShaderAccumulator *Global; // eax
  UInt32 v15; // eax
  NiProperty *NiPropertyByID; // eax
  _DWORD *v17; // eax
  _DWORD *LightRef; // eax
  void (__thiscall ***v19)(void *, int); // edi
  unsigned __int16 *v20; // edi
  RenderPass_DecodedLayout *v21; // ebp
  char v22; // bl
  __int16 v23; // ax
  _DWORD *v24; // eax
  _DWORD *v25; // eax
  _DWORD *v26; // eax
  _DWORD *v27; // eax
  bool v28; // al
  _DWORD *v29; // eax
  char v30; // al
  _DWORD *v31; // eax
  _DWORD *v32; // eax
  bool v33; // al
  _DWORD *v34; // eax
  bool v35; // al
  _DWORD *v36; // eax
  _DWORD *v37; // eax
  char v38; // [esp+12h] [ebp-46h]
  char v39; // [esp+13h] [ebp-45h]
  char v40; // [esp+14h] [ebp-44h]
  bool v41; // [esp+15h] [ebp-43h]
  bool v42; // [esp+16h] [ebp-42h]
  char v43; // [esp+17h] [ebp-41h]
  bool v44; // [esp+18h] [ebp-40h]
  bool v45; // [esp+19h] [ebp-3Fh]
  bool v46; // [esp+1Ah] [ebp-3Eh]
  bool v47; // [esp+1Bh] [ebp-3Dh]
  char v48; // [esp+1Ch] [ebp-3Ch]
  ShadowSceneLight *FirstActiveLight; // [esp+1Ch] [ebp-3Ch]
  ShadowSceneLight *i; // [esp+1Ch] [ebp-3Ch]
  ShadowSceneLight *NextActiveLight; // [esp+1Ch] [ebp-3Ch]
  ShadowSceneLight *j; // [esp+1Ch] [ebp-3Ch]
  ShadowSceneLight *v53; // [esp+1Ch] [ebp-3Ch]
  int v54; // [esp+20h] [ebp-38h]
  _DWORD *v55; // [esp+24h] [ebp-34h]
  int v56; // [esp+28h] [ebp-30h]
  char v57; // [esp+2Ch] [ebp-2Ch]
  int v58; // [esp+30h] [ebp-28h]
  int v59; // [esp+34h] [ebp-24h]
  char v60; // [esp+38h] [ebp-20h]
  char v61; // [esp+3Ch] [ebp-1Ch]
  int v62; // [esp+40h] [ebp-18h]
  char v63; // [esp+44h] [ebp-14h]
  char bPassInfoBit2; // [esp+48h] [ebp-10h]
  void (__thiscall ***bPassInfoBit2a)(void *, int); // [esp+48h] [ebp-10h]
  void (__thiscall ***bPassInfoBit2b)(void *, int); // [esp+48h] [ebp-10h]
  void (__thiscall ***bPassInfoBit2c)(void *, int); // [esp+48h] [ebp-10h]
  char v68; // [esp+4Ch] [ebp-Ch]
  void (__thiscall ***v69)(void *, int); // [esp+4Ch] [ebp-Ch]
  NiProperty *v70; // [esp+50h] [ebp-8h]
  void *slot; // [esp+54h] [ebp-4h] BYREF

  passInfo = this->member.passInfo; /*0x855248*/
  v7 = 0; /*0x85524b*/
  v57 = 0; /*0x855261*/
  LOBYTE(v59) = (passInfo & 1) != 0; /*0x855265*/
  LOBYTE(v58) = (passInfo & 0x10) != 0; /*0x855269*/
  if ( (passInfo & 1) != 0 || (v38 = 0, (passInfo & 0x10) != 0) ) /*0x855275*/
    v38 = 1; /*0x855277*/
  v41 = (this->member.passInfo & 0x80) != 0; /*0x855281*/
  LOBYTE(v56) = (passInfo & 8) != 0; /*0x855288*/
  bPassInfoBit2 = (passInfo & 2) != 0;          // Verified (Oblivion): class-1 PP-lighting pass builder caches passInfo bit 0x02 in bPassInfoBit2; it is forwarded into texture-effect pass construction, where clear selects selector 0x18C and set selects 0x18D. /*0x85528f*/
  if ( (passInfo & 0x20) != 0 || (v39 = 0, *(_WORD *)&OB_RendererGlobalState_010201A0[0x13] == 3) ) /*0x8552a0*/
    v39 = 1; /*0x8552a2*/
  LOBYTE(v62) = **((_DWORD **)this + 0x31) != 0; /*0x8552b3*/
  v63 = (this->member.passInfo & 0x400) != 0; /*0x8552c9*/
  v60 = geometry->member.geomData->member.m_pkColor != 0; /*0x8552d5*/
  v8 = (struct NiRTTI *)(*((int (__thiscall **)(BSShaderProperty *))this->vtbl + 1))(this); /*0x8552db*/
  if ( v8 ) /*0x8552df*/
  {
    while ( v8 != &NiRTTI_SpeedTreeBranchShaderProperty ) /*0x8552e6*/
    {
      v8 = v8->parent; /*0x8552ec*/
      if ( !v8 ) /*0x8552f1*/
        goto LABEL_10; /*0x8552f1*/
    }
    v9 = 1; /*0x8553f3*/
  }
  else
  {
LABEL_10:
    v9 = 0; /*0x8552f3*/
  }
  LOBYTE(v54) = (v9 != 0 ? (unsigned int)this : 0) != 0;
  v10 = (NiRTTI *)(*((int (__thiscall **)(BSShaderProperty *))this->vtbl + 1))(this); /*0x855309*/
  if ( v10 ) /*0x85530d*/
  {
    while ( v10 != &stru_B478B0 ) /*0x855315*/
    {
      v10 = v10->parent; /*0x85531b*/
      if ( !v10 ) /*0x855320*/
        goto LABEL_14; /*0x855320*/
    }
    v11 = 1; /*0x8553fa*/
  }
  else
  {
LABEL_14:
    v11 = 0; /*0x855322*/
  }
  v46 = (v11 != 0 ? (unsigned int)this : 0) != 0;
  v12 = (struct NiRTTI *)(*((int (__thiscall **)(BSShaderProperty *))this->vtbl + 1))(this); /*0x855336*/
  if ( v12 ) /*0x85533a*/
  {
    while ( v12 != &NiRTTI_SpeedTreeLeafShaderProperty ) /*0x855345*/
    {
      v12 = v12->parent; /*0x85534b*/
      if ( !v12 ) /*0x855350*/
        goto LABEL_18; /*0x855350*/
    }
    v13 = 1; /*0x855401*/
  }
  else
  {
LABEL_18:
    v13 = 0; /*0x855352*/
  }
  v47 = (v13 != 0 ? (unsigned int)this : 0) != 0;
  v42 = (this->member.passInfo & 0x4000) != 0; /*0x855367*/
  v45 = (this->member.passInfo & 0x8000) != 0; /*0x855371*/
  v48 = (this->member.passInfo & 0x10000) != 0; /*0x85537b*/
  Global = BSShaderAccumulator_GetOrCreateGlobal(); /*0x855380*/
  v44 = sub_7AA380(Global); /*0x85538c*/
  v15 = this->member.passInfo; /*0x855390*/
  if ( (v15 & 0x100000) == 0 || (v43 = 0, OB_DisplayDebugFlags_010201A0[2]) ) /*0x85539a*/
    v43 = 1; /*0x8553a6*/
  v68 = (v15 & 0x40000) != 0; /*0x8553b3*/
  NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)geometry, 0); /*0x8553bb*/
  v70 = NiPropertyByID; /*0x8553c2*/
  if ( !NiPropertyByID || (v61 = 1, ((int)NiPropertyByID[1].vtbl & 0x200) == 0) ) /*0x8553d8*/
    v61 = 0; /*0x8553da*/
  if ( 0.0 == *((float *)this + 0x29) ) /*0x8553eb*/
  {
    v41 = 0; /*0x8553ed*/
  }
  else if ( (this->member.passInfo & 0x20000) != 0 ) /*0x85540f*/
  {
    v41 = 1; /*0x855411*/
    v38 = 0; /*0x855416*/
  }
  if ( 0.0 == *((float *)this + 0x27) ) /*0x855425*/
    v38 = 0; /*0x855427*/
  v17 = *(_DWORD **)(GetShadowSceneNode(this->member.passInfo >> 0x1C) + 0x118); /*0x85543a*/
  v55 = v17; /*0x855447*/
  if ( !v38 /*0x85546f*/
    || (LightRef = ShadowSceneLight_GetLightRef(v17, &slot),
        v7 = 1,
        v57 = 1,
        v40 = 1,
        !NiPoint3__NotEqual((const NiPoint3 *)(*LightRef + 0xF8), &stru_B3FA90)) )
  {
    v40 = 0; /*0x85547c*/
  }
  if ( (v7 & 1) != 0 ) /*0x855484*/
  {
    v19 = (void (__thiscall ***)(void *, int))slot; /*0x855486*/
    v57 = v7 & 0xFE; /*0x85548f*/
    if ( slot ) /*0x855493*/
    {
      if ( !InterlockedDecrement((volatile LONG *)slot + 1) ) /*0x855499*/
      {
        if ( v19 ) /*0x8554a5*/
          (**v19)(v19, 1); /*0x8554af*/
      }
    }
  }
  v20 = outContext; /*0x8554b3*/
  v21 = (RenderPass_DecodedLayout *)emit; /*0x8554ba*/
  v22 = bPassInfoBit2; /*0x8554be*/
  if ( this->member.alpha < 1.0 || v70 && ((int)v70[1].vtbl & 1) != 0 ) /*0x8554d5*/
  {
    LOBYTE(outContext) = 1; /*0x8554dc*/
    if ( v44 ) /*0x8554e1*/
    {
      Lighting30__AppendPassSelector0Or2( /*0x8554f2*/
        this,
        geometry,
        v20,
        (RenderPass_DecodedLayout *)emit,
        (char *)&outContext,
        bPassInfoBit2);
      v38 = 0; /*0x8554f7*/
    }
    v39 = 1; /*0x8554fc*/
  }
  LOBYTE(outContext) = 1; /*0x855506*/
  if ( v45 || v48 ) /*0x855512*/
    BSShaderPPLightingProperty_AppendRefractionPass160To162( /*0x855528*/
      this,
      geometry,
      v20,
      v21,
      (char *)&outContext,
      bPassInfoBit2,
      v48);
  v23 = BSShaderLightingProperty__CountFrustumVisibleEnabledLights((BSShaderLightingProperty *)this); /*0x85552f*/
  if ( v43 ) /*0x85553c*/
  {
    if ( v39 ) /*0x855548*/
      goto LABEL_56; /*0x855548*/
    if ( rendererState == 0xF && !(_BYTE)v56 ) /*0x855559*/
    {
      if ( !v42 ) /*0x855563*/
      {
LABEL_56:
        if ( v23 ) /*0x85556d*/
        {
          if ( !v39 ) /*0x855575*/
          {
            FirstActiveLight = BSShaderLightingProperty__GetFirstActiveLight((BSShaderLightingProperty *)this); /*0x855587*/
            if ( v61 || bPassInfoBit2 || (_BYTE)v62 ) /*0x855599*/
            {
              if ( (rendererState & 1) != 0 ) /*0x8555c9*/
                sub_852150( /*0x8555ee*/
                  this,
                  geometry,
                  (int)v55,
                  (NiTPointerList_Node_void *)v20,
                  v21,
                  &outContext,
                  bPassInfoBit2,
                  v61,
                  v62,
                  v54);
              v24 = ShadowSceneLight_GetLightRef(v55, &slot); /*0x8555fc*/
              LOBYTE(emit) = NiPoint3__NotEqual((const NiPoint3 *)(*v24 + 0xEC), &stru_B3FA90); /*0x855617*/
              NiPointerSlot_Release(&slot); /*0x85561b*/
              if ( (_BYTE)emit ) /*0x855625*/
                sub_853720( /*0x855647*/
                  this,
                  geometry,
                  (int)v55,
                  (NiTPointerList_Node_void *)v20,
                  v21,
                  (char *)&outContext,
                  bPassInfoBit2,
                  0,
                  v56,
                  v54);
              v25 = ShadowSceneLight_GetLightRef(FirstActiveLight, &slot); /*0x855655*/
              LOBYTE(emit) = NiPoint3__NotEqual((const NiPoint3 *)(*v25 + 0xEC), &stru_B3FA90); /*0x855670*/
              NiPointerSlot_Release(&slot); /*0x855674*/
              if ( (_BYTE)emit ) /*0x85567e*/
                sub_853720( /*0x8556a0*/
                  this,
                  geometry,
                  (int)FirstActiveLight,
                  (NiTPointerList_Node_void *)v20,
                  v21,
                  (char *)&outContext,
                  bPassInfoBit2,
                  1,
                  v56,
                  v54);
            }
            else
            {
              sub_853580( /*0x8555ba*/
                this,
                (int)geometry,
                (int)v55,
                (int)FirstActiveLight,
                (NiTPointerList_Node_void *)v20,
                (int)v21,
                &outContext,
                0,
                v54);
            }
            for ( i = BSShaderLightingProperty__GetNextActiveLight((BSShaderLightingProperty *)this); /*0x8556b2*/
                  i;
                  i = BSShaderLightingProperty__GetNextActiveLight((BSShaderLightingProperty *)this) )
            {
              v26 = ShadowSceneLight_GetLightRef(i, &slot); /*0x8556c9*/
              LOBYTE(emit) = NiPoint3__NotEqual((const NiPoint3 *)(*v26 + 0xEC), &stru_B3FA90); /*0x8556e0*/
              if ( slot ) /*0x8556ea*/
              {
                bPassInfoBit2a = (void (__thiscall ***)(void *, int))slot; /*0x8556ec*/
                if ( !InterlockedDecrement((volatile LONG *)slot + 1) ) /*0x8556f4*/
                  (**bPassInfoBit2a)(bPassInfoBit2a, 1); /*0x85570e*/
              }
              if ( (_BYTE)emit ) /*0x855715*/
                sub_853720( /*0x855737*/
                  this,
                  geometry,
                  (int)i,
                  (NiTPointerList_Node_void *)v20,
                  v21,
                  (char *)&outContext,
                  v22,
                  1,
                  v56,
                  v54);
            }
            sub_853970( /*0x85577c*/
              this,
              geometry,
              (int)v55,
              (NiTPointerList_Node_void *)v20,
              (char)v21,
              (char *)&outContext,
              v22,
              v56,
              v63,
              v60,
              v54,
              v68);
            if ( v38 ) /*0x855786*/
            {
              NextActiveLight = BSShaderLightingProperty__GetFirstActiveLight((BSShaderLightingProperty *)this); /*0x855798*/
              if ( !v40 /*0x8557ca*/
                || (v27 = ShadowSceneLight_GetLightRef(v55, &slot),
                    v57 |= 2u,
                    v28 = NiPoint3__NotEqual((const NiPoint3 *)(*v27 + 0xEC), &stru_B3FA90),
                    LOBYTE(emit) = 1,
                    !v28) )
              {
                LOBYTE(emit) = 0; /*0x8557cc*/
              }
              if ( (v57 & 2) != 0 ) /*0x8557d6*/
                NiPointerSlot_Release(&slot); /*0x8557dc*/
              if ( (_BYTE)emit ) /*0x8557e6*/
              {
                sub_853DC0( /*0x855812*/
                  this,
                  (int)geometry,
                  (int)v55,
                  v20,
                  (int)v21,
                  (char *)&outContext,
                  v22,
                  0,
                  v56,
                  v59,
                  v58,
                  v54);
              }
              else
              {
                sub_853DC0( /*0x855843*/
                  this,
                  (int)geometry,
                  (int)NextActiveLight,
                  v20,
                  (int)v21,
                  (char *)&outContext,
                  v22,
                  1,
                  v56,
                  v59,
                  v58,
                  v54);
                NextActiveLight = BSShaderLightingProperty__GetNextActiveLight((BSShaderLightingProperty *)this); /*0x85584f*/
              }
              for ( ; /*0x855858*/
                    NextActiveLight;
                    NextActiveLight = BSShaderLightingProperty__GetNextActiveLight((BSShaderLightingProperty *)this) )
              {
                v29 = ShadowSceneLight_GetLightRef(NextActiveLight, &slot); /*0x855869*/
                LOBYTE(emit) = NiPoint3__NotEqual((const NiPoint3 *)(*v29 + 0xEC), &stru_B3FA90); /*0x855884*/
                NiPointerSlot_Release(&slot); /*0x855888*/
                if ( (_BYTE)emit ) /*0x855892*/
                  sub_853DC0( /*0x8558be*/
                    this,
                    (int)geometry,
                    (int)NextActiveLight,
                    v20,
                    (int)v21,
                    (char *)&outContext,
                    v22,
                    1,
                    v56,
                    v59,
                    v58,
                    v54);
              }
            }
            if ( v41 ) /*0x8558d7*/
LABEL_89:
              sub_853F80(this, (int)geometry, v20, (int)v21, (char *)&outContext, v22, v60); /*0x8558d9*/
LABEL_90:
            if ( !v42 ) /*0x8558f7*/
              goto LABEL_92; /*0x8558f7*/
            goto LABEL_91; /*0x8558f7*/
          }
        }
        else if ( !v39 && v40 ) /*0x85594e*/
        {
          goto LABEL_102; /*0x85594e*/
        }
        if ( !v46 && !v47 ) /*0x85595c*/
        {
          sub_852470( /*0x855990*/
            this,
            (int)geometry,
            (int)v55,
            (NiTPointerList_Node_void *)v20,
            (int)v21,
            &outContext,
            bPassInfoBit2,
            v61,
            v62,
            v63,
            1,
            v60,
            v54);
          v39 = 1; /*0x855995*/
          goto LABEL_103; /*0x85599a*/
        }
LABEL_102:
        sub_852470( /*0x85599c*/
          this,
          (int)geometry,
          (int)v55,
          (NiTPointerList_Node_void *)v20,
          (int)v21,
          &outContext,
          bPassInfoBit2,
          v61,
          v62,
          v63,
          0,
          v60,
          v54);
LABEL_103:
        if ( v40 ) /*0x8559d8*/
        {
          if ( !v39 ) /*0x8559df*/
            sub_853DC0( /*0x855a0b*/
              this,
              (int)geometry,
              (int)v55,
              v20,
              (int)v21,
              (char *)&outContext,
              bPassInfoBit2,
              0,
              v56,
              v59,
              v58,
              v54);
        }
        if ( v41 ) /*0x855a15*/
          goto LABEL_89; /*0x855a15*/
        goto LABEL_90; /*0x855a15*/
      }
LABEL_91:
      sub_854380(this, (NiNode *)geometry, (int)v55, (NiTPointerList_Node_void *)v20, (char)v21, (char *)&outContext, 0); /*0x8558f9*/
      goto LABEL_92; /*0x85590e*/
    }
  }
  if ( v42 ) /*0x855a37*/
    goto LABEL_91; /*0x855a37*/
  LOBYTE(outContext) = 1; /*0x855a42*/
  if ( (rendererState & 1) != 0 ) /*0x855a47*/
    sub_852150( /*0x855a6c*/
      this,
      geometry,
      (int)v55,
      (NiTPointerList_Node_void *)v20,
      v21,
      &outContext,
      bPassInfoBit2,
      v61,
      v62,
      v54);
  NiNode_GetNiPropertyByID((NiNode *)geometry, 0); /*0x855a77*/
  if ( (rendererState & 2) != 0 ) /*0x855a81*/
  {
    v31 = ShadowSceneLight_GetLightRef(v55, &slot); /*0x855a90*/
    LOBYTE(emit) = NiPoint3__NotEqual((const NiPoint3 *)(*v31 + 0xEC), &stru_B3FA90); /*0x855aa7*/
    if ( slot ) /*0x855ab1*/
    {
      bPassInfoBit2b = (void (__thiscall ***)(void *, int))slot; /*0x855ab3*/
      if ( !InterlockedDecrement((volatile LONG *)slot + 1) ) /*0x855abb*/
        (**bPassInfoBit2b)(bPassInfoBit2b, 1); /*0x855ad5*/
    }
    if ( (_BYTE)emit ) /*0x855adc*/
      sub_853720(this, geometry, (int)v55, (NiTPointerList_Node_void *)v20, v21, (char *)&outContext, v22, 0, v56, v54); /*0x855afe*/
    for ( j = BSShaderLightingProperty__GetFirstActiveLight((BSShaderLightingProperty *)this); /*0x855b10*/
          j;
          j = BSShaderLightingProperty__GetNextActiveLight((BSShaderLightingProperty *)this) )
    {
      v32 = ShadowSceneLight_GetLightRef(j, &slot); /*0x855b1f*/
      v33 = stru_B3FA90.x == *(float *)(*v32 + 0xEC) /*0x855b65*/
         && stru_B3FA90.y == *(float *)(*v32 + 0xF0)
         && stru_B3FA90.z == *(float *)(*v32 + 0xF4);
      LOBYTE(emit) = !v33; /*0x855b74*/
      if ( slot ) /*0x855b7b*/
      {
        bPassInfoBit2c = (void (__thiscall ***)(void *, int))slot; /*0x855b7d*/
        if ( !InterlockedDecrement((volatile LONG *)slot + 1) ) /*0x855b85*/
          (**bPassInfoBit2c)(bPassInfoBit2c, 1); /*0x855b9f*/
      }
      if ( (_BYTE)emit ) /*0x855ba6*/
        sub_853720(this, geometry, (int)j, (NiTPointerList_Node_void *)v20, v21, (char *)&outContext, v22, 1, v56, v54); /*0x855bc8*/
    }
  }
  if ( (rendererState & 4) != 0 ) /*0x855be5*/
    sub_853970( /*0x855c14*/
      this,
      geometry,
      (int)v55,
      (NiTPointerList_Node_void *)v20,
      (char)v21,
      (char *)&outContext,
      v22,
      v56,
      v63,
      v60,
      v54,
      v68);
  if ( v38 && (rendererState & 8) != 0 ) /*0x855c29*/
  {
    v53 = BSShaderLightingProperty__GetFirstActiveLight((BSShaderLightingProperty *)this); /*0x855c3b*/
    if ( !v40 /*0x855c6d*/
      || (v34 = ShadowSceneLight_GetLightRef(v55, &slot),
          v57 |= 4u,
          v35 = NiPoint3__NotEqual((const NiPoint3 *)(*v34 + 0xEC), &stru_B3FA90),
          LOBYTE(emit) = 1,
          !v35) )
    {
      LOBYTE(emit) = 0; /*0x855c6f*/
    }
    if ( (v57 & 4) != 0 ) /*0x855c79*/
      NiPointerSlot_Release(&slot); /*0x855c7f*/
    if ( (_BYTE)emit ) /*0x855c89*/
    {
      sub_853DC0(this, (int)geometry, (int)v55, v20, (int)v21, (char *)&outContext, v22, 0, v56, v59, v58, v54); /*0x855cb5*/
      LOBYTE(outContext) = 0; /*0x855cba*/
LABEL_143:
      while ( v53 ) /*0x855d3f*/
      {
        v37 = ShadowSceneLight_GetLightRef(v53, &slot); /*0x855d4e*/
        LOBYTE(emit) = NiPoint3__NotEqual((const NiPoint3 *)(*v37 + 0xEC), &stru_B3FA90); /*0x855d65*/
        if ( slot ) /*0x855d6f*/
        {
          v69 = (void (__thiscall ***)(void *, int))slot; /*0x855d71*/
          if ( !InterlockedDecrement((volatile LONG *)slot + 1) ) /*0x855d79*/
            (**v69)(v69, 1); /*0x855d93*/
        }
        if ( (_BYTE)emit ) /*0x855d9a*/
          sub_853DC0(this, (int)geometry, (int)v53, v20, (int)v21, (char *)&outContext, v22, 1, v56, v59, v58, v54); /*0x855dc6*/
        v53 = BSShaderLightingProperty__GetNextActiveLight((BSShaderLightingProperty *)this); /*0x855dd4*/
      }
      goto LABEL_150; /*0x855dd8*/
    }
    if ( v53 ) /*0x855cc6*/
    {
      v36 = ShadowSceneLight_GetLightRef(v53, &slot); /*0x855cd5*/
      LOBYTE(emit) = NiPoint3__NotEqual((const NiPoint3 *)(*v36 + 0xEC), &stru_B3FA90); /*0x855cf0*/
      NiPointerSlot_Release(&slot); /*0x855cf4*/
      if ( (_BYTE)emit ) /*0x855cfe*/
      {
        sub_853DC0(this, (int)geometry, (int)v53, v20, (int)v21, (char *)&outContext, v22, 1, v56, v59, v58, v54); /*0x855d2a*/
        v53 = BSShaderLightingProperty__GetNextActiveLight((BSShaderLightingProperty *)this); /*0x855d36*/
      }
      goto LABEL_143; /*0x855d36*/
    }
  }
LABEL_150:
  if ( v41 && (rendererState & 8) != 0 ) /*0x855dee*/
    sub_853F80(this, (int)geometry, v20, (int)v21, (char *)&outContext, v22, v60); /*0x855e08*/
LABEL_92:
  if ( rendererState == 0xF && !v39 ) /*0x855923*/
  {
    v30 = v70 && ((int)v70[1].vtbl & 1) != 0; /*0x85593f*/
    sub_854190(this, geometry, (NiTPointerList_Node_void *)v20, v21, (char *)&outContext, v22, v54, v30); /*0x855e29*/
  }
  if ( *((_DWORD *)this + 0x38) )               // Verified (Oblivion): class-1 PP-lighting pass construction checks the property-owned TextureEffectData pointer at +0xE0; when present, it calls BSShaderProperty_AppendTextureEffectPass to enqueue the BSSM_TEXEFFECT or BSSM_TEXEFFECT_S render pass according to passInfo bit 0x02 and the render-state class. /*0x855e2e*/
    BSShaderProperty_AppendTextureEffectPass(this, geometry, v20, (int)v21, (char *)&outContext, v22);// Verified (Oblivion): PP-lighting class-1 pass builder calls BSShaderProperty_AppendTextureEffectPass when the property-owned TextureEffectData pointer at +0xE0 is non-null. The resulting selectors 0x18C/0x18D are later consumed by ShadowLightShader__SetupRenderPass, which binds the effect texture and blend/Z-test parameters. /*0x855e46*/
  if ( OB_RendererGlobalState_010201A0[0x1DA] ) /*0x855e4b*/
  {
    if ( (rendererState & 1) != 0 ) /*0x855e59*/
      Lighting30__AppendPassSelector19EOr19F(this, geometry, (NiTPointerList_Node_void *)v20, v21, v22, v62); /*0x855e6a*/
  }
}
