void __userpurge sub_640900(
        int a1@<ecx>,
        char a2@<dil>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        TESObjectREFR *a6,
        TESObjectREFR *a7,
        int a8,
        int a9,
        int a10)
{
  TESObjectREFR *v10; // esi
  TESObjectREFR *v11; // edi
  bool IsPlayerInCombat; // al
  int v13; // eax
  int v14; // ebp
  int v15; // ebx
  int v17; // [esp+4h] [ebp-28h]
  int v18; // [esp+10h] [ebp-1Ch]
  float v20; // [esp+1Ch] [ebp-10h]
  char v21; // [esp+20h] [ebp-Ch]
  float v22; // [esp+30h] [ebp+4h]

  v10 = a6; /*0x64090c*/
  (*(void (__usercall **)(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1 + 0x184))(a1, a5, a4, a3); /*0x64091c*/
  if ( !a6 || (a6->member.super.flags & 0x800) != 0 || !a6->vtbl->IsActor(a6) ) /*0x64093e*/
    JUMPOUT(0x6411C3); /*0x6411c3*/
  v11 = a7; /*0x64094b*/
  if ( a6 == a7 ) /*0x640951*/
    goto LABEL_26; /*0x640951*/
  if ( a6 == (TESObjectREFR *)reference ) /*0x640961*/
    IsPlayerInCombat = PlayerCharacter_IsPlayerInCombat((TESObjectREFR ***)reference, 0); /*0x640963*/
  else
    a5 = ((double (__thiscall *)(TESObjectREFR *, _DWORD))a6->vtbl[1].GetSleepState)(a6, 0); /*0x640974*/
  LOBYTE(a6) = IsPlayerInCombat; /*0x64097a*/
  Actor_GetDetectionLevelAgainstActor(v11, (int)v11, a3, a4, a5, 1, v10, &a7, (int)a6, 0, 0, a2); /*0x64098d*/
  v14 = 0; /*0x64099a*/
  v22 = (float)v13; /*0x64099c*/
  if ( flt_B36778[0] < (double)v22 ) /*0x6409b1*/
    v14 = 3; /*0x6409b3*/
  v15 = (*(int (__thiscall **)(int, TESObjectREFR *))(*(_DWORD *)a1 + 0x3B0))(a1, v11); /*0x6409c7*/
  if ( !v15 ) /*0x6409cb*/
  {
    v15 = (*(int (__thiscall **)(int, TESObjectREFR *, int, float, int))(*(_DWORD *)v18 + 0xA8))( /*0x6409e7*/
            v18,
            v10,
            v14,
            COERCE_FLOAT(LODWORD(v22)),
            a1);
    if ( !v15 ) /*0x6409eb*/
LABEL_26:
      JUMPOUT(0x640ACC); /*0x640acc*/
  }
  *(_DWORD *)(v15 + 0xC) = v17; /*0x6409f5*/
  *(_DWORD *)(v15 + 4) = v14; /*0x6409f8*/
  *(_BYTE *)(v15 + 8) = v21; /*0x640a04*/
  if ( *(float *)GameSetting_GetSafeFloatPointer((int *)flt_B36778) >= (double)v20 ) /*0x640a19*/
  {
    switch ( v14 ) /*0x640a2e*/
    {
      case 0: /*0x640a2e*/
        if ( *(float *)GameSetting_GetSafeFloatPointer((int *)flt_B36778) <= (double)v20 /*0x640a65*/
          || *(float *)GameSetting_GetSafeFloatPointer((int *)unk_B36770) >= (double)v20 )
        {
          JUMPOUT(0x640AC9); /*0x640ac9*/
        }
        def_640A2E(v15, 2, (Actor *)v11, (PlayerCharacter *)v10, SLODWORD(v22), (int)a7, a8, a9, a10); /*0x640a6c*/
        break; /*0x640a6c*/
      case 3: /*0x640a2e*/
        def_640A2E(v15, 1, (Actor *)v11, (PlayerCharacter *)v10, SLODWORD(v22), (int)a7, a8, a9, a10); /*0x640a8c*/
        break; /*0x640a8c*/
    }
  }
  else
  {
    def_640A2E(v15, 3, (Actor *)v11, (PlayerCharacter *)v10, SLODWORD(v22), (int)a7, a8, a9, a10); /*0x640a20*/
  }
}
