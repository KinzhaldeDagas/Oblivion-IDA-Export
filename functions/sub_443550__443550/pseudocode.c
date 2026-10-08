TESForm *__thiscall sub_443550(int *this)
{
  LONG (__stdcall *v1)(volatile LONG *); // edi
  NiSourceTexture *v3; // esi
  NiSourceTexture *v4; // esi
  NiSourceTexture *v5; // esi
  NiSourceTexture *v6; // esi
  NiSourceTexture *v7; // esi
  NiSourceTexture *v8; // esi
  NiSourceTexture *v9; // esi
  NiSourceTexture *v10; // esi
  NiSourceTexture *v11; // esi
  NiSourceTexture *v12; // esi
  NiSourceTexture *v13; // esi
  NiSourceTexture *v14; // esi
  NiSourceTexture *v15; // esi
  NiSourceTexture *v16; // esi
  NiSourceTexture *v17; // esi
  NiSourceTexture *v18; // esi
  int *SourceTexture_010201A0; // eax
  NiSourceTexture *v20; // esi
  int *v21; // eax
  NiSourceTexture *v22; // esi
  int *v23; // eax
  LONG (__stdcall *v24)(volatile LONG *); // ebp
  NiSourceTexture *v25; // esi
  int i; // edi
  TESForm *result; // eax
  unsigned int v28; // ecx
  const char *v29; // eax
  TESForm *v30; // esi
  NiSourceTexture *outTexture; // [esp+48h] [ebp-11Ch] BYREF
  TESForm *v32; // [esp+4Ch] [ebp-118h] BYREF
  char ArgList[260]; // [esp+50h] [ebp-114h] BYREF
  int v34; // [esp+160h] [ebp-4h]

  v1 = InterlockedDecrement; /*0x443592*/
  if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x11E]) ) /*0x44358f*/
  {
    sub_43B420( /*0x4435b4*/
      (int *)MEMORY[0xB33A1C],
      (IOTask **)&outTexture,
      (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x11E]),
      5u,
      0,
      0,
      0,
      1,
      1);
    if ( outTexture ) /*0x4435bf*/
    {
      v3 = outTexture; /*0x4435c1*/
      if ( !v1((volatile LONG *)&outTexture->members.super.super.m_pcName) ) /*0x4435c7*/
        v3->vtbl->super.super.super.Destructor((NiRefObject *)v3, 1); /*0x4435d9*/
    }
  }
  if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x120]) ) /*0x4435e0*/
  {
    sub_43B420( /*0x4435fd*/
      (int *)MEMORY[0xB33A1C],
      (IOTask **)&outTexture,
      (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x120]),
      5u,
      0,
      0,
      0,
      1,
      1);
    if ( outTexture ) /*0x443608*/
    {
      v4 = outTexture; /*0x44360a*/
      if ( !v1((volatile LONG *)&outTexture->members.super.super.m_pcName) ) /*0x443610*/
        v4->vtbl->super.super.super.Destructor((NiRefObject *)v4, 1); /*0x443622*/
    }
  }
  if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x122]) ) /*0x443629*/
  {
    sub_43B420( /*0x443646*/
      (int *)MEMORY[0xB33A1C],
      (IOTask **)&outTexture,
      (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x122]),
      5u,
      0,
      0,
      0,
      1,
      1);
    if ( outTexture ) /*0x443651*/
    {
      v5 = outTexture; /*0x443653*/
      if ( !v1((volatile LONG *)&outTexture->members.super.super.m_pcName) ) /*0x443659*/
        v5->vtbl->super.super.super.Destructor((NiRefObject *)v5, 1); /*0x44366b*/
    }
  }
  if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x124]) ) /*0x443672*/
  {
    sub_43B420( /*0x44368f*/
      (int *)MEMORY[0xB33A1C],
      (IOTask **)&outTexture,
      (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x124]),
      5u,
      0,
      0,
      0,
      1,
      1);
    if ( outTexture ) /*0x44369a*/
    {
      v6 = outTexture; /*0x44369c*/
      if ( !v1((volatile LONG *)&outTexture->members.super.super.m_pcName) ) /*0x4436a2*/
        v6->vtbl->super.super.super.Destructor((NiRefObject *)v6, 1); /*0x4436b4*/
    }
  }
  if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x126]) ) /*0x4436bb*/
  {
    sub_43B420( /*0x4436d8*/
      (int *)MEMORY[0xB33A1C],
      (IOTask **)&outTexture,
      (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x126]),
      5u,
      0,
      0,
      0,
      1,
      1);
    if ( outTexture ) /*0x4436e3*/
    {
      v7 = outTexture; /*0x4436e5*/
      if ( !v1((volatile LONG *)&outTexture->members.super.super.m_pcName) ) /*0x4436eb*/
        v7->vtbl->super.super.super.Destructor((NiRefObject *)v7, 1); /*0x4436fd*/
    }
  }
  if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x128]) ) /*0x443704*/
  {
    sub_43B420( /*0x443721*/
      (int *)MEMORY[0xB33A1C],
      (IOTask **)&outTexture,
      (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x128]),
      5u,
      0,
      0,
      0,
      1,
      1);
    if ( outTexture ) /*0x44372c*/
    {
      v8 = outTexture; /*0x44372e*/
      if ( !v1((volatile LONG *)&outTexture->members.super.super.m_pcName) ) /*0x443734*/
        v8->vtbl->super.super.super.Destructor((NiRefObject *)v8, 1); /*0x443746*/
    }
  }
  if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x12A]) ) /*0x44374d*/
  {
    sub_43B420( /*0x44376a*/
      (int *)MEMORY[0xB33A1C],
      (IOTask **)&outTexture,
      (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x12A]),
      5u,
      0,
      0,
      0,
      1,
      1);
    if ( outTexture ) /*0x443775*/
    {
      v9 = outTexture; /*0x443777*/
      if ( !v1((volatile LONG *)&outTexture->members.super.super.m_pcName) ) /*0x44377d*/
        v9->vtbl->super.super.super.Destructor((NiRefObject *)v9, 1); /*0x44378f*/
    }
  }
  if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x12C]) ) /*0x443796*/
  {
    sub_43B420( /*0x4437b3*/
      (int *)MEMORY[0xB33A1C],
      (IOTask **)&outTexture,
      (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x12C]),
      5u,
      0,
      0,
      0,
      1,
      1);
    if ( outTexture ) /*0x4437be*/
    {
      v10 = outTexture; /*0x4437c0*/
      if ( !v1((volatile LONG *)&outTexture->members.super.super.m_pcName) ) /*0x4437c6*/
        v10->vtbl->super.super.super.Destructor((NiRefObject *)v10, 1); /*0x4437d8*/
    }
  }
  if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x12E]) ) /*0x4437df*/
  {
    sub_43B420( /*0x4437fc*/
      (int *)MEMORY[0xB33A1C],
      (IOTask **)&outTexture,
      (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x12E]),
      5u,
      0,
      0,
      0,
      1,
      1);
    if ( outTexture ) /*0x443807*/
    {
      v11 = outTexture; /*0x443809*/
      if ( !v1((volatile LONG *)&outTexture->members.super.super.m_pcName) ) /*0x44380f*/
        v11->vtbl->super.super.super.Destructor((NiRefObject *)v11, 1); /*0x443821*/
    }
  }
  if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x130]) ) /*0x443828*/
  {
    sub_43B420( /*0x443845*/
      (int *)MEMORY[0xB33A1C],
      (IOTask **)&outTexture,
      (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x130]),
      5u,
      0,
      0,
      0,
      1,
      1);
    if ( outTexture ) /*0x443850*/
    {
      v12 = outTexture; /*0x443852*/
      if ( !v1((volatile LONG *)&outTexture->members.super.super.m_pcName) ) /*0x443858*/
        v12->vtbl->super.super.super.Destructor((NiRefObject *)v12, 1); /*0x44386a*/
    }
  }
  if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x132]) ) /*0x443871*/
  {
    sub_43B420( /*0x44388e*/
      (int *)MEMORY[0xB33A1C],
      (IOTask **)&outTexture,
      (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x132]),
      5u,
      0,
      0,
      0,
      1,
      1);
    if ( outTexture ) /*0x443899*/
    {
      v13 = outTexture; /*0x44389b*/
      if ( !v1((volatile LONG *)&outTexture->members.super.super.m_pcName) ) /*0x4438a1*/
        v13->vtbl->super.super.super.Destructor((NiRefObject *)v13, 1); /*0x4438b3*/
    }
  }
  if ( *(_BYTE *)LODWORD(g_GameSettingStringPointers_B36CD8[0x134]) ) /*0x4438ba*/
  {
    sub_43B420( /*0x4438d7*/
      (int *)MEMORY[0xB33A1C],
      (IOTask **)&outTexture,
      (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x134]),
      5u,
      0,
      0,
      0,
      1,
      1);
    if ( outTexture ) /*0x4438e2*/
    {
      v14 = outTexture; /*0x4438e4*/
      if ( !v1((volatile LONG *)&outTexture->members.super.super.m_pcName) ) /*0x4438ea*/
        v14->vtbl->super.super.super.Destructor((NiRefObject *)v14, 1); /*0x4438fc*/
    }
  }
  if ( *MEMORY[0xB371B0].value ) /*0x443903*/
  {
    sub_43B420((int *)MEMORY[0xB33A1C], (IOTask **)&outTexture, MEMORY[0xB371B0].value, 5u, 0, 0, 0, 1, 1); /*0x443920*/
    if ( outTexture ) /*0x44392b*/
    {
      v15 = outTexture; /*0x44392d*/
      if ( !v1((volatile LONG *)&outTexture->members.super.super.m_pcName) ) /*0x443933*/
        v15->vtbl->super.super.super.Destructor((NiRefObject *)v15, 1); /*0x443945*/
    }
  }
  if ( *stru_B371B8.value ) /*0x44394c*/
  {
    sub_43B420((int *)MEMORY[0xB33A1C], (IOTask **)&outTexture, stru_B371B8.value, 5u, 0, 0, 0, 1, 1); /*0x443969*/
    if ( outTexture ) /*0x443974*/
    {
      v16 = outTexture; /*0x443976*/
      if ( !v1((volatile LONG *)&outTexture->members.super.super.m_pcName) ) /*0x44397c*/
        v16->vtbl->super.super.super.Destructor((NiRefObject *)v16, 1); /*0x44398e*/
    }
  }
  if ( *stru_B371C0.value ) /*0x443995*/
  {
    sub_43B420((int *)MEMORY[0xB33A1C], (IOTask **)&outTexture, stru_B371C0.value, 5u, 0, 0, 0, 1, 1); /*0x4439b2*/
    if ( outTexture ) /*0x4439bd*/
    {
      v17 = outTexture; /*0x4439bf*/
      if ( !v1((volatile LONG *)&outTexture->members.super.super.m_pcName) ) /*0x4439c5*/
        v17->vtbl->super.super.super.Destructor((NiRefObject *)v17, 1); /*0x4439d7*/
    }
  }
  if ( *(_BYTE *)LODWORD(MEMORY[0xB37A58][0x38]) ) /*0x4439de*/
  {
    sub_43B420( /*0x4439fb*/
      (int *)MEMORY[0xB33A1C],
      (IOTask **)&outTexture,
      (const char *)LODWORD(MEMORY[0xB37A58][0x38]),
      5u,
      0,
      0,
      0,
      1,
      1);
    if ( outTexture ) /*0x443a06*/
    {
      v18 = outTexture; /*0x443a08*/
      if ( !v1((volatile LONG *)&outTexture->members.super.super.m_pcName) ) /*0x443a0e*/
        v18->vtbl->super.super.super.Destructor((NiRefObject *)v18, 1); /*0x443a20*/
    }
  }
  if ( *MEMORY[0xB371C8].value ) /*0x443a2a*/
  {
    _sprintf(ArgList, "%s\\%s\\%s", "Data", "Textures", MEMORY[0xB371C8].value); /*0x443a44*/
    SourceTexture_010201A0 = (int *)OB_TES_LoadOrFindSourceTexture_010201A0(&outTexture, ArgList, 0, 0); /*0x443a5c*/
    v34 = 0; /*0x443a68*/
    OB_NiSmartPointer_Assign_010201A0(this + 0x25, SourceTexture_010201A0); /*0x443a73*/
    v34 = 0xFFFFFFFF; /*0x443a7e*/
    if ( outTexture ) /*0x443a85*/
    {
      v20 = outTexture; /*0x443a87*/
      if ( !InterlockedDecrement((volatile LONG *)&outTexture->members) ) /*0x443a8d*/
        v20->vtbl->super.super.super.Destructor((NiRefObject *)v20, 1); /*0x443aa3*/
    }
  }
  if ( *stru_B371D0.value ) /*0x443aaa*/
  {
    _sprintf(ArgList, "%s\\%s\\%s", "Data", "Textures", stru_B371D0.value); /*0x443ac4*/
    v21 = (int *)OB_TES_LoadOrFindSourceTexture_010201A0(&outTexture, ArgList, 0, 0); /*0x443adc*/
    v34 = 1; /*0x443ae8*/
    OB_NiSmartPointer_Assign_010201A0(this + 0x26, v21); /*0x443af3*/
    v34 = 0xFFFFFFFF; /*0x443afe*/
    if ( outTexture ) /*0x443b05*/
    {
      v22 = outTexture; /*0x443b07*/
      if ( !InterlockedDecrement((volatile LONG *)&outTexture->members) ) /*0x443b0d*/
        v22->vtbl->super.super.super.Destructor((NiRefObject *)v22, 1); /*0x443b23*/
    }
  }
  if ( *stru_B371D8.value /*0x443b85*/
    && (_sprintf(ArgList, "%s\\%s\\%s", "Data", "Textures", stru_B371D8.value),
        v23 = (int *)OB_TES_LoadOrFindSourceTexture_010201A0(&outTexture, ArgList, 0, 0),
        v34 = 2,
        OB_NiSmartPointer_Assign_010201A0(this + 0x27, v23),
        v34 = 0xFFFFFFFF,
        outTexture) )
  {
    v24 = InterlockedDecrement; /*0x443b87*/
    v25 = outTexture; /*0x443b8d*/
    if ( !InterlockedDecrement((volatile LONG *)&outTexture->members) ) /*0x443b93*/
      v25->vtbl->super.super.super.Destructor((NiRefObject *)v25, 1); /*0x443ba5*/
  }
  else
  {
    v24 = InterlockedDecrement; /*0x443ba9*/
  }
  for ( i = 0; i < 0x15; ++i ) /*0x443baf*/
  {
    result = TESForm_LookupByFormID(dword_B067C0[i]); /*0x443bb8*/
    if ( result ) /*0x443bc2*/
    {
      LOWORD(v28) = result[1].member.modlist.next; /*0x443bc4*/
      if ( (_WORD)v28 == 0xFFFF ) /*0x443bcd*/
        v28 = strlen((const char *)result[1].member.modlist.data); /*0x443bd2*/
      else
        v28 = (unsigned __int16)v28; /*0x443be2*/
      if ( v28 ) /*0x443be7*/
      {
        v29 = (const char *)(*(int (__thiscall **)(UInt32 *))(result[1].member.refID + 0x14))(&result[1].member.refID); /*0x443bfe*/
        sub_43B420((int *)MEMORY[0xB33A1C], (IOTask **)&v32, v29, 5u, 0, 0, 0, 1, 1); /*0x443c0c*/
        result = v32; /*0x443c11*/
        if ( v32 ) /*0x443c17*/
        {
          v30 = v32; /*0x443c19*/
          result = (TESForm *)v24((volatile LONG *)&v32->member.flags); /*0x443c1f*/
          if ( !result ) /*0x443c23*/
            result = (TESForm *)((int (__thiscall *)(TESForm *, int))v30->vtbl->super.InitializeComponent)(v30, 1); /*0x443c31*/
        }
      }
    }
    unk_B35E50[i] = 0; /*0x443c33*/
  }
  return result; /*0x443c49*/
}
