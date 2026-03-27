char __userpurge sub_5FC090@<al>(
        int *a1@<ecx>,
        int a2@<ebx>,
        int a3@<esi>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>,
        TESObjectREFR *a7,
        int a8,
        int a9)
{
  _WORD *v11; // eax
  unsigned __int8 AnimGroupFromField8Value; // al
  int v13; // eax
  int v15; // ebp
  int BaseCalcAVi; // eax
  _BYTE *v17; // eax
  TESObjectREFRVtbl *vtbl; // edi
  void (__thiscall *InitializeComponent)(BaseFormComponent *); // ebx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  void *v23; // edx
  TESForm *v24; // eax
  int CurrentAction; // eax
  int v26; // eax
  int v30; // [esp+28h] [ebp-10h] BYREF
  int v31; // [esp+2Ch] [ebp-Ch] BYREF
  float v32[2]; // [esp+30h] [ebp-8h] BYREF
  _UNKNOWN *retaddr; // [esp+38h] [ebp+0h]
  int v34; // [esp+3Ch] [ebp+4h]

  if ( *(_BYTE *)((*(int (__fastcall **)(int *))(*a1 + 0x170))(a1) + 4) == 0x24 )
    return 0;
  if ( !(*(int (__thiscall **)(int *))(*a1 + 0x164))(a1) )
    return 0;
  v11 = (_WORD *)(*(int (__thiscall **)(int *))(*a1 + 0x164))(a1);
  AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v11, 3);
  v13 = sub_51AA00(AnimGroupFromField8Value);
  if ( v13 != 0x19 && v13 != 0x1A )
    return 0;
  v15 = sub_5E4A80(a7);
  if ( !v15 )
    return 0;
  if ( (unsigned int)(a8 - 0xC) > 0x14 )
    return 0;
  BaseCalcAVi = Actor_GetBaseCalcAVi(a1, a2, (int)a1, (int)a7, a8);
  if ( Calc_MasteryFromSkill(BaseCalcAVi) < 2 )
    return 0;
  if ( GetRandomLargeInteger_(0) % 0x64 > iPerkAttackDisarmChance )
    return 0;
  v17 = *(_BYTE **)(v15 + 8);
  v34 = 0;
  if ( v17 )
  {
    if ( v17[4] == 0x21 )
    {
      v34 = *(_DWORD *)(v15 + 8);
      if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v17 + 0x78))(v17)
        || !Actor_IsWeaponOut((_DWORD **)a1) )
      {
        return 0;
      }
    }
  }
  vtbl = a7[1].vtbl;
  if ( !vtbl )
    return 0;
  InitializeComponent = vtbl->super.super.InitializeComponent;
  if ( *(_BYTE *)(*(_DWORD *)(v15 + 8) + 0x90) == 5 )
  {
    v20 = ((int (__thiscall *)(TESObjectREFR *, int, int))a7->vtbl->Unk_5A)(a7, a2, a3);
    v21 = (*((int (__thiscall **)(TESObjectREFRVtbl *, int))InitializeComponent + 0x47))(vtbl, v20);
  }
  else
  {
    v22 = ((int (__thiscall *)(TESObjectREFR *, int, int))a7->vtbl->Unk_5A)(a7, a2, a3);
    v21 = (*((int (__thiscall **)(TESObjectREFRVtbl *, int))InitializeComponent + 0x46))(vtbl, v22);
  }
  if ( v21 )
  {
    v23 = *(void **)(v21 + 0x8C);
    v32[1] = *(float *)(v21 + 0x88);
    retaddr = v23;
    v34 = *(_DWORD *)(v21 + 0x90);
    sub_711300((float *)(v21 + 0x64), (float *)&v30, (float *)&v31, v32);
  }
  v24 = (TESForm *)((int (__thiscall *)(TESObjectREFR *, int, _DWORD, int))a7->vtbl[1].Unk_48)(
                     a7,
                     a9,
                     **(_DWORD **)v15,
                     1);
  sub_4DC000((int)a7, v24);
  CurrentAction = Actor_GetCurrentAction(a7);
  if ( CurrentAction >= 0
    && (CurrentAction <= 5
     || CurrentAction == 6
     && v34
     && !(*((int (__thiscall **)(TESObjectREFRVtbl *, int))a7[1].vtbl->super.super.InitializeComponent + 0x3E))(
           a7[1].vtbl,
           1)
     && !sub_5F4AE0((Actor *)a7, a4, a5, a6, 0)) )
  {
    HighPRocess_DoAction_____((PlayerCharacter *)a7, 0xFFFFFFFF, 0);
  }
  if ( ((int (__thiscall *)(TESObjectREFR *))a7->vtbl[1].IsMobileObject)(a7) )
  {
    v26 = ((int (__thiscall *)(TESObjectREFR *))a7->vtbl[1].IsMobileObject)(a7);
    sub_61DD10(v26, (int)a1);
  }
  return 1;
}
