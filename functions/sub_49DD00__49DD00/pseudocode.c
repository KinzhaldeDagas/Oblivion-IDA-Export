void __thiscall sub_49DD00(Ni2DBuffer **this, int arg0, float a3)
{
  bool v3; // zf
  int v5; // esi
  unsigned int v6; // ecx
  int v7; // eax
  Ni2DBuffer *v8; // edi
  NiSourceTexture *v9; // esi
  unsigned __int16 **v10; // esi
  NiScreenElementsData *v11; // eax
  Ni2DBuffer *v12; // eax
  unsigned int v13; // edi
  unsigned int i; // ecx
  unsigned int v15; // eax
  bool v16; // cf
  NiSourceTexture *v17; // eax
  NiSourceTexture *v18; // ebx
  double v19; // st7
  NiSourceTexture *v20; // eax
  NiScreenElementsData *v21; // edx
  double v22; // st5
  double v23; // st6
  int v24; // eax
  NiTriShape *v25; // eax
  NiTriShape *v26; // edi
  int v27; // eax
  volatile LONG *v28; // esi
  NiTriShape **v29; // ebx
  __int64 v30; // kr00_8
  NiTexturingProperty *v31; // eax
  NiTexturingProperty *v32; // esi
  NiSourceTexture *v33; // [esp+28h] [ebp-164h]
  NiTexture *v34; // [esp+28h] [ebp-164h]
  bool v35; // [esp+43h] [ebp-149h]
  NiSourceTexture *outTexture; // [esp+44h] [ebp-148h] BYREF
  unsigned int v37; // [esp+48h] [ebp-144h]
  float v38; // [esp+4Ch] [ebp-140h]
  NiScreenElementsData *a2; // [esp+50h] [ebp-13Ch]
  float v40; // [esp+54h] [ebp-138h]
  __int64 v41; // [esp+58h] [ebp-134h]
  int v42; // [esp+60h] [ebp-12Ch]
  float v43; // [esp+64h] [ebp-128h]
  NiSourceTexture *v44; // [esp+68h] [ebp-124h] BYREF
  __int64 v45; // [esp+6Ch] [ebp-120h]
  int v46; // [esp+74h] [ebp-118h]
  char ArgList[260]; // [esp+78h] [ebp-114h] BYREF
  int v48; // [esp+188h] [ebp-4h]

  v3 = (MEMORY[0xB33E90][0x13DC] & 1) == 0; /*0x49dd3b*/
  v46 = arg0; /*0x49dd4b*/
  if ( v3 ) /*0x49dd4f*/
  {
    *(_DWORD *)&MEMORY[0xB33E90][0x13DC] |= 1u; /*0x49dd51*/
    sub_444060(&MEMORY[0xB33E90][0x13D4], (int)"uSurfaceTextureSize:Water", 0x80); /*0x49dd72*/
    atexit(sub_A1A660); /*0x49dd7c*/
    v48 = 0xFFFFFFFF; /*0x49dd84*/
  }
  v35 = 0; /*0x49dd91*/
  sub_49CA50((char **)this); /*0x49dd96*/
  v5 = (_DWORD)*(this + 6) * (_DWORD)*(this + 6); /*0x49dd9e*/
  if ( v5 )
  {
    v6 = (unsigned __int64)(unsigned int)v5 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v5;
    v7 = FormHeapAlloc(__CFADD__(v6, 4) ? 0xFFFFFFFF : v6 + 4);
    a2 = (NiScreenElementsData *)v7; /*0x49ddcc*/
    v48 = 1; /*0x49ddd2*/
    if ( v7 ) /*0x49dddd*/
    {
      v8 = (Ni2DBuffer *)(v7 + 4); /*0x49ddea*/
      *(_DWORD *)v7 = v5; /*0x49ddf0*/
      ArrayConstructor( /*0x49ddf2*/
        (char *)(v7 + 4),
        4u,
        v5,
        (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
        (void (__thiscall *)(void *))NiPointerSlot_Release);
    }
    else
    {
      v8 = 0; /*0x49ddf9*/
    }
    v48 = 0xFFFFFFFF; /*0x49ddfb*/
    *(this + 2) = v8; /*0x49de06*/
  }
  if ( *(this + 2) ) /*0x49de09*/
  {
    v3 = byte_B07050 == 0; /*0x49de13*/
    v38 = flt_B07040; /*0x49de20*/
    v43 = v38 - a3; /*0x49de2f*/
    if ( v3 || !OB_RendererGlobalState_010201A0.pad_00D[0x98] ) /*0x49de35*/
    {
      _sprintf(ArgList, "%s00.DDS", (const char *)*(this + 3)); /*0x49de50*/
      if ( MEMORY[0xB33A04] ) /*0x49de55*/
        MEMORY[0xB33A04]->vtbl->FindFile(MEMORY[0xB33A04], ArgList, (UInt32)ArgList, 0, 0xFFFFFFFF); /*0x49de71*/
      if ( !*(this + 4) ) /*0x49de73*/
      {
        v33 = *OB_TES_LoadOrFindSourceTexture_010201A0(&outTexture, ArgList, 1, 0); /*0x49de97*/
        v48 = 2; /*0x49de9a*/
        NiSmartPointer_Set__(this + 4, (Ni2DBuffer *)v33); /*0x49dea5*/
        v48 = 0xFFFFFFFF; /*0x49deb0*/
        if ( *(float *)&outTexture != 0.0 ) /*0x49debb*/
        {
          v9 = outTexture; /*0x49debd*/
          if ( !InterlockedDecrement((volatile LONG *)&outTexture->members) ) /*0x49dec3*/
            v9->vtbl->super.super.super.Destructor((NiRefObject *)v9, 1); /*0x49ded9*/
        }
      }
      v10 = (unsigned __int16 **)(this + 7); /*0x49dedf*/
      if ( !*(this + 7) ) /*0x49dedb*/
      {
        v11 = (NiScreenElementsData *)FormHeapAlloc(0x5Cu); /*0x49deea*/
        a2 = v11; /*0x49def2*/
        v48 = 3; /*0x49def8*/
        if ( v11 ) /*0x49df03*/
          v12 = (Ni2DBuffer *)NiFlipController::NiFlipController((NiFlipController *)v11); /*0x49df07*/
        else
          v12 = 0; /*0x49df0e*/
        v48 = 0xFFFFFFFF; /*0x49df13*/
        NiSmartPointer_Set__(this + 7, v12); /*0x49df1e*/
        sub_6D1BC0(*v10, (unsigned int)*(this + 4), 0); /*0x49df2a*/
        v13 = 1; /*0x49df2f*/
        for ( i = 1; ; i = v37 + 1 ) /*0x49df34*/
        {
          v15 = dword_B07088; /*0x49df36*/
          v16 = i < dword_B07088; /*0x49df3b*/
          v37 = i; /*0x49df3d*/
          if ( !v16 ) /*0x49df41*/
            break; /*0x49df41*/
          _sprintf(ArgList, "%s%02d.DDS", (const char *)*(this + 3), i); /*0x49df56*/
          OB_TES_LoadOrFindSourceTexture_010201A0(&v44, ArgList, 1, 0); /*0x49df72*/
          v17 = v44; /*0x49df77*/
          v48 = 4; /*0x49df7d*/
          if ( v44 ) /*0x49df88*/
          {
            sub_6D1BC0(*v10, (unsigned int)v44, v13); /*0x49df8e*/
            v17 = v44; /*0x49df93*/
            ++v13; /*0x49df97*/
          }
          v48 = 0xFFFFFFFF; /*0x49df9c*/
          if ( v17 ) /*0x49dfa7*/
          {
            v18 = v17; /*0x49dfa9*/
            if ( !InterlockedDecrement((volatile LONG *)&v17->members) ) /*0x49dfaf*/
              v18->vtbl->super.super.super.Destructor((NiRefObject *)v18, 1); /*0x49dfc5*/
          }
        }
        dword_B07088 = v13; /*0x49dfd3*/
        v35 = v15 > v13; /*0x49dfe1*/
        (*v10)[4] = (*v10)[4] & 0xFFF6 | 1; /*0x49dfef*/
        (*v10)[4] &= 0xFFF9u; /*0x49dff5*/
      }
    }
    v19 = v38; /*0x49dffb*/
    v20 = (NiSourceTexture *)Double_To_SInt32(v38); /*0x49e001*/
    v21 = *(NiScreenElementsData **)&MEMORY[0xB33E90][0x13D4]; /*0x49e006*/
    outTexture = v20; /*0x49e00c*/
    a2 = v21; /*0x49e018*/
    v22 = (double)(int)v21; /*0x49e01c*/
    if ( (int)v21 < 0 ) /*0x49e020*/
      v22 = v22 + flt_A2FC78; /*0x49e022*/
    v23 = (double)(int)v20 / (v22 * flt_B07048); /*0x49e037*/
    outTexture = (NiSourceTexture *)((unsigned __int16)v37 | 0xC00); /*0x49e03e*/
    v45 = (__int64)v23; /*0x49e046*/
    v24 = (__int64)v23; /*0x49e04a*/
    if ( !v24 ) /*0x49e055*/
      v24 = 1; /*0x49e057*/
    *(float *)&outTexture = v19 + v19; /*0x49e06b*/
    a2 = (NiScreenElementsData *)sub_49D2A0( /*0x49e088*/
                                   *(float *)&outTexture,
                                   *(float *)&outTexture,
                                   (int)v21,
                                   v24,
                                   1,
                                   COERCE_FLOAT(1));
    *(float *)&v41 = v43; /*0x49e08c*/
    v3 = *(this + 6) == 0; /*0x49e092*/
    *((float *)&v41 + 1) = 0.0; /*0x49e097*/
    v37 = 0; /*0x49e09b*/
    *(float *)&outTexture = 0.0; /*0x49e0a3*/
    v38 = v38 + v38; /*0x49e0a9*/
    if ( !v3 ) /*0x49e0ad*/
    {
      do /*0x49e232*/
      {
        v3 = *(this + 6) == 0; /*0x49e0b3*/
        v40 = v43; /*0x49e0bb*/
        v42 = 0; /*0x49e0bf*/
        if ( !v3 ) /*0x49e0c7*/
        {
          do /*0x49e212*/
          {
            v25 = (NiTriShape *)FormHeapAlloc(0xC0u); /*0x49e0d2*/
            LODWORD(v45) = v25; /*0x49e0da*/
            v48 = 5; /*0x49e0e0*/
            if ( v25 ) /*0x49e0eb*/
              v26 = OB_NiTriShape_ctorWithData_010201A0(v25, (NiTriShapeData *)a2); /*0x49e0f9*/
            else
              v26 = 0; /*0x49e0fd*/
            v48 = 0xFFFFFFFF; /*0x49e101*/
            if ( v26 ) /*0x49e10c*/
            {
              v27 = (int)*(this + 2); /*0x49e112*/
              v28 = *(volatile LONG **)(v27 + 4 * v37); /*0x49e119*/
              v29 = (NiTriShape **)(v27 + 4 * v37); /*0x49e11e*/
              if ( v28 != (volatile LONG *)v26 ) /*0x49e121*/
              {
                if ( v28 ) /*0x49e125*/
                {
                  if ( !InterlockedDecrement(v28 + 1) ) /*0x49e12b*/
                    (**(void (__thiscall ***)(volatile LONG *, int))v28)(v28, 1); /*0x49e141*/
                }
                *v29 = v26; /*0x49e147*/
                InterlockedIncrement((volatile LONG *)v26 + 1); /*0x49e149*/
              }
              v30 = v41; /*0x49e157*/
              *((float *)v26 + 0x15) = v40; /*0x49e15b*/
              *((_QWORD *)v26 + 0xB) = v30; /*0x49e15e*/
              if ( !sub_43F4D0() ) /*0x49e164*/
              {
                v31 = (NiTexturingProperty *)FormHeapAlloc(0x30u); /*0x49e16f*/
                LODWORD(v45) = v31; /*0x49e177*/
                v48 = 6; /*0x49e17d*/
                if ( v31 ) /*0x49e188*/
                  v32 = NiTexturingProperty::NiTexturingProperty(v31); /*0x49e191*/
                else
                  v32 = 0; /*0x49e195*/
                v34 = (NiTexture *)*(this + 4); /*0x49e19a*/
                v48 = 0xFFFFFFFF; /*0x49e19d*/
                OB_NiTexturingProperty_SetBaseTexture_010201A0(v32, v34); /*0x49e1a8*/
                NiTexturingProperty_SetBaseMapFilterMode(v32, 2); /*0x49e1b1*/
                v32->unk018 = v32->unk018 & 0xFFF1 | 4; /*0x49e1c3*/
                (*((void (__thiscall **)(_DWORD, NiTexturingProperty *))(*(this + 7))->__vftable + 0x16))( /*0x49e1d0*/
                  *(this + 7),
                  v32);
                LOWORD((*(this + 7))->members.width) |= 8u; /*0x49e1d5*/
                sub_405680((NiNode *)v26, (BSShaderProperty *)v32); /*0x49e1dd*/
              }
              (*(void (__thiscall **)(int, NiTriShape *, int))(*(_DWORD *)v46 + 0x84))(v46, v26, 1); /*0x49e1f1*/
              ++v37; /*0x49e1fb*/
              v40 = v40 + v38; /*0x49e200*/
            }
            v16 = ++v42 < (unsigned int)*(this + 6); /*0x49e20b*/
          }
          while ( v16 ); /*0x49e212*/
        }
        v16 = (char *)&outTexture->vtbl + 1 < (char *)*(this + 6); /*0x49e227*/
        outTexture = (NiSourceTexture *)((char *)outTexture + 1); /*0x49e22a*/
        *(float *)&v41 = *(float *)&v41 + v38; /*0x49e22e*/
      }
      while ( v16 ); /*0x49e232*/
    }
    if ( v35 ) /*0x49e23d*/
      PrintError("Water art assets don't match .ini settings.\r\n"); /*0x49e244*/
  }
}
