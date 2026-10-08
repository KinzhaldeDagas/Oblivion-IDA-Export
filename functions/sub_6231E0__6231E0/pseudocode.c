double __usercall sub_6231E0@<st0>(int a1@<ecx>, double result@<st0>)
{
  int v4; // eax
  TESObjectREFR *v5; // edi
  TESObjectREFRVtbl *vtbl; // ebp
  bool v7; // c0
  double v8; // st7
  void (__thiscall *InitializeComponent)(BaseFormComponent *); // ebx
  UInt32 DwordAtOffset40; // eax
  int v11; // eax
  TESObjectREFRVtbl *v12; // ebp
  unsigned int v13; // ebx
  int v14; // eax
  _DWORD *v15; // esi
  float *v16; // ebp
  float *v17; // eax
  char v18; // al
  TESWorldSpace *WorldSpace; // [esp+Ch] [ebp-2Ch]
  float v20; // [esp+10h] [ebp-28h]
  bool v21; // [esp+27h] [ebp-11h]
  float v22; // [esp+28h] [ebp-10h]
  float v23[3]; // [esp+2Ch] [ebp-Ch] BYREF

  if ( *(_DWORD *)(a1 + 0x6C) == 0xC ) /*0x6231ea*/
  {
    if ( *(_DWORD *)(a1 + 0x11C) ) /*0x6231f0*/
    {
      v5 = *(TESObjectREFR **)(a1 + 0x3C); /*0x623232*/
      vtbl = v5[1].vtbl; /*0x623235*/
      if ( *(float *)(a1 + 0xF0) < *(float *)(a1 + 0x44) - *(float *)(a1 + 0xEC) /*0x623252*/
        && ((*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0xB0))(v5[1].vtbl)
          & 0x100) != 0 )
      {
        (*((void (__thiscall **)(TESObjectREFRVtbl *, int, int))vtbl->super.super.InitializeComponent + 0xB1))( /*0x623266*/
          vtbl,
          0x201,
          1);
      }
      if ( !sub_5E05B0(v5) ) /*0x62326a*/
      {
        (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C4))( /*0x623288*/
          *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
          0x101,
          1);
        v7 = kHeadBodyNormalMatchRadius < sub_5E5850((TESObjectREFR *)*(_DWORD *)(a1 + 0x3C), 3u); /*0x62329a*/
        v8 = kHeadBodyNormalMatchRadius; /*0x62329e*/
        if ( v7 ) /*0x6232a3*/
          v8 = sub_5E5850((TESObjectREFR *)*(_DWORD *)(a1 + 0x3C), 3u); /*0x6232ac*/
        v22 = v8; /*0x6232b1*/
        *(float *)(a1 + 0xEC) = *(float *)(a1 + 0x44); /*0x6232b8*/
        *(float *)(a1 + 0xF0) = v22; /*0x6232c2*/
        *(float *)(a1 + 0xF4) = kTerrainLODQuadRayDirectionZ; /*0x6232ce*/
      }
      result = kTerrainLODQuadRayDirectionZ; /*0x6232d4*/
      InitializeComponent = vtbl->super.super.InitializeComponent; /*0x6232db*/
      v20 = kTerrainLODQuadRayDirectionZ; /*0x6232e1*/
      WorldSpace = TESObjectREFR_GetWorldSpace(v5); /*0x6232e9*/
      DwordAtOffset40 = Shared_GetDwordAtOffset40(v5); /*0x6232ec*/
      (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, _DWORD, UInt32, TESWorldSpace *, _DWORD))InitializeComponent /*0x623302*/
       + 0x105))(
        vtbl,
        v5,
        *(_DWORD *)(a1 + 0x11C),
        DwordAtOffset40,
        WorldSpace,
        LODWORD(v20));
      v21 = 0; /*0x62330f*/
      if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0x103))(vtbl) ) /*0x623314*/
      {
        v11 = (*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 0x103))(vtbl); /*0x623325*/
        v21 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 0x2C))(v11) != 0; /*0x623334*/
      }
      v12 = v5[1].vtbl; /*0x623339*/
      v13 = 0xFFFFFFFF; /*0x623347*/
      v14 = (*((int (__thiscall **)(TESObjectREFRVtbl *))v12->super.super.InitializeComponent + 0x61))(v12); /*0x62334a*/
      if ( v14 ) /*0x62334e*/
        v13 = *(char *)(v14 + 0x20); /*0x623350*/
      v15 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *))v5->vtbl[1].IsMobileObject)(v5); /*0x623363*/
      if ( v13 == 0xC ) /*0x623366*/
      {
        v16 = (float *)v15[0x47]; /*0x623395*/
        v17 = v5->vtbl->GetPos(v5); /*0x62339d*/
        v23[0] = *v17 - *v16; /*0x6233a9*/
        v23[1] = v17[1] - v16[1]; /*0x6233b3*/
        v23[2] = v17[2] - v16[2]; /*0x6233bd*/
        if ( v21 || NiPoint3_Length(v23) <= flt_A427E4 ) /*0x6233db*/
        {
          sub_612DA0(v15, 9); /*0x623454*/
          ActorMovement_BuildPathGridWaypointList(v15); /*0x62345b*/
          v15[0x47] = 0; /*0x623460*/
        }
        else
        {
          if ( (unsigned __int8)CombatMode_IsRangedWeaponMode(v15[0x1C]) ) /*0x6233e1*/
          {
            ((void (__thiscall *)(_DWORD *))loc_622820)(v15); /*0x6233ef*/
            if ( v18 ) /*0x6233f6*/
            {
              sub_612DA0(v15, 9); /*0x6233fc*/
              sub_619920((int)v15, 0); /*0x623405*/
            }
          }
          if ( Actor_IsBlocking(v5) ) /*0x62340c*/
            Actor_UpdateBlockingState((Actor *)v5, 0); /*0x623419*/
          if ( CombatController_CanReachCurrentTarget((int)v15) ) /*0x623420*/
          {
            if ( v15[0x6A] >= (int)MEMORY[0xB372F0].value ) /*0x623435*/
            {
              sub_612DA0(v15, 9); /*0x62343b*/
              sub_619920((int)v15, 0); /*0x623444*/
            }
          }
        }
      }
      else if ( !(*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *))v12->super.super.InitializeComponent + 0x32))(v12) ) /*0x623373*/
      {
        sub_612DA0(v15, 9); /*0x623381*/
      }
    }
    else
    {
      sub_6160B0((Actor **)a1); /*0x6231f9*/
      v4 = *(_DWORD *)(a1 + 0x70); /*0x6231fe*/
      if ( v4 == 2 || v4 == 4 ) /*0x623209*/
        sub_61FE90((float *)a1, result); /*0x623211*/
      else
        sub_61FEF0((float *)a1, result); /*0x62321c*/
    }
  }
  return result; /*0x62320d*/
}
