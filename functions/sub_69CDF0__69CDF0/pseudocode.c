float *__userpurge sub_69CDF0@<eax>(
        Concurrency::details::SchedulerBase *a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  TESObjectCELL *ParentCell; // eax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // ebx
  int (__thiscall *v12)(Concurrency::details::SchedulerBase *); // edx
  float *result; // eax
  float *v14; // ebx
  int v15; // edi
  int v16; // eax
  int i; // edi
  TESForm *v18; // eax
  float v19; // [esp+28h] [ebp+8h]

  sub_69F1E0((int *)a1, a2, a3, a4, a5, a6, a7);
  sub_69CB30((float *)a1);
  ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a1);
  sub_4D35D0(ParentCell, a3, a4, a5, (TESObjectREFR *)a1);
  if ( *((_DWORD *)a1 + 0x22) != 1 )
  {
    v9 = *((_DWORD *)a1 + 0x1D);
    if ( *(_DWORD *)(v9 + 0x84) )
    {
      v10 = *((_DWORD *)a1 + 0x24);
      v11 = *(_DWORD *)(*(_DWORD *)(v9 + 0x84) + 0xC);
      if ( v10 )
      {
        sub_6B73E0(*((_DWORD **)a1 + 0x24));
        FormHeapFree(v10);
        *((_DWORD *)a1 + 0x24) = 0;
      }
      *((_DWORD *)a1 + 0x24) = sub_65AC50(a1, v11, 1, 0x102, 1);
    }
  }
  v19 = *((float *)a1 + 0x26);
  v12 = *(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a1 + 0x154);
  *((_DWORD *)a1 + 0x26) = 0;
  result = (float *)v12(a1);
  if ( result )
  {
    result = *((float **)a1 + 0x1D);
    if ( *((_DWORD *)result + 0x1C) )
    {
      v14 = (float *)FormHeapAlloc(0x1Cu);
      if ( v14 )
      {
        v15 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)a1 + 0x1D) + 0x70) + 0xC);
        v16 = (*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a1 + 0x154))(a1);
        result = MagicCaster_CastingVFX_constr(v14, v15, v16);
      }
      else
      {
        result = 0;
      }
      *((_DWORD *)a1 + 0x26) = result;
      if ( result )
      {
        MagicCaster_CastingVFX_ClearSomething___((int)result, 0, *((float *)a1 + 0x20));
        result = *((float **)a1 + 0x26);
        result[4] = v19;
      }
    }
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x71u )
  {
    for ( i = *((_DWORD *)a1 + 0x25); i; i = *(_DWORD *)(i + 8) )
    {
      LOBYTE(v19) = *(_BYTE *)(i + 4);
      if ( *(_DWORD *)i )
      {
        v18 = TESForm_LookupByFormID(*(_DWORD *)i);
        *(_DWORD *)i = OblivionDynamicCast(
                         v18,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                         (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                         0);
      }
      result = *((float **)a1 + 0x1B);
      if ( result )
      {
        result = (float *)EffectItemList_GetItemByIndex(result + 3, SLODWORD(v19));
        *(_DWORD *)(i + 4) = result;
      }
    }
  }
  return result;
}
