void __userpurge MobilObject_PostLinkModifiedForm(
        int a1@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5,
        int a6)
{
  Actor *v9; // eax
  Actor *v10; // edi
  bhkCharacterProxy *CharProxy; // edi
  TESObjectCELL *DwordAtOffset40; // ebp
  int *v13; // eax
  float v14; // edx
  float v15; // eax
  int v16; // ecx
  int v17; // edi
  int v18; // eax
  void (__thiscall ***v19)(_DWORD, int); // ecx
  int v20; // ecx
  NiPoint3 a2; // [esp+10h] [ebp-Ch] BYREF
  float v22; // [esp+20h] [ebp+4h]

  TESObjectREFR_PostLinkModifiedForm((TESObjectREFR *)a1, st5_0, a3, a4, a5, a6); /*0x65baa2*/
  v9 = (Actor *)OblivionDynamicCast( /*0x65bab6*/
                  (void *)a1,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
  v10 = v9; /*0x65babb*/
  if ( v9 && (Actor::GetDeadState(v9) == 2 || Actor::GetDeadState(v10) == 1) ) /*0x65bada*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x1C8))(a1); /*0x65bae6*/
  }
  else if ( (a5 & 0xE) != 0 ) /*0x65baed*/
  {
    CharProxy = MobileObject_GetCharProxy((MobileObject *)a1); /*0x65baf6*/
    if ( CharProxy ) /*0x65bafa*/
    {
      if ( Shared_GetDwordAtOffset40((void *)a1) ) /*0x65bafe*/
      {
        DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40((void *)a1); /*0x65bb0f*/
        if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x65bb13*/
          v13 = (int *)sub_424180(&DwordAtOffset40->members.extraData); /*0x65bb1f*/
        else
          v13 = (int *)MEMORY[0xB35C24]; /*0x65bb26*/
        sub_895060(CharProxy, v13); /*0x65bb2e*/
      }
      if ( hkCharacterContext_GetStateId((_DWORD *)CharProxy + 0x78) != 4 ) /*0x65bb42*/
      {
        v14 = *(float *)(a1 + 0x30); /*0x65bb47*/
        v15 = *(float *)(a1 + 0x34); /*0x65bb4a*/
        a2.x = *(float *)(a1 + 0x2C); /*0x65bb4d*/
        a2.y = v14; /*0x65bb58*/
        a2.z = v15; /*0x65bb5c*/
        sub_452A10(CharProxy, &a2); /*0x65bb60*/
      }
    }
  }
  v16 = *(_DWORD *)(a1 + 0x58); /*0x65bb65*/
  if ( v16 ) /*0x65bb6a*/
  {
    if ( (*(_DWORD *)(a1 + 8) & 0x20) != 0 || (*(_DWORD *)(a1 + 8) & 0x800) != 0 ) /*0x65bb82*/
    {
      v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 8))(v16); /*0x65bbfb*/
      sub_674550(a1, v18); /*0x65bc04*/
      v19 = *(void (__thiscall ****)(_DWORD, int))(a1 + 0x58); /*0x65bc09*/
      if ( v19 ) /*0x65bc0e*/
        (**v19)(v19, 1); /*0x65bc16*/
      *(_DWORD *)(a1 + 0x58) = 0; /*0x65bc18*/
    }
    else if ( !*(_DWORD *)(a1 + 0x3C) /*0x65bbb2*/
           && (PlayerCharacter *)a1 != reference
           && (!(*(int (__thiscall **)(int))(*(_DWORD *)v16 + 8))(v16)
            || (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x58) + 8))(*(_DWORD *)(a1 + 0x58)) == 1) )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x1AC))(a1); /*0x65bbbe*/
      v17 = **(_DWORD **)(a1 + 0x58); /*0x65bbc3*/
      v22 = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]) - dbl_A2FAA0; /*0x65bbdc*/
      (*(void (__thiscall **)(_DWORD, _DWORD))(v17 + 0x1C))(*(_DWORD *)(a1 + 0x58), LODWORD(v22)); /*0x65bbe7*/
      sub_674E10((int *)&qword_B3BB2C[0x75], (TESForm *)a1); /*0x65bbef*/
    }
    v20 = *(_DWORD *)(a1 + 0x58); /*0x65bc1f*/
    if ( v20 ) /*0x65bc24*/
      (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)v20 + 0x400))(v20, a5, a6, a1); /*0x65bc35*/
  }
}
