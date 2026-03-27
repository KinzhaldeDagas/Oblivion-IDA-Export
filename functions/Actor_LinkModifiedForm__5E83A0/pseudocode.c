void __userpurge Actor_LinkModifiedForm(
        Concurrency::details::SchedulerBase *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        int a4,
        int a5)
{
  unsigned int *v6; // esi
  unsigned int *v7; // ebx
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
  TESObjectCELL *ParentCell; // esi
  char *v21; // esi
  _DWORD *v22; // ebx
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
  double v38; // st7
  UInt32 flags; // ecx
  int v40; // eax
  LowProcess *v41; // eax
  LowProcess *v42; // eax
  UInt32 ProcessLevel; // eax
  UInt32 v44; // eax
  char v45; // [esp+30h] [ebp+4h]

  MobileObject_LinkModifierForm((TESObjectREFR *)a1, a4, a5);
  if ( (a4 & 0x8000) != 0 )
  {
    v6 = (unsigned int *)((char *)a1 + 0xA4);
    v7 = 0;
    if ( a1 != (Concurrency::details::SchedulerBase *)0xFFFFFF5C )
    {
      do
      {
        if ( !v6[1] && !*v6 )
          break;
        v8 = *v6;
        v9 = TESForm_LookupByFormID(*(_DWORD *)(*v6 + 4));
        v10 = OblivionDynamicCast(
                v9,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &Actor `RTTI Type Descriptor',
                0);
        *(_DWORD *)(v8 + 4) = v10;
        if ( v10 )
        {
          v7 = v6;
          v6 = (unsigned int *)v6[1];
        }
        else if ( v7 )
        {
          BSSimpleList_Remove(v7, v8);
          v6 = (unsigned int *)v7[1];
          FormHeapFree(v8);
        }
        else
        {
          v11 = (unsigned int *)v6[1];
          if ( v11 )
          {
            v6[1] = v11[1];
            *v6 = *v11;
            FormHeapFree((unsigned int)v11);
          }
          else
          {
            *v6 = 0;
          }
          FormHeapFree(v8);
        }
      }
      while ( v6 );
    }
  }
  if ( *(_BYTE *)((*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a1 + 0x170))(a1) + 4) == 0x24 )
  {
    v12 = (*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a1 + 0x170))(a1);
    if ( v12 )
    {
      if ( *(_BYTE *)(v12 + 0x104) == 4 )
      {
        v13 = *((_DWORD *)a1 + 0x35);
        if ( v13 )
        {
          v14 = TESForm_LookupByFormID(v13);
          v15 = OblivionDynamicCast(
                  v14,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  &Character `RTTI Type Descriptor',
                  0);
          *((_DWORD *)a1 + 0x35) = v15;
          if ( v15 )
          {
            v16 = *((_DWORD *)a1 + 0x16);
            if ( v16 )
              v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 8))(v16) == 0;
            else
              v17 = 0;
            v18 = *(_DWORD *)(*((_DWORD *)a1 + 0x35) + 0x58);
            if ( v18 )
              v19 = (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 8))(v18) == 0;
            else
              v19 = 0;
            if ( v17 == v19
              || (ParentCell = TESObjectREFR_GetParentCell(*((TESObjectREFR **)a1 + 0x35)),
                  ParentCell == TESObjectREFR_GetParentCell((TESObjectREFR *)a1)) )
            {
              (*(void (__thiscall **)(_DWORD, Concurrency::details::SchedulerBase *))(**((_DWORD **)a1 + 0x35) + 0x384))(
                *((_DWORD *)a1 + 0x35),
                a1);
            }
            else
            {
              *((_DWORD *)a1 + 0x35) = 0;
            }
          }
        }
      }
    }
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x14u )
  {
    v21 = (char *)a1 + 0x9C;
    v22 = 0;
    if ( a1 != (Concurrency::details::SchedulerBase *)0xFFFFFF64 )
    {
      do
      {
        if ( !*((_DWORD *)v21 + 1) && !*(_DWORD *)v21 )
          break;
        v23 = *(void ***)v21;
        v24 = **(_DWORD **)v21;
        if ( v24 )
        {
          v25 = TESForm_LookupByFormID(v24);
          *v23 = OblivionDynamicCast(
                   v25,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                   &SpellItem `RTTI Type Descriptor',
                   0);
        }
        if ( *v23 )
        {
          v22 = v21;
          v21 = *((char **)v21 + 1);
        }
        else if ( v22 )
        {
          BSSimpleList_Remove(v22, (int)v23);
          v21 = (char *)v22[1];
          FormHeapFree((unsigned int)v23);
        }
        else
        {
          v26 = *((_DWORD **)v21 + 1);
          if ( v26 )
          {
            *((_DWORD *)v21 + 1) = v26[1];
            *(_DWORD *)v21 = *v26;
            FormHeapFree((unsigned int)v26);
          }
          else
          {
            *(_DWORD *)v21 = 0;
          }
          FormHeapFree((unsigned int)v23);
        }
      }
      while ( v21 );
    }
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x32u )
  {
    v27 = *((_DWORD *)a1 + 0x1F);
    if ( v27 )
    {
      v28 = TESForm_LookupByFormID(v27);
      *((_DWORD *)a1 + 0x1F) = OblivionDynamicCast(
                                 v28,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 &Actor `RTTI Type Descriptor',
                                 0);
    }
    else
    {
      *((_DWORD *)a1 + 0x1F) = 0;
    }
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x45u )
  {
    v29 = *((_DWORD *)a1 + 0x33);
    if ( v29 )
    {
      v30 = TESForm_LookupByFormID(v29);
      *((_DWORD *)a1 + 0x33) = OblivionDynamicCast(
                                 v30,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                 0);
    }
    else
    {
      *((_DWORD *)a1 + 0x33) = 0;
    }
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x61u )
  {
    v31 = *((_DWORD *)a1 + 0x39);
    if ( v31 )
    {
      v32 = TESForm_LookupByFormID(v31);
      *((_DWORD *)a1 + 0x39) = OblivionDynamicCast(
                                 v32,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 &Actor `RTTI Type Descriptor',
                                 0);
    }
    else
    {
      *((_DWORD *)a1 + 0x39) = 0;
    }
  }
  v33 = *((_DWORD *)a1 + 0x16);
  if ( v33 )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v33 + 8))(v33) )
    {
      if ( TESObjectREFR_GetParentCell((TESObjectREFR *)a1) )
      {
        if ( TESObjectREFR_GetParentCell((TESObjectREFR *)a1)->members.cellProcessLevel == 6 )
          (*(void (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a1 + 0x1A4))(a1);
      }
      else if ( TESObjectREFR_IsPersistent_((TESObjectREFR *)a1) )
      {
        WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1);
        if ( WorldSpace )
        {
          v35 = (float *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a1 + 0x174))(a1);
          v36 = sub_447740((TESWorldSpace **)TESDataHandler, (int)*v35 >> 0xC, (int)v35[1] >> 0xC, WorldSpace, 0);
          v37 = (TESObjectCELL *)v36;
          if ( v36 )
          {
            if ( BYTE2(v36[1].member.refID) == 6 )
            {
              v38 = ((double (__thiscall *)(Concurrency::details::SchedulerBase *))*(_DWORD *)(*(_DWORD *)a1 + 0x1A4))(a1);
              flags = SaveLoad_CurrentSavegame->flags;
              SaveLoad_CurrentSavegame->flags = flags & 0xFFFFFFFD;
              v45 = (flags & 2) != 0;
              sub_4D35D0(v37, a2, a3, v38, (TESObjectREFR *)a1);
              sub_452A70(SaveLoad_CurrentSavegame, v45);
            }
          }
        }
      }
    }
  }
  if ( !*((_DWORD *)a1 + 0x16) )
  {
    v40 = *((_DWORD *)a1 + 2);
    if ( (v40 & 0x20) == 0 && (v40 & 0x800) == 0 )
    {
      v41 = (LowProcess *)FormHeapAlloc(0x90u);
      if ( v41 )
        v42 = LowProcess::LowProcess(v41);
      else
        v42 = 0;
      *((_DWORD *)a1 + 0x16) = v42;
      ProcessLevel = MobileObject_GetProcessLevel((MobileObject *)a1);
      if ( ProcessLevel )
      {
        v44 = ProcessLevel - 1;
        if ( v44 )
        {
          if ( v44 == 1 )
            (*(void (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a1 + 0x1AC))(a1);
        }
        else
        {
          (*(void (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a1 + 0x1B0))(a1);
        }
      }
      else
      {
        (*(void (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a1 + 0x1A4))(a1);
      }
    }
  }
}
