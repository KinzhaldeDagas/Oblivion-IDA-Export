void __userpurge sub_5F9200(
        PlayerCharacter *a1@<ecx>,
        double a2@<st2>,
        double st6_0@<st1>,
        double a4@<st0>,
        TESObjectREFR *a5)
{
  PlayerCharacter *v5; // ebp
  int v6; // edi
  PlayerCharacter *v7; // esi
  LowProcess *process; // edi
  TESFurniture *v9; // eax
  LowProcess *v10; // edi
  LowProcess_vtbl *v11; // ebp
  int v12; // eax
  LowProcess *v13; // edi
  int v14; // ebp
  double v15; // st7
  PlayerCharacterVtbl *vtbl; // edi
  Unk128 *v17; // eax
  float *v18; // eax
  LowProcess *v19; // edi
  LowProcess_vtbl *v20; // ebp
  TESObjectCELL *DwordAtOffset40; // edi
  TESObjectCELL **WorldSpace; // ebp
  float *v23; // eax
  int FollowerExtra; // eax
  int v25; // eax
  float a3; // [esp+0h] [ebp-50h]
  int v27; // [esp+10h] [ebp-40h]
  PlayerCharacter *v28; // [esp+14h] [ebp-3Ch]
  int v29; // [esp+14h] [ebp-3Ch]
  float v30; // [esp+14h] [ebp-3Ch]
  unsigned int v31; // [esp+20h] [ebp-30h]
  int v32; // [esp+40h] [ebp-10h]
  int v33; // [esp+44h] [ebp-Ch]
  int v34; // [esp+48h] [ebp-8h]
  _UNKNOWN *retaddr; // [esp+50h] [ebp+0h] BYREF

  v5 = a1; /*0x5f9206*/
  v6 = 0; /*0x5f9209*/
  v32 = (int)a1; /*0x5f920d*/
  v7 = a1; /*0x5f9211*/
  if ( a1 ) /*0x5f9217*/
  {
    while ( 1 ) /*0x5f9227*/
    {
      if ( !v7->vtbl->super.super.super.IsDead((TESObjectREFR *)v7, 0) /*0x5f924f*/
        && (Actor::CanUSeDoor_((Actor *)v7) || !reference->unk114) )
      {
        sub_5F0810(v7, a4, a2, st6_0, (int)a5, (int)&retaddr, v32, v33, v34); /*0x5f927d*/
        if ( ((int (__thiscall *)(LowProcess *))v7->super.super.super.process->GetSitSleepState)(v7->super.super.super.process) ) /*0x5f928d*/
        {
          if ( !v7->vtbl->super.GetMountedHorse((Actor *)v7) ) /*0x5f92a1*/
          {
            process = v7->super.super.super.process; /*0x5f92ab*/
            v31 = ((int (__thiscall *)(LowProcess *))process->GetFurnitureMarkerID)(process); /*0x5f92bb*/
            v9 = process->GetFurniture(process); /*0x5f92c6*/
            sub_4D7300(v9, v31, 0); /*0x5f92ca*/
            v7->vtbl->super.super.super.GetAnimData((TESObjectREFR *)v7)->unkC4 = 1; /*0x5f92db*/
            v10 = v7->super.super.super.process; /*0x5f92e2*/
            v11 = v10->__vftable; /*0x5f92e5*/
            v12 = ((int (__thiscall *)(LowProcess *, int))v10->GetFurniture)(v10, 0x7F); /*0x5f92f1*/
            ((void (__thiscall *)(LowProcess *, PlayerCharacter *, _DWORD, int))v11->SetSleepState)(v10, v7, 0, v12); /*0x5f92ff*/
            v13 = v7->super.super.super.process; /*0x5f9301*/
            v14 = (int)v13->GetFurniture(v13); /*0x5f9310*/
            v29 = *(unsigned __int8 *)(((int (__thiscall *)(LowProcess *))v13->GetUnk128)(v13) + 0xE); /*0x5f9322*/
            (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 0x170))(v14); /*0x5f932e*/
            v15 = -sub_4AEBE0(v29); /*0x5f9338*/
            v30 = v15; /*0x5f933c*/
            sub_659B90((int *)v7, v15, v30); /*0x5f933f*/
            vtbl = v7->vtbl; /*0x5f9344*/
            *(float *)&v32 = ((double (__thiscall *)(PlayerCharacter *))v7->vtbl->super.super.GetZRotation)(v7) /*0x5f935d*/
                           + dbl_A3D5B8;
            v28 = (PlayerCharacter *)v32; /*0x5f9367*/
            vtbl->super.super.Unk_7A((MobileObject *)v7); /*0x5f936a*/
            v17 = (Unk128 *)((int (*)(void))v7->super.super.super.process->GetUnk128)(); /*0x5f937d*/
            sub_6FAEE0(v17, 0.0); /*0x5f9381*/
            *(_BYTE *)(((int (__thiscall *)(LowProcess *))v7->super.super.super.process->GetUnk128)(v7->super.super.super.process) /*0x5f9393*/
                     + 0xE) = 0;
            v18 = (float *)((int (__thiscall *)(LowProcess *))v7->super.super.super.process->GetUnk128)(v7->super.super.super.process); /*0x5f93a2*/
            *v18 = g_zeroNiPoint3.x; /*0x5f93aa*/
            v18[1] = g_zeroNiPoint3.y; /*0x5f93b2*/
            v18[2] = g_zeroNiPoint3.z; /*0x5f93bb*/
            v19 = v7->super.super.super.process; /*0x5f93be*/
            v20 = v19->__vftable; /*0x5f93c1*/
            v27 = ((int (__thiscall *)(LowProcess *))v19->GetUnk128)(v19); /*0x5f93cd*/
            ((void (__thiscall *)(LowProcess *, _DWORD, int))v20->Unk_F9)(v19, 0, 0x7F); /*0x5f93da*/
            sub_65AC20((MobileObject *)v7, 0); /*0x5f93e0*/
          }
        }
        DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a5); /*0x5f93ee*/
        WorldSpace = (TESObjectCELL **)TESObjectREFR_GetWorldSpace(a5); /*0x5f93f7*/
        v23 = a5->vtbl->GetPos(a5); /*0x5f9401*/
        TESObjectREFR_SetPosition((TESObjectREFR *)v7, *v23, v23[1], v23[2]); /*0x5f941a*/
        if ( DwordAtOffset40 && TESObjectCELL_IsProcessLevel_LowHigh(DwordAtOffset40, 0) ) /*0x5f942c*/
        {
          TESObjectREFR_SetRotationZ((TESObjectREFR *)v7, a5->member.rot.z); /*0x5f943e*/
          a4 = 0.0; /*0x5f9443*/
        }
        else
        {
          a4 = flt_A32048; /*0x5f9447*/
        }
        a3 = a4; /*0x5f9450*/
        TESObjectREFR_SetRotationX((TESObjectREFR *)v7, a3); /*0x5f9453*/
        sub_4DD4B0((int)a5, a2, st6_0, a4, (Actor *)v7, DwordAtOffset40, WorldSpace); /*0x5f945b*/
        v5 = v28; /*0x5f9460*/
        v6 = v27; /*0x5f9464*/
      }
      if ( v7 == v5 ) /*0x5f946d*/
      {
        FollowerExtra = ExtraDataList_GetFollowerExtra(); /*0x5f9472*/
        if ( !FollowerExtra ) /*0x5f9479*/
          return; /*0x5f9479*/
        v25 = *(_DWORD *)(FollowerExtra + 0xC); /*0x5f947b*/
        v7 = *(PlayerCharacter **)v25; /*0x5f9481*/
        v27 = *(_DWORD *)(v25 + 4); /*0x5f9483*/
      }
      else
      {
        if ( !v6 ) /*0x5f948b*/
          return; /*0x5f948b*/
        v7 = *(PlayerCharacter **)v6; /*0x5f9490*/
        v27 = *(_DWORD *)(v6 + 4); /*0x5f9492*/
      }
      if ( !v7 ) /*0x5f9498*/
        break; /*0x5f9498*/
      v6 = v27; /*0x5f9223*/
    }
  }
}
