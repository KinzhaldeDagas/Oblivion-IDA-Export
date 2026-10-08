void __userpurge sub_6506C0(float *a1@<ecx>, int a2@<ebx>, TESObjectREFR *a3)
{
  void (__stdcall *v5)(TESObjectREFR *); // edx
  int v6; // ecx
  void *v7; // eax
  ExtraLockData *EffectiveDoorLock; // eax
  ActorAnimData *v9; // eax
  int v10; // [esp+8h] [ebp-8h]
  float v11; // [esp+14h] [ebp+4h]

  if ( !*((_BYTE *)a1 + 0xD0) ) /*0x6506c3*/
  {
    v5 = *(void (__stdcall **)(TESObjectREFR *))(*(_DWORD *)a1 + 0x194); /*0x6506d5*/
    a1[0x2E] = 0.0; /*0x6506db*/
    v5(a3); /*0x6506e2*/
  }
  if ( !*((_DWORD *)a1 + 0xB) ) /*0x6506e4*/
    (*(void (__thiscall **)(float *, TESObjectREFR *))(*(_DWORD *)a1 + 0x558))(a1, a3); /*0x6506f5*/
  v6 = *((_DWORD *)a1 + 0xB); /*0x6506f7*/
  if ( v6 ) /*0x6506fc*/
  {
    v7 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x170))(v6); /*0x650714*/
    if ( OblivionDynamicCast( /*0x650717*/
           v7,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
           &TESObjectDOOR `RTTI Type Descriptor',
           0) )
    {
      EffectiveDoorLock = TESObjectREFR_GetEffectiveDoorLock(*((TESObjectREFR **)a1 + 0xB)); /*0x650726*/
      if ( !EffectiveDoorLock || !ExtraLockData_IsLocked(EffectiveDoorLock) ) /*0x650731*/
        (*(void (__thiscall **)(float *, TESObjectREFR *, int))(*(_DWORD *)a1 + 0x188))(a1, a3, 1); /*0x650747*/
    }
  }
  v9 = a3->vtbl->GetAnimData(a3); /*0x650753*/
  if ( v9 ) /*0x650757*/
  {
    if ( ActorAnimData_IsIdleInactive(v9) /*0x65076c*/
      && !(*((int (__thiscall **)(TESObjectREFRVtbl *))a3[1].vtbl->super.super.InitializeComponent + 2))(a3[1].vtbl) )
    {
      (*(void (__thiscall **)(float *, TESObjectREFR *))(*(_DWORD *)a1 + 0x48))(a1, a3); /*0x65077a*/
    }
  }
  v11 = *(float *)&MEMORY[0xB33E90][0xC] + a1[0x2E]; /*0x650788*/
  a1[0x2E] = v11; /*0x650790*/
  if ( v11 >= dbl_A3AA50 ) /*0x6507a1*/
  {
    sub_5EAE70((Actor *)a3, a2, (int)a3, v10); /*0x6507a5*/
    a1[0x2E] = 0.0; /*0x6507ac*/
  }
}
