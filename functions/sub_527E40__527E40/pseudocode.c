// CustomAnimSupport decode: NPC_ loader dispatches KFFZ to TESAnimation_LoadAnimationChunk at 0x5284BB.
char __thiscall TESNPC_LoadForm(int this, Data *a2)
{
  Data *v2; // ebx
  signed int ChunkType; // eax
  const char *v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  const char *v14; // eax
  TESForm *v15; // eax
  void *v16; // eax
  const char *v17; // eax
  TESForm *v18; // eax
  void *v19; // eax
  const char *v20; // eax
  int v21; // edi
  unsigned int v22; // eax
  int v23; // ecx
  int v24; // ecx
  double v25; // st7
  bool v26; // cf
  int v27; // [esp+0h] [ebp-74h]
  int v28; // [esp+0h] [ebp-74h]
  unsigned int v29; // [esp+0h] [ebp-74h]
  const char *v30; // [esp+4h] [ebp-70h]
  const char *v31; // [esp+4h] [ebp-70h]
  int v32; // [esp+4h] [ebp-70h]
  int v33; // [esp+4h] [ebp-70h]
  int v34; // [esp+8h] [ebp-6Ch] BYREF
  int v35; // [esp+Ch] [ebp-68h]
  char v36[4]; // [esp+18h] [ebp-5Ch] BYREF
  int v37; // [esp+1Ch] [ebp-58h]
  int v38; // [esp+20h] [ebp-54h]
  Data *v39; // [esp+24h] [ebp-50h]
  int v40; // [esp+28h] [ebp-4Ch] BYREF
  char v41[4]; // [esp+2Ch] [ebp-48h] BYREF
  int v42; // [esp+30h] [ebp-44h]
  char Dst[4]; // [esp+34h] [ebp-40h] BYREF
  int v44; // [esp+38h] [ebp-3Ch]
  char *v45; // [esp+3Ch] [ebp-38h]
  unsigned int v46; // [esp+40h] [ebp-34h]
  TESForm *a1; // [esp+44h] [ebp-30h] BYREF
  TESForm *a1_4; // [esp+48h] [ebp-2Ch] BYREF
  float a1_8; // [esp+4Ch] [ebp-28h] BYREF
  char a1_15; // [esp+53h] [ebp-21h]
  unsigned int a1_16; // [esp+54h] [ebp-20h] BYREF
  _WORD a1_20[11]; // [esp+58h] [ebp-1Ch] BYREF
  char v53; // [esp+6Eh] [ebp-6h]

  v2 = a2; /*0x527e51*/
  v39 = a2; /*0x527e5a*/
  if ( (unsigned __int8)TESFile_GetRecordType(a2) != 0x23 ) /*0x527e64*/
    return 0; /*0x527e68*/
  *(_DWORD *)(this + 0x1EC) = a2->currentRecordOffset; /*0x527e76*/
  TESFile_InitializeFormFromRecord(a2, (TESForm *)this, v34, v35); /*0x527e7c*/
  TESForm_SetIsLinked((TESForm *)this, 0); /*0x527e86*/
  a1_15 = 0; /*0x527e8d*/
  ChunkType = TESFile_GetChunkType(a2); /*0x527e91*/
  if ( ChunkType ) /*0x527e98*/
  {
    while ( ChunkType <= 0x4D414E43 ) /*0x527ea3*/
    {
      if ( ChunkType == 0x4D414E43 ) /*0x527ea9*/
      {
        a1_16 = 0; /*0x5280ba*/
        TESFile_GetChunkData4(v2, (char *)&a1_16); /*0x5280bd*/
        *(_DWORD *)(this + 0x104) = a1_16; /*0x5280c5*/
        goto LABEL_85; /*0x5280cb*/
      }
      if ( ChunkType > 0x41544144 ) /*0x527eb4*/
      {
        if ( ChunkType > 0x49524353 ) /*0x527fef*/
        {
          if ( ChunkType != 0x4C444F4D ) /*0x52808e*/
          {
            if ( ChunkType == 0x4C4C5546 ) /*0x528099*/
              TESFullname_Load((TESFullName *)(this + 0xA0), v2); /*0x5280a7*/
            goto LABEL_85; /*0x5280af*/
          }
        }
        else
        {
          if ( ChunkType == 0x49524353 ) /*0x527ff5*/
          {
            a1_16 = 0; /*0x528067*/
            TESFile_GetChunkData4(v2, (char *)&a1_16); /*0x52806a*/
            *(_DWORD *)(this + 0xC8) = a1_16; /*0x528072*/
            TESScriptableForm_Link(this + 0xC4, (TESForm *)this); /*0x52807f*/
            goto LABEL_85; /*0x528084*/
          }
          if ( ChunkType != 0x42444F4D ) /*0x527ffc*/
          {
            if ( ChunkType == 0x44494445 ) /*0x528007*/
            {
              _alloca_(v34); /*0x528039*/
              TESFile_GetChunkData(v2, (char *)&v34, 0x200u); /*0x528048*/
              (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 0xD8))(this, &v34); /*0x528058*/
            }
            else if ( ChunkType == 0x44494B50 ) /*0x52800e*/
            {
              a1_16 = 0; /*0x52801a*/
              TESFile_GetChunkData4(v2, (char *)&a1_16); /*0x52801d*/
              TESAIForm_AddPackage((_DWORD *)(this + 0x68), a1_16); /*0x528029*/
            }
            goto LABEL_85; /*0x52802e*/
          }
        }
LABEL_82:
        TESModel_Load((float *)(this + 0xAC), v2); /*0x52849a*/
        goto LABEL_85; /*0x5284aa*/
      }
      if ( ChunkType == 0x41544144 ) /*0x527eba*/
      {
        v9 = v2->currentChunk.length - sub_46BFD0((TESForm *)this); /*0x527f42*/
        if ( v9 == 0x17 ) /*0x527f47*/
        {
          memset(a1_20, 0, sizeof(a1_20)); /*0x527f53*/
          v53 = 0; /*0x527f66*/
          TESForm_LoadGenericComponents((TESForm *)this, v2, a1_20, 0x17u); /*0x527f69*/
          v10 = *(_DWORD *)((char *)&a1_20[2] + 1); /*0x527f71*/
          v11 = *(_DWORD *)((char *)&a1_20[4] + 1); /*0x527f74*/
          *(_DWORD *)(this + 0xEC) = *(_DWORD *)((char *)a1_20 + 1); /*0x527f77*/
          v12 = *(_DWORD *)((char *)&a1_20[6] + 1); /*0x527f7d*/
          *(_DWORD *)(this + 0xF0) = v10; /*0x527f80*/
          v13 = *(_DWORD *)((char *)&a1_20[8] + 1); /*0x527f86*/
          *(_DWORD *)(this + 0xF4) = v11; /*0x527f89*/
          LOBYTE(v11) = HIBYTE(a1_20[0xA]); /*0x527f8f*/
          *(_DWORD *)(this + 0xF8) = v12; /*0x527f92*/
          *(_DWORD *)(this + 0xFC) = v13; /*0x527f98*/
          *(_BYTE *)(this + 0x100) = v11; /*0x527f9e*/
        }
        else if ( v9 == 0x15 ) /*0x527fac*/
        {
          TESForm_LoadGenericComponents((TESForm *)this, v2, (void *)(this + 0xEC), 0x15u); /*0x527fb9*/
        }
        else
        {
          v14 = (const char *)(*(int (__thiscall **)(int, _DWORD, char *))(*(_DWORD *)this + 0xD4))( /*0x527fd5*/
                                this,
                                *(_DWORD *)(this + 0xC),
                                v2->name);
          PrintError("Unrecognized data format for NPC '%s' (%08X) in file '%s'.", v14, v28, v31); /*0x527fdd*/
        }
        goto LABEL_85; /*0x527fa4*/
      }
      if ( ChunkType <= 0x334D414E ) /*0x527ec1*/
      {
        if ( (ChunkType == 0x334D414E || ChunkType == 0x304D414E || ChunkType == 0x314D414E || ChunkType == 0x324D414E) /*0x527ee2*/
          && !a1_15 )
        {
          v6 = (const char *)(*(int (__thiscall **)(int, _DWORD, char *))(*(_DWORD *)this + 0xD4))( /*0x527efa*/
                               this,
                               *(_DWORD *)(this + 0xC),
                               v2->name);
          PrintError("Found face texture for NPC '%s' (%08X) in file '%s'", v6, v27, v30); /*0x527f02*/
          a1_15 = 1; /*0x527f0a*/
        }
        goto LABEL_85; /*0x527f0e*/
      }
      if ( ChunkType == 0x394D414E ) /*0x527f18*/
        goto LABEL_64; /*0x527f18*/
      if ( ChunkType == 0x41474746 ) /*0x527f23*/
      {
        v7 = 0; /*0x527f29*/
        v8 = 1; /*0x527f2b*/
        goto LABEL_75; /*0x527f30*/
      }
LABEL_85:
      if ( TESFile_GetNextChunk(v2) ) /*0x5284c2*/
      {
        ChunkType = TESFile_GetChunkType(v2); /*0x5284cd*/
        if ( ChunkType ) /*0x5284d4*/
          continue; /*0x5284d4*/
      }
      goto LABEL_87; /*0x5284d4*/
    }
    if ( ChunkType <= 0x4D414E5A ) /*0x5280d5*/
    {
      if ( ChunkType == 0x4D414E5A ) /*0x5280db*/
      {
        TESFile_GetChunkData4(v2, (char *)&v40); /*0x5282c2*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 0x124))(this, v40); /*0x5282d5*/
      }
      else
      {
        switch ( ChunkType ) /*0x5280f6*/
        {
          case 0x4D414E45: /*0x5280f6*/
            TESFile_GetChunkData4(v2, (char *)&a1); /*0x528230*/
            TESForm_ResolveFormID((UInt32 *)&a1, v2); /*0x52823a*/
            v18 = TESDataHandler_LookupFormByID(a1); /*0x528258*/
            v19 = OblivionDynamicCast( /*0x52825e*/
                    v18,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESEyes `RTTI Type Descriptor',
                    0);
            if ( v19 ) /*0x528268*/
            {
              *(_DWORD *)(this + 0x1D0) = v19; /*0x52826a*/
            }
            else
            {
              v20 = (const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 0xD4))( /*0x528283*/
                                    this,
                                    *(_DWORD *)(this + 0xC));
              PrintError("Could not find eyes (%08X) on NPC '%s' (%08X).", a1, v20, v33); /*0x52828f*/
            }
            break; /*0x528270*/
          case 0x4D414E46: /*0x5280f6*/
            if ( v2->currentChunk.length >= 2 ) /*0x5282a3*/
              TESFile_GetChunkData2(v2, (char *)(this + 0x1E0)); /*0x5282b2*/
            break; /*0x5282b7*/
          case 0x4D414E48: /*0x5280f6*/
            TESFile_GetChunkData4(v2, (char *)&a1_4); /*0x528162*/
            TESForm_ResolveFormID((UInt32 *)&a1_4, v2); /*0x52816c*/
            v15 = TESDataHandler_LookupFormByID(a1_4); /*0x52818a*/
            v16 = OblivionDynamicCast( /*0x528190*/
                    v15,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESHair `RTTI Type Descriptor',
                    0);
            if ( v16 ) /*0x52819a*/
            {
              *(_DWORD *)(this + 0x1C8) = v16; /*0x52819c*/
            }
            else
            {
              v17 = (const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 0xD4))( /*0x5281b5*/
                                    this,
                                    *(_DWORD *)(this + 0xC));
              PrintError("Could not find hair (%08X) on NPC '%s' (%08X).", a1_4, v17, v32); /*0x5281c1*/
            }
            break; /*0x5281a2*/
          case 0x4D414E49: /*0x5280f6*/
            a1_16 = 0; /*0x52812d*/
            TESFile_GetChunkData4(v2, (char *)&a1_16); /*0x528130*/
            *(_DWORD *)(this + 0x38) = a1_16; /*0x528138*/
            break; /*0x52813b*/
          case 0x4D414E4C: /*0x5280f6*/
            TESFile_GetChunkData4(v2, (char *)&a1_8); /*0x5281d4*/
            if ( a1_8 >= 0.0 ) /*0x5281e5*/
            {
              if ( a1_8 > 1.0 ) /*0x528207*/
                a1_8 = 1.0; /*0x528209*/
              *(float *)(this + 0x1CC) = a1_8; /*0x52820f*/
            }
            else
            {
              a1_8 = 0.0; /*0x5281e9*/
              *(float *)(this + 0x1CC) = 0.0; /*0x5281ef*/
            }
            break; /*0x5281f5*/
          case 0x4D414E52: /*0x5280f6*/
            a1_16 = 0; /*0x528146*/
            TESFile_GetChunkData4(v2, (char *)&a1_16); /*0x528149*/
            *(_DWORD *)(this + 0xE8) = a1_16; /*0x528151*/
            break; /*0x528157*/
          case 0x4D414E53: /*0x5280f6*/
            *(_DWORD *)Dst = 0; /*0x5280ff*/
            v44 = 0; /*0x528102*/
            TESFile_GetChunkData(v2, Dst, 8u); /*0x52810d*/
            TESActorBaseData_SetFactionRank((char *)(this + 0x24), *(int *)Dst, v44, v34, v35); /*0x52811d*/
            break; /*0x528122*/
          default:
            goto LABEL_85;
        }
      }
      goto LABEL_85;
    }
    if ( ChunkType <= 0x53474746 ) /*0x5282e1*/
    {
      if ( ChunkType == 0x53474746 ) /*0x5282e7*/
      {
        v7 = 0; /*0x52838a*/
        goto LABEL_74; /*0x52838c*/
      }
      if ( ChunkType > 0x524C4348 ) /*0x5282f2*/
      {
        if ( ChunkType == 0x53424341 ) /*0x528372*/
          TESFile_GetChunkData(v2, (char *)(this + 0x28), 0x10u); /*0x528380*/
        goto LABEL_85; /*0x528385*/
      }
      if ( ChunkType != 0x524C4348 ) /*0x5282f4*/
      {
        if ( ChunkType == 0x4F4C5053 ) /*0x5282fb*/
        {
          a1_16 = 0; /*0x528341*/
          TESFile_GetChunkData4(v2, (char *)&a1_16); /*0x528344*/
          TESSpellList_AddFormToSpellList((char *)(this + 0x54), (void *)a1_16); /*0x528350*/
        }
        else if ( ChunkType == 0x4F544E43 ) /*0x528302*/
        {
          *(_DWORD *)v41 = 0; /*0x52830a*/
          v42 = 0; /*0x52830d*/
          TESFile_GetChunkData(v2, v41, 8u); /*0x528318*/
          TESContainer_SetLinkFlag((_BYTE *)(this + 0x44), 0); /*0x528324*/
          TESContainer_AddUnlinkedForm((_BYTE *)(this + 0x44), v41); /*0x52832f*/
        }
        goto LABEL_85; /*0x528336*/
      }
LABEL_64:
      TESFile_GetChunkData4(v2, (char *)(this + 0x1E8)); /*0x52835a*/
      goto LABEL_85; /*0x528368*/
    }
    if ( ChunkType > 0x54444F4D ) /*0x528393*/
    {                                           // CustomAnimSupport evidence: NPC_ load dispatcher branch tests KFFZ chunk before TESAnimation_LoadAnimationChunk call.
      if ( ChunkType == 0x5A46464B ) /*0x5284b1*/
        TESAnimation_LoadAnimationChunk((char **)(this + 0x94), this + 0x94, v2);// NPC_ KFFZ load dispatch: populates TESActorBase +0x94 TESAnimation component via TESAnimation_LoadAnimationChunk. /*0x5284bb*/
      goto LABEL_85; /*0x5284bb*/
    }
    if ( ChunkType != 0x54444F4D ) /*0x528399*/
    {
      if ( ChunkType != 0x53544746 ) /*0x5283a4*/
      {
        if ( ChunkType == 0x54444941 ) /*0x5283ab*/
        {
          *(_DWORD *)v36 = 0; /*0x5283b3*/
          v37 = 0; /*0x5283b6*/
          v38 = 0; /*0x5283b9*/
          TESFile_GetChunkData(v2, v36, 0xCu); /*0x5283c4*/
          TESAIForm_SetNonPackageData((_BYTE *)(this + 0x68), (int)v36); /*0x5283d0*/
        }
        goto LABEL_85; /*0x5283d5*/
      }
      v7 = 1; /*0x5283da*/
LABEL_74:
      v8 = 0; /*0x5283df*/
LABEL_75:
      v21 = this + 0x18 * (v8 + 2 * v7 + 0xB); /*0x5283e1*/
      a1_16 = v2->currentChunk.length; /*0x5283f7*/
      v29 = a1_16 >> 2; /*0x5283fd*/
      v46 = a1_16 >> 2; /*0x528401*/
      *(_DWORD *)v21 = a1_16 >> 2; /*0x528404*/
      *(_DWORD *)(v21 + 4) = 1; /*0x528406*/
      FaceGenFloatVector_ResizeFill((OB_stVector4_010201A0 *)(v21 + 8), v21, v29, COERCE_UNSIGNED_INT(0.0)); /*0x52840d*/
      _alloca_(v34); /*0x528415*/
      v45 = (char *)&v34; /*0x528423*/
      _memset((int)&v34, 0, a1_16); /*0x528426*/
      TESFile_GetChunkData(v2, v45, a1_16); /*0x528438*/
      v22 = 0; /*0x52843d*/
      a1_16 = 0; /*0x528442*/
      if ( v46 ) /*0x528445*/
      {
        do /*0x52847b*/
        {
          v23 = *(_DWORD *)(v21 + 0xC); /*0x528447*/
          if ( !v23 || !((*(_DWORD *)(v21 + 0x10) - v23) >> 2) ) /*0x528453*/
          {
            _invalid_parameter_noinfo(); /*0x528458*/
            v22 = a1_16; /*0x52845d*/
          }
          v24 = v22 * *(_DWORD *)(v21 + 4); /*0x528466*/
          v25 = *(float *)&v45[4 * v22++]; /*0x528469*/
          v26 = v22 < v46; /*0x528472*/
          *(float *)(*(_DWORD *)(v21 + 0xC) + 4 * v24) = v25; /*0x528475*/
          a1_16 = v22; /*0x528478*/
        }
        while ( v26 ); /*0x52847b*/
        v2 = v39; /*0x52847d*/
      }
      FaceGenHeadParameters_Copy((const FaceGenHeadParameters *)(this + 0x108), (FaceGenHeadParameters *)(this + 0x168)); /*0x52848e*/
      goto LABEL_85; /*0x528498*/
    }
    goto LABEL_82; /*0x528399*/
  }
LABEL_87:
  if ( *(_DWORD *)(this + 0xC) == 7 ) /*0x5284de*/
  {
    if ( reference ) /*0x5284e0*/
    {
      if ( !reference->vtbl->super.super.super.GetBaseForm(reference) ) /*0x5284f2*/
        TESObjectREFR_SetBaseForm((TESObjectREFR *)reference, (TESForm *)this); /*0x5284ff*/
    }
  }
  return 1; /*0x528509*/
}
