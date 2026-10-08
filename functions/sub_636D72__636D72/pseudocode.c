// positive sp value has been detected, the output may be wrong!
void __userpurge sub_636D72(
        char a1@<cl>,
        TESPackage *a2@<ebx>,
        TESObjectREFR *a3@<edi>,
        int a4@<esi>,
        double a5@<st2>,
        double a6@<st1>,
        double GameDay@<st0>,
        int a8,
        int a9,
        int a10,
        int a11)
{
  char v11; // al
  int v12; // eax
  TESObjectCELL *DwordAtOffset40; // eax
  float *v14; // eax
  TESObjectCELL *v15; // eax
  BSExtraDataVtbl *v16; // ebx
  BSExtraDataVtbl *v17; // ebp
  int v18; // eax
  int v19; // esi
  int v20; // esi
  int v21; // eax
  TESHealthForm *v22; // eax
  BaseFormComponentVtbl *vtbl; // esi
  unsigned int Health; // eax
  float *v25; // [esp-3Ch] [ebp-50h]
  float *v26; // [esp-3Ch] [ebp-50h]
  ExtraDataList *InitializeComponent; // [esp-3Ch] [ebp-50h]
  float v28; // [esp-38h] [ebp-4Ch]
  float v29; // [esp-38h] [ebp-4Ch]
  float *v30; // [esp-34h] [ebp-48h]
  float *v31; // [esp-34h] [ebp-48h]
  float v32; // [esp-30h] [ebp-44h]
  float v33; // [esp-30h] [ebp-44h]
  char v34; // [esp+1Ch] [ebp+8h]
  char v35; // [esp+20h] [ebp+Ch]

  if ( (a1 & 1) != 0 && !sub_565DF0(a2) && !a2->members.target ) /*0x636d82*/
    *(float *)(a4 + 0x1AC) = 0.0; /*0x636d8a*/
  if ( sub_565DF0(a2) /*0x636dac*/
    && (a2 == (TESPackage *)0xFFFFFFD4 || !a2->members.time.duration)
    && a2->members.type == kPackageType_Travel )
  {
    TimeGlobals_GetGameDay(&MEMORY[0xB332E0]); /*0x636db3*/
    ExtraDataList_SetRunOnceExtraPackage(&a3->member.baseExtraList, (int)a2, v11); /*0x636dbd*/
  }
  if ( !*(_BYTE *)(a4 + 0x84) ) /*0x636dc2*/
  {
    if ( sub_565DD0(a2) ) /*0x636dcd*/
    {
      v32 = flt_A5B6C0; /*0x636ded*/
      v12 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a3->vtbl->GetPos)( /*0x636df0*/
              a3,
              GameDay,
              a6,
              a5);
      GameDay = flt_A5B6C0; /*0x636df2*/
      v30 = (float *)v12; /*0x636df8*/
      v28 = flt_A5B6C0; /*0x636e04*/
      v25 = a3->vtbl->GetPos(a3); /*0x636e09*/
      DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a3); /*0x636e0c*/
      sub_446B90( /*0x636e18*/
        DwordAtOffset40,
        v25,
        v28,
        v30,
        v32,
        (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))TESObjectREFR_SetOwnedDoorLockedForActor,
        (int)a3);
    }
    *(_BYTE *)(a4 + 0x84) = 1; /*0x636e1d*/
  }
  if ( sub_565DE0(a2) ) /*0x636e26*/
  {
    v33 = flt_A5B6C0; /*0x636e46*/
    v14 = a3->vtbl->GetPos(a3); /*0x636e49*/
    GameDay = flt_A5B6C0; /*0x636e4b*/
    v31 = v14; /*0x636e51*/
    v29 = flt_A5B6C0; /*0x636e5d*/
    v26 = a3->vtbl->GetPos(a3); /*0x636e62*/
    v15 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a3); /*0x636e65*/
    sub_446B90( /*0x636e71*/
      v15,
      v26,
      v29,
      v31,
      v33,
      (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))TESObjectREFR_ClearOwnedDoorLockForActor,
      (int)a3);
  }
  if ( !*(_BYTE *)(a4 + 0x169) /*0x636e95*/
    && ((a2->members.packageFlags & 0x100000) != 0 || (a2->members.packageFlags & 0x200000) != 0) )
  {
    *(_BYTE *)(a4 + 0x169) = 1; /*0x636e9b*/
    if ( (a2->members.packageFlags & 0x100000) != 0 ) /*0x636eab*/
    {
      v16 = 0; /*0x636ec1*/
      v17 = 0; /*0x636ec3*/
      v18 = (unsigned __int8)a3->vtbl->GetBaseForm(a3)->member.type - 0x23; /*0x636ec5*/
      if ( v18 ) /*0x636ec8*/
      {
        if ( v18 == 1 ) /*0x636ecd*/
          v17 = (BSExtraDataVtbl *)a3->vtbl->GetBaseForm(a3); /*0x636edb*/
      }
      else
      {
        v16 = (BSExtraDataVtbl *)a3->vtbl->GetBaseForm(a3); /*0x636eeb*/
      }
      v19 = *(_DWORD *)(a4 + 8); /*0x636eed*/
      v34 = 1; /*0x636ef2*/
      v35 = 1; /*0x636ef7*/
      if ( v19 ) /*0x636efc*/
      {
        v20 = *(_DWORD *)(v19 + 0x1C); /*0x636efe*/
        v34 = (v20 & 0x100000) == 0; /*0x636f0a*/
        v35 = (v20 & 0x200000) == 0; /*0x636f19*/
      }
      if ( v16 ) /*0x636f20*/
      {
        sub_5227A0(v16, a5, a6, GameDay, a3, v34, v35, 0, 1); /*0x636f33*/
      }
      else if ( v17 ) /*0x636f44*/
      {
        sub_51E240(v17, 0, a5, a6, GameDay, a3, v34, v35, 1); /*0x636f55*/
      }
    }
    else
    {
      v21 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a4 + 0xEC))(a4, 1); /*0x636f70*/
      if ( v21 ) /*0x636f74*/
        GameDay = Actor_UnequipItem( /*0x636f89*/
                    (Actor *)a3,
                    GameDay,
                    a5,
                    a6,
                    *(_DWORD *)(v21 + 8),
                    1,
                    (ExtraDataList *)**(_DWORD **)v21,
                    0,
                    0,
                    0);
      v22 = (TESHealthForm *)(*(int (__thiscall **)(int, int))(*(_DWORD *)a4 + 0xF4))(a4, 1); /*0x636f9a*/
      if ( v22 ) /*0x636f9e*/
      {
        vtbl = v22[1].vtbl; /*0x636fa4*/
        InitializeComponent = (ExtraDataList *)v22->vtbl->InitializeComponent; /*0x636fad*/
        Health = TESHealthForm_GetHealth(v22); /*0x636fb0*/
        Actor_UnequipItem((Actor *)a3, GameDay, a5, a6, (__int16)vtbl, Health, InitializeComponent, 0, 0, 0); /*0x636fb9*/
      }
    }
  }
}
