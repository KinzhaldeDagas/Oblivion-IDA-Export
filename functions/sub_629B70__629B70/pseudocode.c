bool __userpurge sub_629B70@<al>(
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
  TESPackage *CurrentPackage; // ebp
  double GameHour; // st7
  UInt32 packageFlags; // ebp
  int v17; // eax
  void (__thiscall *v18)(float *, _DWORD, int, int, int); // eax
  BSExtraDataVtbl *v19; // ebx
  int v20; // eax
  int v21; // edx
  void (__thiscall *v22)(float *); // eax
  BSExtraDataVtbl *v23; // ebp
  int v24; // eax
  int v25; // esi
  int v26; // esi
  int v30; // [esp+18h] [ebp-4h]
  char v31; // [esp+18h] [ebp-4h]
  char v32; // [esp+20h] [ebp+4h]
  char v33; // [esp+20h] [ebp+4h]
  bool v34; // [esp+24h] [ebp+8h]

  if ( (*(int (__usercall **)@<eax>(float *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1 + 0x36C))( /*0x629ba2*/
         a1,
         a7,
         a6,
         a5)
    && (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 0x36C))(a1) != 4
    && (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 0x36C))(a1) != 9 )
  {
    return 0; /*0x629ba8*/
  }
  v11 = *((_DWORD *)a1 + 0x30); /*0x629bab*/
  if ( v11 ) /*0x629bb8*/
  {
    if ( !(_BYTE)a9 ) /*0x629bbc*/
      return 0; /*0x629bc3*/
    if ( *(_BYTE *)(v11 + 0x20) != 0x15 ) /*0x629bce*/
      (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0x178))(a1, 0); /*0x629bdc*/
  }
  CurrentPackage = Actor::GetCurrentPackage(a8); /*0x629bf0*/
  GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x629bf2*/
  *(float *)&v30 = GameHour; /*0x629bf7*/
  v34 = 0; /*0x629bfd*/
  v32 = 0; /*0x629c02*/
  if ( CurrentPackage ) /*0x629c07*/
  {
    if ( CurrentPackage->members.type == kPackageType_Sleep /*0x629c23*/
      || (packageFlags = CurrentPackage->members.packageFlags, (packageFlags & 0x100000) != 0)
      || (packageFlags & 0x200000) != 0 )
    {
      v32 = 1; /*0x629c25*/
    }
  }
  if ( (_BYTE)a9 /*0x629c52*/
    || !*((_DWORD *)a1 + 2)
    || (GameHour = 0.0, a1[0x6B] <= 0.0)
    || (GameHour = *(float *)&v30, *((_DWORD *)a1 + 0x24) != Double_To_SInt32(*(float *)&v30)) )
  {
    v34 = sub_649340(a1, a9, a6, GameHour, (TESChildCELL *)a8, a9); /*0x629c61*/
    v17 = Double_To_SInt32(*(float *)&v30); /*0x629c65*/
    a1[0x6B] = flt_A417B4; /*0x629c70*/
    *((_DWORD *)a1 + 0x24) = v17; /*0x629c76*/
  }
  a1[0x6B] = a1[0x6B] - *(float *)&MEMORY[0xB33E90][0xC]; /*0x629c8d*/
  if ( v34 ) /*0x629c93*/
  {
    v18 = *(void (__thiscall **)(float *, _DWORD, int, int, int))(*(_DWORD *)a1 + 0x38C); /*0x629c9b*/
    v19 = 0; /*0x629ca1*/
    *((_BYTE *)a1 + 0x25D) = 0; /*0x629ca6*/
    v18(a1, 0, a4, a3, a2); /*0x629cad*/
    v20 = *((_DWORD *)a1 + 0x30); /*0x629caf*/
    if ( v20 ) /*0x629cb7*/
    {
      if ( *(_BYTE *)(v20 + 0x20) != 0x15 ) /*0x629cbd*/
        (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0x178))(a1, 0); /*0x629cca*/
    }
    (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0xBC))(a1, 0); /*0x629cd7*/
    (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0x394))(a1, 0); /*0x629ce4*/
    (*(void (__thiscall **)(float *))(*(_DWORD *)a1 + 0x594))(a1); /*0x629cf1*/
    v21 = *(_DWORD *)a1; /*0x629cf5*/
    a1[0x6D] = 0.0; /*0x629cf7*/
    v22 = *(void (__thiscall **)(float *))(v21 + 0x21C); /*0x629cfd*/
    a1[0x98] = 0.0; /*0x629d03*/
    a1[0x6C] = 0.0; /*0x629d09*/
    a1[0x7A] = 0.0; /*0x629d11*/
    a1[0x73] = 0.0; /*0x629d17*/
    *((_BYTE *)a1 + 0x278) = 0; /*0x629d1d*/
    a1[0xB] = 0.0; /*0x629d23*/
    *((_BYTE *)a1 + 0x244) = 0; /*0x629d26*/
    v22(a1); /*0x629d2c*/
    if ( !a8->vtbl->GetMountedHorse(a8) ) /*0x629d38*/
    {
      if ( a8->vtbl->super.super.GetSleepState((TESObjectREFR *)a8) ) /*0x629d48*/
        a8->vtbl->AddPackageWakeUp(a8); /*0x629d58*/
    }
    if ( v32 ) /*0x629d5e*/
    {
      v23 = 0; /*0x629d74*/
      v24 = (unsigned __int8)a8->vtbl->super.super.GetBaseForm(a8)->member.type - 0x23; /*0x629d76*/
      if ( v24 ) /*0x629d79*/
      {
        if ( v24 == 1 ) /*0x629d7e*/
          v19 = (BSExtraDataVtbl *)a8->vtbl->super.super.GetBaseForm(a8); /*0x629d8c*/
      }
      else
      {
        v23 = (BSExtraDataVtbl *)a8->vtbl->super.super.GetBaseForm(a8); /*0x629d9c*/
      }
      v25 = *((_DWORD *)a1 + 2); /*0x629d9e*/
      v31 = 1; /*0x629da3*/
      v33 = 1; /*0x629da8*/
      if ( v25 ) /*0x629dad*/
      {
        v26 = *(_DWORD *)(v25 + 0x1C); /*0x629daf*/
        v31 = (v26 & 0x100000) == 0; /*0x629dbc*/
        v33 = (v26 & 0x200000) == 0; /*0x629dcb*/
      }
      if ( v23 ) /*0x629dd2*/
      {
        sub_5227A0(v23, a5, a6, 0.0, (TESObjectREFR *)a8, v31, v33, 0, 1); /*0x629de5*/
        return v34; /*0x629df3*/
      }
      if ( v19 ) /*0x629df8*/
        sub_51E240(v19, (int)v19, a5, a6, 0.0, (TESObjectREFR *)a8, v31, v33, 1); /*0x629e09*/
    }
  }
  return v34; /*0x629ba6*/
}
