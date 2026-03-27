TESForm *__thiscall sub_443550(int *this)
{
  LONG (__stdcall *v1)(volatile LONG *); // edi
  void (__thiscall ***v3)(_DWORD, int); // esi
  void (__thiscall ***v4)(_DWORD, int); // esi
  void (__thiscall ***v5)(_DWORD, int); // esi
  void (__thiscall ***v6)(_DWORD, int); // esi
  void (__thiscall ***v7)(_DWORD, int); // esi
  void (__thiscall ***v8)(_DWORD, int); // esi
  void (__thiscall ***v9)(_DWORD, int); // esi
  void (__thiscall ***v10)(_DWORD, int); // esi
  void (__thiscall ***v11)(_DWORD, int); // esi
  void (__thiscall ***v12)(_DWORD, int); // esi
  void (__thiscall ***v13)(_DWORD, int); // esi
  void (__thiscall ***v14)(_DWORD, int); // esi
  void (__thiscall ***v15)(_DWORD, int); // esi
  void (__thiscall ***v16)(_DWORD, int); // esi
  void (__thiscall ***v17)(_DWORD, int); // esi
  void (__thiscall ***v18)(_DWORD, int); // esi
  int *v19; // eax
  void (__thiscall ***v20)(_DWORD, int); // esi
  int *v21; // eax
  void (__thiscall ***v22)(_DWORD, int); // esi
  int *v23; // eax
  LONG (__stdcall *v24)(volatile LONG *); // ebp
  void (__thiscall ***v25)(_DWORD, int); // esi
  int i; // edi
  TESForm *result; // eax
  unsigned int v28; // ecx
  const char *v29; // eax
  TESForm *v30; // esi
  int v31; // [esp+48h] [ebp-11Ch] BYREF
  TESForm *v32; // [esp+4Ch] [ebp-118h] BYREF
  char ArgList[260]; // [esp+50h] [ebp-114h] BYREF
  int v34; // [esp+160h] [ebp-4h]

  v1 = InterlockedDecrement;
  if ( *(_BYTE *)dword_B37150 )
  {
    sub_43B420((int *)ModelLoaderPtr, (IOTask **)&v31, (const char *)dword_B37150, 5u, 0, 0, 0, 1, 1);
    if ( v31 )
    {
      v3 = (void (__thiscall ***)(_DWORD, int))v31;
      if ( !v1((volatile LONG *)(v31 + 8)) )
        (**v3)(v3, 1);
    }
  }
  if ( *(_BYTE *)dword_B37158 )
  {
    sub_43B420((int *)ModelLoaderPtr, (IOTask **)&v31, (const char *)dword_B37158, 5u, 0, 0, 0, 1, 1);
    if ( v31 )
    {
      v4 = (void (__thiscall ***)(_DWORD, int))v31;
      if ( !v1((volatile LONG *)(v31 + 8)) )
        (**v4)(v4, 1);
    }
  }
  if ( *(_BYTE *)dword_B37160 )
  {
    sub_43B420((int *)ModelLoaderPtr, (IOTask **)&v31, (const char *)dword_B37160, 5u, 0, 0, 0, 1, 1);
    if ( v31 )
    {
      v5 = (void (__thiscall ***)(_DWORD, int))v31;
      if ( !v1((volatile LONG *)(v31 + 8)) )
        (**v5)(v5, 1);
    }
  }
  if ( *(_BYTE *)dword_B37168 )
  {
    sub_43B420((int *)ModelLoaderPtr, (IOTask **)&v31, (const char *)dword_B37168, 5u, 0, 0, 0, 1, 1);
    if ( v31 )
    {
      v6 = (void (__thiscall ***)(_DWORD, int))v31;
      if ( !v1((volatile LONG *)(v31 + 8)) )
        (**v6)(v6, 1);
    }
  }
  if ( *(_BYTE *)dword_B37170 )
  {
    sub_43B420((int *)ModelLoaderPtr, (IOTask **)&v31, (const char *)dword_B37170, 5u, 0, 0, 0, 1, 1);
    if ( v31 )
    {
      v7 = (void (__thiscall ***)(_DWORD, int))v31;
      if ( !v1((volatile LONG *)(v31 + 8)) )
        (**v7)(v7, 1);
    }
  }
  if ( *(_BYTE *)dword_B37178 )
  {
    sub_43B420((int *)ModelLoaderPtr, (IOTask **)&v31, (const char *)dword_B37178, 5u, 0, 0, 0, 1, 1);
    if ( v31 )
    {
      v8 = (void (__thiscall ***)(_DWORD, int))v31;
      if ( !v1((volatile LONG *)(v31 + 8)) )
        (**v8)(v8, 1);
    }
  }
  if ( *(_BYTE *)dword_B37180 )
  {
    sub_43B420((int *)ModelLoaderPtr, (IOTask **)&v31, (const char *)dword_B37180, 5u, 0, 0, 0, 1, 1);
    if ( v31 )
    {
      v9 = (void (__thiscall ***)(_DWORD, int))v31;
      if ( !v1((volatile LONG *)(v31 + 8)) )
        (**v9)(v9, 1);
    }
  }
  if ( *(_BYTE *)dword_B37188 )
  {
    sub_43B420((int *)ModelLoaderPtr, (IOTask **)&v31, (const char *)dword_B37188, 5u, 0, 0, 0, 1, 1);
    if ( v31 )
    {
      v10 = (void (__thiscall ***)(_DWORD, int))v31;
      if ( !v1((volatile LONG *)(v31 + 8)) )
        (**v10)(v10, 1);
    }
  }
  if ( *(_BYTE *)dword_B37190 )
  {
    sub_43B420((int *)ModelLoaderPtr, (IOTask **)&v31, (const char *)dword_B37190, 5u, 0, 0, 0, 1, 1);
    if ( v31 )
    {
      v11 = (void (__thiscall ***)(_DWORD, int))v31;
      if ( !v1((volatile LONG *)(v31 + 8)) )
        (**v11)(v11, 1);
    }
  }
  if ( *(_BYTE *)dword_B37198 )
  {
    sub_43B420((int *)ModelLoaderPtr, (IOTask **)&v31, (const char *)dword_B37198, 5u, 0, 0, 0, 1, 1);
    if ( v31 )
    {
      v12 = (void (__thiscall ***)(_DWORD, int))v31;
      if ( !v1((volatile LONG *)(v31 + 8)) )
        (**v12)(v12, 1);
    }
  }
  if ( *(_BYTE *)dword_B371A0 )
  {
    sub_43B420((int *)ModelLoaderPtr, (IOTask **)&v31, (const char *)dword_B371A0, 5u, 0, 0, 0, 1, 1);
    if ( v31 )
    {
      v13 = (void (__thiscall ***)(_DWORD, int))v31;
      if ( !v1((volatile LONG *)(v31 + 8)) )
        (**v13)(v13, 1);
    }
  }
  if ( *(_BYTE *)dword_B371A8 )
  {
    sub_43B420((int *)ModelLoaderPtr, (IOTask **)&v31, (const char *)dword_B371A8, 5u, 0, 0, 0, 1, 1);
    if ( v31 )
    {
      v14 = (void (__thiscall ***)(_DWORD, int))v31;
      if ( !v1((volatile LONG *)(v31 + 8)) )
        (**v14)(v14, 1);
    }
  }
  if ( *(_BYTE *)sBloodParticleDefault )
  {
    sub_43B420((int *)ModelLoaderPtr, (IOTask **)&v31, (const char *)sBloodParticleDefault, 5u, 0, 0, 0, 1, 1);
    if ( v31 )
    {
      v15 = (void (__thiscall ***)(_DWORD, int))v31;
      if ( !v1((volatile LONG *)(v31 + 8)) )
        (**v15)(v15, 1);
    }
  }
  if ( *(_BYTE *)dword_B371B8 )
  {
    sub_43B420((int *)ModelLoaderPtr, (IOTask **)&v31, (const char *)dword_B371B8, 5u, 0, 0, 0, 1, 1);
    if ( v31 )
    {
      v16 = (void (__thiscall ***)(_DWORD, int))v31;
      if ( !v1((volatile LONG *)(v31 + 8)) )
        (**v16)(v16, 1);
    }
  }
  if ( *(_BYTE *)dword_B371C0 )
  {
    sub_43B420((int *)ModelLoaderPtr, (IOTask **)&v31, (const char *)dword_B371C0, 5u, 0, 0, 0, 1, 1);
    if ( v31 )
    {
      v17 = (void (__thiscall ***)(_DWORD, int))v31;
      if ( !v1((volatile LONG *)(v31 + 8)) )
        (**v17)(v17, 1);
    }
  }
  if ( *(_BYTE *)LODWORD(dword_B37B38) )
  {
    sub_43B420((int *)ModelLoaderPtr, (IOTask **)&v31, (const char *)LODWORD(dword_B37B38), 5u, 0, 0, 0, 1, 1);
    if ( v31 )
    {
      v18 = (void (__thiscall ***)(_DWORD, int))v31;
      if ( !v1((volatile LONG *)(v31 + 8)) )
        (**v18)(v18, 1);
    }
  }
  if ( *(_BYTE *)sBloodTextureDefault )
  {
    _sprintf(ArgList, "%s\\%s\\%s", "Data", "Textures", (const char *)sBloodTextureDefault);
    v19 = (int *)sub_442890((UInt32 *)&v31, ArgList, 0, 0);
    v34 = 0;
    sub_55E2A0(this + 0x25, v19);
    v34 = 0xFFFFFFFF;
    if ( v31 )
    {
      v20 = (void (__thiscall ***)(_DWORD, int))v31;
      if ( !InterlockedDecrement((volatile LONG *)(v31 + 4)) )
        (**v20)(v20, 1);
    }
  }
  if ( *(_BYTE *)dword_B371D0 )
  {
    _sprintf(ArgList, "%s\\%s\\%s", "Data", "Textures", (const char *)dword_B371D0);
    v21 = (int *)sub_442890((UInt32 *)&v31, ArgList, 0, 0);
    v34 = 1;
    sub_55E2A0(this + 0x26, v21);
    v34 = 0xFFFFFFFF;
    if ( v31 )
    {
      v22 = (void (__thiscall ***)(_DWORD, int))v31;
      if ( !InterlockedDecrement((volatile LONG *)(v31 + 4)) )
        (**v22)(v22, 1);
    }
  }
  if ( *(_BYTE *)dword_B371D8
    && (_sprintf(ArgList, "%s\\%s\\%s", "Data", "Textures", (const char *)dword_B371D8),
        v23 = (int *)sub_442890((UInt32 *)&v31, ArgList, 0, 0),
        v34 = 2,
        sub_55E2A0(this + 0x27, v23),
        v34 = 0xFFFFFFFF,
        v31) )
  {
    v24 = InterlockedDecrement;
    v25 = (void (__thiscall ***)(_DWORD, int))v31;
    if ( !InterlockedDecrement((volatile LONG *)(v31 + 4)) )
      (**v25)(v25, 1);
  }
  else
  {
    v24 = InterlockedDecrement;
  }
  for ( i = 0; i < 0x15; ++i )
  {
    result = TESForm_LookupByFormID(dword_B067C0[i]);
    if ( result )
    {
      LOWORD(v28) = result[1].member.modlist.next;
      if ( (_WORD)v28 == 0xFFFF )
        v28 = strlen((const char *)result[1].member.modlist.data);
      else
        v28 = (unsigned __int16)v28;
      if ( v28 )
      {
        v29 = (const char *)(*(int (__thiscall **)(UInt32 *))(result[1].member.refID + 0x14))(&result[1].member.refID);
        sub_43B420((int *)ModelLoaderPtr, (IOTask **)&v32, v29, 5u, 0, 0, 0, 1, 1);
        result = v32;
        if ( v32 )
        {
          v30 = v32;
          result = (TESForm *)v24((volatile LONG *)&v32->member.flags);
          if ( !result )
            result = (TESForm *)((int (__thiscall *)(TESForm *, int))v30->vtbl->super.InitializeComponent)(v30, 1);
        }
      }
    }
    dword_B35E50[i] = 0;
  }
  return result;
}
