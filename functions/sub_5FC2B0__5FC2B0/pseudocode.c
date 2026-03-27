char __userpurge sub_5FC2B0@<al>(
        int *a1@<ecx>,
        int a2@<edi>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        TESObjectREFR *a6)
{
  int v8; // ebx
  int v9; // ecx
  int BaseCalcAVi; // eax
  int v11; // ecx
  int v12; // eax
  _BYTE *v13; // eax
  int v14; // edi
  TESForm *v15; // eax
  int CurrentAction; // eax
  int v17; // eax

  if ( *(_BYTE *)((*(int (__thiscall **)(int *))(*a1 + 0x170))(a1) + 4) == 0x24 )
    return 0;
  v8 = sub_5E4A80(a6);
  if ( !v8 )
    return 0;
  v9 = a1[0x16];
  if ( v9
    && ((*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 0xEC))(v9, 1)
     || (*(int (__thiscall **)(int, int))(*(_DWORD *)a1[0x16] + 0xF8))(a1[0x16], 1)) )
  {
    BaseCalcAVi = Actor_GetBaseCalcAVi(a1, v8, a2, (int)a6, 0xF);
    if ( Calc_MasteryFromSkill(BaseCalcAVi) < 4 )
      return 0;
    v11 = a1[0x16];
    if ( !v11 || !(*(int (__thiscall **)(int, int))(*(_DWORD *)v11 + 0xF8))(v11, 1) )
      return 0;
  }
  else
  {
    v12 = Actor_GetBaseCalcAVi(a1, v8, a2, (int)a6, 0x11);
    if ( Calc_MasteryFromSkill(v12) < 4 )
      return 0;
  }
  if ( GetRandomLargeInteger_(0) % 0x64 > dword_B37230 )
    return 0;
  v13 = *(_BYTE **)(v8 + 8);
  v14 = 0;
  if ( v13 )
  {
    if ( v13[4] == 0x21 )
    {
      v14 = *(_DWORD *)(v8 + 8);
      if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v13 + 0x78))(v13)
        || !Actor_IsWeaponOut((_DWORD **)a1) )
      {
        return 0;
      }
    }
  }
  v15 = (TESForm *)((int (__thiscall *)(TESObjectREFR *, int, _DWORD, int, _DWORD, _DWORD))a6->vtbl[1].Unk_48)(
                     a6,
                     v14,
                     **(_DWORD **)v8,
                     1,
                     0,
                     0);
  sub_4DC000((int)a6, v15);
  CurrentAction = Actor_GetCurrentAction(a6);
  if ( CurrentAction >= 0
    && (CurrentAction <= 5
     || CurrentAction == 6
     && v14
     && !(*((int (__thiscall **)(TESObjectREFRVtbl *, int))a6[1].vtbl->super.super.InitializeComponent + 0x3E))(
           a6[1].vtbl,
           1)
     && !sub_5F4AE0((Actor *)a6, a3, a4, a5, 0)) )
  {
    HighPRocess_DoAction_____((PlayerCharacter *)a6, 0xFFFFFFFF, 0);
  }
  if ( ((int (__thiscall *)(TESObjectREFR *))a6->vtbl[1].IsMobileObject)(a6) )
  {
    v17 = ((int (__thiscall *)(TESObjectREFR *))a6->vtbl[1].IsMobileObject)(a6);
    sub_61DD10(v17, (int)a1);
  }
  return 1;
}
