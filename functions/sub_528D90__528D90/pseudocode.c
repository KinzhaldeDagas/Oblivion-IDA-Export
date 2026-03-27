int __fastcall sub_528D90(float *ecx0, int a2, TESObjectREFR *a3)
{
  unsigned int *v4; // eax
  TESForm::FormFlags v5; // eax
  unsigned int v6; // ebp
  bool v7; // zf
  TESForm::FormFlags v8; // edi
  float *v9; // esi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  const char *v14; // eax
  TESForm *v15; // eax
  void *v16; // esi
  const char *v17; // eax
  const char *v18; // eax
  TESForm *v19; // eax
  void *v20; // eax
  void *v21; // esi
  const char *v22; // eax
  TESForm *v23; // eax
  void *v24; // eax
  void *v25; // esi
  const char *v26; // eax
  double v27; // st6
  double v28; // st5
  int v29; // eax
  int result; // eax
  int niNode; // ecx
  int v32; // edi
  int v33; // ebp
  _DWORD *v34; // eax
  LONG (__stdcall *v35)(volatile LONG *); // ebx
  _DWORD *v36; // edi
  void (__thiscall ***v37)(_DWORD, int); // edi
  _DWORD *v38; // eax
  _DWORD *v39; // edi
  void (__thiscall ***v40)(_DWORD, int); // edi
  _DWORD *v41; // edi
  double v42; // st7
  int *v43; // ecx
  int v44; // eax
  void (__thiscall *Unk_4D)(TESObjectREFR *); // eax
  int v46; // eax
  int vtbl; // ecx
  NiNode *m_parent; // ebp
  double v49; // st7
  PlayerCharacter *v50; // ecx
  _DWORD *v51; // ecx
  ShadowSceneLight *v52; // edi
  TESForm *ActorBaseForm; // eax
  void *v54; // eax
  size_t v55; // [esp+10h] [ebp-16Ch]
  size_t v56; // [esp+10h] [ebp-16Ch]
  size_t v57; // [esp+10h] [ebp-16Ch]
  int v58; // [esp+14h] [ebp-168h]
  size_t v59; // [esp+18h] [ebp-164h]
  int v60; // [esp+18h] [ebp-164h]
  int v61; // [esp+1Ch] [ebp-160h]
  size_t v62; // [esp+20h] [ebp-15Ch]
  int v63; // [esp+20h] [ebp-15Ch]
  int v64; // [esp+20h] [ebp-15Ch]
  int v65; // [esp+24h] [ebp-158h]
  int v66; // [esp+24h] [ebp-158h]
  size_t v67; // [esp+28h] [ebp-154h] BYREF
  int v68; // [esp+30h] [ebp-14Ch]
  int v69; // [esp+34h] [ebp-148h]
  int v70; // [esp+38h] [ebp-144h]
  char v71; // [esp+40h] [ebp-13Ch]
  char isThirdPerson; // [esp+41h] [ebp-13Bh]
  char v73; // [esp+42h] [ebp-13Ah]
  unsigned int v74; // [esp+44h] [ebp-138h] BYREF
  unsigned int *v75; // [esp+48h] [ebp-134h]
  unsigned int v76; // [esp+4Ch] [ebp-130h]
  int v77; // [esp+50h] [ebp-12Ch]
  int v78; // [esp+54h] [ebp-128h]
  int a1; // [esp+58h] [ebp-124h] BYREF
  TESForm v80; // [esp+5Ch] [ebp-120h] BYREF
  IOTask v81[2]; // [esp+7Ch] [ebp-100h] BYREF
  unsigned int v82; // [esp+ACh] [ebp-D0h] BYREF
  char v83; // [esp+B0h] [ebp-CCh] BYREF
  int v84; // [esp+178h] [ebp-4h]

  *(_DWORD *)&v80.member.type = ecx0;
  v71 = 0;
  v77 = 0;
  v4 = (unsigned int *)(ecx0 + 0x42);
  do
  {
    v76 = 0;
    v75 = v4;
    do
    {
      v5 = v75[1];
      v6 = 0;
      v7 = *v75 == 0;
      v74 = *v75;
      v80.member.flags = v5;
      if ( !v7 )
      {
        v78 = v76 + v77;
        do
        {
          v8 = 0;
          if ( v80.member.flags )
          {
            v9 = &ecx0[6 * v78 + 0x42];
            do
            {
              LODWORD(v67) = 4;
              TESForm_LoadDataFromCurrentSaveGame(&v80, v67);
              v10 = *((_DWORD *)v9 + 3);
              if ( !v10 || !((*((_DWORD *)v9 + 4) - v10) >> 2) )
                _invalid_parameter_noinfo();
              v11 = *((_DWORD *)v9 + 3);
              if ( *(float *)&v80.vtbl != *(float *)(v11 + 4 * v6 * *((_DWORD *)v9 + 1) + 4 * v8) )
              {
                if ( !v11 || !((*((_DWORD *)v9 + 4) - v11) >> 2) )
                  _invalid_parameter_noinfo();
                v12 = *((_DWORD *)v9 + 3) + 4 * v6 * *((_DWORD *)v9 + 1);
                v71 = 1;
                *(float *)(v12 + 4 * v8) = *(float *)&v80.vtbl;
              }
              ++v8;
            }
            while ( (unsigned int)v8 < v80.member.flags );
          }
          ++v6;
        }
        while ( v6 < v74 );
      }
      v75 += 6;
      ++v76;
    }
    while ( v76 < 2 );
    v4 = v75;
    v77 += 2;
  }
  while ( (unsigned int)v77 < 4 );
  v13 = *((_DWORD *)ecx0 + 0x3A);
  isThirdPerson = 0;
  if ( v13 )
  {
    isThirdPerson = sub_52BDB0(v13, 0) != 0;
  }
  else
  {
    v14 = *((const char **)ecx0 + 0x29);
    if ( !v14 )
      v14 = EmptyString;
    PrintError("%s has a bad current race when loading facegen", v14);
  }
  LODWORD(v67) = 4;
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)&a1, v67, v68, v69, v70);
  v15 = TESForm_LookupByFormID(v77);
  v16 = OblivionDynamicCast(
          v15,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESRace `RTTI Type Descriptor',
          0);
  if ( !v16 )
  {
    v17 = *((const char **)ecx0 + 0x29);
    if ( !v17 )
      v17 = EmptyString;
    PrintError("NPC %s could not find race %08X", v17, v77);
  }
  if ( *((void **)ecx0 + 0x3A) != v16 )
    LOBYTE(v70) = 1;
  *((_DWORD *)ecx0 + 0x3A) = v16;
  BYTE2(v70) = 0;
  if ( v16 )
  {
    BYTE2(v70) = sub_52BDB0((int)v16, 0) != 0;
  }
  else
  {
    v18 = *((const char **)ecx0 + 0x29);
    if ( !v18 )
      v18 = EmptyString;
    PrintError("%s has a bad new race when loading facegen", v18);
  }
  LODWORD(v62) = 4;
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)&v80.member.flags, v62, v67, SHIDWORD(v67), v68);
  v19 = TESForm_LookupByFormID((UInt32)v80.vtbl);
  v20 = OblivionDynamicCast(
          v19,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESHair `RTTI Type Descriptor',
          0);
  v21 = v20;
  if ( v80.vtbl )
  {
    if ( !v20 )
    {
      v22 = *((const char **)ecx0 + 0x29);
      if ( !v22 )
        v22 = EmptyString;
      PrintError("NPC %s could not find hair %08X", v22, v80.vtbl);
    }
  }
  if ( *((void **)ecx0 + 0x72) != v21 )
    LOBYTE(v68) = 1;
  LODWORD(v59) = 4;
  *((_DWORD *)ecx0 + 0x72) = v21;
  TESForm_LoadFormIDFromCurrentSaveGame((TESForm *)&a1, v59, v63, v65, v67);
  v23 = TESForm_LookupByFormID(v77);
  v24 = OblivionDynamicCast(
          v23,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESEyes `RTTI Type Descriptor',
          0);
  v25 = v24;
  if ( v77 )
  {
    if ( !v24 )
    {
      v26 = *((const char **)ecx0 + 0x29);
      if ( !v26 )
        v26 = EmptyString;
      PrintError("NPC %s could not find eyes %08X", v26, v77);
    }
  }
  if ( *((void **)ecx0 + 0x74) != v25 )
    LOBYTE(v67) = 1;
  LODWORD(v55) = 4;
  *((_DWORD *)ecx0 + 0x74) = v25;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)&a1, v55);
  LODWORD(v56) = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)&v80.member, v56);
  v27 = *(float *)&a1;
  v28 = *(float *)&a1;
  v29 = *(_DWORD *)&v80.member.type;
  if ( *(float *)&a1 != ecx0[0x73] || *((_DWORD *)ecx0 + 0x7A) != *(_DWORD *)&v80.member.type )
    LOBYTE(v67) = 1;
  LODWORD(v57) = 1;
  ecx0[0x73] = *(float *)&a1;
  *((_DWORD *)ecx0 + 0x7A) = v29;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)((char *)&v67 + 3), v57);
  if ( ((_BYTE)ecx0[0xA] & 1) != BYTE3(v67) )
    LOBYTE(v67) = 1;
  if ( BYTE3(v67) )
    *((_DWORD *)ecx0 + 0xA) |= 1u;
  else
    *((_DWORD *)ecx0 + 0xA) &= ~1u;
  result = (*(int (__thiscall **)(_DWORD *, int, int, int, int, int, int, _DWORD))(*((_DWORD *)ecx0 + 9) + 0x50))(
             (_DWORD *)ecx0 + 9,
             0x10,
             v58,
             v60,
             v61,
             v64,
             v66,
             v67);
  if ( v71 )
  {
    v78 = (*(int (__thiscall **)(float *, int))(*(_DWORD *)ecx0 + 0x128))(ecx0, 0x45);
    (*(void (__thiscall **)(float *, int, _DWORD))(*(_DWORD *)ecx0 + 0x134))(ecx0, 0x45, 0);
    niNode = (int)a3->member.niNode;
    v32 = 0;
    if ( niNode )
      v32 = (*(int (__thiscall **)(int))(*(_DWORD *)niNode + 8))(niNode);
    if ( isThirdPerson == v73 )
    {
      if ( v32 )
      {
        v33 = 0;
        if ( TESObjectREFR_GetAnimData((Actor *)a3) )
        {
          if ( TESObjectREFR_GetAnimData((Actor *)a3)[0x13].Destructor )
            v33 = *((_DWORD *)TESObjectREFR_GetAnimData((Actor *)a3)[0x13].Destructor + 0x1F);
        }
        v34 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *, _DWORD))a3->vtbl->Unk_4D)(a3, 0);
        v35 = InterlockedDecrement;
        v36 = v34;
        if ( v34 )
        {
          if ( v34[7] )
          {
            sub_716620(v34, v33);
            (*(void (__thiscall **)(_DWORD, unsigned int *, _DWORD *))(*(_DWORD *)v36[7] + 0x88))(v36[7], &v74, v36);
            if ( v74 )
            {
              v37 = (void (__thiscall ***)(_DWORD, int))v74;
              if ( !v35((volatile LONG *)(v74 + 4)) )
                (**v37)(v37, 1);
            }
          }
        }
        v38 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *, _DWORD))a3->vtbl->Unk_4C)(a3, 0);
        v39 = v38;
        if ( v38 )
        {
          if ( v38[7] )
          {
            sub_716620(v38, v33);
            (*(void (__thiscall **)(_DWORD, unsigned int *, _DWORD *))(*(_DWORD *)v39[7] + 0x88))(v39[7], &v74, v39);
            if ( v74 )
            {
              v40 = (void (__thiscall ***)(_DWORD, int))v74;
              if ( !v35((volatile LONG *)(v74 + 4)) )
                (**v40)(v40, 1);
            }
          }
        }
      }
      BYTE3(v67) = 0;
      nullsub_returnTrue_0arg();
      v41 = *(_DWORD **)&v80.member.type;
      sub_405CE0(*(_DWORD **)&v80.member.type);
      LODWORD(v67) = 2;
      v42 = nullsub_returnTrue_0arg();
      if ( *(_DWORD *)&a3[2].member.baseExtraList.members.m_presenceBitfield[8] )
        sub_525A70(
          (int)v41,
          v42,
          (TESChildCELL *)a3,
          *(int **)&a3[2].member.baseExtraList.members.m_presenceBitfield[8]);
      if ( ((int (__thiscall *)(TESObjectREFR *, _DWORD))a3->vtbl->Unk_4C)(a3, 0) )
      {
        if ( ((int (__thiscall *)(TESObjectREFR *, _DWORD))a3->vtbl->Unk_4D)(a3, 0) )
        {
          FaceGenHeadParameters_Ctor(&v82);
          v43 = (int *)v41[0x3A];
          v84 = 0;
          TESRace_GetFaceGenHeadParameters(v43, (int)v41, (int)&v82);
          v44 = ((int (__thiscall *)(TESObjectREFR *, _DWORD, unsigned int *))a3->vtbl->Unk_4C)(a3, 0, &v82);
          BSFaceGen_DoSomethingWithFaceGenNode(v44, (_DWORD **)HIDWORD(v67));
          Unk_4D = a3->vtbl->Unk_4D;
          HIDWORD(v67) = &v83;
          LODWORD(v67) = 0;
          v46 = ((int (__thiscall *)(TESObjectREFR *))Unk_4D)(a3);
          BSFaceGen_DoSomethingWithFaceGenNode(v46, (_DWORD **)v67);
          v84 = 0xFFFFFFFF;
          FaceGenHeadParameters_Dtor(&v82);
        }
      }
      vtbl = (int)a3[1].vtbl;
      if ( vtbl )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)vtbl + 0x31C))(vtbl, 1);
    }
    else
    {
      BYTE3(v67) = 0;
      m_parent = 0;
      nullsub_returnTrue_0arg();
      sub_405CE0(ecx0);
      LODWORD(v67) = 2;
      v49 = nullsub_returnTrue_0arg();
      v50 = TESDataHandler_g_PlayerRef;
      isThirdPerson = TESDataHandler_g_PlayerRef->isThirdPerson;
      TogglePOV(v50, 0);
      if ( v32 )
      {
        m_parent = TESObjectREFR::GetNiNode(a3)->members.super.m_parent;
        Character_Set3D(a3, (int)m_parent, v28, v27, 0);
      }
      v51 = ecx0 + 0x2B;
      if ( v73 )
        (*(void (__thiscall **)(_DWORD *, int))(*v51 + 0x18))(v51, dword_B38B68);
      else
        (*(void (__thiscall **)(_DWORD *, int))(*v51 + 0x18))(v51, dword_B38B70);
      if ( m_parent )
      {
        g_bUpdatePlayerModel = 1;
        v52 = MobileObject_GenerateNiNode(a3, v28, v27, v49);
        if ( !((int (__thiscall *)(TESObjectREFR *, _DWORD))a3->vtbl->Unk_4D)(a3, 0)
          && !((int (__thiscall *)(TESObjectREFR *, _DWORD))a3->vtbl->Unk_4C)(a3, 0) )
        {
          ActorBaseForm = Actor_GetActorBaseForm((Actor *)a3, 0);
          sub_437970(v81, (int)ActorBaseForm, 0);
          v84 = 1;
          sub_435300(v81);
          (*((void (__thiscall **)(IOTask *))v81[0].vtbl + 0xA))(v81);
          sub_4353D0((NiNode **)v81, a3, *(void **)&a3[2].member.baseExtraList.members.m_presenceBitfield[8]);
          v84 = 0xFFFFFFFF;
          QueuedHead::~QueuedHead((QueuedHead *)v81);
        }
        ((void (__thiscall *)(NiNode *, ShadowSceneLight *, int))m_parent->vtbl->AddObject)(m_parent, v52, 1);
        v7 = a3 == (TESObjectREFR *)TESDataHandler_g_PlayerRef;
        g_bUpdatePlayerModel = 0;
        if ( v7 )
          sub_65F910((int)v52, 0);
        a3->vtbl->Unk_52(a3);
        v54 = OblivionDynamicCast(
                a3[1].vtbl,
                0,
                (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                &MiddleHighProcess `RTTI Type Descriptor',
                0);
        if ( v54 )
          (*(void (__thiscall **)(void *, TESObjectREFR *))(*(_DWORD *)v54 + 0x3EC))(v54, a3);
      }
      TogglePOV(TESDataHandler_g_PlayerRef, isThirdPerson == 0);
      v41 = *(_DWORD **)&v80.member.type;
    }
    return (*(int (__thiscall **)(_DWORD *, int, int))(*v41 + 0x134))(v41, 0x45, v78);
  }
  return result;
}
