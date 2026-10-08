bool __userpurge sub_64CB10@<al>(
        float *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double st7_0@<st0>,
        Actor *a5,
        int a6)
{
  int v8; // eax
  double GameHour; // st7
  TESPackage *CurrentPackage; // eax
  UInt32 packageFlags; // eax
  bool v12; // al
  double v13; // st7
  bool v14; // bl
  unsigned int *v15; // ebp
  int v16; // ebx
  TESForm *v17; // eax
  BSExtraDataVtbl *v18; // ebx
  TESForm *v19; // eax
  BSExtraDataVtbl *v20; // eax
  int v21; // esi
  int v22; // esi
  bool v24; // [esp+15h] [ebp-5h]
  float v25; // [esp+16h] [ebp-4h]
  char v26; // [esp+1Eh] [ebp+4h]
  char v27; // [esp+1Eh] [ebp+4h]
  char v28; // [esp+22h] [ebp+8h]

  if ( ((unsigned __int8 (__usercall *)@<al>(Actor *@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))a5->vtbl->IsInCombat)( /*0x64cb27*/
         a5,
         1,
         st7_0,
         a3,
         a2) )
  {
    return 0; /*0x64cb27*/
  }
  if ( Actor_IsInDialogueProcedure(a5) ) /*0x64cb33*/
    return 0; /*0x64cb33*/
  if ( sub_5E6BA0(a5) ) /*0x64cb42*/
    return 0; /*0x64cb42*/
  if ( (unsigned __int8)sub_5E03B0(a5) ) /*0x64cb51*/
    return 0; /*0x64cb51*/
  v8 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 0x36C))(a1); /*0x64cb68*/
  if ( v8 ) /*0x64cb6c*/
  {
    if ( v8 != 4 && v8 != 9 ) /*0x64cb76*/
      return 0; /*0x64cd49*/
  }
  if ( *((_DWORD *)a1 + 0x30) ) /*0x64cb7c*/
    (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0x178))(a1, 0); /*0x64cb91*/
  GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x64cb98*/
  v25 = GameHour; /*0x64cb9d*/
  v24 = 0; /*0x64cba3*/
  CurrentPackage = Actor::GetCurrentPackage(a5); /*0x64cba8*/
  v26 = 0; /*0x64cbaf*/
  if ( CurrentPackage ) /*0x64cbb4*/
  {
    if ( CurrentPackage->members.type == kPackageType_Sleep /*0x64cbce*/
      || (packageFlags = CurrentPackage->members.packageFlags, (packageFlags & 0x100000) != 0)
      || (packageFlags & 0x200000) != 0 )
    {
      v26 = 1; /*0x64cbd0*/
    }
  }
  if ( (_BYTE)a6 || !*((_DWORD *)a1 + 2) || (GameHour = v25, *((_DWORD *)a1 + 0x24) != Double_To_SInt32(v25)) ) /*0x64cbf3*/
  {
    v12 = sub_649340(a1, a6, a3, GameHour, (TESChildCELL *)a5, a6); /*0x64cbfd*/
    v13 = v25; /*0x64cc02*/
    v14 = v12; /*0x64cc06*/
    v24 = v12; /*0x64cc08*/
    *((_DWORD *)a1 + 0x24) = Double_To_SInt32(v25); /*0x64cc13*/
    if ( v14 ) /*0x64cc19*/
    {
      (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0x38C))(a1, 0); /*0x64cc2c*/
      (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0xBC))(a1, 0); /*0x64cc3a*/
      (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0x394))(a1, 0); /*0x64cc48*/
      v15 = (unsigned int *)(a1 + 0xF); /*0x64cc4a*/
      while ( *((_DWORD *)a1 + 0x10) || *v15 ) /*0x64cc5a*/
      {
        v16 = *v15; /*0x64cc5c*/
        if ( *v15 ) /*0x64cc5c*/
          FormHeapFree(*v15); /*0x64cc64*/
        BSSimpleList_Remove((int *)a1 + 0xF, v16); /*0x64cc6f*/
      }
      if ( v26 ) /*0x64cc7c*/
      {
        v17 = a5->vtbl->super.super.GetBaseForm(a5); /*0x64cc9a*/
        v18 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x64ccb3*/
                                   v17,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                   &TESNPC `RTTI Type Descriptor',
                                   0);
        v19 = a5->vtbl->super.super.GetBaseForm(a5); /*0x64ccbf*/
        v20 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x64ccc2*/
                                   v19,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                   &TESCreature `RTTI Type Descriptor',
                                   0);
        v21 = *((_DWORD *)a1 + 2); /*0x64ccc7*/
        v28 = 1; /*0x64cccf*/
        v27 = 1; /*0x64ccd4*/
        if ( v21 ) /*0x64ccd9*/
        {
          v22 = *(_DWORD *)(v21 + 0x1C); /*0x64ccdb*/
          v28 = (v22 & 0x100000) == 0; /*0x64cce8*/
          v27 = (v22 & 0x200000) == 0; /*0x64ccf7*/
        }
        if ( v18 ) /*0x64ccfe*/
        {
          sub_5227A0(v18, a2, a3, v13, (TESObjectREFR *)a5, v28, v27, 0, 1); /*0x64cd11*/
          return v24; /*0x64cd20*/
        }
        if ( v20 ) /*0x64cd25*/
          sub_51E240(v20, 0, a2, a3, v13, (TESObjectREFR *)a5, v28, v27, 1); /*0x64cd36*/
      }
    }
  }
  return v24; /*0x64cd1b*/
}
