void __userpurge MobilObject_PostLinkModifiedForm(
        int a1@<ecx>,
        char bp0@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  Concurrency::details::SchedulerBase *v9; // eax
  Concurrency::details::SchedulerBase *v10; // edi
  bhkCharacterProxy *CharProxy; // edi
  TESObjectCELL *ParentCell; // ebp
  int *v13; // eax
  float v14; // edx
  float v15; // eax
  int v16; // ecx
  int v17; // edi
  int v18; // eax
  void (__thiscall ***v19)(_DWORD, int); // ecx
  int v20; // ecx
  char v21; // [esp+0h] [ebp-1Ch]
  NiPoint3 a2; // [esp+10h] [ebp-Ch] BYREF
  float v23; // [esp+20h] [ebp+4h]

  TESObjectREFR_PostLinkModifiedForm((TESObjectREFR *)a1, a3, a4, a5, a6, a7);
  v9 = (Concurrency::details::SchedulerBase *)OblivionDynamicCast(
                                                (void *)a1,
                                                0,
                                                (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                                                &Actor `RTTI Type Descriptor',
                                                0);
  v10 = v9;
  if ( v9
    && (Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(v9) == (struct Concurrency::details::ScheduleGroupBase *)2
     || Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(v10) == (struct Concurrency::details::ScheduleGroupBase *)1) )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x1C8))(a1);
  }
  else if ( (a6 & 0xE) != 0 )
  {
    CharProxy = MobileObject_GetCharProxy((MobileObject *)a1);
    if ( CharProxy )
    {
      if ( TESObjectREFR_GetParentCell((TESObjectREFR *)a1) )
      {
        v21 = bp0;
        ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a1);
        if ( TESObjectCELL_IsInterior(ParentCell) )
          v13 = (int *)sub_424180(&ParentCell->members.extraData);
        else
          v13 = (int *)bhkWorldM;
        sub_895060(CharProxy, v13);
        bp0 = v21;
      }
      if ( sub_88D370((_DWORD *)CharProxy + 0x78) != 4 )
      {
        v14 = *(float *)(a1 + 0x30);
        v15 = *(float *)(a1 + 0x34);
        a2.x = *(float *)(a1 + 0x2C);
        a2.y = v14;
        a2.z = v15;
        sub_452A10(CharProxy, &a2);
      }
    }
  }
  v16 = *(_DWORD *)(a1 + 0x58);
  if ( v16 )
  {
    if ( (*(_DWORD *)(a1 + 8) & 0x20) != 0 || (*(_DWORD *)(a1 + 8) & 0x800) != 0 )
    {
      v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 8))(v16);
      sub_674550(bp0, a3, a4, a5, a1, v18);
      v19 = *(void (__thiscall ****)(_DWORD, int))(a1 + 0x58);
      if ( v19 )
        (**v19)(v19, 1);
      *(_DWORD *)(a1 + 0x58) = 0;
    }
    else if ( !*(_DWORD *)(a1 + 0x3C)
           && (PlayerCharacter *)a1 != TESDataHandler_g_PlayerRef
           && (!(*(int (__thiscall **)(int))(*(_DWORD *)v16 + 8))(v16)
            || (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x58) + 8))(*(_DWORD *)(a1 + 0x58)) == 1) )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x1AC))(a1);
      v17 = **(_DWORD **)(a1 + 0x58);
      v23 = TimeGlobals_GetGameHour(&TimeGlobals) - dbl_A2FAA0;
      (*(void (__thiscall **)(_DWORD, _DWORD))(v17 + 0x1C))(*(_DWORD *)(a1 + 0x58), LODWORD(v23));
      sub_674E10(&ActorProcessManager_ptr, (TESForm *)a1);
    }
    v20 = *(_DWORD *)(a1 + 0x58);
    if ( v20 )
      (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)v20 + 0x400))(v20, a6, a7, a1);
  }
}
