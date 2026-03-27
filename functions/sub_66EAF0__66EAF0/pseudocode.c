void __userpurge sub_66EAF0(
        TESObjectREFR *a1@<ecx>,
        double st7_0@<st0>,
        double st4_0@<st3>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st0_0@<st7>,
        double st3_0@<st4>,
        double a8@<st6>,
        double a9@<st5>,
        void (__thiscall *a10)(NiAVObject *this, NiMatrix33 *Mat, NiPoint3 *Trn, bool OnLeft),
        NiAVObject *(__thiscall *a11)(NiAVObject *this, const char *Name),
        void *(__thiscall *a12)(NiAVObject *this),
        int a13,
        int a14,
        int a15,
        TESObjectCELL *a16,
        char a17)
{
  TESWorldSpace *WorldSpace; // eax
  TESObjectCELL *CellAtCellCoord; // ebx
  int v20; // esi
  void *v21; // ecx
  TESObjectCELL *ParentCell; // eax
  int v23; // eax
  float *sound; // edi
  TESObjectREFR *v25; // esi
  TESObjectCELL *v26; // eax
  __int16 MusicType; // ax
  signed int XCoordinate; // esi
  __int16 v29; // ax
  Sky *GlobalObject; // eax
  double v31; // st7
  double v32; // st6
  double v33; // st5
  double v34; // st6
  double v35; // rt1
  double v36; // st5
  double v37; // st7
  double v38; // st5
  double v39; // st6
  double v40; // rt0
  double v41; // st5
  double v42; // st7
  NiTransform *p_m_localTransform; // edi
  float *v44; // eax
  NiAVObjectVtbl *vtbl; // ecx
  NiAVObjectVtbl *v46; // eax
  NiAVObject *v47; // ecx
  double v48; // st7
  float *v49; // edi
  double v50; // st7
  TESWorldSpace *v51; // eax
  BSShaderAccumulator *inited; // eax
  float *v53; // eax
  double v54; // st7
  TESObjectREFRVtbl *v55; // eax
  int i; // esi
  float *v57; // eax
  double v58; // st7
  float v59; // ecx
  int v60; // edx
  float v61; // eax
  float v62; // edx
  float v63; // eax
  int v64; // eax
  int v65; // ecx
  int v66; // edx
  double v67; // st7
  unsigned int v68; // esi
  TES *v69; // ecx
  float v70; // [esp+10h] [ebp-D0h]
  float a2; // [esp+14h] [ebp-CCh]
  float v72; // [esp+18h] [ebp-C8h]
  char v73; // [esp+2Eh] [ebp-B2h]
  bool v74; // [esp+2Fh] [ebp-B1h]
  TESWorldSpace *v75; // [esp+30h] [ebp-B0h]
  float v76; // [esp+30h] [ebp-B0h]
  float v77; // [esp+30h] [ebp-B0h]
  float *v78; // [esp+34h] [ebp-ACh]
  float v79; // [esp+34h] [ebp-ACh]
  float v80; // [esp+34h] [ebp-ACh]
  TESObjectREFR *v81; // [esp+38h] [ebp-A8h]
  float v82; // [esp+38h] [ebp-A8h]
  float v83; // [esp+38h] [ebp-A8h]
  signed int v84; // [esp+3Ch] [ebp-A4h] BYREF
  _DWORD *v85; // [esp+40h] [ebp-A0h]
  float v86[2]; // [esp+44h] [ebp-9Ch] BYREF
  float v87; // [esp+4Ch] [ebp-94h]
  int v88; // [esp+50h] [ebp-90h]
  int v89; // [esp+54h] [ebp-8Ch]
  float v90; // [esp+58h] [ebp-88h]
  NiPoint3 v91; // [esp+5Ch] [ebp-84h] BYREF
  float v92; // [esp+68h] [ebp-78h]
  int v93; // [esp+6Ch] [ebp-74h]
  float v94; // [esp+70h] [ebp-70h]
  float v95[9]; // [esp+74h] [ebp-6Ch] BYREF
  float v96[9]; // [esp+98h] [ebp-48h] BYREF
  float v97[9]; // [esp+BCh] [ebp-24h] BYREF

  WorldSpace = TESObjectREFR_GetWorldSpace(a1);
  CellAtCellCoord = a16;
  v20 = (int)WorldSpace;
  v75 = WorldSpace;
  v85 = TESObjectCELL_GetWorldSpace(a16);
  sub_4835D0(v20, (TESWorldSpace *)v85);
  v74 = sub_40FDA0(v21);
  v73 = 0;
  if ( TESObjectREFR_GetParentCell(a1) )
  {
    ParentCell = TESObjectREFR_GetParentCell(a1);
    sub_4CECD0(ParentCell, a1);
  }
  ((void (__thiscall *)(TESObjectREFR *, void (__thiscall **)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool)))a1->vtbl[1].super.Unk_09)(
    a1,
    &a10);
  sub_4D89A0((int *)a1, a13, a14, a15);
  v23 = ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[2].super.Unk_0C)(a1);
  sound = (float *)OSGlobals->sound;
  v25 = (TESObjectREFR *)v23;
  v81 = (TESObjectREFR *)v23;
  v78 = sound;
  TESObjectREFR_ChangeCell(a1, CellAtCellCoord);
  if ( v25 )
  {
    if ( TESObjectREFR_GetParentCell(v25) )
    {
      v26 = TESObjectREFR_GetParentCell(v25);
      sub_4CECD0(v26, v25);
    }
  }
  if ( CellAtCellCoord && TESObjectCELL_IsInterior(CellAtCellCoord) )
  {
    if ( sound )
    {
      MusicType = (unsigned __int16)TESObjectCELL_GetMusicType(CellAtCellCoord, 0);
      if ( SoundManager_OpenMusicFile((const char *)sound, MusicType, 0, 0) )
      {
        if ( v74 )
        {
          v73 = 1;
        }
        else
        {
          sub_6A8D50(sound);
          SoundManager_PlayMusic((int)sound, (int)sound);
        }
      }
    }
    sub_4455E0(
      (unsigned int)TES,
      st7_0,
      st4_0,
      st5_0,
      st6_0,
      st0_0,
      st3_0,
      a8,
      a9,
      (int)sound,
      (TESObjectREFR *)CellAtCellCoord,
      (float *)&a10);
    sub_560110();
  }
  else
  {
    XCoordinate = 0x7FFFFFFF;
    *(float *)&v84 = NAN;
    if ( CellAtCellCoord )
    {
      XCoordinate = TESObjectCELL_GetXCoordinate(CellAtCellCoord);
      *(float *)&v84 = COERCE_FLOAT(TESObjectCELL_GetYCoordinate(CellAtCellCoord));
    }
    if ( v75 )
    {
      if ( v75 != (TESWorldSpace *)v85 && !sub_45A500(SaveLoad_CurrentSavegame) )
      {
        if ( CellAtCellCoord )
          sub_4400A0((int)TES, st5_0, st6_0, st7_0, CellAtCellCoord, 0);
        sub_442630(TES, 0, 1u);
        sub_43FC20(TES, 0);
      }
    }
    if ( CellAtCellCoord )
    {
      if ( sound )
      {
        v29 = (unsigned __int16)TESObjectCELL_GetMusicType(CellAtCellCoord, (int)&a10);
        if ( !SoundManager_OpenMusicFile((const char *)sound, v29, 0, 0) || v74 )
          v73 = 1;
        else
          SoundManager_PlayMusic((int)sound, (int)sound);
      }
      sub_55FDF0();
      sub_4431F0(TES, st5_0, (char)a1, st6_0, st7_0, (TESWorldSpace *)v85);
    }
    sub_445A10((unsigned int)TES, (int)sound, st4_0, st5_0, st6_0, st7_0, st0_0, st3_0, a8, a9, (float *)&a10);
    CellAtCellCoord = (TESObjectCELL *)TESWorldSpace::GetCellAtCellCoord((TESWorldSpace *)v85, XCoordinate, v84);
  }
  if ( sound )
  {
    sub_6AC210(sound);
    sub_6AC3C0(sound);
    if ( (*((int (__thiscall **)(TESObjectREFRVtbl *, int))a1[1].vtbl->super.super.InitializeComponent + 0x3C))(
           a1[1].vtbl,
           1) )
    {
      (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *))a1[1].vtbl->super.super.InitializeComponent + 0xD2))(
        a1[1].vtbl,
        a1);
    }
  }
  if ( a17 )
  {
    GlobalObject = Sky_CreateOrGetGlobalObject();
    sub_540380(GlobalObject);
  }
  TESObjectREFR_ChangeCell(a1, 0);
  sub_4D35D0(CellAtCellCoord, st5_0, st6_0, st7_0, a1);
  if ( !a1->vtbl->GetNiNode(a1) && !sub_45A500(SaveLoad_CurrentSavegame) )
    sub_434020(ioManager, st5_0, st6_0, st7_0, 5);
  v31 = *(float *)&a15;
  v32 = dbl_A3D5B8;
  qmemcpy(v96, &stru_B26AF0[0xA].unk2C, sizeof(v96));
  v33 = dbl_A3D5B0;
  if ( v32 < *(float *)&a15 )
  {
    while ( 1 )
    {
      v35 = v33;
      v36 = v31 - v33;
      v37 = v35;
      *(float *)&a15 = v36;
      if ( *(float *)&a15 <= v32 )
        break;
      v33 = v37;
      v31 = *(float *)&a15;
    }
    v34 = v37;
    v31 = *(float *)&a15;
  }
  else
  {
    v34 = v33;
  }
  v38 = dbl_A491E0;
  if ( v38 > v31 )
  {
    while ( 1 )
    {
      v40 = v38;
      v41 = v31;
      v42 = v40;
      *(float *)&a15 = v41 + v34;
      v38 = *(float *)&a15;
      if ( *(float *)&a15 >= v40 )
        break;
      v38 = v42;
      v31 = *(float *)&a15;
    }
    v39 = *(float *)&a15;
    v31 = *(float *)&a15;
  }
  else
  {
    v39 = v38;
  }
  v72 = v31;
  NiMatrix33_InitRotationTransform(v95, v72);
  qmemcpy(v96, NiMAtrix33_Multiply(v96, v97, v95), sizeof(v96));
  if ( *(float *)&a15 < 0.0 )
    v76 = *(float *)&a14 + *(float *)&a13;
  else
    v76 = *(float *)&a13 - *(float *)&a14;
  NiMatrix33_InitRotationTransposedTransform___(v95, v76);
  if ( a1->vtbl->GetNiNode(a1) )
  {
    p_m_localTransform = &a1->vtbl->GetNiNode(a1)->members.super.m_localTransform;
    qmemcpy(p_m_localTransform, v95, 0x24u);
  }
  v44 = NiMAtrix33_Multiply(v95, v97, v96);
  qmemcpy(v96, v44, sizeof(v96));
  if ( g_worldScenegraph->super.children.end )
    vtbl = g_worldScenegraph->super.children.data->vtbl;
  else
    vtbl = 0;
  qmemcpy(&vtbl->super.DumpAttributes, v44, 0x24u);
  if ( g_worldScenegraph->super.children.end )
    v46 = g_worldScenegraph->super.children.data->vtbl;
  else
    v46 = 0;
  v46->ApplyTransform = a10;
  v46->GetObjectByName = a11;
  v46->Unk_17 = a12;
  if ( g_worldScenegraph->super.children.end )
    v47 = (NiAVObject *)g_worldScenegraph->super.children.data->vtbl;
  else
    v47 = 0;
  v48 = 0.0;
  NiAVObject_UpdateNiAVObject(v47, 0.0, 0);
  NiAVObject_InitializePropertyState((NiAVObject *)TES->ObjectLODRoot);
  NiNode_UpdateDynamicEffectState(TES->ObjectLODRoot);
  v49 = v78;
  if ( v78 )
  {
    sub_6A8E10(v78, *(float *)&a10, *(float *)&a11, *(float *)&a12);
    v79 = cos(((double (__thiscall *)(TESObjectREFR *))a1->vtbl[1].super.Unk_0E)(a1));
    v77 = ((double (__thiscall *)(TESObjectREFR *))a1->vtbl[1].super.Unk_0E)(a1);
    a2 = v79;
    v80 = sin(v77);
    v48 = v80;
    sub_6A8E40(v49, v80, a2, 0.0);
  }
  v50 = sub_665260(a1, v48, (PlayerCharacter *)a1);
  if ( v81 )
  {
    TESObjectREFR_SetPosition(v81, *(float *)&a10, *(float *)&a11, *(float *)&a12);
    v51 = TESObjectCELL_GetWorldSpace(CellAtCellCoord);
    sub_4DD4B0((int)CellAtCellCoord, v38, v39, v50, (Actor *)v81, CellAtCellCoord, v51);
    ((void (__thiscall *)(TESObjectREFR *, _DWORD))v81->vtbl->Unk_5E)(v81, 0);
  }
  inited = InitBSShaderAccumulator();
  if ( inited )
    sub_7AA4D0(inited);
  if ( *(_DWORD *)&a1[0x10].member.baseExtraList.members.m_presenceBitfield[4] )
  {
    if ( !sub_45A500(SaveLoad_CurrentSavegame) )
    {
      v53 = a1->vtbl->GetPos(a1);
      v86[0] = *v53;
      v86[1] = v53[1];
      v87 = v53[2];
      if ( CellAtCellCoord )
      {
        if ( !TESObjectCELL_IsInterior(CellAtCellCoord) )
        {
          *(float *)&v84 = 0.0;
          if ( sub_4D1E10(CellAtCellCoord, v86, (float *)&v84) )
          {
            v54 = *(float *)&v84 + dbl_A46970;
            v39 = v87;
            if ( v87 < v54 )
            {
              v55 = a1->vtbl;
              v87 = v54;
              ((void (__thiscall *)(TESObjectREFR *, float *))v55[1].super.Unk_09)(a1, v86);
            }
          }
        }
      }
      for ( i = 0; i < 0x64; ++i )
      {
        v57 = a1->vtbl->GetPos(a1);
        v58 = flt_A73DE4;
        v59 = *v57;
        v60 = *((_DWORD *)v57 + 1);
        v61 = v57[2];
        v92 = v59;
        v91.x = Vector3_InitValue_;
        v93 = v60;
        v62 = *(&Vector3_InitValue_ + 1);
        v94 = v61;
        v63 = dword_B3F9B0;
        v70 = v58;
        v91.y = v62;
        v91.z = v63;
        sub_65AF30((MobileObject *)a1, v70, &v91, 0);
        v64 = (int)a1->vtbl->GetPos(a1);
        v65 = *(_DWORD *)v64;
        v66 = *(_DWORD *)(v64 + 4);
        v90 = *(float *)(v64 + 8);
        v88 = v65;
        v89 = v66;
        v82 = v90 - v94;
        v83 = fabs(v82);
        if ( v83 < dbl_A2FC80 )
          break;
      }
      if ( i == 0x64 )
        ((void (__thiscall *)(TESObjectREFR *, float *))a1->vtbl[1].super.Unk_09)(a1, v86);
    }
    LOBYTE(a1[0x10].member.super.flags) = LOBYTE(a1[0x10].member.super.flags) == 0;
    sub_603CA0((Actor *)a1, v38, v39, 0.0, 0.0);
    LOBYTE(a1[0x10].member.super.flags) = LOBYTE(a1[0x10].member.super.flags) == 0;
    sub_603CA0((Actor *)a1, v38, v39, 0.0, 0.0);
    sub_66B710((PlayerCharacter *)a1, 0.0, v38, 0);
  }
  sub_55FA50((float *)g_worldScenegraph->camera, 0);
  sub_4424D0(TES, flt_B33E9C);
  if ( LOBYTE(a1[0x17].member.super.modlist.data) )
  {
    v67 = flt_A3744C;
    sub_5732D0((NiNode **)dword_B3A6B0, v38, v39, v67, 2, flt_A3744C);
    sub_440AF0((int)TES, v38, v39, (char)a1, 0, 0, 0);
    sub_57B7E0((char)a1, v39);
    LOBYTE(a1[0x17].member.super.modlist.data) = 0;
    sub_572EC0(v38, v39, v67, (char)a1, 2, 0);
    sub_6A8D00(v49);
    sub_6A9B40((int)v49);
    sub_410BA0(*(const char **)off_B030A4, 1, 1, 0, 0, COERCE_FLOAT(1), 0);
    sub_6A8D50(v49);
    sub_6A9C00((int)v49);
    LOBYTE(a1[0x17].member.super.modlist.data) = 0;
  }
  if ( v74 )
  {
    sub_40FDD0();
    if ( v73 )
      sub_6A8D50(v49);
  }
  v68 = LODWORD(a1[0x15].member.pos[0]);
  if ( v68 )
  {
    sub_6B73E0((_DWORD *)LODWORD(a1[0x15].member.pos[0]));
    FormHeapFree(v68);
    a1[0x15].member.pos[0] = 0.0;
    a1[0x15].member.rot.z = 0.0;
  }
  OSGlobals->unk18 = 0;
  v69 = TES;
  if ( !TES->currentInteriorCell )
  {
    if ( v69->waterManager )
    {
      sub_498F40((float *)v69->waterManager);
      v69 = TES;
    }
  }
  sub_444A10((Ni2DBuffer ***)v69);
}
