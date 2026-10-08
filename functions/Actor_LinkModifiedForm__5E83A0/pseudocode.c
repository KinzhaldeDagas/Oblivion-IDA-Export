void __thiscall Actor_LinkModifiedForm(Concurrency::details::SchedulerBase *this, int a2, int a3)
{
  unsigned int *v6; // esi
  int *v7; // ebx
  unsigned int v8; // ebp
  TESForm *v9; // eax
  void *v10; // eax
  unsigned int *v11; // eax
  int v12; // eax
  UInt32 v13; // eax
  TESForm *v14; // eax
  void *v15; // eax
  int v16; // ecx
  char v17; // bl
  int v18; // ecx
  char v19; // al
  UInt32 DwordAtOffset40; // esi
  char *v21; // esi
  int *v22; // ebx
  void **v23; // ebp
  UInt32 v24; // eax
  TESForm *v25; // eax
  _DWORD *v26; // eax
  UInt32 v27; // eax
  TESForm *v28; // eax
  UInt32 v29; // eax
  TESForm *v30; // eax
  UInt32 v31; // eax
  TESForm *v32; // eax
  int v33; // ecx
  TESWorldSpace *WorldSpace; // esi
  float *v35; // eax
  TESForm *v36; // eax
  TESObjectCELL *v37; // esi
  unsigned int flags; // ecx
  int v39; // eax
  LowProcess *v40; // eax
  LowProcess *v41; // eax
  UInt32 ProcessLevel; // eax
  UInt32 v43; // eax
  char v44; // [esp+30h] [ebp+4h]

  MobileObject_LinkModifierForm((TESObjectREFR *)this, a2, a3); /*0x5e83d3*/
  if ( (a2 & 0x8000) != 0 ) /*0x5e83de*/
  {
    v6 = (unsigned int *)((char *)this + 0xA4); /*0x5e83e4*/
    v7 = 0; /*0x5e83ea*/
    if ( this != (Concurrency::details::SchedulerBase *)0xFFFFFF5C ) /*0x5e83ee*/
    {
      do /*0x5e8486*/
      {
        if ( !v6[1] && !*v6 ) /*0x5e83fa*/
          break; /*0x5e83fd*/
        v8 = *v6; /*0x5e8403*/
        v9 = TESForm_LookupByFormID(*(_DWORD *)(*v6 + 4)); /*0x5e8417*/
        v10 = OblivionDynamicCast( /*0x5e8420*/
                v9,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &Actor `RTTI Type Descriptor',
                0);
        *(_DWORD *)(v8 + 4) = v10; /*0x5e842a*/
        if ( v10 ) /*0x5e842d*/
        {
          v7 = (int *)v6; /*0x5e847f*/
          v6 = (unsigned int *)v6[1]; /*0x5e8481*/
        }
        else if ( v7 ) /*0x5e8431*/
        {
          BSSimpleList_Remove(v7, v8); /*0x5e846c*/
          v6 = (unsigned int *)v7[1]; /*0x5e8471*/
          FormHeapFree(v8); /*0x5e8475*/
        }
        else
        {
          v11 = (unsigned int *)v6[1]; /*0x5e8433*/
          if ( v11 ) /*0x5e8438*/
          {
            v6[1] = v11[1]; /*0x5e843d*/
            *v6 = *v11; /*0x5e8443*/
            FormHeapFree((unsigned int)v11); /*0x5e8445*/
          }
          else
          {
            *v6 = 0; /*0x5e8459*/
          }
          FormHeapFree(v8); /*0x5e844e*/
        }
      }
      while ( v6 ); /*0x5e8486*/
    }
  }
  if ( *(_BYTE *)((*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)this + 0x170))(this) + 4) == 0x24 ) /*0x5e849c*/
  {
    v12 = (*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)this + 0x170))(this); /*0x5e84ac*/
    if ( v12 ) /*0x5e84b2*/
    {
      if ( *(_BYTE *)(v12 + 0x104) == 4 ) /*0x5e84bf*/
      {
        v13 = *((_DWORD *)this + 0x35); /*0x5e84c5*/
        if ( v13 ) /*0x5e84cd*/
        {
          v14 = TESForm_LookupByFormID(v13); /*0x5e84e0*/
          v15 = OblivionDynamicCast( /*0x5e84e9*/
                  v14,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  &Character `RTTI Type Descriptor',
                  0);
          *((_DWORD *)this + 0x35) = v15; /*0x5e84f3*/
          if ( v15 ) /*0x5e84f9*/
          {
            v16 = *((_DWORD *)this + 0x16); /*0x5e84fb*/
            if ( v16 ) /*0x5e8500*/
              v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 8))(v16) == 0; /*0x5e850b*/
            else
              v17 = 0; /*0x5e8510*/
            v18 = *(_DWORD *)(*((_DWORD *)this + 0x35) + 0x58); /*0x5e8518*/
            if ( v18 ) /*0x5e851d*/
              v19 = (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 8))(v18) == 0; /*0x5e8528*/
            else
              v19 = 0; /*0x5e852d*/
            if ( v17 == v19 /*0x5e8549*/
              || (DwordAtOffset40 = Shared_GetDwordAtOffset40(*((void **)this + 0x35)),
                  DwordAtOffset40 == Shared_GetDwordAtOffset40(this)) )
            {
              (*(void (__thiscall **)(_DWORD, Concurrency::details::SchedulerBase *))(**((_DWORD **)this + 0x35) + 0x384))( /*0x5e8562*/
                *((_DWORD *)this + 0x35),
                this);
            }
            else
            {
              *((_DWORD *)this + 0x35) = 0; /*0x5e854b*/
            }
          }
        }
      }
    }
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x14u ) /*0x5e8572*/
  {
    v21 = (char *)this + 0x9C; /*0x5e8578*/
    v22 = 0; /*0x5e857e*/
    if ( this != (Concurrency::details::SchedulerBase *)0xFFFFFF64 ) /*0x5e8582*/
    {
      do /*0x5e8620*/
      {
        if ( !*((_DWORD *)v21 + 1) && !*(_DWORD *)v21 ) /*0x5e858e*/
          break; /*0x5e8591*/
        v23 = *(void ***)v21; /*0x5e8597*/
        v24 = **(_DWORD **)v21; /*0x5e8599*/
        if ( v24 ) /*0x5e859e*/
        {
          v25 = TESForm_LookupByFormID(v24); /*0x5e85af*/
          *v23 = OblivionDynamicCast( /*0x5e85c0*/
                   v25,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                   &SpellItem `RTTI Type Descriptor',
                   0);
        }
        if ( *v23 ) /*0x5e85c3*/
        {
          v22 = (int *)v21; /*0x5e8619*/
          v21 = *((char **)v21 + 1); /*0x5e861b*/
        }
        else if ( v22 ) /*0x5e85cb*/
        {
          BSSimpleList_Remove(v22, (int)v23); /*0x5e8606*/
          v21 = (char *)v22[1]; /*0x5e860b*/
          FormHeapFree((unsigned int)v23); /*0x5e860f*/
        }
        else
        {
          v26 = *((_DWORD **)v21 + 1); /*0x5e85cd*/
          if ( v26 ) /*0x5e85d2*/
          {
            *((_DWORD *)v21 + 1) = v26[1]; /*0x5e85d7*/
            *(_DWORD *)v21 = *v26; /*0x5e85dd*/
            FormHeapFree((unsigned int)v26); /*0x5e85df*/
          }
          else
          {
            *(_DWORD *)v21 = 0; /*0x5e85f3*/
          }
          FormHeapFree((unsigned int)v23); /*0x5e85e8*/
        }
      }
      while ( v21 ); /*0x5e8620*/
    }
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x32u ) /*0x5e8632*/
  {
    v27 = *((_DWORD *)this + 0x1F); /*0x5e8634*/
    if ( v27 ) /*0x5e8639*/
    {
      v28 = TESForm_LookupByFormID(v27); /*0x5e8648*/
      *((_DWORD *)this + 0x1F) = OblivionDynamicCast( /*0x5e8659*/
                                   v28,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                   &Actor `RTTI Type Descriptor',
                                   0);
    }
    else
    {
      *((_DWORD *)this + 0x1F) = 0; /*0x5e865e*/
    }
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x45u ) /*0x5e866a*/
  {
    v29 = *((_DWORD *)this + 0x33); /*0x5e866c*/
    if ( v29 ) /*0x5e8674*/
    {
      v30 = TESForm_LookupByFormID(v29); /*0x5e8683*/
      *((_DWORD *)this + 0x33) = OblivionDynamicCast( /*0x5e8694*/
                                   v30,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                   (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                   0);
    }
    else
    {
      *((_DWORD *)this + 0x33) = 0; /*0x5e869c*/
    }
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x61u ) /*0x5e86ac*/
  {
    v31 = *((_DWORD *)this + 0x39); /*0x5e86ae*/
    if ( v31 ) /*0x5e86b6*/
    {
      v32 = TESForm_LookupByFormID(v31); /*0x5e86c5*/
      *((_DWORD *)this + 0x39) = OblivionDynamicCast( /*0x5e86d6*/
                                   v32,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                   &Actor `RTTI Type Descriptor',
                                   0);
    }
    else
    {
      *((_DWORD *)this + 0x39) = 0; /*0x5e86de*/
    }
  }
  v33 = *((_DWORD *)this + 0x16); /*0x5e86e4*/
  if ( v33 ) /*0x5e86e9*/
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v33 + 8))(v33) ) /*0x5e86f4*/
    {
      if ( Shared_GetDwordAtOffset40(this) ) /*0x5e8700*/
      {
        if ( *(_BYTE *)(Shared_GetDwordAtOffset40(this) + 0x26) == 6 ) /*0x5e8714*/
          (*(void (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)this + 0x1A4))(this); /*0x5e8724*/
      }
      else if ( TESObjectREFR_IsPersistent((TESObjectREFR *)this) ) /*0x5e872b*/
      {
        WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)this); /*0x5e873f*/
        if ( WorldSpace ) /*0x5e8743*/
        {
          v35 = (float *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)this + 0x174))(this); /*0x5e8753*/
          v36 = sub_447740((TESWorldSpace **)g_TESDataHandler, (int)*v35 >> 0xC, (int)v35[1] >> 0xC, WorldSpace, 0); /*0x5e8791*/
          v37 = (TESObjectCELL *)v36; /*0x5e8796*/
          if ( v36 ) /*0x5e879a*/
          {
            if ( BYTE2(v36[1].member.refID) == 6 ) /*0x5e87a0*/
            {
              (*(void (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)this + 0x1A4))(this); /*0x5e87ac*/
              flags = g_TESSaveLoadGame->flags; /*0x5e87b3*/
              g_TESSaveLoadGame->flags = flags & 0xFFFFFFFD; /*0x5e87b6*/
              v44 = (flags & 2) != 0; /*0x5e87bf*/
              TESObjectCELL_AddReference(v37, (TESObjectREFR *)this); /*0x5e87c6*/
              sub_452A70(g_TESSaveLoadGame, v44); /*0x5e87d6*/
            }
          }
        }
      }
    }
  }
  if ( !*((_DWORD *)this + 0x16) ) /*0x5e87db*/
  {
    v39 = *((_DWORD *)this + 2); /*0x5e87e0*/
    if ( (v39 & 0x20) == 0 && (v39 & 0x800) == 0 ) /*0x5e87f2*/
    {
      v40 = (LowProcess *)FormHeapAlloc(0x90u); /*0x5e87f9*/
      if ( v40 ) /*0x5e880b*/
        v41 = LowProcess::LowProcess(v40); /*0x5e880f*/
      else
        v41 = 0; /*0x5e8816*/
      *((_DWORD *)this + 0x16) = v41; /*0x5e8822*/
      ProcessLevel = MobileObject_GetProcessLevel((MobileObject *)this); /*0x5e8825*/
      if ( ProcessLevel ) /*0x5e882c*/
      {
        v43 = ProcessLevel - 1; /*0x5e882e*/
        if ( v43 ) /*0x5e8831*/
        {
          if ( v43 == 1 ) /*0x5e8836*/
            (*(void (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)this + 0x1AC))(this); /*0x5e8840*/
        }
        else
        {
          (*(void (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)this + 0x1B0))(this); /*0x5e884a*/
        }
      }
      else
      {
        (*(void (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)this + 0x1A4))(this); /*0x5e8856*/
      }
    }
  }
}
