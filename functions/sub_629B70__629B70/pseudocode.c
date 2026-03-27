char __userpurge sub_629B70@<al>(
        float *a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        double a5@<st2>,
        double a6@<st1>,
        double a7@<st0>,
        Actor *a8,
        int a9)
{
  int v11; // eax
  TESPackage *v14; // ebp
  UInt32 packageFlags; // ebp
  int v16; // eax
  void (__thiscall *v17)(float *, _DWORD, int, int, int); // eax
  BSExtraDataVtbl *v18; // ebx
  int v19; // eax
  int v20; // edx
  void (__thiscall *v21)(float *); // eax
  BSExtraDataVtbl *v22; // ebp
  int v23; // eax
  int v24; // esi
  int v25; // esi
  int v29; // [esp+18h] [ebp-4h]
  char v30; // [esp+18h] [ebp-4h]
  char v31; // [esp+20h] [ebp+4h]
  char v32; // [esp+20h] [ebp+4h]
  char v33; // [esp+24h] [ebp+8h]

  if ( (*(int (__usercall **)@<eax>(float *@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0x36C))(a1, a7, a6)
    && (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 0x36C))(a1) != 4
    && (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 0x36C))(a1) != 9 )
  {
    return 0;
  }
  v11 = *((_DWORD *)a1 + 0x30);
  if ( v11 )
  {
    if ( !(_BYTE)a9 )
      return 0;
    if ( *(_BYTE *)(v11 + 0x20) != 0x15 )
      (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0x178))(a1, 0);
  }
  v14 = sub_5E0380(a8);
  *(float *)&v29 = TimeGlobals_GetGameHour(&TimeGlobals);
  v33 = 0;
  v31 = 0;
  if ( v14 )
  {
    if ( v14->members.type == 4
      || (packageFlags = v14->members.packageFlags, (packageFlags & 0x100000) != 0)
      || (packageFlags & 0x200000) != 0 )
    {
      v31 = 1;
    }
  }
  if ( (_BYTE)a9
    || !*((_DWORD *)a1 + 2)
    || a1[0x6B] <= 0.0
    || *((_DWORD *)a1 + 0x24) != Double_To_SInt32(*(float *)&v29) )
  {
    v33 = sub_649340(a1, a9, a5, a6, (TESChildCELL *)a8, a9);
    v16 = Double_To_SInt32(*(float *)&v29);
    a1[0x6B] = flt_A417B4;
    *((_DWORD *)a1 + 0x24) = v16;
  }
  a1[0x6B] = a1[0x6B] - flt_B33E9C;
  if ( v33 )
  {
    v17 = *(void (__thiscall **)(float *, _DWORD, int, int, int))(*(_DWORD *)a1 + 0x38C);
    v18 = 0;
    *((_BYTE *)a1 + 0x25D) = 0;
    v17(a1, 0, a4, a3, a2);
    v19 = *((_DWORD *)a1 + 0x30);
    if ( v19 )
    {
      if ( *(_BYTE *)(v19 + 0x20) != 0x15 )
        (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0x178))(a1, 0);
    }
    (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0xBC))(a1, 0);
    (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0x394))(a1, 0);
    (*(void (__thiscall **)(float *))(*(_DWORD *)a1 + 0x594))(a1);
    v20 = *(_DWORD *)a1;
    a1[0x6D] = 0.0;
    v21 = *(void (__thiscall **)(float *))(v20 + 0x21C);
    a1[0x98] = 0.0;
    a1[0x6C] = 0.0;
    a1[0x7A] = 0.0;
    a1[0x73] = 0.0;
    *((_BYTE *)a1 + 0x278) = 0;
    a1[0xB] = 0.0;
    *((_BYTE *)a1 + 0x244) = 0;
    v21(a1);
    if ( !a8->vtbl->GetMountedHorse(a8) )
    {
      if ( a8->vtbl->super.super.GetSleepState((TESObjectREFR *)a8) )
        a8->vtbl->AddPackageWakeUp(a8);
    }
    if ( v31 )
    {
      v22 = 0;
      v23 = (unsigned __int8)a8->vtbl->super.super.GetBaseForm(a8)->member.type - 0x23;
      if ( v23 )
      {
        if ( v23 == 1 )
          v18 = (BSExtraDataVtbl *)a8->vtbl->super.super.GetBaseForm(a8);
      }
      else
      {
        v22 = (BSExtraDataVtbl *)a8->vtbl->super.super.GetBaseForm(a8);
      }
      v24 = *((_DWORD *)a1 + 2);
      v30 = 1;
      v32 = 1;
      if ( v24 )
      {
        v25 = *(_DWORD *)(v24 + 0x1C);
        v30 = (v25 & 0x100000) == 0;
        v32 = (v25 & 0x200000) == 0;
      }
      if ( v22 )
      {
        sub_5227A0(v22, a5, a6, 0.0, (TESObjectREFR *)a8, v30, v32, 0, 1);
        return v33;
      }
      if ( v18 )
        sub_51E240(v18, (int)v18, a5, a6, 0.0, (TESObjectREFR *)a8, v30, v32, 1);
    }
  }
  return v33;
}
